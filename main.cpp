#include <iostream>
#include <iomanip>

//make it easier for later to write less
using namespace std;

//we need a fnc to make sure number is both postive and a multiple of 3
bool isPosMultOf3(int number) {
    return number > 0 && number % 3 == 0;
}

int main(){
   
   //set the variables
   const int TotalCount = 5;
   int numbers[TotalCount]; //source said I need to store right numbers this way
   int count = 0;

//collect exactly 5 
while (count < TotalCount) {
        int input;
        cout << "Enter a positive integer that is a multiple of 3: ";
        cin >> input;

        // Check if input is valid
        if (cin.fail()) {
            cin.clear(); // online suggests to clear the error flag
            cout << "Invalid, enter an integer." << endl;
         
            return 1;
        } else if (isPosMultOf3(input)) {
            numbers[count] = input;
            count++;
        } else {
            cout << "Number is not positive or not a multiple of 3." << endl;
        }
    }



//calculate the min max, total
    
    int min = numbers[0];
    int max = numbers[0];
    int total = 0;

    for (int i = 0; i < TotalCount; ++i) {
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
        total += numbers[i];
    }
    //calculate average
    double average = static_cast<double>(total) / TotalCount;
    
//Display table now
    cout << endl;
    cout << setw(10) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << "==========================================================" << endl;
    cout << setw(10) << TotalCount << setw(10) << min << setw(10) << max << setw(10) << total << setw(10) << fixed << setprecision(2) << average << endl;


    return 0;
}


