#include<iostream>

using namespace std;


        int main()
        {

         int number,count=0;
cout<<"Number:  ";
          cin>>number;
           for(int a=1;a<=number;a++)
               {
                if(number%a==0)
                   {
                  count++;
                   }
               }
       if(count==2)
         {
          cout<<"Prime number. \n";
         }
       else
         {
          cout<<"Not a prime number. \n";
         }

       }
