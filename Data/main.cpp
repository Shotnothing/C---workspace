#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("text.txt","w");
    cout<<"Type characters to write into file"<<endl;
    cout<<"Press Esc to close file\n\n\n"<<endl;

    while(ch!=27) {

      ch=getche();

      if(ch==27) {
         putc(' ',fp);
      } else {
         putc(ch,fp);
      }


      if(ch==13) {
         cout<<"\n";
         putc('\n',fp);

      }

    }// end of while loop

    fclose(fp);
    cout<<"\n\n\n";
    return 0;
}
