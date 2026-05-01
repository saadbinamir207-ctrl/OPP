#include <iostream>
#include <string>
using namespace std;

float percentage(float pf, float ict, float english, float pakStudies, float calculus, float physics) {
    return (pf + ict + english + pakStudies + calculus + physics) / 6;
}

float gpa(float per) {
    if(per >= 80)
    return 4.0;
    else if(per >= 73)
    return 3.5;
    else if(per >= 63)
    return 3.0;
    else if(per >= 50)
    return 2.0;
    else
    return 0.0;
}

int main() {
    float pf, ict, english, pakStudies, calculus, physics;

    cout << "Enter marks for the following 6 subjects: \n";
    cout << "PF: ";
    cin >> pf;
    cout << "ICT: ";
    cin >> ict;
    cout << "English: ";
    cin >> english;
    cout << "Pak Studies: ";
    cin >> pakStudies;
    cout << "Calculus: ";
    cin >> calculus;
    cout << "Physics: ";
    cin >> physics;

    float per = percentage(pf, ict, english, pakStudies, calculus, physics);
    float GPA = gpa(per);

    cout << "\n--- Results ---\n";
    cout << "Percentage = " << per << "%\n";
    cout << "GPA = " << GPA << endl;
    
    return 0;
}
