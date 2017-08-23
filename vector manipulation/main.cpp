#include <iostream>
#include"vectorClass.h"
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    vectorClass* vectorsObjects[1];
    vector<double>vecToPass={};
    vector<double>vecToAdd;
    vectorsObjects[0]=new vectorClass(vecToPass);
    cout<<"SELECT:"<<endl;
    cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
    cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
    int choiceMade;
    cin>>choiceMade;
 while(choiceMade!=0)
 {
     switch(choiceMade)
     {
      case 1:
      int n;
      cout<<"Enter the dimension of the vector:  ";
      cin>>n;
      for(int i=0;i<n;i++)
      {
        double element;
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin>>element;
        vectorsObjects[0]->createVector(element);
      }
         //request user to input another choice
         cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
         cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
         cin>>choiceMade;
    break;
    //multiply the current vector by a scalar
    case 2:
        double scalar;
        cout<<"Enter a scalar: ";
        cin>>scalar;
        cout<<endl;
        vectorsObjects[0]->multipliyByScalar(scalar);
        //request user to input another choice
        cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
        cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
        cin>>choiceMade;
    break;
    //display the vector
    case 3:
         vectorsObjects[0]->displayVector();
         //request user to input another choice
         cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
         cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
         cin>>choiceMade;
    break;
    //create a second vector
    //for summing to first vector
    case 4:
        for(int i=0;i<vectorsObjects[0]->vectorSize();i++)
        {
        double element;
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin>>element;
        vecToAdd.push_back(element);
        }
        vectorsObjects[0]->addVectors(vecToAdd);
        //request user to input another choice
        cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
        cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
        cin>>choiceMade;
    break;
    //modify the element
    case 5:
        if(vectorsObjects[0]->vectorSize()!=0)
        {
         cout<<"Enter the index of element to modify: ";
         int index;
         cin>>index;
         cout<<"Enter the new element: ";
         double element;
         cin>>element;
         vectorsObjects[0]->modifyElement(index,element);
         cout<<"1 to create a vector \n2 to multiply by vector\n3 to display vector\n4 to add a vector to the current vector\n";
         cout<<"5 to modify an element in the vector\n6 to end program\n"<<endl;
         cin>>choiceMade;
        }
        else
        {
         cout<<"THE CURRENT VECTOR IS EMPTY:\ncreate a new vector"<<endl;
         choiceMade=1;
        }
    break;
    //break the operations
    case 6:
        exit(0);
    break;
    //in event of a wrong choice
    default:
        cout<<"Make a correct choice"<<endl;
    break;

   }
}
  return 0;
}
