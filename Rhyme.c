//Assignment: Rhythm composing
BEGIN

    DECLARE variables n, i, count

    FOR n FROM 2 TO 100 DO

        SET count TO 0

        FOR i FROM 2 TO n/2 DO

            IF n MOD i == 0 THEN

                SET count TO count + 1

                BREAK

            END IF

        END FOR

        IF count == 0 THEN

            PRINT n " is prime"

        END IF

    END FOR

END

