#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()

{
    char startingTerminal;
    string expression;//="af/ab/cb/fa/dc/";
    int countSlashes;

    cout<<"Enter the starting terminal:"<<endl;
    cin>>startingTerminal;

    cout<<"Enter the expression and please do use '/' to differentiate between expressions and please add a '/' at the end of the expression:"<<endl;
      cin.get();
    getline(cin,expression);


    countSlashes=count(expression.begin(),expression.end(),'/');



int slashPos;

string holdExpression;
string alphaStr;
string betaStr;


    for(int i=0;i<countSlashes+1;i++)
    {
    slashPos=expression.find("/");

    holdExpression=expression.substr(0,slashPos+1);

    expression.erase(0,slashPos+1);

    //alpha conditons



    if(holdExpression[holdExpression.length()-2]==startingTerminal)
    {

        alphaStr=alphaStr+holdExpression;


        for(int i=0;i<holdExpression.length();i++)
       {
        holdExpression.clear();
       }
    }




    if(holdExpression[0]==startingTerminal)
    {

        swap(holdExpression[0],holdExpression[holdExpression.length()-2]);

        alphaStr=alphaStr+holdExpression;

          for(int i=0;i<holdExpression.length();i++)
          {
           holdExpression.clear();
          }

    }



// beta conditions

    bool flag=0;

    for(int j=0;j<holdExpression.length();j++)
    {
       if(holdExpression[j]!=startingTerminal)
       {
          flag=1;
       }
       else
       {
           flag=0;
       }

    }

    if(flag==1)
    {
        holdExpression.erase(holdExpression.length()-1);

        holdExpression=holdExpression+startingTerminal+'/';


        betaStr=betaStr+holdExpression;

          for(int i=0;i<holdExpression.length();i++)
       {
        holdExpression.clear();
       }
    }






    }

   cout<<"alpha= "<<alphaStr<<endl;
   cout<<"beta= "<<betaStr<<endl;

    return 0;
}
