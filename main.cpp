//#include <bits/stc++.h>

#include<iostream>
using namespace std;
char matrix [3][3]={'1','2','3','4','5','6','7','8','9'}; // this shows that we are going to make the game containing the element from 1 to 9 
 char player ='X';
 int n;
void Draw()
{   // displays the value of the program  from the matrix above
   cout<< "   "<<endl;
    for (int i=0; i<3 ;i++)
    {
        for (int j=0; j<3 ;j++)
        {
            cout << matrix [i][j]<<" ";

        }
       cout << endl;
    }

}

void Input()   // inserting the values according to the wish of the player ,so that the game goes on till a player is decided as the winner 
{
   
   int a ;
   cout<<" enter the number you want to insert"<< endl;
   cin>>a;
    if (a==1)
    {
      if ( matrix[0][0]=='1')
        matrix[0][0]=player;
    
    else 
    {
      cout<<" the number has already been entered, please try another number "<<endl;
       Input();
    }
    }
     if (a==2)
    {
      if ( matrix[0][1]=='2')
       matrix[0][1]=player;
    
     else 
     {
        cout<<" the number has already been entered, please try another number "<<endl;
         Input();
     }
    }
            
    if(a==3)
    {
      if( matrix[0][2]=='3')
       matrix[0][2]=player;
    
     else 
     {
      cout<<" the number has already been entered, please try another number "<<endl;
       Input();
     }
    }
     if(a==4)
    {
    if(matrix[1][0]=='4')
       matrix[1][0]=player;
   
    else 
    {
    cout<<" the number has already been entered, please try another number "<<endl;
     Input();
  }
  }
 if(a==5)
 {
   if( matrix[1][1]=='5')
     matrix[1][1]=player;
 
  else 
    {
     cout<<" the number has already been entered, please try another number "<<endl;
      Input();
    }
}
  if(a==6)
 {
  if(matrix[1][2]=='6')
    matrix[1][2]=player;
 
  else 
 {
  cout<<" the number has already been entered, please try another number "<<endl;
   Input();
 }
}
 if(a==7)
 {
  if( matrix[2][0]=='7')
  matrix[2][0]=player;
 
  else 
  {
    cout<<" the number has already been entered, please try another number "<<endl;
     Input();
  }
}
   if(a==8)
  {
   if(matrix[2][1]=='8')
    matrix[2][1]=player;
  
  else 
 {
  cout<<" the number has already been entered, please try another number "<<endl;
   Input();
 }
}
   if(a==9)
 {
  if( matrix[2][2]=='9')
    matrix[2][2]=player;
  
  else 
  {
  cout<<" the number has already been entered, please try another number "<<endl;
   Input();
 }
}
}
   
 void TogglePlayer()    // after a player is given X as denotion we give the next player O 
 {
     if (player=='X')
     player='O';
 
  else 
    player='X';
 }

char Win()
{  // For the first player : Checking all the sides to know whether the X has won or not .
     if(matrix[0][0]== 'X' && matrix[0][1]=='X'&& matrix[0][2]=='X')
      return 'X';
     if(matrix[1][0]== 'X' && matrix[1][1]=='X'&& matrix[1][2]=='X')
      return 'X';
     if(matrix[2][0]== 'X' && matrix[2][1]=='X'&& matrix[2][2]=='X')
      return 'X';
     if(matrix[0][0]== 'X' && matrix[1][0]=='X'&& matrix[2][0]=='X')
      return 'X';
    if(matrix[0][1]== 'X' && matrix[1][1]=='X'&& matrix[2][1]=='X')
      return 'X';
     if(matrix[2][0]== 'X' && matrix[2][1]=='X'&& matrix[2][2]=='X')
      return 'X';
     if(matrix[0][2]== 'X' && matrix[1][1]=='X'&& matrix[2][0]=='X')
      return 'X';
     if(matrix[0][0]== 'X' && matrix[1][1]=='X'&& matrix[2][2]=='X')
        return 'X';
      /*  // if it is not the first player 

        if(matrix[0][0]!= 'X' && matrix[0][1]!='X'&& matrix[0][2]!='X')
      return ;
     if(matrix[1][0]!= 'X' && matrix[1][1]!='X'&& matrix[1][2]!='X')
      return '';
     if(matrix[2][0]!= 'X' && matrix[2][1]!='X'&& matrix[2][2]!='X')
      return '';
     if(matrix[0][0]!= 'X' && matrix[1][0]!='X'&& matrix[2][0]!='X')
      return '';
    if(matrix[0][1]!= 'X' && matrix[1][1]!='X'&& matrix[2][1]!='X')
      return '';
     if(matrix[2][0]!= 'X' && matrix[2][1]!='X'&& matrix[2][2]!='X')
      return '';
     if(matrix[0][2]!= 'X' && matrix[1][1]!='X'&& matrix[2][0]!='X')
      return '';
     if(matrix[0][0]!= 'X' && matrix[1][1]!='X'&& matrix[2][2]!='X')
        return '';*/
     //  For the second player : Checking all the sides to know whether the O has won or not .
    if(matrix[0][0]== 'O' && matrix[0][1]=='O'&& matrix[0][2]=='O')
       return 'O';
     if(matrix[1][0]== 'O' && matrix[1][1]=='O'&& matrix[1][2]=='O')
       return 'O';
     if(matrix[2][0]== 'O' && matrix[2][1]=='O'&& matrix[2][2]=='O')
       return 'O';
     if(matrix[0][0]== 'O' && matrix[1][0]=='O'&& matrix[2][0]=='O')
       return 'O';
     if(matrix[0][1]== 'O' && matrix[1][1]=='O'&& matrix[2][1]=='O')
       return 'O';
     if(matrix[2][0]== 'O' && matrix[2][1]=='O'&& matrix[2][2]=='O')
       return 'O';
     if(matrix[0][2]== 'O' && matrix[1][1]=='O'&& matrix[2][0]=='O')  // checking the diagonals 
       return 'O';
     if(matrix[0][0]== 'O' && matrix[1][1]=='O'&& matrix[2][2]=='O')
       return 'O';

       // if it's not the second player 
        /*if(matrix[0][0]!= 'O' && matrix[0][1]!='O'&& matrix[0][2]!='O')
      // return '';
     if(matrix[1][0]!= 'O' && matrix[1][1]!='O'&& matrix[1][2]!='O')
       return '';
     if(matrix[2][0]!= 'O' && matrix[2][1]!='O'&& matrix[2][2]!='O')
       return '';
     if(matrix[0][0]!= 'O' && matrix[1][0]!='O'&& matrix[2][0]!='O')
       return '';
     if(matrix[0][1]!= 'O' && matrix[1][1]!='O'&& matrix[2][1]!='O')
       return '';
     if(matrix[2][0]!= 'O' && matrix[2][1]!='O'&& matrix[2][2]!='O')
       return '';
     if(matrix[0][2]!= 'O' && matrix[1][1]!='O'&& matrix[2][0]!='O')  // checking the diagonals 
       return '';
     if(matrix[0][0]!= 'O' && matrix[1][1]!='O'&& matrix[2][2]!='O')
       return '';*/

     return '/';
     
}
 
int main()
{ 
    n=0;
    Draw();
    while(1)
    {
       n++;
        Input();
        Draw();
          if (Win()== 'X'){
            cout<< " X wins "<< endl;
            break;
        }
         else if (Win()== 'O')
         {
              cout<<"O wins " << endl;
              break;
         }
         else if(Win()=='/' && n== 9)
        {
          cout<<" it's a draw " << endl;
              break;
        }
         
        TogglePlayer();
        
    }
     
    
    system("pause");
    return 0;
}
