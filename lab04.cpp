#include <iostream>
#include <fstream>

using namespace std;



struct student 
{
 char firstName[10];
 char lastName[10];
 int age;
 double grade;
};

void loadInfo ( student *arr);
void highestGrade ( student *arr, int);
void lowestGrade( student *arr, int);
void averageGrade(student *arr, int);

int main()
{
    int studentNumber = 10;
    student values[10];
    student *sPtr = values;
    loadInfo(sPtr);
    lowestGrade(sPtr, studentNumber);
    highestGrade( sPtr, studentNumber);
    averageGrade(sPtr, studentNumber);
    return 0;
}

void loadInfo (student *arr)

{
    ifstream inFile;
    inFile.open("students");
    for (int i = 0; i < 10; i++)
    {
        inFile >> (*arr).firstName;
        inFile >> (*arr).lastName; 
        inFile >> (*arr).age;
        inFile >> (*arr).grade;   
        arr++;
    }
    inFile.close();
}

void lowestGrade( student *arr, int studentNumber)
{
    
    int index = 0;
    double lowest = 60;
    double j;
    
    while ( index < studentNumber)
    
    {
        if ((*arr).grade < lowest)
        {
            
            j = index;
        }
        arr++;
        index++;
    }
    
    for (index = 10; index != 0; index--)
    {
        arr--;
        
    } 
    
    for (index = 0; index != j; index++)
    {
        arr++;
    }
    
    cout << "Lowest grade: " << (*arr ).firstName  << " " << (*arr).lastName << " " << (*arr).age << " "<< (*arr).grade << endl;
}

void highestGrade( student *arr, int studentNumber)
{
    int index = 0;
    double highest = 70;
    double j;
    
    while ( index < studentNumber)
    
    {
       if ((*arr).grade > highest)
       {
           highest = (*arr).grade;
           j = index;
       }
       arr++;
       index++;
       
   }
       
      for (index = 10; index != 0; index--)
    {
        arr--;
        
    }
     
    for (index = 0; index != j; index++)
    {
        arr++;
    }
       
   
   cout << "Highest grade: " << (*arr ).firstName  << " " << (*arr).lastName << " " << (*arr).age << " "<< (*arr).grade << endl;


}



void averageGrade(student *arr, int studentNumber)
{
    
    int index = 0;
    double sum = 0;
    double average = 0;
    while (index < studentNumber)
    
    {
        
        sum = sum + (*arr).grade;
        index++;
        arr++;
    }
    
    average = sum / studentNumber;
    
    cout << "Average grade: " << average << endl;
}


