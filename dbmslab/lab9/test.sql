set SERVEROUTPUT ON;
-- to execute on win command line in sqlplus @c:dbmslab\prog1.sql 


DECLARE
    n1 number(5,2);
    n2 number(5,2);
    s number(6,2);
BEGIN
        n1:= &n1;
        n2:=&n2;
        s:=n1+n2;
        dbms_output.put_line(s);
END;
/


