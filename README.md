#Table for saving some data
Application allows you to make list of people with their names, last names and age. 

##Your opportunities in this app:
* create a new record in table with new name, last name and age
* delete any record
* edit all fields of selected record and then save it
* look through the table at any moment, all data is stored in app data base


##In this app I used:
1. SQLite3 library for storing user records with data.
2. Class working with data base file, it has such functions:
  * copy file to documents folder  
  * make non-executable query (read and load from data base)
  * make executable query (insert, update, delete)
3. Creating data base file using terminal.
4. NavigationController for easy surfing across screens looking and editing records.
5. Delegates of text fields and table view for better way to input data and making table with them.
6. Creating own delegate of view controller to know when uploading of data base is finished and reload table.
7. Accessory of table view cell for open edit screen of necessary record.

##Screenshots:
![Alt text](http://clip2net.com/clip/m496854/64d84-clip-52kb.jpg "Optional title")
![Alt text](http://clip2net.com/clip/m496854/fba7b-clip-21kb.jpg "Optional title")
