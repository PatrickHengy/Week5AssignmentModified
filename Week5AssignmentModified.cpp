// Week5ProgrammingAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <String>
#include <iomanip>
using namespace std;

void ShowUsage() {//a function to show the user how to use the program.
    cout << "To show program usage press 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount press 'T'" << endl;
    cout << "To quit program press 'Q'" << endl;
};

void MakePurchase(int& iTotalXXXS,int& iTotalSmall, int& iTotalMedium, int& iTotalLarge) { //a function to sell surfboards. P
    cout << "Please enter the quantity and type (X = Super Small, S = Small, M = Medium, L= Large) of surfboard you would like to purchase: ";
    int amount = 0;
    char boardsize = '0';
    cin >> amount >> boardsize;

    if (boardsize == 'L' or boardsize == 'l') {
        iTotalLarge = amount + iTotalLarge;
    }

    else if (boardsize == 'M' or boardsize == 'm') {
        iTotalMedium = amount + iTotalMedium;
    }

    else if (boardsize == 'S' or boardsize == 's') {
        iTotalSmall = amount + iTotalSmall;
    }
    else if (boardsize == 'X' or boardsize == 'x') {
        iTotalXXXS = amount + iTotalXXXS;
    }


};

void DisplayPurchase(const int iTotalXXXS,const int iTotalSmall, const int iTotalMedium, const int iTotalLarge) { // function to show the number of surfboards of each size sold. C

    if (iTotalXXXS > 0) {
        cout << "The total number of super small surfboards is " << iTotalXXXS;
        cout << endl;
    }

    if (iTotalSmall > 0) {
        cout << "The total number of small surfboards is " << iTotalSmall;
        cout << endl;
    }

    if (iTotalMedium > 0) {
        cout << "The total number of medium surfboards is " << iTotalMedium;
        cout << endl;
    }

    if (iTotalLarge > 0) {
        cout << "The total number of large surfboards is " << iTotalLarge;
        cout << endl;
    }



    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0) {
        cout << "No purchases made yet" << endl;
    }



};

void DisplayTotal(const int iTotalXXXS,const int iTotalSmall, const int iTotalMedium, const int iTotalLarge) { //a function to show the total amount of money made. T
    const double extrasmallboard = 50.00;
    const double smallboard = 175.00;
    const double mediumboard = 190.00;
    const double largeboard = 200.00;

    if (iTotalXXXS > 0) {
        cout << "The total number of super small surfboards is " << iTotalXXXS << " at a total of $" << fixed << setprecision(2) << extrasmallboard * iTotalXXXS;
        cout << endl;
    }

    if (iTotalSmall > 0) {
        cout << "The total number of small surfboards is " << iTotalSmall << " at a total of $" << fixed << setprecision(2) << smallboard * iTotalSmall;
        cout << endl;
    }

    if (iTotalMedium > 0) {
        cout << "The total number of medium surfboards is " << iTotalMedium << " at a total of $" << fixed << setprecision(2) << mediumboard * iTotalMedium;
        cout << endl;
    }

    if (iTotalLarge > 0) {
        cout << "The total number of large surfboards is " << iTotalLarge << " at a total of $" << fixed << setprecision(2) << largeboard * iTotalLarge;
        cout << endl;
    }

    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0) {
        cout << "No purchases made yet" << endl;
    }

    if (iTotalSmall > 0 || iTotalMedium > 0 || iTotalLarge > 0 || iTotalXXXS > 0) {
        cout << "Amount due: $" << fixed << setprecision(2) << (smallboard * iTotalSmall) + (mediumboard * iTotalMedium) + (largeboard * iTotalLarge) + (extrasmallboard * iTotalXXXS) << endl;
    }



};



int main()
{

    int iTotalXXXS = 0;
    int iTotalSmall = 0;
    int iTotalMedium = 0;
    int iTotalLarge = 0;

    char choice = 'G';

    ShowUsage(); //calls the showusage function

    while (choice != 'Q') {

        cout << endl;
        cout << "Please enter a selection: ";
        cin >> choice;
        cout << endl;

        if (choice == 'S' || choice == 's') { //show usage

            ShowUsage();

        }

        else if (choice == 'P' || choice == 'p') { //purchase surfboards

            MakePurchase(iTotalXXXS,iTotalSmall, iTotalMedium, iTotalLarge);

        }

        else if (choice == 'C' || choice == 'c') {

            DisplayPurchase(iTotalXXXS,iTotalSmall, iTotalMedium, iTotalLarge); //show num of boards and size sold

        }

        else if (choice == 'T' || choice == 't') {

            DisplayTotal(iTotalXXXS,iTotalSmall, iTotalMedium, iTotalLarge); //show money made


        }

        else if (choice == 'Q' || choice == 'q') {

            cout << "Thank you" << endl;
            return 0; // exits program

        }



    }

    return 0;
}
