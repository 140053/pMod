import mysql.connector

def connect_to_mysql(host, user, password, database, port):
    try:
        # Connect to the MySQL server
        connection = mysql.connector.connect(
            host=host,
            port=port,
            user=user,
            password=password,
            database=database
        )

        if connection.is_connected():
            #print("Connected to the MySQL database")

            # Create a cursor object to interact with the database
            cursor = connection.cursor()

            return connection, cursor

    except mysql.connector.Error as e:
        print(f"Error: {e}")

def close_mysql_connection(connection, cursor):
    # Close the cursor and connection when done
    if connection.is_connected():
        cursor.close()
        connection.close()
        #print("MySQL connection closed")


def decon(result, bago, huri):
    var1 = result.split(bago)
    var2 = var1[1].split(huri)
    var3 = var2[0].replace("\x1e", "")
    return var3


def makeDic(res):
    title = decon(res, "<001>", "<002>")
    author = decon(res, "<004>", "<005>") 
    barcode = decon(res, "<0026>", "<0027>")
    location = decon(res, "<0028>", "<0029>")  
    chold = decon(res, "<0025>", "<0026>") # 006.68
        
    metadata = {
        "Title": title,
        "Author": author,       
        "call_number": chold, 
        "barcode": barcode,
        "location": location
    }   
    
    return metadata


def tdecon(result, bago, huri):
    var1 = result.split(bago)
    var2 = var1[1].split(huri)
    var3 = var2[0].replace("\x1e", "")
    return var3


def tmakeDic(res):
    title = tdecon(res, "<001>", "<002>")
    author = tdecon(res, "<002>", "<003>")
    institution = tdecon(res, "<003>", "<004>")
    kuros = tdecon(res, "<004>", "<005>")
    taon = tdecon(res, "<005>", "<006>")
    info = tdecon(res, "<007>", "<008>")
    barcode = tdecon(res, "<008>", "<009>")
    subject = tdecon(res, "<0012>", "<0013>")
    abstract = tdecon(res, "<0013>", "<0014>")
    metadata = {
        "Title": title,
        "Author": author,
        "Institution": institution,
        "Course": kuros,
        "Year": taon,
        "Info": info,
        "Barcode": barcode,
        "Subject": subject,
        "Abstract": abstract
    }
   
    return metadata


def replace_content(original_data, tag_to_replace, new_content):
    # Find the start and end index of the content to be replaced
    start_index = original_data.find(tag_to_replace)
    end_index = original_data.find("<", start_index + 1)  # Find the start of the next tag

    # Replace the content with the new value
    if start_index != -1 and end_index != -1:
        original_data = original_data[:start_index] + new_content + original_data[end_index:]

    return original_data

# Example usage
data = """<001>On the job training at Hishtil Plant Nursery company, Sderpt Elizer Ben Yuhuda 92, Ashkelon, Israel...
# (your entire input data here)
<0020>"""

#tag_to_replace = "<007>"
#new_content = "<007>Edited<008>"

#updated_data = replace_content(data, tag_to_replace, new_content)

# Print the updated data
#print(updated_data)
