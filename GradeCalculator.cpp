/* Name: (Eliallah Dadzie)
Date: (02/06/2023)

All work below was performed by (Eliallah Dadzie) */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declaration of const variables
    const int ASSIGNPTSPOSS = 700;
    const int MIDTERMPTSPOSS= 100;  
    const int REVELPTSPOSS = 500; 
    const int FINALPTSPOSS = 100;
    
    //Declaration of local variables 
    double assignptsmade;
    double midscore;
    double revelptsmade;
    double finscore; 
    double extracred;
    double finalGrade;
    
    char choice;
    char letterGrade;
    
    double A; 
    double B;
    double C;
    double D;
    
    //Cout Statements & User Inputs for Grades & Extra Credit
    cout << "Assignment Points Made : ";
    cin >> assignptsmade;
    
    cout << "Midterm Score: ";
    cin >> midscore;
  
    cout << "Revel Points Made: ";
    cin >> revelptsmade;
    
    cout << "Score on the Final Assignment: ";
    cin >> finscore;

    cout << "Did you earn extra credit? (y/n): ";
    cin >> choice;
    
    
    //If statements to check for when user wants extra credit.
    if(choice == 'Y' || choice == 'y'){
       cout << "Extra Credit Points Earned: ";
       cin >> extracred;
       // calculation for grade result
    A = (((assignptsmade+extracred)/ASSIGNPTSPOSS) * .5);
    B = ((midscore/MIDTERMPTSPOSS) * .25);
    C = ((revelptsmade/REVELPTSPOSS) * .1);
    D = ((finscore/FINALPTSPOSS) * .15);
   
    //calculation for final grade
    finalGrade = (A + B + C + D) * 100;
   
    //to make one decimal place
    cout << fixed << setprecision(1);
    
    cout << endl << "Final Course Average: " << finalGrade << "%"<< endl;
    //if statements to asigned grade value to a letter grade
    if(finalGrade >= 0 && finalGrade <= 59.9 ){
        letterGrade = 'F';
    }
    else if(finalGrade >= 60 && finalGrade <= 68.99){
        letterGrade = 'D';
    }
    else if(finalGrade >= 69 && finalGrade <= 79.99){
        letterGrade = 'C';
    }
    else if(finalGrade >= 80 && finalGrade <= 89.99){
        letterGrade = 'B';
    }
    else if(finalGrade >= 90 && finalGrade <= 100){
        letterGrade = 'A';
    }
    
    cout << endl << "Final Course Letter Grade: " << letterGrade;
    
    }
    // if statements for when user does not want extra credit.
     else if(choice == 'n' || choice == 'N'){
    extracred = 0;
    A = (((assignptsmade+extracred)/ASSIGNPTSPOSS) * .5);
    B = ((midscore/MIDTERMPTSPOSS) * .25);
    C = ((revelptsmade/REVELPTSPOSS) * .1);
    D = ((finscore/FINALPTSPOSS) * .15);
    
    finalGrade = (A + B + C + D) * 100;
    
    cout << fixed << setprecision(1);
    
    cout << endl << "Final Course Average: " << finalGrade << "%"<< endl;
    
    if(finalGrade >= 0 && finalGrade <= 59.9 ){
        letterGrade = 'F';
    }
    else if(finalGrade >= 60 && finalGrade <= 68.99){
        letterGrade = 'D';
    }
    else if(finalGrade >= 69 && finalGrade <= 79.99){
        letterGrade = 'C';
    }
    else if(finalGrade >= 80 && finalGrade <= 89.99){
        letterGrade = 'B';
    }
    else if(finalGrade >= 90 && finalGrade <= 100){
        letterGrade = 'A';
    }
        cout << endl << "Final Course Letter Grade: " << letterGrade;
        
    }
    
    else{
        cout << endl << "Invalid option, exiting program." << endl;
    }
    

    return 0;
}