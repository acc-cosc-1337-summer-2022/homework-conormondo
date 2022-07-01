//write include statements
#include "decisions.h"

using std::cin;
using std::cout;
using std::string;

int main() 
{
	int hours_in;
	string grade_in;

	int total_credit_points = 0;
	int total_credit_hours = 0;

	do {
		//Input
		cout<<"Enter Grade or type \"exit\"... "<<"\n";
		cin>>grade_in;

		if(grade_in == "exit"){
			break;
		};

		cout<<"Enter hours... "<<"\n";
		cin>>hours_in;

		//Process
		int credit_points = get_grade_points(grade_in);

		total_credit_points += credit_points * hours_in;
		total_credit_hours += hours_in;

	} while (grade_in != "exit");

	//Ouput
	cout<<"Total Points: "<<total_credit_points<<"\n";
	cout<<"Total Hours: "<<total_credit_hours<<"\n";

	cout<<"Your cumulative GPA is "<<calculate_gpa(total_credit_hours, total_credit_points)<<"\n";
	
	return 0;
}