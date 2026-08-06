


create table student_2405036(
    Sid CHAR(3) PRIMARY KEY,
    SName VARCHAR(50) ,
    Dept VARCHAR(50) NOT NULL,
    Age INT CHECK (Age > 18),
    Year INT,
    City VARCHAR(50));


INSERT INTO student_2405036(Sid, SName, Dept, Age, Year, City) VALUES
('S02', 'Sam', 'IT', 20, 2022, 'Delhi'),
('S04', 'Jamsin', 'CSE', 22, 2021, 'Pune'),
('S05', 'Reena', 'CSE', 25, 2023, 'Agra'),
('S06', 'Samuels', 'IT', 27, 2024, 'London'),
('S07', 'Prasant', 'ECE', 23, 2022, 'Patna');
SELECT * from student_2405036;


/* INSERT INTO student_2405036(Sid, SName, Dept, Age, Year, City) VALUES
('S03', 'Omkar', 'ECE', 17, 2024, 'Bhubaneswar'),
('S01', 'Kent', 'CSE', 18, 2023, 'Mumbai');
*/


SELECT * FROM student_2405036 WHERE Dept = 'CSE';

SELECT * FROM student_2405036 WHERE Age > 20;

SELECT * FROM student_2405036 WHERE Dept <> 'IT';

SELECT * FROM student_2405036 WHERE SName LIKE '%ms%';

SELECT * FROM student_2405036 WHERE SName LIKE 'O%';

COMMIT;
--spool off;



