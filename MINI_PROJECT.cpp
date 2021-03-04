#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
using namespace std;
class voting
{
    static int a,b,c,d,e,f,g,h,i,j;//,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1;
public:
    char voter_id[10];
    void getdata()
    {
        label:
        cout<<endl<<"PLEASE ENTER THE VOTER ID:";
        cin>>voter_id;
        string str;
        if(strcmpi(voter_id,"18ec017")!=0&&strcmpi(voter_id,"18ec103")!=0&&strcmpi(voter_id,"18ec039")!=0&&strcmpi(voter_id,"18ce020")!=0&&strcmpi(voter_id,"18me015")!=0&&strcmpi(voter_id,"18ec100")!=0&&strcmpi(voter_id,"18ec101")!=0&&strcmpi(voter_id,"18ec076")!=0&&strcmpi(voter_id,"18ec104")!=0&&strcmpi(voter_id,"18ec030")!=0&&str=="18ec021"&&str=="18ec022"&&str=="18ec023"&&str=="18ec024"&&str=="18ec025"&&str=="18ec026"&&str=="18ec027"&&str=="18ec028"&&str=="18ec029"&&str=="18ec030"&&str=="18ec031"&&str=="18ec032"&&str=="18ec033"&&str=="18ec034"&&str=="18ec035"&&str=="18ec036"&&str=="18ec037"&&str=="18ec038"&&str=="18ec040")
        {
            cout<<"ENTER VALID VOTER ID";
            goto label;
        }
        if(strcmpi(voter_id,"18ec017")==0)
        {
            a++;
            if(a>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec103")==0)
        {
            b++;
            if(b>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec039")==0)
        {
            c++;
            if(c>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ce020")==0)
        {
            d++;
            if(d>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18me015")==0)
        {
            e++;
            if(e>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec100")==0)
        {
            f++;
            if(f>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec101")==0)
        {
            g++;
            if(g>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec076")==0)
        {
            h++;
            if(h>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec104")==0)
        {
            i++;
            if(i>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
        if(strcmpi(voter_id,"18ec030")==0)
        {
            j++;
            if(j>1)
            {
                cout<<"MULTIPLE TIMES VOTING NOT ALLOWED";
                goto label;
            }
        }
    }
};
class party
{
    char party_name[3][4]={"BJP","INC","AAP"};
public:
    void show_party_name()
    {
        int i;
        cout<<endl<<"PARTIES:";
        for(i=0;i<3;i++)
        {
            cout<<endl<<i+1<<" FOR "<<party_name[i];
        }
    }
};
class voter:public voting
{
    int age;
    string voter_name,city,voting_center;
public:
    ifstream fin;
    string str;
    int c;
    void get_voter_details()
    {
        if(strcmpi(voter_id,"18ec017")==0)
        {
            c=1;
        }
        else if(strcmpi(voter_id,"18ec103")==0)
        {
            c=2;
        }
        else if(strcmpi(voter_id,"18ec039")==0)
        {
            c=3;
        }
        else if(strcmpi(voter_id,"18ce020")==0)
        {
            c=4;
        }
        else if(strcmpi(voter_id,"18me015")==0)
        {
            c=5;
        }
        else if(strcmpi(voter_id,"18ec100")==0)
        {
            c=6;
        }
        else if(strcmpi(voter_id,"18ec101")==0)
        {
            c=7;
        }
        else if(strcmpi(voter_id,"18ec076")==0)
        {
            c=8;
        }
        else if(strcmpi(voter_id,"18ec104")==0)
        {
            c=9;
        }
        else if(strcmpi(voter_id,"18ec030")==0)
        {
            c=10;
        }
         else if(strcmpi(voter_id,"18ec021")==0)
        {
            c=11;
        }
        else if(strcmpi(voter_id,"18ec022")==0)
        {
            c=12;
        }
        else if(strcmpi(voter_id,"18ce023")==0)
        {
            c=13;
        }
        else if(strcmpi(voter_id,"18ec024")==0)
        {
            c=14;
        }
        else if(strcmpi(voter_id,"18ec025")==0)
        {
            c=15;
        }
        else if(strcmpi(voter_id,"18ec026")==0)
        {
            c=16;
        }
        else if(strcmpi(voter_id,"18ec027")==0)
        {
            c=17;
        }
        else if(strcmpi(voter_id,"18ec028")==0)
        {
            c=18;
        }
        else if(strcmpi(voter_id,"18ec029")==0)
        {
            c=19;
        }
        else if(strcmpi(voter_id,"18ec030")==0)
        {
            c=20;
        }
        else if(strcmpi(voter_id,"18ec031")==0)
        {
            c=21;
        }
        else if(strcmpi(voter_id,"18ec032")==0)
        {
            c=22;
        }
        else if(strcmpi(voter_id,"18ec033")==0)
        {
            c=23;
        }
        else if(strcmpi(voter_id,"18ec034")==0)
        {
            c=24;
        }
        else if(strcmpi(voter_id,"18ec035")==0)
        {
            c=25;
        }
        else if(strcmpi(voter_id,"18ec036")==0)
        {
            c=26;
        }
        else if(strcmpi(voter_id,"18ec037")==0)
        {
            c=27;
        }
        else if(strcmpi(voter_id,"18ec038")==0)
        {
            c=28;
        }
        else if(strcmpi(voter_id,"18ec040")==0)
        {
            c=29;
        }
        else {}
        switch(c)
        {
        case 1:
            voter_name="KUSHANG DARBAR";
            city="SURAT";
            age=18;
            voting_center="ADAJAN";
            break;
        case 2:
            voter_name="HARDIK THAKKAR";
            city="MORBI";
            age=18;
            voting_center="RAVAPAR";
            break;
        case 3:
            voter_name="CHIRAG KAHAR";
            city="SURAT";
            age=18;
            voting_center="NANPURA";
            break;
        case 4:
            voter_name="DEVANSHU DESAI";
            city="SURAT";
            age=18;
            voting_center="ADAJAN";
            break;
        case 5:
            voter_name="SREYAN DESAI";
            city="SURAT";
            age=18;
            voting_center="ADAJAN";
            break;
        case 6:
            voter_name="MANTHAN SRIWASTAV";
            city="VADODARA";
            age=18;
            voting_center="MANJALPUR";
            break;
        case 7:
            voter_name="MANAV SHUKHADIA";
            city="AHMEDABAD";
            age=18;
            voting_center="MANINAGAR";
            break;
        case 8:
            voter_name="KUMAR PATEL";
            city="VADODARA";
            age=18;
            voting_center="NIZAMPURA";
            break;
        case 9:
            voter_name="NACHIKET THAKKAR";
            city="AHMEDABAD";
            age=18;
            voting_center="MANINAGAR";
            break;
        case 10:
            voter_name="GONUGUNTALA K PARDHU SARADHI";
            city="VADODARA";
            age=18;
            voting_center="MANJALPUR";
            break;
        case 11:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec021");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
            case 12:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec022");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 13:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec023");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 14:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec024");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 15:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec025");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 16:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec026");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 17:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec027");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 18:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec028");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 19:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec029");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 20:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec030");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 21:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec031");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 22:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec032");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 23:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec033");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 24:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec034");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
            break;
        case 25:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec035");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 26:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec036");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 27:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec037");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 28:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec038");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;
        case 29:
            fin.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec040");
            for(int j=0;j<2;j++)
            {
                getline(fin,str);
            }
            voter_name=str;
            getline(fin,str);
            city=str;
            getline(fin,str);
            voting_center=str;
            fin.close();
            break;

        default:
            cout<<endl<<"PLEASE ENTER VALID VOTING ID"<<endl;
            break;
        }
    }
    void show_voter_details()
    {

        cout<<endl<<"VOTER NAME:"<<voter_name;
        cout<<endl<<"CITY:"<<city;
        cout<<endl<<"VOTING CENTER:"<<voting_center<<endl;
    }
};
class vote:public party,public voter
{
    int v;
public:
    int bjp=0,inc=0,aap=0;
    void give_vote()
    {
        cout<<endl<<"ENTER YOUR CHOICE FOR VOTE:";
        cin>>v;
        if(v==1)
        {
            bjp++;
            cout<<"VOTE REGISTERED";
        }
        else if(v==2)
        {
            inc++;
            cout<<"VOTE REGISTERED";
        }
        else if(v==3)
        {
            aap++;
            cout<<"VOTE REGISTERED";
        }
        else
        {
            cout<<endl<<"PLEASE ENTER VALID COICE"<<endl;
        }
    }
    void cnt_vote()
    {
        cout<<endl<<"BJP GOT "<<bjp<<" NUMBER OF VOTES";
        cout<<endl<<"INC GOT "<<inc<<" NUMBER OF VOTES";
        cout<<endl<<"AAP GOT "<<aap<<" NUMBER OF VOTES";
        if(bjp>inc&&bjp>aap)
        {
            cout<<endl<<"-----------------------------------------------------------------";
            cout<<endl<<"BJP GOT MOST VOTES THUS, BJP MAKES GOVERNMENT FOR NEXT FIVE YEARS";
            cout<<endl<<"-----------------------------------------------------------------";
        }
        if(bjp<inc&&inc>aap)
        {
            cout<<endl<<"-----------------------------------------------------------------";
            cout<<endl<<"INC GOT MOST VOTES THUS, INC MAKES GOVERNMENT FOR NEXT FIVE YEARS";
            cout<<endl<<"-----------------------------------------------------------------";
        }
        if(aap>inc&&bjp<aap)
        {
            cout<<endl<<"-----------------------------------------------------------------";
            cout<<endl<<"AAP GOT MOST VOTES THUS, AAP MAKES GOVERNMENT FOR NEXT FIVE YEARS";
            cout<<endl<<"-----------------------------------------------------------------";
        }
    }
};
int voting::a;
int voting::b;
int voting::c;
int voting::d;
int voting::e;
int voting::f;
int voting::g;
int voting::h;
int voting::i;
int voting::j;
/*int voting::a1;
int voting::b1;
int voting::c1;
int voting::d1;
int voting::e1;
int voting::f1;
int voting::g1;
int voting::h1;
int voting::i1;
int voting::j1;
int voting::k1;
int voting::l1;
int voting::m1;
int voting::n1;
int voting::o1;
int voting::p1;
int voting::q1;
int voting::r1;
int voting::s1;
int voting::t1;*/
int main()
{
    char c;
    cout<<"What do you want to do : R for VOTER REGESTRATION , V for VOTING.";
    cin>>c;

    if(c=='R')
    {
        for(int i=0;i<5;i++)
        {


     string voter_id,voter_name1, voter_name2, voter_city, voting_center;
     char exit;
     int age;
     cout<<"\nEnter voter first name : ";
     cin>>voter_name1;
     cout<<"\nEnter voter last name : ";
     cin>>voter_name2;
     cout<<"\nEnter voter city : ";
     cin>>voter_city;
     cout<<"\nEnter voting center : ";
     cin>>voting_center;
     cout<<"\nEnter voting ID : ";
     cin>>voter_id;
     if(voter_id=="18ec021")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec021");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec022")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec022");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec023")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec023");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec024")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec024");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec025")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec025");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec026")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec026");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec027")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec027");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec028")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec028");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec029")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec029");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec030")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec030");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec031")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec031");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec032")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec032");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec033")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec033");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec034")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec034");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec035")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec035");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec036")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec036");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec037")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec037");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec038")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec038");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     if(voter_id=="18ec040")
     {
     ofstream fout;
     fout.open("C:\\Users\\Kushang Darbar\\Desktop\\Voters\\18ec040");
     fout<<voter_id<<"\n"<<voter_name1<<" "<<voter_name2<<"\n"<<voter_city<<"\n"<<voting_center;
     fout.close();
     }
     cout<<"\nWrite F for finishing the registration and C for continuing regestration : ";
     cin>>exit;

     if(exit=='F')
     {
         break;
     }


    }
    int i,n;
    cout<<"ENTER THE NUMBER OF VOTERS PRESENT:"<<endl;
    cin>>n;
    Sleep(3000);
    system("CLS");
    vote v;
    voter a[n];
    for(i=0;i<n;i++)
    {
        cout<<"---------------------------------";
        v.show_party_name();
        cout<<endl<<"---------------------------------";
        a[i].getdata();
        cout<<"---------------------------------";
        a[i].get_voter_details();
        a[i].show_voter_details();
        cout<<"---------------------------------";
        v.give_vote();
        cout<<endl<<"---------------------------------";
        Sleep(3000);
        system("CLS");
    }
    cout<<endl<<"-----------------------------------------------------------------";
    cout<<endl<<"VOTING RESULT:";
    v.cnt_vote();
    Sleep(10000);
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU";
    Sleep(5000);
    system("CLS");
    cout<<"\n\n\n\n\n\t\t\tMINI PROJECT MADE BY:"<<endl<<"\t\t\tCHIRAG KAHAR, KUSHANG DARBAR, SHRUTIK KA. PATEL"<<endl<<"";

    Sleep(5000);
    system("CLS");

    }

    else
    {
    int i,n;
    cout<<"ENTER THE NUMBER OF VOTERS PRESENT:"<<endl;
    cin>>n;
    Sleep(3000);
    system("CLS");
    vote v;
    voter a[n];
    for(i=0;i<n;i++)
    {
        cout<<"---------------------------------";
        v.show_party_name();
        cout<<endl<<"---------------------------------";
        a[i].getdata();
        cout<<"---------------------------------";
        a[i].get_voter_details();
        a[i].show_voter_details();
        cout<<"---------------------------------";
        v.give_vote();
        cout<<endl<<"---------------------------------";
        Sleep(3000);
        system("CLS");
    }
    cout<<endl<<"-----------------------------------------------------------------";
    cout<<endl<<"VOTING RESULT:";
    v.cnt_vote();
    Sleep(10000);
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU";
    Sleep(5000);
    system("CLS");
    cout<<"\n\n\n\n\n\t\t\tMINI PROJECT MADE BY:"<<endl<<"\t\t\tCHIRAG KAHAR"<<endl<<"KUSHANG DARBAR"<<endl<<"SHRUTIK KA.PATEL";
    Sleep(5000);
    system("CLS");
    }
    return 0;
}
