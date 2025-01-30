# Restaurant Order System

This program allows users to place an order from a predefined menu, calculates the total cost including tax, and saves the order details to a receipt file.

- **Menu Selection**: Users can select items from a fixed menu.
- **Quantity Input**: Supports ordering multiple quantities of each item.
- **Total Calculation**: Computes the final price, including a 7% sales tax.
- **Receipt Generation**: Saves order details and total cost to a text file.
- **User-Friendly Interface**: Allows multiple items to be added before finalizing the order.

## Example Usage
```
--- Menu ---
[1] Double Cheese Burger - $5.00
[2] Spicy Chicken Sandwich - $3.99
[3] Shrimp Tacos - $4.50
[4] Chocolate Ice Cream Cone - $1.99

Enter item number: 1
How many would you like?: 2

Would you like to add another item? (y/n): y
Enter item number: 3
How many would you like?: 3

Would you like to add another item? (y/n): n
Your total is: $25.68
Receipt saved to 'order_receipt.txt'.
Thank you for your order!

```
