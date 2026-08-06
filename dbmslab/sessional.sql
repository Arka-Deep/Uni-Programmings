
SET ECHO ON;
SET FEEDBACK ON;
SET SERVEROUTPUT ON;
SET PAGESIZE 100;
SET LINESIZE 200;

spool '/home/avo/sessional_spool_2405036.sql';

CREATE TABLE customer_5036 (
    CID VARCHAR2(10) PRIMARY KEY,
    CNAME VARCHAR2(50),
    CCITY VARCHAR2(50),
    Product_Specification VARCHAR2(50),
    Order_value NUMBER
);

INSERT INTO CUSTOMER_5036 VALUES
('C1', 'Praadip', 'Mysore', 'Stationary', 65000),
('C2', 'Aastik', 'Kolkota', 'Accessories', 49000),
('C3', 'Tushar', 'Pune', 'Utensil', 74000),
('C4', 'Arpan', 'Chennai', 'Electrical', 51000),
('C5', 'Anumita', 'Indore', 'Garments', 48000),
('C6','Arkadeep','Kolkata','Electronics',59000);

SET SERVEROUTPUT ON;

BEGIN

    FOR rec IN (SELECT CID, CCITY FROM customer_5036) 
    LOOP
       
        DBMS_OUTPUT.PUT_LINE('customer id ' || rec.CID || ' city ' || rec.CCITY);
    END LOOP;
END;
/
SPOOL off;