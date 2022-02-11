/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

    double agi = 0.0;
    char c = 'N';
    double tax = 0.0;
    double childCredit = 0.0;
    double totalTax = 0.0;
    int numChildren = 0;

    printf("Please enter your adjusted gross income (AGI): ");
    scanf("%lf", &agi);
    //remove the "enter" endline character
    getchar();

    printf("Do you have any children? (Y) or (N)? ");
    c = getchar();

    if(c == 'y' || c == 'Y') {
        printf("How many children do you have? ");
        scanf("%d", &numChildren);
        childCredit = (numChildren * 2000);
    }
    if(agi >= 0 && agi <= 19900) {
        tax = (agi * .1);
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    } else if(agi >= 19901 && agi <= 81050) {
        tax = (1990 + (.12 * (agi - 19901)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    } else if(agi >= 81051 && agi <= 172750) {
        tax = (9328 + (.22 * (agi - 81051)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    } else if(agi >= 172751 && agi <= 329850) {
        tax = (29502 + (.24 * (agi - 172751)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    } else if(agi >= 329851 && agi <= 418850) {
        tax = (67206 + (.32 * (agi - 329851)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    } else if(agi >= 418851 && agi <= 628300) {
        tax = (95686 + (.35 * (agi - 418851)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }
    } else if(agi >= 628301) {
        tax = (168933.50 + (.37 * (agi - 628301)));
        totalTax = (tax - childCredit);
        if(totalTax < 0) {
            (totalTax = 0);
        }

    }
    //TODO: compute the tax, child credit, and total tax here

    printf("AGI:          $%10.2f\n", agi);
    printf("Tax:          $%10.2f\n", tax);
    printf("Child Credit: $%10.2f\n", childCredit);
    printf("Total Tax:    $%10.2f\n", totalTax);

    return 0;
}
