#include <iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

struct Pokemon
{
    string name;
    int height;
    int power;
    int weight;
    int win;
    int loss;
    int tie;
    int fpower;
    int tiewins;
};
 Pokemon pkmn1,pkmn2,pkmn3,pkmn4,pkmn5,pkmn6,pkmn7,pkmn8,pkmn9,pkmn10;
int main()
{

        pkmn1.name="Pikachu";
        pkmn1.height=5;
        pkmn1.power=95;
        pkmn1.weight=45;

        //Pokemon2
        pkmn2.name="Bulbasaur";
        pkmn2.height=4;
        pkmn2.power=80;
        pkmn2.weight=60;

        //Pokemon3
        pkmn3.name="Charmander";
        pkmn3.height=7;
        pkmn3.power=82;
        pkmn3.weight=55;

        //Pokemon4
        pkmn4.name="Squirtle";
        pkmn4.height=6;
        pkmn4.power=83;
        pkmn4.weight=55;

        //Pokemon5
        pkmn5.name="Pidgeotto";
        pkmn5.height=8;
        pkmn5.power=72;
        pkmn5.weight=60;

        //Pokemon6
        pkmn6.name="Eevee";
        pkmn6.height=4;
        pkmn6.power=75;
        pkmn6.weight=50;

        //Pokemon7
        pkmn7.name="Gyarrados";
        pkmn7.height=15;
        pkmn7.power=80;
        pkmn7.weight=90;

        //Pokemon8
        pkmn8.name="Ditto";
        pkmn8.height=4;
        pkmn8.power=85;
        pkmn8.weight=45;

        //Pokemon9
        pkmn9.name="Dragonite";
        pkmn9.height=12;
        pkmn9.power=90;
        pkmn9.weight=95;

        //Pokemon10
        pkmn10.name="Kadabra";
        pkmn10.height=14;
        pkmn10.power=78;
        pkmn10.weight=70;



    void Round1(Pokemon p1,Pokemon p2,Pokemon p3,Pokemon p4,Pokemon p5,Pokemon p6,Pokemon p7,Pokemon p8,Pokemon p9,Pokemon p10);
    Round1(pkmn1,pkmn2,pkmn3,pkmn4,pkmn5,pkmn6,pkmn7,pkmn8,pkmn9,pkmn10);
}

     void Round1(Pokemon p1,Pokemon p2,Pokemon p3,Pokemon p4,Pokemon p5,Pokemon p6,Pokemon p7,Pokemon p8,Pokemon p9,Pokemon p10)
     {
         Pokemon Pw1,Pw2,Pw3,Pw4,Pw5; string PU;
         int r1[5];int s1[5];
         void Round2(Pokemon p1,Pokemon p2,Pokemon p3,Pokemon p4,Pokemon p5,string PU);


         cout<<"The Contestants Are:"<<endl<<endl;
         cout<<"1."<<p1.name<<endl;
         cout<<"2."<<p2.name<<endl;
         cout<<"3."<<p3.name<<endl;
         cout<<"4."<<p4.name<<endl;
         cout<<"5."<<p5.name<<endl;
         cout<<"6."<<p6.name<<endl;
         cout<<"7."<<p7.name<<endl;
         cout<<"8."<<p8.name<<endl;
         cout<<"9."<<p9.name<<endl;
         cout<<"10."<<p10.name<<endl;

         cout<<endl<<"CHOOSE YOUR POKEMON:"<<endl;
         cin>>PU;
         cin.get();

         cout<<endl<<endl;

         cout<<"Press Enter to Begin ROUND1\n\n";
         cin.get();
         cout<<"MATCHES:"<<endl;
         int c=0;int s;
         time_t t;
         s=(unsigned)time(&t);

         srand(s);
         while(c<5)
         {
         int a=0;int b=0;
         while(a==b)
         {
          a=(rand()%5)+1;
          b=(rand()%10)+5;
         }


         for (int j=0;j<5;j++)
         {

             while(a==r1[j])
             {
                 a=(rand()%5)+1;j=0;

             }
             while(b==s1[j])
             {
                b=(rand()%6)+5;j=0;
             }



         }


         if(a==1)
         {
             if(b==6)
             {
                cout<<p1.name<<" VS "<<p6.name<<endl;
                if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p6.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        Pw1=p1;

                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        Pw1=p6;
                    }


                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p6.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p1;
                        }
                       else if(c==3)
                        {
                            Pw3=p1;
                        }
                       else if(c==4)
                        {
                            Pw4=p1;
                        }
                       else if(c==5)
                        {
                            Pw5=p1;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p6;
                        }
                        else if(c==3)
                        {
                            Pw3=p6;
                        }
                        else if(c==4)
                        {
                            Pw4=p6;
                        }
                       else if(c==5)
                        {
                            Pw5=p6;
                        }
                    }
                }

             }
             else if(b==7)
             {
                 cout<<p1.name<<" VS "<<p7.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p7.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        Pw1=p1;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        Pw1=p7;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p7.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p1;
                        }
                        if(c==3)
                        {
                            Pw3=p1;
                        }
                        if(c==4)
                        {
                            Pw4=p1;
                        }
                        if(c==5)
                        {
                            Pw5=p1;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p7;
                        }
                        if(c==3)
                        {
                            Pw3=p7;
                        }
                        if(c==4)
                        {
                            Pw4=p7;
                        }
                        if(c==5)
                        {
                            Pw5=p7;
                        }
                    }
                }
             }
             else if(b==8)
             {
                 cout<<p1.name<< " VS " <<p8.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;


                    if(p1.power>p8.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        Pw1=p1;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        Pw1=p8;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p8.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p1;
                        }
                        if(c==3)
                        {
                            Pw3=p1;
                        }
                        if(c==4)
                        {
                            Pw4=p1;
                        }
                        if(c==5)
                        {
                            Pw5=p1;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }

             }
             else if(b==9)
             {
                 cout<<p1.name<< " VS " <<p9.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;


                    if(p1.power>p9.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        Pw1=p1;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        Pw1=p9;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p9.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p1;
                        }
                        if(c==3)
                        {
                            Pw3=p1;
                        }
                        if(c==4)
                        {
                            Pw4=p1;
                        }
                        if(c==5)
                        {
                            Pw5=p1;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p9;
                        }
                        if(c==3)
                        {
                            Pw3=p9;
                        }
                        if(c==4)
                        {
                            Pw4=p9;
                        }
                        if(c==5)
                        {
                            Pw5=p9;
                        }
                    }
                }

             }
             else if(b==10)
             {
                 cout<<p1.name<< " VS " <<p10.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p10.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        Pw1=p1;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        Pw1=p10;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p1.power>p10.power)
                    {
                        cout<<"WINNER:"<<p1.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p1;
                        }
                        if(c==3)
                        {
                            Pw3=p1;
                        }
                        if(c==4)
                        {
                            Pw4=p1;
                        }
                        if(c==5)
                        {
                            Pw5=p1;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p10;
                        }
                        if(c==3)
                        {
                            Pw3=p10;
                        }
                        if(c==4)
                        {
                            Pw4=p10;
                        }
                        if(c==5)
                        {
                            Pw5=p10;
                        }
                    }
                }

             }

        }
        if(a==2)
        {
            if(b==6)
             {
                cout<<p2.name<< " VS " <<p6.name<<endl;
                if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p8.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        Pw1=p2;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        Pw1=p6;
                    }

                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p6.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p2;
                        }
                        if(c==3)
                        {
                            Pw3=p2;
                        }
                        if(c==4)
                        {
                            Pw4=p2;
                        }
                        if(c==5)
                        {
                            Pw5=p2;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p6;
                        }
                        if(c==3)
                        {
                            Pw3=p6;
                        }
                        if(c==4)
                        {
                            Pw4=p6;
                        }
                        if(c==5)
                        {
                            Pw5=p6;
                        }
                    }
                }

             }
             else if(b==7)
             {
                 cout<<p2.name<< " VS " <<p7.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;


                    if(p2.power>p7.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        Pw1=p2;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        Pw1=p7;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p7.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;

                        if(c==2)
                        {
                            Pw2=p2;
                        }
                        if(c==3)
                        {
                            Pw3=p2;
                        }
                        if(c==4)
                        {
                            Pw4=p2;
                        }
                        if(c==5)
                        {
                            Pw5=p2;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;

                        if(c==2)
                        {
                            Pw2=p7;
                        }
                        if(c==3)
                        {
                            Pw3=p7;
                        }
                        if(c==4)
                        {
                            Pw4=p7;
                        }
                        if(c==5)
                        {
                            Pw5=p7;
                        }
                    }
                }
             }
             else if(b==8)
             {
                 cout<<p2.name<< " VS " <<p8.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p8.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        Pw1=p2;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        Pw1=p8;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p8.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;

                        if(c==2)
                        {
                            Pw2=p2;
                        }
                        if(c==3)
                        {
                            Pw3=p2;
                        }
                        if(c==4)
                        {
                            Pw4=p2;
                        }
                        if(c==5)
                        {
                            Pw5=p2;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;

                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }

             }
             else if(b==9)
             {
                 cout<<p2.name<< " VS " <<p9.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p9.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        Pw1=p9;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        Pw1=p9;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p9.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;

                        if(c==2)
                        {
                            Pw2=p2;
                        }
                        if(c==3)
                        {
                            Pw3=p2;
                        }
                        if(c==4)
                        {
                            Pw4=p2;
                        }
                        if(c==5)
                        {
                            Pw5=p2;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p9;
                        }
                        if(c==3)
                        {
                            Pw3=p9;
                        }
                        if(c==4)
                        {
                            Pw4=p9;
                        }
                        if(c==5)
                        {
                            Pw5=p9;
                        }

                    }
                }

             }
             else if(b==10)
             {
                 cout<<p2.name<< " VS " <<p10.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p2.power>p10.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        Pw1=p10;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        Pw1=p10;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;
                    if(p2.power>p10.power)
                    {
                        cout<<"WINNER:"<<p2.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p2;
                        }
                        if(c==3)
                        {
                            Pw3=p2;
                        }
                        if(c==4)
                        {
                            Pw4=p2;
                        }
                        if(c==5)
                        {
                            Pw5=p2;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p10;
                        }
                        if(c==3)
                        {
                            Pw3=p10;
                        }
                        if(c==4)
                        {
                            Pw4=p10;
                        }
                        if(c==5)
                        {
                            Pw5=p10;
                        }
                    }
                }
             }
        }
        if(a==3)
        {
            if(b==6)
             {
                cout<<p3.name<< " VS " <<p6.name<<endl;
                if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                    if(p3.power>p6.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        Pw1=p3;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        Pw1=p6;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p6.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p3;
                        }
                        if(c==3)
                        {
                            Pw3=p3;
                        }
                        if(c==4)
                        {
                            Pw4=p3;
                        }
                        if(c==5)
                        {
                            Pw5=p3;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p6;
                        }
                        if(c==3)
                        {
                            Pw3=p6;
                        }
                        if(c==4)
                        {
                            Pw4=p6;
                        }
                        if(c==5)
                        {
                            Pw5=p6;
                        }
                    }
                }

             }
             else if(b==7)
             {
                 cout<<p3.name<< " VS " <<p7.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p7.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        Pw1=p3;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        Pw1=p7;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p7.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p3;
                        }
                        if(c==3)
                        {
                            Pw3=p3;
                        }
                        if(c==4)
                        {
                            Pw4=p3;
                        }
                        if(c==5)
                        {
                            Pw5=p3;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }
             }
             else if(b==8)
             {
                 cout<<p3.name<< " VS " <<p8.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p8.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        Pw1=p3;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        Pw1=p8;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p8.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p3;
                        }
                        if(c==3)
                        {
                            Pw3=p3;
                        }
                        if(c==4)
                        {
                            Pw4=p3;
                        }
                        if(c==5)
                        {
                            Pw5=p3;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }

             }
             else if(b==9)
             {
                 cout<<p3.name<< " VS " <<p9.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p9.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        Pw1=p3;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        Pw1=p9;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p9.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p3;
                        }
                        if(c==3)
                        {
                            Pw3=p3;
                        }
                        if(c==4)
                        {
                            Pw4=p3;
                        }
                        if(c==5)
                        {
                            Pw5=p3;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p9;
                        }
                        if(c==3)
                        {
                            Pw3=p9;
                        }
                        if(c==4)
                        {
                            Pw4=p9;
                        }
                        if(c==5)
                        {
                            Pw5=p9;
                        }
                    }
                }

             }
             else if(b==10)
             {
                 cout<<p3.name<< " VS " <<p10.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p10.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        Pw1=p3;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        Pw1=p10;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p3.power>p10.power)
                    {
                        cout<<"WINNER:"<<p3.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p3;
                        }
                        if(c==3)
                        {
                            Pw3=p3;
                        }
                        if(c==4)
                        {
                            Pw4=p3;
                        }
                        if(c==5)
                        {
                            Pw5=p3;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p10;
                        }
                        if(c==3)
                        {
                            Pw3=p10;
                        }
                        if(c==4)
                        {
                            Pw4=p10;
                        }
                        if(c==5)
                        {
                            Pw5=p10;
                        }
                    }
                }
             }
        }
             if(a==4)
             {
                 if(b==6)
             {
                cout<<p4.name<< " VS " <<p6.name<<endl;
                if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p6.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        Pw1=p4;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        Pw1=p6;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p6.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p4;
                        }
                        if(c==3)
                        {
                            Pw3=p4;
                        }
                        if(c==4)
                        {
                            Pw4=p4;
                        }
                        if(c==5)
                        {
                            Pw5=p4;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p6;
                        }
                        if(c==3)
                        {
                            Pw3=p6;
                        }
                        if(c==4)
                        {
                            Pw4=p6;
                        }
                        if(c==5)
                        {
                            Pw5=p6;
                        }
                    }
                }

             }
             else if(b==7)
             {
                 cout<<p4.name<< " VS " <<p7.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p7.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        Pw1=p4;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        Pw1=p7;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p7.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p4;
                        }
                        if(c==3)
                        {
                            Pw3=p4;
                        }
                        if(c==4)
                        {
                            Pw4=p4;
                        }
                        if(c==5)
                        {
                            Pw5=p4;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p7;
                        }
                        if(c==3)
                        {
                            Pw3=p7;
                        }
                        if(c==4)
                        {
                            Pw4=p7;
                        }
                        if(c==5)
                        {
                            Pw5=p7;
                        }
                    }
                }
             }
             else if(b==8)
             {
                 cout<<p4.name<< " VS " <<p8.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p8.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        Pw1=p4;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        Pw1=p8;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;
                     if(p4.power>p8.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p4;
                        }
                        if(c==3)
                        {
                            Pw3=p4;
                        }
                        if(c==4)
                        {
                            Pw4=p4;
                        }
                        if(c==5)
                        {
                            Pw5=p4;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }

             }
             else if(b==9)
             {
                 cout<<p4.name<< " VS " <<p9.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p9.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        Pw1=p4;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        Pw1=p9;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p9.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p4;
                        }
                        if(c==3)
                        {
                            Pw3=p4;
                        }
                        if(c==4)
                        {
                            Pw4=p4;
                        }
                        if(c==5)
                        {
                            Pw5=p4;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p9;
                        }
                        if(c==3)
                        {
                            Pw3=p9;
                        }
                        if(c==4)
                        {
                            Pw4=p9;
                        }
                        if(c==5)
                        {
                            Pw5=p9;
                        }
                    }
                }

             }
             else if(b==10)
             {
                 cout<<p4.name<< " VS " <<p10.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p10.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        Pw1=p4;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        Pw1=p10;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p4.power>p10.power)
                    {
                        cout<<"WINNER:"<<p4.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p4;
                        }
                        if(c==3)
                        {
                            Pw3=p4;
                        }
                        if(c==4)
                        {
                            Pw4=p4;
                        }
                        if(c==5)
                        {
                            Pw5=p4;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p10;
                        }
                        if(c==3)
                        {
                            Pw3=p10;
                        }
                        if(c==4)
                        {
                            Pw4=p10;
                        }
                        if(c==5)
                        {
                            Pw5=p10;
                        }
                    }
                }
             }
             }

             if(a==5)
             {
                 if(b==6)
             {
                cout<<p5.name<< " VS " <<p6.name<<endl;
                if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p6.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        Pw1=p5;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        Pw1=p6;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p6.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p5;
                        }
                        if(c==3)
                        {
                            Pw3=p5;
                        }
                        if(c==4)
                        {
                            Pw4=p5;
                        }
                        if(c==5)
                        {
                            Pw5=p5;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p6.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p6;
                        }
                        if(c==3)
                        {
                            Pw3=p6;
                        }
                        if(c==4)
                        {
                            Pw4=p6;
                        }
                        if(c==5)
                        {
                            Pw5=p6;
                        }

                    }
                }

             }
             else if(b==7)
             {
                 cout<<p5.name<< " VS " <<p7.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p7.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        Pw1=p5;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        Pw1=p7;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p7.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p5;
                        }
                        if(c==3)
                        {
                            Pw3=p5;
                        }
                        if(c==4)
                        {
                            Pw4=p5;
                        }
                        if(c==5)
                        {
                            Pw5=p5;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p7.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p7;
                        }
                        if(c==3)
                        {
                            Pw3=p7;
                        }
                        if(c==4)
                        {
                            Pw4=p7;
                        }
                        if(c==5)
                        {
                            Pw5=p7;
                        }
                    }
                }
             }
             else if(b==8)
             {
                 cout<<p5.name<< " VS " <<p8.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p8.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        Pw1=p5;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        Pw1=p8;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p8.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p5;
                        }
                        if(c==3)
                        {
                            Pw3=p5;
                        }
                        if(c==4)
                        {
                            Pw4=p5;
                        }
                        if(c==5)
                        {
                            Pw5=p5;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p8.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p8;
                        }
                        if(c==3)
                        {
                            Pw3=p8;
                        }
                        if(c==4)
                        {
                            Pw4=p8;
                        }
                        if(c==5)
                        {
                            Pw5=p8;
                        }
                    }
                }

             }
             else if(b==9)
             {
                 cout<<p5.name<< " VS " <<p9.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p9.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        Pw1=p5;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        Pw1=p9;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p9.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p5;
                        }
                        if(c==3)
                        {
                            Pw3=p5;
                        }
                        if(c==4)
                        {
                            Pw4=p5;
                        }
                        if(c==5)
                        {
                            Pw5=p5;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p9.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p9;
                        }
                        if(c==3)
                        {
                            Pw3=p9;
                        }
                        if(c==4)
                        {
                            Pw4=p9;
                        }
                        if(c==5)
                        {
                            Pw5=p9;
                        }
                    }
                }

             }
             else if(b==10)
             {
                 cout<<p5.name<< " VS " <<p10.name<<endl;
                 if(c==0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p10.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        Pw1=p5;
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        Pw1=p10;
                    }
                }
                else if(c>0)
                {
                    c++;r1[c-1]=a;s1[c-1]=b;

                     if(p5.power>p10.power)
                    {
                        cout<<"WINNER:"<<p5.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p5;
                        }
                        if(c==3)
                        {
                            Pw3=p5;
                        }
                        if(c==4)
                        {
                            Pw4=p5;
                        }
                        if(c==5)
                        {
                            Pw5=p5;
                        }
                    }
                    else
                    {
                        cout<<"WINNER:"<<p10.name<<endl<<endl;
                        if(c==2)
                        {
                            Pw2=p10;
                        }
                        if(c==3)
                        {
                            Pw3=p10;
                        }
                        if(c==4)
                        {
                            Pw4=p10;
                        }
                        if(c==5)
                        {
                            Pw5=p10;
                        }
                    }
                }

             }
             }

         }
         if((Pw1.name==PU)||(Pw2.name==PU)||(Pw3.name==PU)||(Pw4.name==PU)||(Pw5.name==PU))
         {
             Round2(Pw1,Pw2,Pw3,Pw4,Pw5,PU);
         }
         else
         {
             cout<<"GAME OVER! BETTER LUCK NEXT TIME!"<<endl;
         }



     }

    void Round2(Pokemon p1,Pokemon p2,Pokemon p3,Pokemon p4,Pokemon p5,string PU)
     {
         Pokemon P2w1,P2w2,P2w3;

         cout<<"The Contestants Of Round 2 Are:"<<endl;
         cout<<"1."<<p1.name<<endl;
         cout<<"2."<<p2.name<<endl;
         cout<<"3."<<p3.name<<endl;
         cout<<"4."<<p4.name<<endl;
         cout<<"5."<<p5.name<<endl;

         p1.fpower=3*p1.power + p1.weight;p2.fpower=3*p2.power + p2.weight;p3.fpower=3*p3.power + p3.weight;p4.fpower=3*p3.power + p3.weight;p5.fpower=3*p5.power + p5.weight;

         cout<<endl;
         cout<<"Press Enter to Begin ROUND2"<<endl;
         cin.get();
         cout<<endl;

         cout<<" ROUND2 BEGINS..."<<endl;

         //MATCHES OF P1

         //MATCH1
         if(p1.fpower>p2.fpower)
         {
             p1.win++;p2.loss++;
         }
         else if(p2.fpower>p1.fpower)
         {
             p2.win++;p1.loss++;
         }
         else if(p1.fpower==p2.fpower)
         {
             p1.tie++;p2.tie++;
         }

         //MATCH2
         if(p1.fpower>p3.fpower)
         {
             p1.win++;p3.loss++;
         }
         else if(p3.fpower>p1.fpower)
         {
             p3.win++;p1.loss++;
         }
         else if(p1.fpower==p2.fpower)
         {
             p1.tie++;p3.tie++;
         }

         //MATCH3
         if(p1.fpower>p4.fpower)
         {
             p1.win++;p4.loss++;
         }
         else if(p4.fpower>p1.fpower)
         {
             p4.win++;p1.loss++;
         }
         else if(p1.fpower==p4.fpower)
         {
             p1.tie++;p4.tie++;
         }

         //MATCH4
         if(p1.fpower>p5.fpower)
         {
             p1.win++;p5.loss++;
         }
         else if(p5.fpower>p1.fpower)
         {
             p5.win++;p1.loss++;
         }
         else if(p1.fpower==p5.fpower)
         {
             p1.tie++;p5.tie++;
         }

         //MATCHES OF P2

         //MATCH1
         if(p2.fpower>p1.fpower)
         {
             p2.win++;p1.loss++;
         }
         else if(p1.fpower>p2.fpower)
         {
             p1.win++;p2.loss++;

         }
         else if(p2.fpower==p1.fpower)
         {
             p2.tie++;p1.tie++;
         }

         //MATCH2
         if(p2.fpower>p3.fpower)
         {
             p2.win++;p3.loss++;
         }
         else if(p3.fpower>p2.fpower)
         {
             p3.win++;p2.loss++;

         }
         else if(p2.fpower==p3.fpower)
         {
             p2.tie++;p3.tie++;
         }

         //MATCH3
         if(p2.fpower>p4.fpower)
         {
             p2.win++;p4.loss++;
         }
         else if(p4.fpower>p2.fpower)
         {
             p4.win++;p2.loss++;

         }
         else if(p2.fpower==p4.fpower)
         {
             p2.tie++;p4.tie++;
         }

         //MATCH4
         if(p2.fpower>p5.fpower)
         {
             p2.win++;p5.loss++;
         }
         else if(p5.fpower>p2.fpower)
         {
             p5.win++;p2.loss++;

         }
         else if(p2.fpower==p5.fpower)
         {
             p2.tie++;p5.tie++;
         }

         //MATCHES OF P3

         //MATCH1
         if(p3.fpower>p1.fpower)
         {
             p3.win++;p1.loss++;
         }
         else if(p1.fpower>p3.fpower)
         {
             p1.win++;p3.loss++;

         }
         else if(p3.fpower==p1.fpower)
         {
             p3.tie++;p1.tie++;
         }

         //MATCH2
         if(p3.fpower>p2.fpower)
         {
             p3.win++;p2.loss++;
         }
         else if(p2.fpower>p3.fpower)
         {
             p2.win++;p3.loss++;

         }
         else if(p3.fpower==p2.fpower)
         {
             p3.tie++;p2.tie++;
         }

         //MATCH3
         if(p3.fpower>p4.fpower)
         {
             p3.win++;p4.loss++;
         }
         else if(p4.fpower>p3.fpower)
         {
             p4.win++;p3.loss++;

         }
         else if(p3.fpower==p4.fpower)
         {
             p3.tie++;p4.tie++;
         }

         //MATCH4
         if(p3.fpower>p5.fpower)
         {
             p3.win++;p5.loss++;
         }
         else if(p5.fpower>p3.fpower)
         {
             p5.win++;p3.loss++;

         }
         else if(p3.fpower==p5.fpower)
         {
             p3.tie++;p5.tie++;
         }

         //MATCHES OF P4

         //MATCH1
         if(p4.fpower>p1.fpower)
         {
             p4.win++;p1.loss++;
         }
         else if(p1.fpower>p4.fpower)
         {
             p1.win++;p4.loss++;

         }
         else if(p4.fpower==p1.fpower)
         {
             p4.tie++;p1.tie++;
         }

         //MATCH2
         if(p4.fpower>p2.fpower)
         {
             p4.win++;p2.loss++;
         }
         else if(p2.fpower>p4.fpower)
         {
             p2.win++;p4.loss++;

         }
         else if(p4.fpower==p2.fpower)
         {
             p4.tie++;p2.tie++;
         }

         //MATCH3
         if(p4.fpower>p3.fpower)
         {
             p4.win++;p3.loss++;
         }
         else if(p3.fpower>p4.fpower)
         {
             p3.win++;p4.loss++;

         }
         else if(p4.fpower==p3.fpower)
         {
             p4.tie++;p3.tie++;
         }

         //MATCH4
         if(p4.fpower>p5.fpower)
         {
             p4.win++;p5.loss++;
         }
         else if(p5.fpower>p4.fpower)
         {
             p5.win++;p4.loss++;

         }
         else if(p4.fpower==p5.fpower)
         {
             p4.tie++;p5.tie++;
         }

         //MATCHES OF P5

         //MATCH1
         if(p5.fpower>p1.fpower)
         {
             p5.win++;p1.loss++;
         }
         else if(p1.fpower>p5.fpower)
         {
             p1.win++;p5.loss++;

         }
         else if(p5.fpower==p1.fpower)
         {
             p5.tie++;p1.tie++;
         }

         //MATCH2
         if(p5.fpower>p2.fpower)
         {
             p5.win++;p2.loss++;
         }
         else if(p2.fpower>p5.fpower)
         {
             p2.win++;p5.loss++;

         }
         else if(p5.fpower==p2.fpower)
         {
             p5.tie++;p2.tie++;
         }

         //MATCH3
         if(p5.fpower>p3.fpower)
         {
             p5.win++;p3.loss++;
         }
         else if(p3.fpower>p5.fpower)
         {
             p3.win++;p5.loss++;

         }
         else if(p5.fpower==p3.fpower)
         {
             p5.tie++;p3.tie++;
         }

         //MATCH4
         if(p5.fpower>p4.fpower)
         {
             p5.win++;p4.loss++;
         }
         else if(p4.fpower>p5.fpower)
         {
             p4.win++;p5.loss++;

         }
         else if(p5.fpower==p4.fpower)
         {
             p5.tie++;p4.tie++;
         }

    Pokemon pr2[5]={p1,p2,p3,p4,p5};int mi=0;Pokemon t;

         for(int i=0;i<4;i++)
         {
             mi=i;
             for(int j=i+1;j<5;j++)
             {

                 if(pr2[j].win<pr2[mi].win)
                 {
                     mi=j;
                 }
                 else if(pr2[j].win==pr2[mi].win)
                 {
                     if(pr2[j].tiewins<pr2[mi].tiewins)
                     {
                        mi=j;
                     }

                     else if(pr2[j].tiewins==pr2[mi].tiewins)
                {

                     if(pr2[j].power<pr2[mi].power)
                     {
                         pr2[mi].tiewins++;
                         if(pr2[j].tiewins<pr2[mi].tiewins)
                     {
                         mi=j;
                     }
                     }
                     else
                     {
                        pr2[j].tiewins++;
                        if(pr2[j].tiewins<pr2[mi].tiewins)
                     {
                         mi=j;
                     }
                     }
                }

                }

             }
             t=pr2[i];
             pr2[i]=pr2[mi];
             pr2[mi]=t;

         }
         //RESULTS:

         cout<<endl;
         cout<<" ROUND2 LEAGUE TABLE:"<<endl<<endl;
         cout<<" POKEMONS:"<<"\t\tWIN"<<"\tLOSS"<<"\tTIE"<<"\tTIE-WINS"<<endl;
         cout<<" 1."<<pr2[4].name<<"\t"<<"\t"<<pr2[4].win<<"\t"<<pr2[4].loss<<"\t"<<pr2[4].tie<<"\t"<<pr2[4].tiewins<<endl;
         cout<<" 2."<<pr2[3].name<<"\t"<<"\t"<<pr2[3].win<<"\t"<<pr2[3].loss<<"\t"<<pr2[3].tie<<"\t"<<pr2[3].tiewins<<endl;
         cout<<" 3."<<pr2[2].name<<"\t"<<"\t"<<pr2[2].win<<"\t"<<pr2[2].loss<<"\t"<<pr2[2].tie<<"\t"<<pr2[2].tiewins<<endl;
         cout<<" 4."<<pr2[1].name<<"\t"<<"\t"<<pr2[1].win<<"\t"<<pr2[1].loss<<"\t"<<pr2[1].tie<<"\t"<<pr2[1].tiewins<<endl;
         cout<<" 5."<<pr2[0].name<<"\t"<<"\t"<<pr2[0].win<<"\t"<<pr2[0].loss<<"\t"<<pr2[0].tie<<"\t"<<pr2[0].tiewins<<endl;

         //ADVANCEMENT:

         P2w1=pr2[4];P2w2=pr2[3];P2w3=pr2[2];
         void Round3(Pokemon p1,Pokemon p2,Pokemon p3,string PU);

         if((P2w1.name==PU)||(P2w2.name==PU)||(P2w3.name==PU))
         {
             Round3(P2w1,P2w2,P2w3,PU);
         }
         else
         {
             cout<<"GAME OVER! BETTER LUCK NEXT TIME!"<<endl;
         }

     }

    void Round3(Pokemon p1,Pokemon p2,Pokemon p3,string PU)
     {
         p1.win=0;p2.win=0;p3.win=0;
         p1.loss=0;p2.loss=0;p3.loss=0;
         p1.tiewins=0;p2.tiewins=0;p3.tiewins=0;

         cout<<endl;
         cout<<"The Contestants Of Round 3 Are:"<<endl;
         cout<<"1."<<p1.name<<endl;
         cout<<"2."<<p2.name<<endl;
         cout<<"3."<<p3.name<<endl;

         cout<<endl;
         cout<<"Press Enter to Begin ROUND3:"<<endl;
         cin.get();
         cout<<endl;

         cout<<"THE FINAL ROUND BEGINS...."<<endl;

         //MATCHES OF P1

         //MATCH1
         if(p1.fpower>p2.fpower)
         {
             p1.win++;p2.loss++;
         }
         else if(p2.fpower>p1.fpower)
         {
             p2.win++;p1.loss++;
         }
         else if(p1.fpower==p2.fpower)
         {
             p1.tie++;p2.tie++;
         }

         //MATCH2
         if(p1.fpower>p3.fpower)
         {
             p1.win++;p3.loss++;
         }
         else if(p3.fpower>p1.fpower)
         {
             p3.win++;p1.loss++;
         }
         else if(p1.fpower==p3.fpower)
         {
             p1.tie++;p3.tie++;
         }

         //MATCHES OF P2

         //MATCH1
         if(p2.fpower>p1.fpower)
         {
             p2.win++;p1.loss++;
         }
         else if(p1.fpower>p2.fpower)
         {
             p1.win++;p2.loss++;
         }
         else if(p2.fpower==p1.fpower)
         {
             p2.tie++;p1.tie++;
         }

         //MATCH2
         if(p2.fpower>p3.fpower)
         {
             p2.win++;p3.loss++;
         }
         else if(p3.fpower>p2.fpower)
         {
             p3.win++;p2.loss++;
         }
         else if(p2.fpower==p3.fpower)
         {
             p2.tie++;p3.tie++;
         }

         //MATCHES OF P3

         //MATCH1
         if(p3.fpower>p1.fpower)
         {
             p3.win++;p1.loss++;
         }
         else if(p1.fpower>p3.fpower)
         {
             p1.win++;p3.loss++;
         }
         else if(p3.fpower==p1.fpower)
         {
             p1.tie++;p3.tie++;
         }

         //MATCH2
         if(p3.fpower>p2.fpower)
         {
             p3.win++;p2.loss++;
         }
         else if(p2.fpower>p3.fpower)
         {
             p2.win++;p3.loss++;
         }
         else if(p3.fpower==p2.fpower)
         {
             p2.tie++;p3.tie++;
         }

         Pokemon pr3[3]={p1,p2,p3};int mi=0;Pokemon t;
         for(int i=0;i<3;i++)
         {
             mi=i;
             for(int j=i+1;j<3;j++)
             {
                 if(pr3[j].win<pr3[mi].win)
                 {
                     mi=j;
                 }
                 else if(pr3[j].win==pr3[mi].win)
                 {
                     if(pr3[j].tiewins<pr3[mi].tiewins)
                     {
                         mi=j;
                     }
                     else if(pr3[j].tiewins==pr3[mi].tiewins)
                     {
                         if(pr3[j].power<pr3[mi].power)
                         {
                             pr3[mi].tiewins++;
                             if(pr3[j].tiewins<pr3[mi].tiewins)
                             {
                                 mi=j;
                             }
                         }
                         else
                         {
                             pr3[j].tiewins++;
                             if(pr3[j].tiewins<pr3[mi].tiewins)
                             {
                                 mi=j;
                             }
                         }

                     }
                 }
             }
             t=pr3[i];
             pr3[i]=pr3[mi];
             pr3[mi]=t;
         }

         //RESULTS

         cout<<endl;
         cout<<" ROUND3 LEAGUE TABLE:"<<endl<<endl;
         cout<<" POKEMONS:"<<"\t\tWIN"<<"\tLOSS"<<"\tTIE"<<"\tTIE-WINS"<<endl;
         cout<<" 1."<<pr3[2].name<<"\t"<<"\t"<<pr3[2].win<<"\t"<<pr3[2].loss<<"\t"<<pr3[2].tie<<"\t"<<pr3[2].tiewins<<endl;
         cout<<" 2."<<pr3[1].name<<"\t"<<"\t"<<pr3[1].win<<"\t"<<pr3[1].loss<<"\t"<<pr3[1].tie<<"\t"<<pr3[1].tiewins<<endl;
         cout<<" 3."<<pr3[0].name<<"\t"<<"\t"<<pr3[0].win<<"\t"<<pr3[0].loss<<"\t"<<pr3[0].tie<<"\t"<<pr3[0].tiewins<<endl;

         cout<<endl<<endl;

         cout<<"\t\t```````````````````````````"<<endl;
         cout<<"\t\t```````````````````````````"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```  V  I  C  T  O  R   ```"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```"<<"      "<< pr3[2].name<<"\t```"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```                \t```"<<endl;
         cout<<"\t\t```````````````````````````"<<endl;
         cout<<"\t\t```````````````````````````"<<endl;

         cout<<endl<<endl;

         if(pr3[2].name==PU)
         {
             cout<<"\t\tCONGRATULATIONS! YOU ARE NOW A POKEMON MASTER!!\n";
         }
         else
         {
             cout<<"GAME OVER! BETTER LUCK NEXT TIME!!"<<endl;
         }

     }
