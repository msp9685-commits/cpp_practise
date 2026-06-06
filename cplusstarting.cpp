/*Challenge: Create a program that checks if a user is eligible for a tea subscription discounnt. 
The discount applies if the user is either a student or has purchased more than 15 cups. 
Ask the user to input their status (student or not) and their cup count.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string stu_status;
    int cup_count;
    cout << "Are you student(yes or no)";
    cin >> stu_status;
    cout << "How many cups you purschased";
    cin >> cup_count;
    if(stu_status == "yes" || cup_count >= 15){
        cout << "yes you are eligible for discount";
    }
    else 
    cout << "sorry you are not eligible for discount";
    return 0;
}
