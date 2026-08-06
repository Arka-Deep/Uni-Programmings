set SERVEROUTPUT ON;
--Q1 Write a PL/SQL program to perform the addition, subtraction, division and multiplication of two user supplied integers and display the result.
DECLARE
    num1 number := &num1;
    num2 number := &num2;
BEGIN
    dbms_output.put_line('Add ' || (num1 + num2));
    dbms_output.put_line('sub ' || (num1 - num2));
    dbms_output.put_line('multiplication ' || (num1 * num2));
    dbms_output.put_line('div ' || (num1 / num2));
END;
/
/*output
Add 3
sub -1
multiplication 2
div .5
PL/SQL procedure successfully completed.*/
--Q2 Write a PL/SQL program to find the square, cube, and double of a input number and print results.
DECLARE
    num number := &num;
BEGIN
    dbms_output.put_line('square: ' || (num * num));
    dbms_output.put_line('cube: ' || (num * num * num));
    dbms_output.put_line('double: ' || (num * 2));
END;
/
/*output 
square: 16
cube: 64
double: 8
PL/SQL procedure successfully completed.
*/
--Q3 Write a PL/SQL program to swap the values of two variables. Print the output before and after swapping.
DECLARE
    a number := &a;
    b number := &b;
    temp number;
BEGIN
    dbms_output.put_line('before swaping a=' || a || ', b=' || b);
    temp := a;
    a := b;
    b := temp;
    dbms_output.put_line('after swaping a=' || a || ', b=' || b);
END;
/
/*output 
before swaping a=4, b=3
after swaping a=3, b=4
PL/SQL procedure successfully completed.
*/
--Q4 Write a PL/SQL program with two user supplied variables i.e. the first name and the last name. Print the full name with last name and first name separated by comma and a space.
DECLARE
    fname varchar2(50) := '&fname';
    lname varchar2(50) := '&lname';
BEGIN
    dbms_output.put_line( lname || ', ' || fname);
END;
/
/*output
Mondal, Arka
PL/SQL procedure successfully completed.
*/
--Q5 Write a PL/SQL program to convert given seconds into its equivalent hours, minutes and seconds. Example. 7560 second = 2 hours, 27 minutes and 40 seconds
DECLARE
    total_sec number := &seconds;
    h number;
    m number;
    s number;
BEGIN
    h := floor(total_sec / 3600);
    m := floor(mod(total_sec, 3600) / 60);
    s := mod(total_sec, 60);
    dbms_output.put_line(h || ' hours, ' || m || ' minutes and ' || s || ' seconds');
END;
/
/* output
1 hours, 33 minutes and 20 seconds
PL/SQL procedure successfully completed.
*/
--Q6 Write a PL/SQL program to find the average mark of 5 subjects of a student. Assume full mark for each subject is 100.
DECLARE
    s1 number := &sub1;
    s2 number := &sub2;
    s3 number := &sub3;
    s4 number := &sub4;
    s5 number := &sub5;
    avg_ number;
BEGIN
    avg_ := (s1 + s2 + s3 + s4 + s5) / 5;
    dbms_output.put_line('Average Mark: ' || avg_);
END;
/
/*output
Average Mark: 88.4
PL/SQL procedure successfully completed.
*/
--Q7 A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
DECLARE
    amt number := &amt;
    n1 number;
    n2 number;
    n3 number;
    r number;
BEGIN
    n1 := floor(amt / 100);
    r := mod(amt, 100);
    n2 := floor(r / 50);
    r := mod(r, 50);
    n3 := floor(r / 10);
    dbms_output.put_line('100s: ' || n1 || ', 50s: ' || n2 || ', 10s: ' || n3);
END;
/
/* output
100s: 45, 50s: 0, 10s: 0
PL/SQL procedure successfully completed.
*/
--Q8 Write a PL/SQL program to find centigrade for a given Fahrenheit temperature.
DECLARE
    f number := &fahrenheit;
    c number;
BEGIN
    c := (f - 32) * 5/9;
    dbms_output.put_line('Celsius: ' || c);
END;
/
/* output
Celsius: 36.66666666666666666666666666666666666667
PL/SQL procedure successfully completed.
*/
--Q9 Write a PL/SQL program to add two times in hour, minute & second format entered through the keyboard in the format hh:mm:ss
DECLARE
    h1 number := &h1;
    m1 number := &m1; 
    s1 number := &s1;
    h2 number := &h2; 
    m2 number := &m2; 
    s2 number := &s2;
    ts1 number; 
    ts2 number; 
    total_sec number;
    rh number; 
    rm number; 
    rs number;
BEGIN
    ts1 := (h1 * 3600) + (m1 * 60) + s1;
    ts2 := (h2 * 3600) + (m2 * 60) + s2;
    total_sec := ts1 + ts2;
    rh := floor(total_sec / 3600);
    rm := floor(mod(total_sec, 3600) / 60);
    rs := mod(total_sec, 60);
    dbms_output.put_line('total Time ' || rh || ':' || rm || ':' || rs);
END;
/
/* output 
total Time 7:36:19
PL/SQL procedure successfully completed.
*/
--Q10  Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a  PL/SQL program to calculate his gross salary.
DECLARE
    basic number := &basic;
    da number;
    hra number;
    sal number;
BEGIN
    da := basic * 0.40;
    hra := basic * 0.20;
    sal := basic + da + hra;
    dbms_output.put_line('final salary: ' || sal);
END;
/
/* output
final salary: 139200
PL/SQL procedure successfully completed.
*/
--Q11 Write a PL/SQL program to view the name of the employee and school name whose employee ID is 180750.
DECLARE
    e_name lab6_employee.first_name%type;
    s_name lab6_school.name%type;
BEGIN
    SELECT e.first_name, s.name INTO e_name, s_name
    FROM lab6_employee e, lab6_school s, lab6_employee_alignment ea
    WHERE e.id = ea.employee_id AND s.id = ea.school_id AND e.id = '180750';
    dbms_output.put_line('Name: ' || e_name || ', School: ' || s_name);
END;
/
/* output 
ORA-01403: no data found
ORA-06512: at line 5
https://docs.oracle.com/error-help/db/ora-01403/
*/
-- Q12 Write a PL/SQL program to view the name of the employee and job title whose employee ID is 150750.
DECLARE
    e_name lab6_employee.first_name%type;
    j_title lab6_job.title%type;
BEGIN
    SELECT e.first_name, j.title INTO e_name, j_title
    FROM lab6_employee e, lab6_job j, lab6_employee_pay ep
    WHERE e.id = ep.employee_id AND j.id = ep.job_id AND e.id = '150750';
    dbms_output.put_line('Name: ' || e_name || ', Title: ' || j_title);
END;
/
/* output
ORA-01403: no data found
ORA-06512: at line 5
*/

