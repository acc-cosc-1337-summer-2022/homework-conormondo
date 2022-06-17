//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here
int get_grade_points(string letter_grade){

    int grade_point;

    if (letter_grade == "A" || letter_grade == "a") {
        grade_point = 4;
    }
    else if (letter_grade == "B" || letter_grade == "b") {
        grade_point = 3;
    }
    else if (letter_grade == "C" || letter_grade == "c") {
        grade_point = 2;
    }
    else if (letter_grade == "D" || letter_grade == "d") {
        grade_point = 1;
    }
    else {
        grade_point = 0;
    }

    return grade_point;
}

double calculate_gpa(int credit_hours, double credit_points)
{
    return credit_points / credit_hours;
}