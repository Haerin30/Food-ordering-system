//This is the code for Food Ordering (AceFoods - Fast Food)
//Cris M. Toring
//John Benedict Ladaran
//Ace Maverick M. Arcamo
//Project for 102
//Food Ordering Application (Fast Food)
//December 14, 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
	int option, choice, qty, method;
	float price[3] = {100, 50, 60};
    char ans = 'Y', letter;
    float cost = 0.0;
    int order[3] = {0, 0, 0};
    int ctr = 0;

    printf("\nWelcome to the AceFoods\n");

while (1){ // Loop to keep showing menu until exit
	printf("\n--- Menu ---\n");
	printf("[1] View Foods\n[2] Place Order\n[3] Edit your order\n[4] Checkout\n[5] Exit");
	printf("\nInput your option: ");
	scanf("%d", &option);

system("cls");
    if(option < 1 || option > 5){
         printf("Error: Invalid Option\n");

    }
    switch (option){
		case 1: printf("\n--- Here is the list of Foods ---");
		        printf("\n[1] Pizza - %.1f\n[2] Burger - %.1f\n[3] Hotdog - %.1f\n", price[0], price[1], price[2]);
		 break;

		case 2: while (ans == 'Y' || ans == 'y'){ // Reset answer for new order
system("cls");
                printf("\nPlace your order: ");
                printf("\n[1] Pizza - %.1f \n[2] Burger - %.1f\n[3] Hotdog - %.1f", price[0], price[1], price[2]);
		        printf("\nEnter item number: ");
	        	scanf("%d", &choice);

                if (choice >= 1 && choice <=3){
                    printf("Enter quantity: ");
                    scanf("%d", &qty);
                    cost += qty * price[choice - 1]; // Update total amount
                    order[choice - 1] += qty; // Update the order array
                    printf("\nAdded %d of item %d", qty, choice);
                    printf("\nCurrent Total: %.2f", cost);
                } else {
                    printf("Invalid choice!");
                    }

                    printf("\nDo you want to continue your order? (Y/N): ");
                    scanf(" %c", &ans); // Read single non-whitespace character
                }
                system("cls");
                break;

            case 3:
                    printf("--- Edit your Order ---\n");
                    for (ctr = 0; ctr < 3; ctr++){
                        if (order[ctr] > 0){
                        printf("Item %d: Quantity %d\n", ctr + 1, order[ctr]);
                        }
                    }

                    printf("\nEnter item number to edit (1-3): ");
                    scanf("%d", &choice);

                    if (choice >= 1 && choice <=3){
                        printf("Current quantity for item %d: %d\n", choice, order[choice - 1]);
                        printf("Enter new quantity: ");
                        scanf("%d", &qty);
                            // Update total amount based on new quantity
                        cost -= order[choice - 1] * price[choice - 1]; // Subtract old quantity cost
                        order[choice - 1] = qty; // Update the quantity in the order array
                        cost += qty * price[choice - 1]; // Add new quantity cost
                    } else {

system("cls");
                        printf("\nInvalid choice!\n");
                }

                break;

            case 4: // Checkout process
                    printf("--- Checkout ---\n");
                    printf("The total amount to pay: %.2f", cost); // Display the total amount to pay
                    printf("\n\nChoose your payment method:\n");
                    printf("\n[1] - Cash");
                    printf("\n[2] - Credit card");
                    printf("\n[3] - Online cash");
                    printf("\nEnter your choice: ");
                    scanf("%d", &method);
system("cls");
                        if (method == 1){
                            printf("\nYou chose cash! Thank you for your payment of %.2f!\n", cost);
                        } else if (method == 2){
                            printf("\nYou chose credit card! Thank you for your payment of %.2f!\n", cost);
                        } else if (method == 3){
                            printf("\nYou chose online cash! Thank you for your payment of %.2f!\n", cost);
                        } else {
                            printf("Invalid payment method!");
                        }

                break;

            case 5:
                printf("Thank you for visiting AceFoods!\n"); // Display the thank you message
                printf("\nToring, Cris M.");
                printf("\nLadaran, John Benedict A.");
                printf("\nAracamo, Ace MAverick M.\n");
                exit(0);
                break;

            }// switch(option)
        }// while (1)    para diko malibat asa ning close bracket
//updated ni if naa sa github
return 0;
}
