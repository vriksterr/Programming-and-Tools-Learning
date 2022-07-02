--Creating Database
CREATE DATABASE vineetdatabase
    DEFAULT CHARATER SET = 'utf8mb4';

    
--To use a database for it to be edited
USE vineetdatabase;

CREATE TABLE student (

    student_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(20) NOT NULL,
    major VARCHAR(20) UNIQUE
    --OR
    --PRIMARY KEY (student_id)
);

--Inserting values into the table
INSERT INTO student VALUES(1, 'jack','biology');

--UPDATE Section
UPDATE student
SET major = 'chemistry'
WHERE major = 'bio' OR student_id = 1;

--DROP table
DROP TABLE student;

--DELETE
DELETE FROM student
WHERE name = 'Tom' AND student_id = 1;

--Query
SELECT *        --Shows all the contents in the TABLE
FROM student;

SELECT name, major  
FROM student_id
WHERE major = 'BIO' OR name = 'KATE'
ORDER BY major, student_id DESC/ASC; -- decenting or accending order

SELECT *
FROM student_id
WHERE name IN ('Clare','Kate') AND student_id > 2;