set SERVEROUTPUT ON;
--q1 Create a PL/SQL procedure that outputs the message “I am a PL/SQL expert.”

CREATE OR REPLACE PROCEDURE ExpertMessage AS
BEGIN
    dbms_output.put_line('I am a PL/SQL expert.');
END;
/

EXECUTE ExpertMessage;

--q2 Create a PL/SQL function to find out if a year is a leap year. 


CREATE OR REPLACE FUNCTION IsLeapYear(p_year NUMBER) 
RETURN VARCHAR2 IS
BEGIN
    IF (MOD(p_year, 4) = 0 AND MOD(p_year, 100) != 0) OR (MOD(p_year, 400) = 0) THEN
        RETURN 'Leap Year';
    ELSE
        RETURN 'Not a Leap Year';
    END IF;
END;
/

--q3 Create a PL/SQL procedure that takes employee ID as the input and displays the employee full name with name of the school.

CREATE OR REPLACE PROCEDURE GetEmployeeDetails(p_emp_id NUMBER) AS
    v_full_name VARCHAR2(100);
    v_school_name lab6_SCHOOL.NAME%TYPE;
BEGIN
    SELECT e.FIRST_NAME || ' ' || e.LAST_NAME, s.NAME
    INTO v_full_name, v_school_name
    FROM lab6_EMPLOYEE e
    JOIN lab6_EMPLOYEE_ALIGNMENT ea ON e.ID = ea.EMPLOYEE_ID
    JOIN lab6_SCHOOL s ON s.ID = ea.SCHOOL_ID
    WHERE e.ID = p_emp_id;

    dbms_output.put_line('Employee: ' || v_full_name || ' | School: ' || v_school_name);
END;
/

--q4 Create a PL/SQL function that takes school ID as the input. If the school does not contain school name, return a false, otherwise return a true value. Print the appropriate message in the calling program based on the result.


CREATE OR REPLACE FUNCTION CheckSchoolName(p_school_id NUMBER) 
RETURN BOOLEAN IS
    v_name lab6_SCHOOL.NAME%TYPE;
BEGIN
    SELECT NAME INTO v_name FROM lab6_SCHOOL WHERE ID = p_school_id;
    IF v_name IS NULL THEN
        RETURN FALSE;
    ELSE
        RETURN TRUE;
    END IF;
EXCEPTION
    WHEN NO_DATA_FOUND THEN
        RETURN FALSE;
END;
/

DECLARE
    v_exists BOOLEAN;
BEGIN
    v_exists := CheckSchoolName(101); 
    IF v_exists THEN
        dbms_output.put_line('The school contains a name.');
    ELSE
        dbms_output.put_line('The school does not contain a name.');
    END IF;
END;
/

--q5 Create a PL/SQL function to revise the salary by 20%, who works in the same school in which “John Smith” works? Print the appropriate message in the calling program based on the result.


CREATE OR REPLACE FUNCTION ReviseColleagueSalary 
RETURN NUMBER IS
    v_school_id NUMBER;
    v_count NUMBER;
BEGIN
    SELECT ea.SCHOOL_ID INTO v_school_id
    FROM lab6_EMPLOYEE e
    JOIN lab6_EMPLOYEE_ALIGNMENT ea ON e.ID = ea.EMPLOYEE_ID
    WHERE e.FIRST_NAME = 'John' AND e.LAST_NAME = 'Smith';
    UPDATE lab6_JOB 
    SET SALARY = SALARY * 1.20
    WHERE ID IN (
        SELECT ep.JOB_ID 
        FROM lab6_EMPLOYEE_PAY ep
        JOIN lab6_EMPLOYEE_ALIGNMENT ea ON ep.EMPLOYEE_ID = ea.EMPLOYEE_ID
        WHERE ea.SCHOOL_ID = v_school_id
    );  
    v_count := SQL%ROWCOUNT;
    RETURN v_count;
END;
/


DECLARE
    v_updated NUMBER;
BEGIN
    v_updated := ReviseColleagueSalary();
    dbms_output.put_line('Salaries updated for ' || v_updated || ' employees.');
END;
/

--Q6 Create a PL/SQL procedure that will present the analysis of the employee.
--Birthdays of number of employees  per each month
--Ratio of male to female
--Number of hires per each month
--Number  of employees working for each school
--Number of employees with different job titles working for each school


CREATE OR REPLACE PROCEDURE EmployeeAnalysis AS
    v_males NUMBER;
    v_females NUMBER;
BEGIN
    dbms_output.put_line('--- Employee Analysis Report ---');


    SELECT COUNT(*) INTO v_males FROM lab6_EMPLOYEE WHERE SEX = 'M';
    SELECT COUNT(*) INTO v_females FROM lab6_EMPLOYEE WHERE SEX = 'F';
    dbms_output.put_line('Male to Female Ratio: ' || v_males || ':' || v_females);

    FOR r IN (SELECT s.NAME, COUNT(ea.EMPLOYEE_ID) as total 
              FROM lab6_SCHOOL s 
              LEFT JOIN lab6_EMPLOYEE_ALIGNMENT ea ON s.ID = ea.SCHOOL_ID 
              GROUP BY s.NAME) LOOP
        dbms_output.put_line('School: ' || r.NAME || ' | Employees: ' || r.total);
    END LOOP;


END;
/
