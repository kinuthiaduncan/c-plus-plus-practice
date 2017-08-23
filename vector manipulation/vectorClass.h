#ifndef VECTORCLASS_H
#define VECTORCLASS_H

#include<vector>
using namespace std;
class vectorClass
{
public:
    // class constructor
    vectorClass(vector<double>);
    ////class destructor
    ~vectorClass();
    //set and get accessors
    void setVector(vector<double>);
    vector<double> getVector();
    //create a vector defined by user
    void createVector(double);
    //modify  element in index i defined by user
    void modifyElement(int,double);
    //multiply the vector by user
    void multipliyByScalar(double);
    //display the vector
    void displayVector();
    //get the vector size
    int vectorSize();
    //add a vector to current vector
    void addVectors(vector<double>);
private:
    vector<double> nDimensionVector;
};
#endif // VECTORCLASS_H
