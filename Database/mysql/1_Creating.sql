/* Creating a Database */
CREATE DATABASE test;       --here test is the name of the server

/*Dropping a database */
DROP DATABASE test;         --it will drop the database basically delete it

CREATE TABLE student (student_id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(20) NOT NULL, major VARCHAR(20) UNIQUE);   --this will create the table with all the table sections with student id is the primary KEY

INSERT INTO student VALUES(1, 'JACK', 'Biology');       -- Inserting values/data into the table that we have created

//OR

INSERT INTO student(student_id, name) VALUES(1, 'JACK');        -- This will add data to the columbs which are defined un student()


DROP TABLE student;     --This will delete the created table and the data inside it 