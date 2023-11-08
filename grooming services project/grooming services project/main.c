#include <stdio.h>
#include <string.h>

#define MAX_SERVICES 10
#define MAX_SUBTYPES 20

// Service and subtype names
char services[MAX_SERVICES][20] = { "Haircut", "Massage", "Facial", "Manicure", "Pedicure" };
char subtypes[MAX_SERVICES][MAX_SUBTYPES][20] = {
    { "Buzz Cut", "Crew Cut", "Pompadour", "Undercut" },
    { "Swedish", "Deep Tissue", "Hot Stone", "Sports" },
    { "Basic", "Gold", "Platinum", "Diamond" },
    { "Express", "Spa", "Gel", "Acrylic" },
    { "Classic", "Deluxe", "Luxury", "Signature" }
};

// Prices of each subtype of each service
int prices[MAX_SERVICES][MAX_SUBTYPES] = {
    { 1000, 1500, 2000, 2500 },
    { 1500, 2000, 2500, 3000 },
    { 2000, 2500, 3000, 3500 },
    { 1500, 2000, 2500, 3000 },
    { 1700, 2200, 2700, 3200 }
};

int getServiceIndex(char *service) {
    for (int i = 0; i < MAX_SERVICES; i++)
        if (strcmp(services[i], service) == 0)
            return i;
    return -1;
}

int getSubtypeIndex(int serviceIndex, char *subtype) {
    for (int i = 0; i < MAX_SUBTYPES; i++)
        if (strcmp(subtypes[serviceIndex][i], subtype) == 0)
            return i;
    return -1;
}

int getPrice(char *service, char *subtype) {
    int serviceIndex = getServiceIndex(service);
    if (serviceIndex == -1) return -1;
    int subtypeIndex = getSubtypeIndex(serviceIndex, subtype);
    if (subtypeIndex == -1) return -1;
    return prices[serviceIndex][subtypeIndex];
}

void displayServices() {
    printf("Services:\n");
    for (int i = 0; i < MAX_SERVICES; i++)
        printf("%d. %s\n", i + 1, services[i]);
}

void displaySubtypes(char *service) {
    int serviceIndex = getServiceIndex(service);
    if (serviceIndex == -1) {
        printf("Service not found.\n");
        return;
    }
    printf("Subtypes of %s:\n", service);
    for (int i = 0; i < MAX_SUBTYPES; i++)
        printf("%d. %s\n", i + 1, subtypes[serviceIndex][i]);
}

int main() {
    char service[20], subtype[20];
    int price;
    displayServices();
    printf("Enter service: ");
    scanf("%s", service);
    displaySubtypes(service);
    printf("Enter subtype: ");
    scanf("%s",subtype);
    price = getPrice(service, subtype);
    if (price == -1)
        printf("Service or subtype not found.\n");
    else
        printf("Price of %s %s: %d\n", service, subtype, price);
    return 0;
}
 

