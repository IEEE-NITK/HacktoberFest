

#include <cstdlib>
#include <iostream>

using namespace std;

int displayMenu()
{
    int choice;
    
    cout << " \n Welcome to the Calculator 300x\n Please select a Calculation Option\n\n"
         << " (1) Addition\n"
         << " (2) Subtraction\n"
         << " (3) Division\n"
         << " (4) Mulpilication\n"
         << " (5) Exit\n\n"
         << "     Your Choice: ";
    cin >> choice;
    return choice;
}

int main()
{
    int menu;
    float total, num1, num2;
    
    menu = displayMenu();
    system("CLS");
    
    if (menu == 5)
     {
             cout << "Exit"<<endl;
       
             
     }
     else
     {
          switch (menu)
          {
                 case 1:
                      int values;
                      cout << " How many numbers would you like to enter? : ";
                      cin >> values;
                      float numbers[values];
     
                            for(int counter=0; counter<values; counter++)
                         {
                                 cout << counter+1 << ") Enter number: ";
                                 cin >> numbers[counter];
                         }
                         for(int counter=0; counter<values; counter++)
                         total+=numbers[counter];
                         cout << "\n The Answer is : " << total << "\n\n ";
                        
                 break;
                 case 2: 
                      cout << " Enter first number: ";
                      cin >> num1;
                      cout << " Enter second number: ";
                      cin >> num2;
                      total=(num1-num2);
                      cout << "\n The Answer is : " << total << "\n\n ";
                      break;
                 case 3: 
                      cout << " Enter first number: ";
                      cin >> num1;
                      cout << " Enter second number: ";
                      cin >> num2;
                      total=(num1/num2);
                      cout << "\n The Answer is : " << total << "\n\n ";
                      break;
                 case 4: 
                      cout << " Enter first number: ";
                      cin >> num1;
                      cout << " Enter second number: ";
                      cin >> num2;
                      total=(num1*num2);
                      cout << "\n The Answer is : " << total << "\n\n ";
                      
          }
         
     } 
   
                    
