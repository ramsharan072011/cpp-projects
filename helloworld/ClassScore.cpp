#include <iostream>
using namespace std;

int main()
{
    int a;
    int test=75;;
    char test_exam;
    bool test_exam_b;
    test_exam_f:
    
    cout<<"Test OR exam.(T/E)";
    cin>>test_exam;
    test_exam = toupper(test_exam);
    if(test_exam=='T')
    {
        test_exam_b = false;
    }
    else if(test_exam=='E')
    {
        test_exam_b = true;
    }
    else
    {
        goto test_exam_f;
    }
    int no, i;
    float per=0, total=0;
    cout<<"Enter number of students: ";
    cin>>no;
    float marks[no];
    cout<<"Enter marks of "<<no<<" subject: ";
    for(i=0; i<no; i++)
    {
        cin>>marks[i];
        total = total + marks[i];
    } 
    cout<<"The class average is: " << total/no;
    if(test_exam_b == false)
    {
        cout<<"Enter student number: ";
        cin>>a;
        cout<<"The percentage is " <<((marks[a-1])/test)*100<<"%.";
    }
    else
    {
        cout<<"Enter student number: ";
        cin>>a;
        cout<<"The percentage is " <<marks[a-1];
    }
}