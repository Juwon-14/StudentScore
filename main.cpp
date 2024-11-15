//Juwon Hong
//CIS 25
// 2/10/2024

#include "StudentScore.h"
#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    
    string names[size] = { "Juwon", "Jay", "Jasmine", "Andy", "Tim", "Tom" };
    
    int arr[size];


    cout << "Enter the grades for the following students:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the grade for " << names[i] << ": ";
        cin >> arr[i];
    }

    cout << "The highest grade is: " << std::max(arr, size) << endl;
    cout << "The lowest grade is: " << std::min(arr, size) << endl;
    cout << "The average grade is: " << std::avg(arr, size) << endl;

    std::aboveAverage(arr, names, size);

    string stud1, stud2;
    cout << "Enter the first student to compare: ";
    cin >> stud1;
    cout << "Enter the second student to compare: ";
    cin >> stud2;
    std::compare(arr, names, stud1, stud2, size);

    return 0;
}
