//Assignment: Armstrong number
BEGIN

DECLARE variables number, originalNumber, sum, digit

PRINT "Enter the number"
READ number
originalNumber = number
sum = 0

WHILE number > 0 DO
    digit = number % 10
    sum = sum + (digit * digit * digit)
    number = number / 10
END WHILE

IF sum == originalNumber THEN
    PRINT originalNumber, "is an Armstrong number"
ELSE
    PRINT originalNumber, "is not an Armstrong number"
END IF

END
