//Assignment: ATM Trick
BEGIN

SET count=0

PRINT "Please enter your Customer_id"  

READ Customer_id

READ num

IF num>0 THEN

PRINT "Please turn your page"

count=count+1

ELSE

PRINT "Process Terminated! You have printed totally" +count pages

END IF

END



