#include <iostream>

using namespace std;
int m[4][4],a=0,x,y,c1,c2;
bool onlyX,onlyO,draw;
char emp[3]="|_",ch_X[3]="|X",ch_O[3]="|O";
void xy();
int main();
bool draw_game()
{
    draw=true;
    for(int i=1; i<4; i++)
        for(int j=1; j<4; j++)
            if(m[i][j]==0)
                draw=false;
    if(draw)
    {
        cout<<"Draw\n";
        return true;
    }
    if(!draw)
    return false;
    return false;
}

bool win_diag2()
{
    onlyO=true;
    onlyX=true;
    for(int i=1; i<4; i++)
    {
        if(m[i][3-i+1]!=1)
            onlyX=false;
        if(m[i][3-i+1]!=2)
            onlyO=false;
        else;
    }

    if(onlyX==true)
    {
        cout<<"Player_1 won!";
        return true;

    }
    if(onlyO==true )
    {
        cout<<"Player_2 won!";
        return true;
    }
    return false;
}

bool win_diag()
{
    onlyO=true;
    onlyX=true;
    for(int i=1; i<4; i++)
    {
        if(m[i][i]!=1)
            onlyX=false;
        if(m[i][i]!=2)
            onlyO=false;
        else;
    }
    if(onlyX==true)
    {
        cout<<"Player_1 won!";
        return true;

    }
    if(onlyO==true )
    {
        cout<<"Player_2 won!";
        return true;
    }


    return false;
}
bool win_collum()
{
    for(int i=1; i<4; i++)
    {
        onlyO=true;
        onlyX=true;
        for(int j=1; j<4; j++)
        {
            if(m[j][i]!=1)
                onlyX=false;
            if(m[j][i]!=2)
                onlyO=false;
            else;
        }

        if(onlyX==true)
        {
            cout<<"Player_1 won!";
            return true;

        }
        if(onlyO==true )
        {
            cout<<"Player_2 won!";
            return true;
        }

    }
    return false;
}
bool win_line()
{
    for(int i=1; i<4; i++)
    {
        onlyO=true;
        onlyX=true;
        for(int j=1; j<4; j++)
        {
            if(m[i][j]!=1)
                onlyX=false;
            if(m[i][j]!=2)
                onlyO=false;
            else;
        }

        if(onlyX==true)
        {
            cout<<"Player_1 won!";
            return true;

        }
        if(onlyO==true )
        {
            cout<<"Player_2 won!";
            return true;
        }

    }
    return false;
}
void mat()
{


    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
            switch(m[i][j])
            {
            case 0:
                cout<<emp;
                break;
            case 1:
                cout<<ch_X;
                break;
            case 2:
                cout<<ch_O;
                break;
            }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;
    a++;
    if(win_line()==true || win_collum()==true || win_diag()==true || win_diag2()==true || draw_game()==true);
    else
        xy();

}

void asign(int b,int c)
{

    if(b<=3 && c<=3)
    {
        if(m[b][c]==0)
        {
            if(a%2==0)
            {
                m[b][c]=1;
                mat();
            }
            else
            {
                m[b][c]=2;
                mat();
            }
        }
        else
        {
            cout<<"Pozition occupied\n\n";
            xy();
        }
    }
    else
    {
        cout<<"Enter a value between 1 and 3\n";
        xy();
    }
}


void xy()
{
    if(a%2==0)
    {
        cout<<"Player_1\n";
        cout<<"Line:";
        cin>>x;
        cout<<"Column:";
        cin>>y;
        asign(x,y);
    }
    else
    {
        cout<<"Player_2\n";
        cout<<"Line:";
        cin>>x;
        cout<<"Column:";
        cin>>y;
        asign(x,y);
    }



}

int main()
{
    for(int i=1; i<4; i++)
        for(int j=1; j<4; j++)
            m[i][j]=0;
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
            switch(m[i][j])
            {
            case 0:
                cout<<emp;
                break;
            case 1:
                cout<<ch_X;
                break;
            case 2:
                cout<<ch_O;
                break;
            }
        cout<<"|";
        cout<<endl;
    }
    xy();
    return 0;
}

