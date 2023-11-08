//
//  Project X.c
//  groroming project
//
//  Created by Mayank Raj Gupta on 14/02/23.
//

#include "Project X.h"
#include <stdio.h>

void bookAppointment(char* name, int day, int time, int hairstyle, int facialHair) {
    char* hairstyleName;
    int price;
    char* facialHairName;
    int facialHairPrice;
    
    switch (hairstyle) {
        case 1:
            hairstyleName = "Buzz Cut";
            price = 100;
            break;
        case 2:
            hairstyleName = "Crew Cut";
            price = 150;
            break;
        case 3:
            hairstyleName = "French Crop";
            price = 200;
            break;
        case 4:
            hairstyleName = "Quiff";
            price = 250;
            break;
        case 5:
            hairstyleName = "Pompadour";
            price = 300;
            break;
        default:
            printf("Invalid hairstyle selection.\n");
            return;
    }
    switch (facialHair) {
            case 1:
                facialHairName = "Clean Shave";
                facialHairPrice = 50;
                break;
            case 2:
                facialHairName = "Moustache";
                facialHairPrice = 100;
                break;
            case 3:
                facialHairName = "Beard";
                facialHairPrice = 100;
                break;
            case 4:
                facialHairName = "Goatee";
                facialHairPrice = 100;
                break;
            case 5:
                facialHairName = "Soul Patch";
                facialHairPrice = 100;
                break;
            default:
                printf("Invalid facial hair selection.\n");
                return;
        }
    
    printf("Booking appointment for %s on day %d at time %d for a %s (%d INR) and %s (%d INR).\n", name, day, time, hairstyleName, hairstylePrice, facialHairName, facialHairPrice);
        // code to actually book the appointment would go here
        
        // calculate total cost of appointment
        int totalCost = (hairstylePrice + facialHairPrice)

        // print billing information
        printf("\nBilling Information:\n");
        printf("Haircut cost: %d INR\n", hairstylePrice);
        printf("Facial hair cost: %d INR\n", facialHairPrice);
        printf("Total cost: %d INR\n", totalCost);
    }




int main() {
    char name[50];
    int day, time;
    int hairstyle, facialHair;

    // get input from user
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter the day (1-31): ");
    scanf("%d", &day);
    printf("Enter the time (0-23): ");
    scanf("%d", &time);
    
    // print menu of hairstyles and prices
    printf("Select a hairstyle:\n");
    printf("1. Buzz Cut (INR 100)\n");
    printf("2. Crew Cut (INR 150)\n");
    printf("3. French Crop (INR 200)\n");
    printf("4. Quiff (INR 250)\n");
    printf("5. Pompadour (INR 300)\n");
    
    // get input for hairstyle selection
    printf("Enter the number of the selected hairstyle: ");
    scanf("%d", &hairstyle);
    
    // print menu of facial hairstyles and prices
    printf("Select a facial Hair style:\n");
    printf("1. Clean Shave (INR 50)\n");
    printf("2. Moustache (INR 100) \n");
    printf("3. Beard (INR 100)\n");
    printf("4. Goatee (INR 100)\n");
    printf("5. Soul Patch (INR 100)\n");

    // call the function to book the appointment
    bookAppointment(name, day, time, hairstyle, facialHair);

    return 0;
}
