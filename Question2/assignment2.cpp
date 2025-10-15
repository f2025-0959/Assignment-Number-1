#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   float sub1, sub2, sub3, sub4, sub5, total, sum;
   float per;
   int roll;
   string name;
   cout<<"Enter your name"<<endl;
   cin>>name;
   cout<<"Enter your roll number"<<endl;
   cin>>roll;
   cout << "Enter marks of your English subject" << endl;
   cin >> sub1;
   cout << "Enter marks of your Urdu subject" << endl;
   cin >> sub2;
   cout << "Enter marks of your Math subject" << endl;
   cin >> sub3;
   cout << "Enter mark of your Physics subject" << endl;
   cin >> sub4;
   cout << "Enter marks of your computer science subjec" << endl;
   cin >> sub5;
   cout << "Enter your total marks" << endl;
   cin >> total;
   sum = sub1 + sub2 + sub3 + sub4 + sub5;
   per = (sum / total) * 100;
   cout << "your percentage is" << per << endl;
   if (per >= 90)
   {
      cout << "your grade is A+\nyou are passed" << endl;
   }
   else if (per >= 80)
   {
      cout << "your grade is A\nyou are passed" << endl;
   }

   else if (per >= 70)
   {
      cout << "your grade is B\nyou are passed" << endl;
   }
   else if (per >= 60)
   {
      cout << "your grade is C\nyou are passed" << endl;
   }
   else if (per >= 50)
   {
      cout << "your grade is D\nyou are passed" << endl;
   }
   else if (per <= 50)
   {
      cout << "your grade is F\n you are fail" << endl;
   }
   cout<<"\n----------------------------\n";
   cout<<"REPORT CARD\n";
   cout<<"---------------------------\n";
   cout<<left<<setw(20)<<"Student Name:"<<name;
   cout<<right<<setw(20)<<"Roll number:"<<roll<<endl;
   cout<<left<<setw(20)<<"Subjects";
   cout<<left<<setw(20)<<"Marks"<<endl;
   cout<<left<<setw(20)<<"Engllish"<<sub1<<endl;
   cout<<left<<setw(20)<<"Urdu"<<sub2<<endl;
   cout<<left<<setw(20)<<"Math"<<sub3<<endl;
   cout<<left<<setw(20)<<"Physics"<<sub4<<endl;
   cout<<left<<setw(20)<<"computer science"<<sub5<<endl;
   cout<<left<<setw(20)<<"Total"<<total<<endl;
   cout<<left<<setw(20)<<"Obtain"<<sum<<endl;
    
    return 0;

}
