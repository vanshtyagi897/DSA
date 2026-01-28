#include <iostream>
using namespace std;

// Convert marks to AKTU grade point
int gradePoint(int marks) {
    if (marks >= 90) return 10;
    else if (marks >= 80) return 9;
    else if (marks >= 70) return 8;
    else if (marks >= 60) return 7;
    else if (marks >= 50) return 6;
    else if (marks >= 45) return 5;
    else if (marks >= 40) return 4;
    else return 0;
}

int main() {
    int coa, de, ds, uhv, python, dstl;
    float gpa;

    cout << "Enter marks of subjects (0 - 100):\n";

    cout << "COA: "; cin >> coa;
    cout << "DE: "; cin >> de;
    cout << "DS: "; cin >> ds;
    cout << "UHV: "; cin >> uhv;
    cout << "Python: "; cin >> python;
    cout << "DSTL: "; cin >> dstl;

    gpa = (
        gradePoint(coa) * 4 +
        gradePoint(de) * 4 +
        gradePoint(ds) * 4 +
        gradePoint(uhv) * 3 +
        gradePoint(python) * 2 +
        gradePoint(dstl) * 3
    ) / 20.0;

    cout << "\nFinal GPA (AKTU) = " << gpa << endl;

    return 0;
}

