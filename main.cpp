include <iostream>

using namespace std;
class subs{
public:
    int marks;
    char name;
    };
    /*double average(){
        return marks / 5;
    };
    double total(){
    return marks;
    };*/
int main()
{
    subs maths;
    subs eng;
    subs swa;
    subs chem;
    subs geo;
    subs first student;

  cout<<"enter the name of first student"<<endl;
  cin>>first student.name;
  cout<<"enter his/her marks following this order: math,eng,swa,chem,geo"<<endl
  cin>>math.marks;
  cin>>eng.marks;
  cin>>swa.marks;
  cin>>chem.marks;
  cin>>geo.marks;
  cout<<first student.name<<"has a total marks of "<<marks.total()<<"his average is :"<<marks.averag()e<<endl
   cout<<"enter the name of second student"<<endl
   cin>>second student.name;
    cout<<"enter his/her marks following this order: math,eng,swa,chem,geo"<<endl
  cin>>math.marks;
  cin>>eng.marks;
  cin>>swa.marks;
  cin>>chem.marks;
  cin>>geo.marks;
  cout<<second student.name<<"has a total marks of "<<marks.total<<"his average is :"<<marks.average<<
  return 0;








  #include <iostream>

using namespace std;
class Students
{
public:
char name[20];
char admno[10];
int eng,math,geo,chem,swa;

double total()
{
return eng+math+chem+geo+swa;
}
double average()
{
return (eng+math+chem+geo+swa)/5;
}
};
int main()
{
Students student1;
Students student2;
//Input for Student 1
cout<<"Enter name and Admno for student 1"<<endl;
cin>>student1.name;
cin>>student1.admno;
cout<<"Enter marks for subjects"<<endl;
cout<<"English";
cin>>student1.eng;
cout<<"Chem";
cin>>student1.chem;
cout<<"Math";
cin>>student1.math;
cout<<"Geography";
cin>>student1.geo;
cout<<"Swahili";
cin>>student1.swa;

//Input for student 2
cout<<"Enter name and Admno for student 2"<<endl;
cin>>student2.name;
cin>>student2.admno;
cout<<"Enter marks for subjects"<<endl;
cout<<"English";
cin>>student2.eng;
cout<<"Chem";
cin>>student2.chem;
cout<<"Math";
cin>>student2.math;
cout<<"Geography";
cin>>student2.geo;
cout<<"Swahili";
cin>>student2.swa;

//Computations and Displays
cout<<"Student 1 name = "<<student1.name<<endl;
cout<<"Student 1 admno = "<<student1.admno<<endl;
cout<<"Total = "<<student1.total()<<", Average = "<<student1.average()<<endl;
cout<<"Student 2 name = "<<student2.name<<endl;
cout<<"Student 2 admno = "<<student2.admno<<endl;
cout<<"Total = "<<student2.total()<<", Average = "<<student2.average()<<endl;

