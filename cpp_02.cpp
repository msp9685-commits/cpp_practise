/*Challenge: Write a program that checks if the user wants to order Green Tea. 
If the user types "Green Tea," 
the program should confirm their order.*/
/*#include <iostream>
#include <string>
using namespace std;
int main(){
    string tea_choice;
    cout << "Do you want 'Green Tea'? if 'yes' type 'Green Tea' else 'no' ";
    getline(cin, tea_choice);
    if(tea_choice == "Green Tea"){
        cout << "your order is confirmed";
    }
    else{
        cout << "sorry";
    }
    return 0;
}*/
/*Challenge: Write a program that checks if a tea shop is open. 
If the current hour (input by the user) is between 8 AM and 6 PM, 
the shop is open; otherwise, it’s closed.*/
/*#include <iostream>
#include <string>
using namespace std;
int main(){
    string enter_hour;
    cout << "enter current running hour (0-23)";
    cin >> enter_hour;
    if(enter_hour >= 8 && <= 18){
        cout << "we are open";
    }
    else {
        cout << "we are closed";
    }
    return 0;
}*/
/*3. Nested If-Else
Challenge: A tea shop offers discounts based on the number of tea cups ordered.
Write a program that checks the number of cups ordered and applies a discount:* 
More than 20 cups: 20% discount
Between 10 and 20 cups: 10% discount
Less than 10 cups: No discount*/
/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int tea_quantity;
    float price, total_price, discount;
    cout << "enter number of cups purchased\n";
    cin >> tea_quantity;
    cout << "enter price per cup\n";
    cin >> price;
    total_price = price * tea_quantity;
    if(tea_quantity > 20){
        discount = (.20 * total_price);
    }
    else if(tea_quantity >= 10 && tea_quantity <= 20){
        discount = (.1 * total_price);
    }
    else{
        discount = 0;
    }
    total_price = total_price - discount;
    cout << "final price " << total_price;

    return 0;
}*/
/*4. Switch Case
Challenge: Write a program that lets the user select a tea type from a menu. 
Use a switch statement to display the price based on the selected tea:* 
Green Tea: $2
Black Tea: $3
Oolong Tea: $4*/
/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int input;
    cout<<"enter 0 for Green Tea, 1 for Black Tea, 2 for Oolong Tea\n";
    cin >> input;
    switch(input){
        case 0:
        cout << "Green Tea: $2"<< endl;
        break;
        case 1:
        cout << "Black Tea: $3"<< endl;
        break;
        case 2:
        cout << "Oolong Tea: $4"<< endl;
        break;
        default:
        cout<< "invalid input";
        break;
    }
    return 0;
}*/
