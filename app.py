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

    output_file_path = "bkID_log.txt"  # Specify the path for the output file

    try:
        # Establish connection
        connection, cursor = connect_to_mysql(host, user, password, database, port)

        try:
            # Example: Execute a query for all rows that match the condition
            query = "SELECT bkID, Maintext FROM `books` WHERE Maintext LIKE '%MLIB%' AND branch = 'PILI Library' order by bkID asc;"
            cursor.execute(query)

            # Fetch all rows
            rows = cursor.fetchall()

            for row in rows:
                bkID = row[0]
                data = makeDic(row[1])
                clear_terminal()
                print("===========================================================================================================")
                print(Fore.YELLOW + f"Book ID: {bkID}" + Style.RESET_ALL)
                print(Fore.GREEN + "Title: " + data['Title'] + Style.RESET_ALL)
                print("Author: " + data['Author'])
                print(Fore.RED + "Call Number: " + data['call_number'] + Style.RESET_ALL)
                print("Barcode: " + data['barcode'])
                print("Location: " + data['location'])
                print("===========================================================================================================")

                sts = input("Change the call Number? (Y/N/exit): ")
                if sts.lower() == 'n':
                    print(Fore.GREEN + "Proceed !" + Style.RESET_ALL)
                elif sts.lower() == 'y':
                    print(Fore.RED + f"===========================================================================================================" + Style.RESET_ALL)
                    default_call_number = data['call_number']  # Set your default value here
                    user_input = input(Fore.RED + f"New Callnumber (default: {default_call_number}): " + Style.RESET_ALL) or default_call_number
                    tag_to_replace = "<007>"
                    new_content = "<007>" + user_input
                    ndata = replace_content(row[1], tag_to_replace, new_content)

                    ## TO UPDATE DATABASE
                    nmetda = ndata.replace("▲", "")
                    query1 = f"UPDATE `db_a84cf7_cbsua`.`books` SET `Maintext` ='{nmetda}' WHERE (`bkID` = '{bkID}');"

                    try:
                        cursor.execute(query1)
                        connection.commit()

                        # Write bkID to the output file on successful update
                        with open(output_file_path, "a") as output_file:
                            output_file.write(str(bkID) + "\n")

                        print(Fore.GREEN + "Update successful! bkID written to file." + Style.RESET_ALL)
                    except Exception as update_error:
                        connection.rollback()
                        print(Fore.RED + f"Error updating database: {update_error}" + Style.RESET_ALL)
                        traceback.print_exc()

                    ssave = input(Fore.RED + f"Proceed ?  (Y/N) : " + Style.RESET_ALL)
                    if ssave.lower() == 'n':
                        break

                    print(Fore.RED + f"===========================================================================================================" + Style.RESET_ALL)

                elif sts.lower() == 'exit':
                    break
                else:
                    print(Fore.YELLOW + "ERROR! Invalid input" + Style.RESET_ALL)

        except Exception as e:
            print(f"Error in the main loop: {e}")
            traceback.print_exc()  # Print detailed error information

    finally:
        # Close the cursor and connection when done
        close_mysql_connection(connection, cursor)
