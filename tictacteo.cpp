#include<bits/stdc++.h>
using namespace std;
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
void Draw(){
    cout<<"\t\t\t"<<"TIC-TAC-TOE GAME "<<endl;
    cout<<"\t\t\t"<<a[0][0]<<"  | "<<a[0][1]<<"  | "<<a[0][2]<<"\n";
    cout<<"\t\t\t"<<"---|----|---"<<"\n";
    cout<<"\t\t\t"<<a[1][0]<<"  | "<<a[1][1]<<"  | "<<a[1][2]<<"\n";
    cout<<"\t\t\t"<<"---|----|---"<<"\n";
    cout<<"\t\t\t"<<a[2][0]<<"  | "<<a[2][1]<<"  | "<<a[2][2]<<"\n";
}
void Input(){
    int i;
    cout<<"It's "<<player<<" turn Press the number of the field\n";
    cin>>i;

    if (i == 1)
        a[0][0] = player;
    else if (i == 2)
        a[0][1] = player;
    else if (i == 3)
        a[0][2] = player;
    else if (i == 4)
        a[1][0] = player;
    else if (i == 5)
        a[1][1] = player;
    else if (i == 6)
        a[1][2] = player;
    else if (i == 7)
        a[2][0] = player;
    else if (i == 8)
        a[2][1] = player;
    else if (i == 9)
        a[2][2] = player;
}
void TogglePlayer(){
    if(player == 'X')
    player='O';
    else
    player='X';
}
char Win(){
    //FIRST PLAYER
    if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
    return 'X';
    if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
    return 'X';
    if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
    return 'X';
    
    if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
    return 'X';
    if(a[0][1]=='X' && a[1][1]=='X' && a[1][2]=='X')
    return 'X';
    if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
    return 'X';

    if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
    return 'X';
    if(a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X')
    return 'X';
    
    //SECOND PLAYER
     if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
    return 'O';
    if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
    return 'O';
    if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
    return 'O';
    
    if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
    return 'O';
    if(a[0][1]=='O' && a[1][1]=='O' && a[1][2]=='O')
    return 'O';
    if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
    return 'O';

    if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
    return 'O';
    if(a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='O')
    return 'O';
    
    return '/';
}
int main()
{ 
    n=0;   
    Draw();
    while(1){
        n++;
        Input();
        Draw();
        if(Win()=='X')
        {
            cout<<"X WINS!"<<endl;
            break;
        }
        else if(Win()=='O')
        {
            cout<<"O WINS"<<endl;
            break;
        }
        else if(Win() == '/' && n==9 )
        {
            cout<<"IT'S DRAW";
            break;
        }
        
        TogglePlayer();
    }
    return 0;
}
