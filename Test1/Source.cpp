#include <iostream>
using namespace std;

//#define CALCULATOR 
#define LUCKY_TICKET
int main() {
    setlocale(LC_ALL, "Russian");

#if defined CALCULATOR

    double result = 0, number_1, number_2;
    char sing;

    cout << "Enter the math expression here: " << endl;
    cin >> number_1 >> sing >> number_2; 
    switch (sing)
    {
    case '+':  result = number_1 + number_2; break;
    case '-':  result = number_1 - number_2; break;
    case '*':  result = number_1 * number_2; break;
    case '/':  result = number_1 / number_2; break;
    default: "Your actions are incorrect. You entered the wrong math sing!"; break;
    }
cout << " the answer is  " << result << endl;

#endif

int ticket_number, temp, sum1 = 0, sum2 = 0;

cout << " Enter your ticket number: "; cin >> ticket_number; 
temp = ticket_number;
for (int i = 0; temp >= 1000; sum1 += i )
{
    i = temp % 10;
    temp /= 10;
   
}
cout << endl << sum1;
}