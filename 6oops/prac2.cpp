//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// CollegeCourse Class 
class CollegeCourse
{
    
    //your code here
    private:
    int   credits;
    string courseID;
    char grade;
    
    
    public:
    int gp;

    CollegeCourse(string CID,char g,int cr)
    {
        credits= cr;
        courseID =  CID;
        grade= g;
    }
    string set_CourseID(string CID){courseID =  CID;}
    char set_Grade(char g){grade= g;}
    int  set_Credit(int cr){}
    
    int gradePoints(char g);
    int calculateHonorPoints(int gp, int cr){return gp*credits; }

    void display()

    {
        cout<<gradePoints(g)<<" ";
    }
    
    
};

//{ Driver Code Starts.
int CollegeCourse::gradePoints(char g)
{
    if (grade='a')
    return gp=10;
    else if(grade='b')
    return gp=9;
    else if(grade='c')
    return gp=8;
    else
    return gp=7;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse c("vishnu", 'a', 55);
    string courseID;
    int gp;
    char grade;
    int credits;
    cin>>courseID>>grade>>credits;
    c.set_CourseID(courseID);
    c.set_Grade(grade);
    c.set_Credit(credits);
    gp=c.gradePoints(grade);
    c.calculateHonorPoints(gp,credits);
    c.display();
    }
    return 0;
}

// } Driver Code Ends