
#include <iostream>
#include <iomanip>
#include "calculator.h"
#include "scientific.h"
#include "converter.h"

using namespace std;

int main()
{

    // Initialize simple calc and scientific calc objects
    Calculator calc;
    Scientific sci;
    Converter conv;

    // Assign calculator pointer to the simple calc object
    // This will be used later for polymorphism
    Calculator* calcPtr = &calc;

    // Switch to flip scientific calc on and off
    bool sciActive = false;
    bool convActive = false;

    cout << "Welcome to my Calculator \n\n"
    << "This calculator has 2 modes, normal, scientific and converter.\n"
    << "You can change it using the 'change' keyword.\n\n"
    << "Type change1 for using scientific mode and change2 for conversion mode"
    << "This app has 2 other special keywords, result and mem.\n"
    << "result stores the result of the previous calculation.\n"
    << "mem allows you to store and access a number.\n"
    << "Both can be used instead of numbers during calculations.\n"
    << "They are both local to the mode you are using.\n";

    // Welcome message for simple calc
     calcPtr->welcome();

    // Set precision for all uses of cout
    // Shows up to 15 places
    cout << setprecision(15);

    
    /// Take in input and loop
    string input = "";
    while (cin >> input && input != "exit")
    {
        cout<<"\n";
        
        // Input to switch mode
        if (input == "change1")
        {
                // Scientific Mode becomes active
                
                calcPtr = &sci;
                sciActive=false;
                
                cout << "\nScientific Calculator Activated";
                
                calcPtr->welcome();
                cin>>input;
            }
            else if(input=="change2"){
                // conversion mode becomes active
                calcPtr = &conv;
                convActive=false;
                cout<< "\nCoversion Mode Activated";
                
                calcPtr->welcome();
                cin>>input;

            } else 
            {
                // Simple calc is active
                calcPtr = &calc;
                
                cout << "\nSimple Calculator Activated\n";
                calcPtr->welcome();
            }
        
        // Call virtual functions from base class pointer to get polymorphic
        // Executes function based on type of object
        calcPtr->parseOperation(input);
        //calcPtr->welcome();
    
    }
    return 0;
}
