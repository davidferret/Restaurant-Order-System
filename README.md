# Restaurant Order System

This C project simulates a restaurant ordering system where you can select items from a fixed menu, specify quantities, and calculate the total cost, including a 7% sales tax. The way I programmed this project was by implementing a structured menu system where each item has a predefined price. When you place an order, the program records the items and their quantities, calculates the subtotal, applies the sales tax, and displays the final total. The receipt generation feature was particularly interesting to implement since it required formatting the output neatly for easy readability. Additionally, I added the ability to handle multiple items per order before finalizing, making the ordering process more flexible.

I built this project because I wanted to practice handling structured data and file management while making something practical. Working with input validation, loops for adding multiple items, and proper formatting for receipt output was a fun challenge. Hopefully, this makes ordering food in a simulated environment feel smooth and efficient!

## Example Output
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
