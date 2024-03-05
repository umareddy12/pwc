//Assignment: Departmental store
BEGIN
    DECLARE variables billAmount, discountPercentage, discountedAmount

    READ billAmount

    IF billAmount <= 0 THEN
        PRINT "Cannot Generate Bill"
    ELSE IF billAmount > 5000 THEN
        SET discountPercentage to 10
    ELSE IF billAmount > 2500 THEN
        SET discountPercentage to 8
    ELSE
        SET discountPercentage to 5

    discountedAmount = billAmount - (billAmount * discountPercentage / 100)

    PRINT "You get a discount of " + discountPercentage + "%. Pay " + discountedAmount + "."
END
