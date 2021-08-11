#include <iostream>
using namespace std;

float median(float p_median[],int p_num)
{
    int temp;
    for(int j; j<p_num;j++)
    {
        for(int i=0;i<p_num-1;i++)
        {
            if(p_median[i] > p_median[i+1])
            {
                temp = p_median[i];
                p_median[i] = p_median[i+1];
                p_median[i+1] = temp;
            }
        }    
    }
    cout<<"\n****************************\n";
    for(int i=0;i<p_num;i++)
        cout<< p_median[i] << " ";
    return(0);
}

int main()
{
    bool a;
    cout<<"Test OR exam.";

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
    median(marks,no);
    //cout<<"The mode is: " << mode();
}