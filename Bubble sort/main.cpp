#include<iostream>

using namespace std;

int main(){

      int array[4];
      cout<<"Enter 4 numbers randomly : "<<endl;
      for(int i=0; i<4; i++)
      {

     cout<<"Number "<<i+1<<":  ";
       cin>>array[i];
      }
      cout<<endl;

     int lol;
     for(int i2=0; i2<=4; i2++)
   {
     for(int j=0; j<4; j++)
     {

           if(array[j]>array[j+1])
       {
        lol=array[j];
        array[j]=array[j+1];
        array[j+1]=lol;
       }
     }
   }

      cout<<"Sorted Array is: "<<endl<<endl;
     for(int i3=0; i3<4; i3++)
   {
    cout<<array[i3]<<", ";
   }
   cout<<endl<<endl;

return 0;
}
