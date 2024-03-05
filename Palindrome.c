//Assignment: Palindrome problem
BEGIN

    DECLARE variables n, temp, reverse, remainder

    READ n

    temp = n

    reverse = 0

    WHILE n != 0 DO

        remainder = n % 10

        reverse = reverse * 10 + remainder

        n = n / 10

    END WHILE

    IF temp == reverse THEN

        PRINT "It is a palindrome number"

    ELSE

        PRINT "It is not a palindrome number"

    END IF

END

