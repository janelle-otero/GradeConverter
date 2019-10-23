#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    // claiming int variables for homework, recitation, and test gradess
    int HW1, HW2, HW3, HW4, HW5, HW6, HW7, REC1, REC2, REC3, REC4, REC5, REC6, TEST1, TEST2, FINAL;
    // claiming homework, test, and course averages as doubles
    double HW_Avg, Test_Avg, Course_Avg;

    //asking user to input each of their homework scores
    cout << "Welcome to the Grade Calculator!";

    cout << "\nHOMEWORK GRADES -->";

    cout << "\nHomework 1:";
    cin >> HW1;
    cout << "Homework 2:";
    cin >> HW2;
    cout << "Homework 3:";
    cin >> HW3;
    cout << "Homework 4:";
    cin >> HW4;
    cout << "Homework 5:";
    cin >> HW5;
    cout << "Homework 6:";
    cin >> HW6;
    cout << "Homework 7: ";
    cin >> HW7;

    //asking user to input each of their recitation scores
    cout << "RECITATION -->";

    cout << "\nRecitation 1: ";
    cin >> REC1;
    cout << "Recitation 2: ";
    cin >> REC2;
    cout << "Recitation 3: ";
    cin >> REC3;
    cout << "Recitation 4: ";
    cin >> REC4;
    cout << "Recitation 5: ";
    cin >> REC5;
    cout << "Recitation 6: ";
    cin >> REC6;

    //asking user to input each of their test scores
    cout << "TEST GRADES -->";

    cout << "\nMidterm I: ";
    cin >> TEST1;
    cout << "Midterm II: ";
    cin >> TEST2,
    cout << "Final: ";
    cin >> FINAL;

    //asking for extra credit
    // if 'y' or 'Y' given, ask how many points of extra credit
    char ec;
    double creditNum;
    char grade;
    cout << "\nIs there any extra credit to add in? (Y or N) --> ";
    cin >> ec;

    if (ec == 'y' || ec == 'Y') {
        cout << "How many extra credit points should be added? --> ";
        cin >> creditNum;
    }

    //if random char given that isn't 'y', 'Y', 'n', 'N', abort entire program
    if (ec != 'Y' && ec != 'y' && ec != 'N' && ec != 'n') {
        cout << "Invalid option, exiting program.";
        return 0;
    }

    //calculating averages of homeworks, tests, and the course
    HW_Avg = ((HW1 + HW2 + HW3 + HW4 + HW5 + HW6 + HW7 + REC1 + REC2 + REC3 + REC4 + REC5 + REC6 + creditNum))/820 * 100;

    Test_Avg = ((TEST1 * 17.5) + (TEST2 * 17.5) + (FINAL * 25)) / 60;

    Course_Avg = ((TEST1 * .175) + (TEST2 * .175) + (FINAL * .25) + (HW_Avg * .40));


    //calculating the letter grade
    if (Course_Avg >= 90){
            grade = 'A';
        } else if (Course_Avg >= 80 && Course_Avg <= 89){
            grade = 'B';
        } else if (Course_Avg >= 70 && Course_Avg <= 79){
        grade = 'C';
        } else if (Course_Avg >= 60 && Course_Avg <= 69){
        grade = 'D';
        } else if (Course_Avg <= 59){
        grade = 'F';
        }

    //printing out results but if text average was before or equal to a 69 the requirement was not met
    if (Test_Avg <= 69) {
        cout << "\nHomework Average: " << fixed << setprecision(2) << HW_Avg << "%";
        cout << "\nTest Average: " << fixed << setprecision(2) << Test_Avg << "%" " (!!Test average requirement not met, final course grade may differ!!)";
        cout << "\nCourse Average: " << fixed << setprecision(2) << Course_Avg << "%";
        cout << "\nCourse Grade: " << grade;
    } else if (Test_Avg >=70) {
        cout << "Homework Average: " << fixed << setprecision(2) << HW_Avg << "%";
        cout << "\nTest Average: " << fixed << setprecision(2) << Test_Avg << "%";
        cout << "\nCourse Average: " << fixed << setprecision(2) << Course_Avg << "%";
        cout << "\nCourse Grade: " << grade;
    }
}


