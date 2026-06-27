//Q. 4 : Program to generate marksheet
#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

struct Marksheet {
    int roll;
    string name;
    string branch;

    double math;
    double physics;
    double chemistry;
    double bee;       
    double pps;       
    
    double total;
    double percentage;
    string status;
};

Marksheet records[MAX_STUDENTS];
int studentCount = 0;

void addMarksheet() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nError: Storage full!\n";
        return;
    }

    int r;
    cout << "\nEnter Roll Number: ";
    cin >> r;

    for (int i = 0; i < studentCount; i++) {
        if (records[i].roll == r) {
            cout << "\nError: Roll Number already exists!\n";
            return;
        }
    }

    records[studentCount].roll = r;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, records[studentCount].name);

    cout << "Enter Branch: ";
    getline(cin, records[studentCount].branch);

    cout << "\nEnter Marks (Out of 100):\n";
    cout << "Math: ";        cin >> records[studentCount].math;
    cout << "Physics: ";     cin >> records[studentCount].physics;
    cout << "Chemistry: ";   cin >> records[studentCount].chemistry;
    cout << "BEE: ";         cin >> records[studentCount].bee;
    cout << "PPS: ";         cin >> records[studentCount].pps;

    records[studentCount].total = records[studentCount].math + 
                                  records[studentCount].physics + 
                                  records[studentCount].chemistry + 
                                  records[studentCount].bee + 
                                  records[studentCount].pps;

    records[studentCount].percentage = (records[studentCount].total / 500.0) * 100.0;

    if (records[studentCount].percentage >= 40.0 &&
        records[studentCount].math >= 30.0 &&
        records[studentCount].physics >= 30.0 &&
        records[studentCount].chemistry >= 30.0 &&
        records[studentCount].bee >= 30.0 &&
        records[studentCount].pps >= 30.0) {
        
        records[studentCount].status = "PASSED";
    } else {
        records[studentCount].status = "FAIL / PCP";
    }

    studentCount++;
    cout << "\nRecord saved successfully!\n";
}

void displayAllSummary() {
    if (studentCount == 0) {
        cout << "\nNo records found.\n";
        return;
    }

    cout << "\n=================================== RESULTS OVERVIEW ===================================\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "Roll: " << records[i].roll 
             << " | Name: " << records[i].name 
             << " | Branch: " << records[i].branch 
             << " | Total: " << records[i].total << "/500"
             << " | %: " << records[i].percentage << "%" 
             << " | Status: " << records[i].status << "\n";
    }
    cout << "========================================================================================\n";
}

void generateIndividualMarksheet() {
    if (studentCount == 0) {
        cout << "\nNo records available.\n";
        return;
    }

    int searchRoll;
    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    for (int i = 0; i < studentCount; i++) {
        if (records[i].roll == searchRoll) {
            cout << "\n======================================================================\n";
            cout << "                                  MARKSHEET\n";
            cout << "======================================================================\n";
            cout << " Roll Number: " << records[i].roll << "                   Branch: " << records[i].branch << "\n";
            cout << " Student Name: " << records[i].name << "\n";
            cout << "----------------------------------------------------------------------\n";
            cout << " Subject Code & Name                           Max Marks   Marks Obtained\n";
            cout << "----------------------------------------------------------------------\n";
            cout << " BAS103 : Mathematics-I                           100           " << records[i].math << "\n";
            cout << " BAS101 : Physics                                 100           " << records[i].physics << "\n";
            cout << " BAS102 : Chemistry                               100           " << records[i].chemistry << "\n";
            cout << " BEE101 : Basic Electrical Engineering            100           " << records[i].bee << "\n";
            cout << " BCS101 : Programming for Problem Solving         100           " << records[i].pps << "\n";
            cout << "----------------------------------------------------------------------\n";
            cout << " GRAND TOTAL: " << records[i].total << " / 500\n";
            cout << " PERCENTAGE : " << records[i].percentage << "%\n";
            cout << " RESULT STATUS: " << records[i].status << "\n";
            cout << "======================================================================\n";
            return;
        }
    }
    cout << "\nRecord not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== AKTU MARKSHEET SYSTEM ===\n";
        cout << "1. Add Student Marks\n";
        cout << "2. View Summary Sheet\n";
        cout << "3. Print Detailed Marksheet\n";
        cout << "4. Exit\n";
        cout << "Enter choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: addMarksheet(); break;
            case 2: displayAllSummary(); break;
            case 3: generateIndividualMarksheet(); break;
            case 4: cout << "\nExiting. Good luck!\n"; break;
            default: cout << "\nInvalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}