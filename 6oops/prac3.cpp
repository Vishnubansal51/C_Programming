#include<iostream>
using namespace std;

class CollegeCourse
{
   string courseID;
   char grade;
   int credits,gradePoints,honorPoints;
   
   public:
   CollegeCourse(string CID,char g, int credits);
   void set_CourseId(string CID){
       courseID=CID;
   }
   void set_Grade(char g){
       grade=g;
   }
   void set_Credit(int cr){
       credits=cr;
   }
   int calculateGradePoints(char g){
       if(g=='A'|| g=='a')gradePoints= 10;
       else if(g=='B'|| g=='b')gradePoints= 9;
       else if(g=='C'|| g=='c')gradePoints= 8;
       else if(g=='D'|| g=='d')gradePoints= 7;
       else if(g=='E'|| g=='e')gradePoints= 6;
       else if(g=='F'|| g=='f')gradePoints= 5;
       return gradePoints;
   }
   int calculateHonorPoints(int gp,int cr){
       honorPoints=gp*cr;
       return honorPoints;
   }
   void display(){
       cout<<gradePoints<<" "<<honorPoints<<endl;
   }
 
   
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse c(CID, g ,credits);
    string courseID;
    int gp;
    char grade;
    int credits;
    cin>>courseID>>grade>>credits;
    c.set_CourseId(courseID);
    c.set_Grade(grade);
    c.set_Credit(credits);
    gp=c.calculateHonorPoints(grade);
    c.calculateHonorPoints(gp,credits);
    c.display();
    }
    return 0;
}