-- This selects every COLUMNS and will display our all the data in all the COLUMNS
SELECT * 
FROM student;
-- This selects name COLUMNS and will display our all the data in name COLUMNS
SELECT name
FROM student;

-- This selects name&major COLUMNS and will display our all the data in name&major COLUMNS
SELECT name, major
FROM student;


-- I think you can understand now what is happening
SELECT name, major
FROM student
ORGER BY major, student_id DESC/ASC
LIMIT 2;

-- I think you can understand now what is happening
SELECT name, major
FROM student
WHERE major = 'Chemistry' OR name = "Kate"
ORGER BY major, student_id DESC/ASC
LIMIT 2;

-- Another way to look for things 
Select *
From student
WHERE name IN ('Clare','Kate','Mike') AND student_id > 2;