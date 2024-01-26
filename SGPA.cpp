#include <iostream>
#include <cmath>
using namespace std;

// check if grade is between 0 and 100
bool valid(double grade)
{
      return (grade >= 0 && grade <= 100);
}

// input function with array and integer parameter
void gradeInput(double marks[], int n)
{
      // enter your grades
      cout << "Enter your grades: ";
      int i = 0;
      // entering grade numbers
      while (i < n)
      {
            cin >> marks[i];
            // while not valid
            while (!valid(marks[i])) // for each iteration parameter, grade = (marks[i])
            {
                  cout << "Invalid grade! enter between 0 to 100: " << endl;
                  // enter grade again
                  cin >> marks[i];
            }
            i++;
      }
}

// display function with array and integer parameter
void gradeDisplay(const double marks[], int n)
{
      // show your grades
      cout << "Your grades are: ";
      for (int i = 0; i < n; i++)
      {
            cout << marks[i] << " ";
      }
      cout << endl;
}

//function to calculate SGPA
void sgpa(const double marks[], int n)
{
      double sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum = sum + marks[i];
      }
      cout << "SGPA of this semester is: " << sum / (10 * n);
}
// main function
int main()
{
      int n;
      // number of grades
      cout << "How many grades do you have: " << endl;
      cin >> n;
      // array of size 'n'
      double marks[n];
      // calling input function
      gradeInput(marks, n);
      // calling display function
      gradeDisplay(marks, n);
      // calling sgpa function
      sgpa(marks, n);
      return 0;
}