#include <stdio.h>
#define TAX_RATE (0.05f)

int main(void)
{
    float dollars_and_cents;

    printf("Enter an amount: ");
    scanf("%f", &dollars_and_cents);

    printf("With tax added: %f", (1.0f + TAX_RATE) * dollars_and_cents);

    return 0;
}
