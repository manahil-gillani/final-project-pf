//
//  main.cpp
//  final project
//
//  Created by syeda manahil fatima on 11/12/2022.
//

#include <iostream>
#include<iomanip>
const int r=3;                               //declaring globally
using namespace std;

void display(int array[r][r], int c)                   // function definition
{
    for(int i=0; i<c; i++)
    {                                             //function body
        for(int j=0; j<c;j++)
        {
           cout<<array[i][j] <<'\t';           //to print correct values
        }
        cout<<endl;
    }
}

void symmetric(int array[r][r],int c)                //function to check if a matrix is symmetric or not
{
    int count=0;                             //declaring and initializing a counter
  for(int i=0; i<c;i++){
     for(int j=0; j<c;j++){
         if(array[i][j]==array[j][i]){     //checking transpose of the matrix. if the original matrix and transpose is same than it will be a symmetric matrix
             count=count+1;
       }
    }
  }
    if(count==c*c){                  //condition is made to check if the counter is equal to the total number of elements of matrix. if equal than it means all values are verified
        cout<<"it is a symmetric matrix"<<endl;
    }
    else
        cout<<"not a symmetric matrix"<<endl;
}

using namespace std;
int main()
{
    int m;
    int r1;
   // double determ;
    unsigned int num;                            //used unsigned int because it only takes positive numbers
    
    cout<<"enter order of matrix"<<endl;        //input of matrix no. of rows and columns
   cin>>m;
    cin>>r1;
    
    
    if(m==r1){                                   //condition to make sure if it is a square matrix
        int matrix[m][r];
        cout<<"enter values of matrix"<<endl;
        for(int i=0; i<m; i++){                //loop for row input of matrix
            for(int j=0; j<r1;j++){             //loop for column input of matrix
                cin>>matrix[i][j];
            }
        }
        
        cout<<"enter digit from 1-7"<<endl<<"✈︎to display press '1'"<<endl<<"✈︎to check if symmetric press '2'"<<endl<<"✈︎to check if identity matrix press '3'"<<endl<<"✈︎to find determinant press '4'"<<endl<<"✈︎to determine adjoint press '5'"<<endl<<"✈︎to determine inverse press '6'"<<endl<<"✈︎to determine the solution press '7'"<<endl<<"✈︎to exit press '8'"<<endl;
        
        for(int i=0; i!=8; i++)          //using ascii code of 8. the loop will not terminate until 8 is entered
        {                            //to take input from user till the user does not want to exit the program
            cout<<"enter action number to be performed:";
        cin>>num;
            cout<<endl;
            
        if(num>0 && num<8)                    //condition to check the correct option is entered
       {
           
           switch(num){                       //switch statement to check which funtion to use
            case 1:
                                                  //to display output
               display(matrix, r) ;         //function calling by using pointers
                break;
            case 2:
              symmetric(matrix,r);       //to check if it is a symmetric matrix
                break;
            case 3:
               //     identity(matrix,r);    //function call to check if it is an identity matrix
                break;
            case 4:
                //    determ=determinant(matrix,r);
               //     cout<<"the determinant is="<<determ<<endl;     //function to calculate determinant of the matrix
                break;
            case 5:
                  //  adjoint(matrix,r);         //function call to calculate the adjoint of the matrix
                break;
            case 6:
                 //  inverse(matrix,r); //function call to calculate invere of the matrix
                break;
            case 7:
                  //  solution(matrix,r);       //function call solve the matrix
                break;
            }
           }
            
        else if(num==8){
            break;                     //if user enters 8 it exits the program
        }
            
        else
            cout<<"incorrect number entered"<<endl;
        }
    }
    
    else
        cout<<"only enter square matrix"<<endl;
    
    return 0;
}



