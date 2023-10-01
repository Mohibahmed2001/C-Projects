#include <iostream>
using namespace std;
int main()
{
    char choice;
    for(;;){
    do
    {
       cout << "Help on:\n";
       cout << "  1.if\n";
       cout << "  2.switch\n";
       cout << "  3.for\n";
       cout << "  4.while\n";
       cout << "  5.dowhile\n";
       cout << "Choose one:(q to quit): ";
       cin >> choice;
    }
    while (choice <'1' || choice > '5'&& choice != 'q');
    if(choice=='q') break;    
    cout << "\n\n";
    switch(choice)
    {
        case '1':
        cout << "The if:\n\n";
        cout << "if(condition) statemnet \n";
        cout << "else statement \n";
        break;
        case '2':
        cout << "The if:\n\n";
        cout << "switch(expression) {\n";
        cout << "  case constant:\n";
        cout << "   statement sequence\n";
        cout << "   breal;\n";
        cout << "}\n";
        break;
        case '3':
        cout << "The for:\n\n";
        cout << "for(init; condition; increment)";
        cout << " statement;\n";
        break;
        case '4':
        cout << "The while:\n\n";
        cout << "while(condition) statement\n";
        break;
        case '5':
        cout << " The do whiile\n\n";
        cout << "do {\n}";
        cout << "  statement;\n";
        cout << "} while (condition);\n";
        break;
     }
}
return 0;
}