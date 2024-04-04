#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names;
    vector<double> grades;
    string name;
    double grade;

    cout << "Enter student names and their corresponding grades. Enter 'done' when finished." << endl;

    while (true) {
        cout << "Student name (or 'done'): ";
        getline(cin, name);
        if (name == "done")
            break;

        names.push_back(name);

        cout << "Grade: ";
        cin >> grade;
        cin.ignore(); // Clear the newline character from the input buffer

        grades.push_back(grade);
    }

    if (names.empty()) {
        cout << "No student records found." << endl;
        return 0;
    }

    // Calculate average grade
    double total = 0;
    for (size_t i = 0; i < grades.size(); ++i) {
        total += grades[i];
    }
    double average = total / grades.size();

    // Find highest and lowest grades
    double highest = *max_element(grades.begin(), grades.end());
    double lowest = *min_element(grades.begin(), grades.end());

    // Display results
    cout << "\n--- Student Grades Summary ---" << endl;
    cout << "Student Grades:" << endl;
    for (size_t i = 0; i < names.size(); ++i) {
        cout << names[i] << ": " << grades[i] << endl;
    }
    cout << "\nAverage Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}

