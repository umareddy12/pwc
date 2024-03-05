//Assignment: Lucky number
BEGIN
    DECLARE variables num, evenSum = 0, oddSum = 0, digit

    READ num

    WHILE num != 0 DO
        digit = num % 10
        IF digit % 2 == 0 THEN
            evenSum = evenSum + digit
        ELSE
            oddSum = oddSum + digit
        END IF
        num = num / 10
    END WHILE

    IF evenSum == oddSum THEN
        PRINT "Number is Lucky"
    ELSE
        PRINT "Number is Not Lucky"
    END IF
END
