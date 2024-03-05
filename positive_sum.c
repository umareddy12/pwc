//Assignment: Play with Maths
BEGIN

    DECLARE variables sum = 0, num

    READ num

    WHILE num != 0 DO

        IF num > 0 THEN

            sum = sum + num

        END IF

        READ num

    END WHILE

 PRINT sum

END

