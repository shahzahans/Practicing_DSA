/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: Given a matrix (2D~Array) the task is to add them
 */

#include <iostream>
using namespace std;

int main()
{
    int a [3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Initializing fisrt set of array
    int b [3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Initializing second set of array
    
    int sum[3][3]; // intilizing variable with 2D Array

    for (int i=0; i<3; i++){ // For loop add both 2d arrays
        for (int j=0; j<3; j++){
            sum [i][j] = a[i][j] + b[i][j];
        }
}

    for (int i=0; i<3; i++){ // Loop to print the added Array
        for (int j=0; j<3; j++){
            cout << sum [i][j] <<  " ";
        }
    cout << endl;
}
    return 0;
}
