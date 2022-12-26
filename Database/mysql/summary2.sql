/* Creating a Database*/
CREATE DATABASE record_company;       --here record_company is the name of the server

/*Dropping a database*/
DROP DATABASE record_company;         --it will drop the database basically delete it

/*Using a database in mysql*/
USE record_company;                   --this will tell mysql that we are now going to use this database if we dont use and when we 
                                      --creat and store data mysql wont know were to store this data unless we tell it to use a database

/*Creating a Table*/
CREATE TABLE bands(
    id INT NOT NULL AUTO_INCREMENT,   --1)we creat an id band(althow not necessary) to uniquely identify a row coz there can be multiple same names
                                      --2)here the name of the column is id
                                      --3)INT stands for integer
                                      --4)NOT NULL means this entry cannot be NULL
                                      --5)AUTO_INCREMENT means that everytime we make a new entry in the table the id is going to auto increment
                                      --6)we add a , so sql knows that we added 2 seprate columns


    name VARCHAR(255) NOT NULL        --1)these are the colums of the table 
                                      --2)here name is the name of the column
                                      --3)NOT NULL makes sures the name column cant be empty and must always have a name
);

/*Drop Table*/
DROP TABLE test;

/*Alter a table*/
AlTER TABLE test
ADD another_column VARCHAR(255);      --here varchar is string and 255 is the maximum characters we can have in the string