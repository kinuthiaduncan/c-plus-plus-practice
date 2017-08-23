#include"vectorClass.h"
#include<vector>
#include<cmath>
#include<iostream>
using namespace std;

vectorClass::vectorClass(vector<double> myVector)
{
  setVector(myVector);
}

void vectorClass::setVector(vector<double> receivedVector)
{
  nDimensionVector=receivedVector;
}

vector<double> vectorClass::getVector()
{
    return nDimensionVector;
}

void vectorClass::createVector(double vectorElement)
{
    nDimensionVector.push_back(vectorElement);
    setVector(nDimensionVector);
    cout<<endl<<endl;
}

void vectorClass::modifyElement( int vectorPosition,double newElement)
{
    nDimensionVector[vectorPosition]=newElement;
    setVector(nDimensionVector);
    cout<<"Current vector after modifying element at index "<<vectorPosition<<" :"<<endl;
    vectorClass::displayVector();
    cout<<endl<<endl;
}


void vectorClass::multipliyByScalar(double scalar)
{
    int i;
    for(i=0;i<nDimensionVector.size();i++)
    {
     nDimensionVector[i]=scalar*nDimensionVector[i];
    }
    //set the new value of vector
    setVector(nDimensionVector);
    cout<<"Current vector after multiplying with a scalar: "<<endl;
    vectorClass::displayVector();
    cout<<endl<<endl;

}

void vectorClass::displayVector()
{
    vector<double>currentVector=getVector();
    cout<<"The vector is : ";
    cout<<"(";
    for(int i=0;i<currentVector.size();i++)
    {
        cout<<currentVector[i]<<", ";
    }
    cout<<")"<<endl;
    cout<<endl<<endl;
}

int vectorClass::vectorSize()
{
    return nDimensionVector.size();
}
//method for adding current vector to another vector
void vectorClass::addVectors(vector<double>newVector)
{
    vector<double>currentVector=getVector();
    vector<double>sumOfVectors;
    vectorClass::displayVector();
    for(int i=0;i<currentVector.size();i++)
    {
        currentVector[i]+=newVector[i];
    }
    vectorClass::setVector(currentVector);
    cout<<"The Current vector after addition: "<<endl;
    vectorClass::displayVector();
    cout<<endl<<endl;
}

vectorClass::~vectorClass()
{

}
