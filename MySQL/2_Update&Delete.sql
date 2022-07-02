-- -- comment
--  < less
--  > more
--  <= less than equal to
--  >= more than equal TEMPORARY
--  = equal
--  <> not equal
--  AND
--  OR



-- Updating the database will replace based on the conditions set by WHERE

UPDATE student 
SET major = 'BIO'
WHERE major = 'Bio' OR student_id =4;

-- Updating the database will replace every major with BIO

UPDATE student 
SET major = 'BIO';

-- Updating the database will replace based on the conditions set by WHERE

UPDATE student 
SET name = 'Tom' , major = 'undecided'
WHERE student_id = 4;




--DELETE

DELETE FROM student; -- Will Delete everything from student table

--DELETE based on condition

DELETE FROM student
WHERE name = 'Tom' AND student_id = 1; -- Will Delete everything from student table