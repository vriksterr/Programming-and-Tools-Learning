/* Creating a Database*/
CREATE DATABASE record_company;         --here record_company is the name of the server

/*Dropping a database*/
DROP DATABASE record_company;           --it will drop the database basically delete it

/*Using a database in mysql*/
USE record_company;                     --this will tell mysql that we are now going to use this database if we dont use and when we 
                                        --creat and store data mysql wont know were to store this data unless we tell it to use a database

/*Creating a Table*/
CREATE TABLE bands(
    id INT NOT NULL AUTO_INCREMENT,     --1)we creat an id band(althow not necessary) to uniquely identify a row coz there can be multiple same names
                                        --2)here the name of the column is id
                                        --3)INT stands for integer
                                        --4)NOT NULL means this entry cannot be NULL
                                        --5)AUTO_INCREMENT means that everytime we make a new entry in the table the id is going to auto increment
                                        --6)we add a , so sql knows that we added 2 seprate columns

    PRIMARY KEY (id),                   --1)this tells sql that id will be our primary key will help in querring the table

    name VARCHAR(255) NOT NULL          --1)these are the colums of the table 
                                        --2)here name is the name of the column
                                        --3)NOT NULL makes sures the name column cant be empty and must always have a name
);

CREATE TABLE albums(
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    release_year INT,
    band_id INT NOT NULL,
    PRIMARY KEY (id),                               --it is referring to the in bands id being the primary key
    FOREIGN KEY (band_id) REFERENCES bands(id)      --1)here we are defining the relationship between band_id and id
                                                    --2)here band_id column is referring id column in bands table
                                                    --3)we cannot enter in a band_id that dosent exist in id table to simply put it if the id dosent exist in id it dosent exist in band_id meaning we cant add or remeve that data to a non existing
                                                    --4)if your try to delete bands data it wont allow you as you have albums linked to the band so untill we delete album we cannot delete bands it will throw an error 
);

/*Drop Table*/
DROP TABLE bands;

/*Alter a table*/
AlTER TABLE bands
ADD another_column VARCHAR(255);        --here varchar is string and 255 is the maximum characters we can have in the string

/*Insert into Table*/
INSERT INTO bands (name)
VALUES ('Iron Maiden');                 --here we are inserting just 1 name into column in the bands table

INSERT INTO bands (name)
VALUES ('Iron Maiden'), ('Linkon Park'), ('BTS');   --here we can enter multiple names and all of them will have a unique id

INSERT INTO albums (name, release_year, band_id)
VALUES ('The Number of the Beasts','1984',1),
       ('Woo','2018',1),
       ('Shirt','2010',2),
       ('Test Album','NULL',3);

/*Update Table*/
UPDATE albums
SET release_year = 1982                 --if we run just this it will update everysingle release year to 1982
WHERE id = 1;

/*Query from Table*/
SELECT * FROM bands;                    --here * means all columns from bands table
SELECT * FROM bands LIMIT 2;            --the 2 here tells it to just show the first 2 table entry
SELECT name FROM bands;                 --here name means just the name column from bands table and we get just name column on display when we run the command
SELECT DISTINCT name FROM bands;        --DISTINCT only shows the unique album names in bands so if there is any same name albums it will just show 1 

SELECT * FROM albums
WHERE release_year < 2000;              --this will output all the albums table data where the release year is less than 2000

SELECT * FROM albums
WHERE name LIKE '%er%';                 --1) will display where name has er in it
                                        --2) % is basically there can be anyting in place of % meaning if it was %er it means it can be anything before er but nothing after er

SELECT * FROM albums
WHERE release_year = 1984 AND band_id = 1;

SELECT * FROM albums
WHERE release_year BETWEEN 2000 AND 2018;

SELECT id AS 'ID', name AS 'BAND NAME'  --here AS is giving alias to the the name of the columns 

SELECT * FROM bands ORDER BY name;      --here we are outputting the list by names(alphabaticle order)
SELECT * FROM bands ORDER BY name DESC; --here we are outputting the list by names(descending order) DESC is descending order
SELECT * FROM bands ORDER BY name ASC;  --ASC is ascending order

/*Delete From TABLE*/
DELETE FROM albums                      --if we just use this it will delete everything form the table album
WHERE id = 5;