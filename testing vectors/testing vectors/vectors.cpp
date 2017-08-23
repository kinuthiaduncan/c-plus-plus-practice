#include<iostream>
using namespace std;
#define max 6
class vectors{
public:
    void setvector(int vect[max]){
    for(i=0;i<max;i++){
        vecarray[i]=vect[i];
    }
    }
    int getvector(){
    cout<<"(";
    for(i=0;i<max;i++){
        cout<<vecarray[i]<<"\t";
    }
    cout<<")"<<endl;
    }
    void changevalue(int position){
    cout<<"Please enter new value to replace the integer at the specified position"<<endl;
    cin>>value;
    vecarray[position]=value;
    cout<<"The new vector is: "<<endl;
     cout<<"(";
    for(i=0;i<max;i++){
        cout<<vecarray[i]<<"\t";
    }
    cout<<")"<<endl;
    }
    void scalarmultiply(int scalar){
    for(i=0;i<max;i++){
        newarray[i]=vecarray[i]*scalar;
    }
    cout<<"The vector after scalar multiplication"<<endl;
     cout<<"(";
    for(i=0;i<max;i++){
        cout<<newarray[i]<<"\t";
    }
    cout<<")"<<endl;
    }
    void addition(vectors v1, vectors v2){
    cout<<"The sum of the two vectors is: "<<endl;
    cout<<"(";
    for(i=0;i<max;i++){
        sum[i]=v1.vecarray[i]+v2.vecarray[i];
        cout<<sum[i]<<"\t";
    }
    cout<<")";
    }
private:
    int i=0, vecarray[max], newarray[max],value,sum[max];
};
int main(){
vectors firstvector;
vectors secondvector,thirdvector;
int vector[max],i=0,pos,scalar;
cout<<"Please enter random numbers to create a vector"<<endl;
for(i=0;i<max;i++){
    cin>>vector[i];
}
firstvector.setvector(vector);
secondvector.setvector(vector);
firstvector.getvector();
cout<<"Please enter the position of the element to be modified"<<endl;
cin>>pos;
firstvector.changevalue(pos);
cout<<"Enter a scalar to multiply your vector with"<<endl;
cin>>scalar;
firstvector.scalarmultiply(scalar);
return 0;
}
