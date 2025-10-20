#include <stdio.h>

#define DEBUG 1
#define TAX_RATE 0.15
#define CALCULATE_TAX(price) ((TAX_RATE) * (price))
#define FINAL_PRICE(price) ((price) + CALCULATE_TAX(price))

int main() {

    float price;
    printf("Enter a price to see price with tax rate: \n");
    scanf("%f", &price);

    printf("Tax on price: %.2f \n", CALCULATE_TAX(price));

    printf("Price taxed: %.2f \n", FINAL_PRICE(price));

    #ifdef DEBUG
        printf("\nDebug Info:\n");
        printf("File: %s\n", __FILE__);      
        printf("Line: %d\n", __LINE__);
    #endif    

    return 0;
}