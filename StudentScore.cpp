//Juwon Hong
//CIS 25
//02/ 10/ 2024
#include "StudentScore.h"
#include <iostream>
using namespace std;

namespace std
{
    int max(int arr[], int size)
    {
        int max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    int min(int arr[], int size)
    {
        int min = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }

    double avg(int arr[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return (double)sum / size;
    }

    void aboveAverage(int arr[], string names[], int size)
    {
        double average = avg(arr, size);
        cout << "Students with grades above average (" << average << "): " << endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > average)
            {
                cout << names[i] << " scored " << arr[i] << endl;
            }
        }
    }

    void compare(int arr[], string names[], string stud1, string stud2, int size)
    {
        int grade1 = -1, grade2 = -1;
        for (int i = 0; i < size; i++)
        {
            if (names[i] == stud1)
                grade1 = arr[i];
            if (names[i] == stud2)
                grade2 = arr[i];
        }

        if (grade1 == -1 || grade2 == -1)
        {
            cout << "Error: One or both students not found." << endl;
        }
        else
        {
            cout << stud1 << " scored " << grade1 << ", " << stud2 << " scored " << grade2 << endl;
            if (grade1 > grade2)
                cout << stud1 << " has a higher score." << endl;
            else if (grade1 < grade2)
                cout << stud2 << " has a higher score." << endl;
            else
                cout << "Both students have the same score." << endl;
        }
    }
}

void fillArr(int arr[], string names[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter the grade for " << names[i] << ": ";
        cin >> arr[i];
    }
}

