#include <stdio.h>

int main() {
    int totalCustomers;
    float totalRevenue = 0;

    printf("=========== Smart Canteen Billing System ===========\n");
    printf("Enter total number of customers: ");
    scanf("%d", &totalCustomers);

    int customerCount = 1;
    while (customerCount <= totalCustomers) {
        printf("\n--- Customer %d ---\n", customerCount);

        char name[50];
        printf("Enter customer name: ");
        scanf("%s", name);

        int numItems;
        printf("Enter number of items: ");
        scanf("%d", &numItems);

        int itemCount = 1;
        float totalBill = 0;

        printf("\nMenu Card:\n");
        printf("Code\tItem Name\tPrice (₹)\n");
        printf("1\tSandwich\t80\n");
        printf("2\tBurger\t\t120\n");
        printf("3\tPizza Slice\t150\n");
        printf("4\tCoffee\t\t60\n");
        printf("5\tJuice\t\t50\n\n");

        printf("Customer %d Bill:\n", customerCount);

        while (itemCount <= numItems) {
            int code, quantity;
            float price = 0, subtotal = 0;

            printf("Enter item code: ");
            scanf("%d", &code);
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            switch (code) {
                case 1:
                    price = 80;
                    printf("Sandwich x %d = ₹%.2f\n", quantity, price * quantity);
                    break;
                case 2:
                    price = 120;
                    printf("Burger x %d = ₹%.2f\n", quantity, price * quantity);
                    break;
                case 3:
                    price = 150;
                    printf("Pizza Slice x %d = ₹%.2f\n", quantity, price * quantity);
                    break;
                case 4:
                    price = 60;
                    printf("Coffee x %d = ₹%.2f\n", quantity, price * quantity);
                    break;
                case 5:
                    price = 50;
                    printf("Juice x %d = ₹%.2f\n", quantity, price * quantity);
                    break;
                default:
                    printf("Invalid item code!\n");
                    price = 0;
                    quantity = 0;
                    break;
            }

            subtotal = price * quantity;
            totalBill += subtotal;

            itemCount++;
        }

        printf("Total: ₹%.2f\n", totalBill);

        float discount = 0;
        if (totalBill > 500) {
            discount = totalBill * 0.10;
            printf("Discount (10%%): ₹%.2f\n", discount);
        }

        float finalBill = totalBill - discount;
        printf("Final Bill: ₹%.2f\n", finalBill);

        totalRevenue += finalBill;
        customerCount++;
    }

    printf("\n================== Canteen Summary ==================\n");
    printf("Total Customers Served: %d\n", totalCustomers);
    printf("Total Revenue: ₹%.2f\n", totalRevenue);
    printf("=====================================================\n");

    return 0;
}
