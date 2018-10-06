# include <stdio.h>
#include<stlib.h>
int main() {

    char op;
    double n1,n2;

    printf("Enter an operator (+, -, *,/):");
    scanf("%c",&op);

    printf("Enter two operands: ");
    scanf("%lf%lf",&n1,&n2);

    switch(op)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n",n1, n2, n1 + n2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n",n1, n2, n1 - n2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n",n1, n2, n1 * n2);
            break;

        case '/':
            printf("%.2f / %.2f = %.2f\n",n1, n2, n1 / n2);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct\n");
    }
    
    return 0;
}


