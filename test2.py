import traceback
from db.pmaster import *
import os
from colorama import Fore, Style

def clear_terminal():
    os.system('cls' if os.name == 'nt' else 'clear')

if __name__ == "__main__":
    # Replace these values with your actual database credentials
    host = "10.2.42.63"
    user = "ken"
    password = "140053ken"
    database = "db_a84cf7_cbsua"
    database2 = "webopacwihs"
    port = "3307"

    while True:
        try:
            # Establish connection
            connection, cursor = connect_to_mysql(host, user, password, database, port)

            try:
                # Example: Execute a simple query
                query = "SELECT bkID, Maintext FROM `books` WHERE Maintext LIKE '%MLIB%' AND branch = 'PILI Library' ORDER BY RAND() LIMIT 1"
                cursor.execute(query)

                # Fetch all rows
                rows = cursor.fetchall()
                print(rows[0][1])
                break

                
            except Exception as e:
                print(f"Error in the main loop: {e}")
                traceback.print_exc()  # Print detailed error information

        finally:
            # Close the cursor and connection when done
            close_mysql_connection(connection, cursor)
