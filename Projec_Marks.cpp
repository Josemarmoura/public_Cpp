// 2023/Fab/13. 
// Code made by Josemar Moura, 
#include <iostream> 
#include <stdlib.h> //system("clear"); 
#include <string> 
#include <cstdio> 
#include <time.h> 
#include <chrono> 
#include <thread> 

using namespace std; 

void timer3() 
{ 
    //int dura;
	chrono::milliseconds dura( 3000 ); 
    this_thread::sleep_for( dura ); 
} 

void timer10() 
{ 
    //int dura;
	chrono::milliseconds dura( 10000 ); 
    this_thread::sleep_for( dura ); 
}
 
// information about the student 
void student_name() 
{ 

    string first_name; 
    string last_name; 
    cout<<"What is your first name?"; 
    cin >> first_name; 
    system("cls"); 
    cout<<"What is your last name?"; 
    cin >> last_name; 
    system("cls"); 
    cout<<"OK, "<<first_name<<" "<<last_name<<". Now, I need more information! Let's go!"<< endl; 
} 

// information about the course and marks 
void course() 
{  
    int num_courses; 
    cout<< "Enter the number of courses:"; 
    cin>>num_courses; 
	string arr[num_courses]; 
	cout<<"Enter name's course:"<<endl; 
	for(int x = 0; x<num_courses;x++) 
	{ 
	    cin>>arr[x]; 
	} 
    system("cls"); 
	cout<<"This is your list of courses:\n"; 
	for (int x = 0; x< num_courses; x++)  
		cout << arr[x] << "\n";  
} 
 
// ATTENDANCE 

void attendance() 
{ 
int id, sub; 
float marks, total=0, per; 
cout<<"Now, enter you Student ID:"; 
cin>>id; 
cout<<"Enter the number of subjects:"; 
cin>>sub; 
for(int i=0; i<sub;i++) 

{ 
    cout<<"Enter each subject marks:"<<i++; 
    cin>>marks; 
    total=total+marks; 
    per=(total/(sub*10)); 
} 
    cout<<"Ok! Now we need another information!"<< endl; 
} 

// MAIN 
int main() 
{ 
    string ready_question; 
    cout<<"Hello!"<<endl; 
    timer3(); 
    system("cls"); 
    cout<<"Welcome to the C++ course!"<< endl; 
    timer10(); 
    system("cls"); 
    cout<<"This is a program to imput data about students."<< endl; 
    timer10(); 
    system("cls"); 
    cout<<"Now, we need some information! Are you ready?"<< endl; 
    timer3(); 
    cout<<"You can answer Y or N, ok?"<< endl; 
    cin>> ready_question; 
    if (ready_question == "N" || ready_question == "n") 
    {return 0;} 
    else if (ready_question == "Y" || ready_question == "y") 
    {"Let's go!";} // THIS LINE DON'T WORK! 
    timer3(); 
    system("cls"); 
    student_name(); 
    timer3(); 
    course(); 
    return 0; 
} 
