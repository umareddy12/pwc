//Assignment: Frequency of digits

BEGIN

    DECLARE variable num, digit, i, count[10]

    SET i = 0

    

    PRINT "Enter the number:"

    READ num

    

    // Initialize count array to store frequency of each digit

    FOR digit = 0 TO 9 DO

        SET count[digit] = 0

    

    // Count the frequency of each digit in the number

    WHILE num > 0 DO

        SET digit = num % 10   // Extract the last digit

        SET count[digit] = count[digit] + 1

        SET num = num / 10     // Remove the last digit

    

    // Display the frequency of each digit

    PRINT "Frequency of each digit in " + num + " is:"

    FOR i = 0 TO 9 DO

        PRINT "Frequency of " + i + " = " + count[i]

END

