#include<iostream>
#include<string.h>
#include<windows.h>
#include<fstream>
#include<ctime>
#include<time.h>
#include <stdlib.h>
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
using namespace std;
char l,t,d,r;
string n,in,search,start="start";
int sb=0,cnm=0,wsgsb=0;
void Default();
void web(string w);
void Google();
void Bing();
void Baidu();
void history(string in,string mode,string link)
{
    ofstream hitory;
    hitory.open("CE Access ��ʷ��¼(CE Access History).doc", ios::out | ios::app);
    time_t curtime;
    time(&curtime);
    if (l == 'C')
        hitory << endl <<endl<< "����ʱ��:" << ctime(&curtime) << endl << "����ģʽ:" << mode << endl << "���ʵ�����:" << in << endl<<"����: "<<link<<endl;
    if (l == 'S')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
    if (l == 'K')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
}
void setting()
{
A:
    system("cls");
    cnm=0;
    if (l == 'C')
        cout <<"<-E+Esc\nCE Group.|CE Access\n����\n\n�밴F��ѡ��Ҫ�޸ĵĶ�Ӧ����:\n\nF7:��ʾ����\n   Display Language\n\nF8+Esc:�û���\nF9:����\n\nF10:��ס��ѡ��\n\nF1:�����������!\nF6:�����ʷ��¼!\n\nF2:����\"/s\"\n\nF3:������\nF5:��ʹ��ָ�Ϻͻ�ӭҳ(����)\nF4:����CE Access";
    if (l == 'S')
        cout <<"<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:��ʾ����\n   Display Language\n\nF8+Esc:User Name\nF9:Theme\n\nF10:Remembered Options\n\nF1:Clear all data!\nF6:Clear history!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    if (l == 'K')
        cout << "<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:��ʾ����\n   Display Language\n\nF8+Esc:Username\nF9:Themes\n\nF10:Remembered Options\n\nF1:Clear all data!\nF6:Clear history!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE)&&GetAsyncKeyState('E'))
        {
            cnm=1;
            break;
        }
        if (GetAsyncKeyState(VK_F1))
        {
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n\nȷ��ɾ��ȫ��������?���������ò��ɻ�ԭ!(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the data? It will be permanently irreversible after the operation!(Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the data? After the operation it will be permanently irreversible!(Y/N)\n\n";
            while (true)
            {
                if (GetAsyncKeyState('N')||GetAsyncKeyState(VK_ESCAPE))
                {
                    goto A;
                    break;
                }
                if (GetAsyncKeyState('Y'))
                {
                    fstream dal;
                    dal.open("dl.dat", ios::trunc|ios::out);
                    dal.close();
                    fstream dan;
                    dan.open("dn.dat", ios::trunc|ios::out);
                    dan.close();
                    fstream dat;
                    dat.open("dt.dat", ios::trunc|ios::out);
                    dat.close();
                    fstream dad;
                    dad.open("dd.dat", ios::trunc|ios::out);
                    dad.close();
                    fstream dar;
                    dar.open("dr.dat", ios::trunc|ios::out);
                    dar.close();
                    break;
                }
            }
            break;
        }
        if (GetAsyncKeyState(VK_F6))
        {
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n\nȷ��ɾ��ȫ����ʷ��¼��?���������ò��ɻ�ԭ!(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the history? It will be permanently irreversible after the operation!(Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the history? After the operation it will be permanently irreversible!(Y/N)\n\n";
            while (true)
            {
                if (GetAsyncKeyState('N')||GetAsyncKeyState(VK_ESCAPE))
                {
                    goto A;
                    break;
                }
                if (GetAsyncKeyState('Y'))
                {
                    fstream dh;
                    dh.open("CE Access ��ʷ��¼(CE Access History).doc", ios::trunc|ios::out);
                    dh.close();
                    break;
                }
            }
            break;
        }
        if (GetAsyncKeyState(VK_F2))
        {
            if(d=='G')
                system("start https://www.google.com/search?q=%5Cs");
            if(d=='I')
                system("start https://www.bing.com/search?q=%5Cs");
            else
                system("start https://www.baidu.com/s?word=%5Cs");
            return;
        }
        if (GetAsyncKeyState(VK_F7))
        {
            ofstream dal;
            dal.open("dl.dat", ios::trunc);
            system("cls");
            cout << "<-Esc\nCE Group.|CE Access\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����: Please press the corresponding F key to select the default display language of the program:\n\nF8:��������\nF9:English(US)\nF10:English(UK)";
            while (true)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    dal<<l;
                    dal.close();
                    goto A;
                }
                if (GetAsyncKeyState(VK_F8))
                {
                    dal << "C";
                    l = 'C';
                    dal.close();
                    break;
                }
                if (GetAsyncKeyState(VK_F9))
                {
                    dal << "S";
                    l = 'S';
                    dal.close();
                    break;
                }
                if (GetAsyncKeyState(VK_F10))
                {
                    dal << "K";
                    l = 'K';
                    dal.close();
                    break;
                }
            }
            break;
        }
        if (GetAsyncKeyState(VK_F8)&&GetAsyncKeyState(VK_ESCAPE))
        {
            string dn;
            ofstream dan;
            dan.open("dn.dat", ios::trunc);
            system("cls");
            if (l == 'C')
                cout << "CE Group.|CE Access\n���������û���(�벻Ҫ�����ո��):";
            if (l == 'S')
                cout << "CE Group.|CE Access\nEnter your username (please do not include the space bar):";
            if (l == 'K')
                cout << "CE Group.|CE Access\nEnter your username (please do not include the space bar):";
            cin >> dn;
            n=dn;
            dan << dn;
            dan.close();
            wsgsb=1;
            break;
        }
        if (GetAsyncKeyState(VK_F9))
        {
            ofstream dat;
            dat.open("dt.dat", ios::trunc);
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n����F��ѡ���Ӧ������:\n\nF1:���ж��(����Ӧ����)\n\nF2:���Ż�\nF3:������\nF4:�Ǻ���\n\nF5:���Ű�\nF6:�����\n\nF7:Ӳ����\nF8:���";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF1: Popular and colorful theme (adaptive theme)\n\nF2: Light and elegant yellow\nF3: Fresh green\nF4: Galaxy blue\n\nF5: Elegant white\nF6: Deep black\n\nF7: Tough blue\nF8: Wisdom red";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF1: Popular and colorful theme (adaptive theme)\n\nF2: Light and elegant yellow\nF3: Fresh green\nF4: Galaxy blue\n\nF5: Elegant white\nF6: Deep black\n\nF7: Tough blue\nF8: Wisdom red";
            while (true)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    dat<<t;
                    dat.close();
                    goto A;
                }
                if (GetAsyncKeyState(VK_F1))
                {
                    system("color 9E");
                    dat << 'L';
                    dat.close();
                    t = 'L';
                    break;
                }
                if (GetAsyncKeyState(VK_F2))
                {
                    system("color E0");
                    dat << 'H';
                    dat.close();
                    t = 'H';
                    break;
                }
                if (GetAsyncKeyState(VK_F3))
                {
                    system("color B0");
                    dat << 'Q';
                    dat.close();
                    t = 'Q';
                    break;
                }
                if (GetAsyncKeyState(VK_F4))
                {
                    system("color 9F");
                    dat << 'X';
                    dat.close();
                    t = 'X';
                    break;
                }
                if (GetAsyncKeyState(VK_F5))
                {
                    system("color F0");
                    dat << 'B';
                    dat.close();
                    t = 'B';
                    break;
                }
                if (GetAsyncKeyState(VK_F6))
                {
                    system("color 0F");
                    dat << 'S';
                    dat.close();
                    t = 'S';
                    break;
                }
                if (GetAsyncKeyState(VK_F7))
                {
                    system("color 17");
                    dat << 'Y';
                    dat.close();
                    t = 'Y';
                    break;
                }
                if (GetAsyncKeyState(VK_F8))
                {
                    system("color CF");
                    dat << 'R';
                    dat.close();
                    t = 'R';
                    break;
                }
            }
            break;
        }
        if (GetAsyncKeyState(VK_F10))
        {
B:
            system("cls");
            if (l == 'C')
                cout << "<-N+Esc\nCE Group.|CE Access\n���ļ�ס��ѡ��:\n\nF1:Ĭ�Ϸ���ģʽ\nF2:��������ַ�Ĳ���";
            if (l == 'S')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Operation on the input URL";
            if (l == 'K')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Action on input URLs";
            while (true)
            {
                if (GetAsyncKeyState(VK_ESCAPE)&&GetAsyncKeyState('N'))
                    goto A;
                if (GetAsyncKeyState(VK_F1))
                {
                    ofstream dad;
                    dad.open("dd.dat", ios::trunc);
                    system("cls");
                    if (l == 'C')
                        cout << "<-Esc\nCE Group.|CE Access\n�밴��F��ѡ��Ĭ�Ϸ���ģʽ:\n\nF7:Google���� \nF8:Bing���� \nF9:Baidu����";
                    if (l == 'S')
                        cout << "<-Esc\nCE Group.|CE Access\nPlease press the F key to select the default access mode:\n\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search";
                    if (l == 'K')
                        cout << "<-Esc\nCE Group.|CE Access\nPlease press F to select the default access mode:\n\nF7:Google search \nF8:Bing search \nF9:Baidu search";
                    while (true)
                    {
                        if (GetAsyncKeyState(VK_ESCAPE))
                        {
                            dad<<d;
                            dad.close();
                            goto B;
                        }
                        if (GetAsyncKeyState(VK_F7))
                        {
                            dad << 'G';
                            dad.close();
                            break;
                        }
                        if (GetAsyncKeyState(VK_F8))
                        {
                            dad << 'I';
                            dad.close();
                            break;
                        }
                        if (GetAsyncKeyState(VK_F9))
                        {
                            dad << 'A';
                            dad.close();
                            break;
                        }
                    }
                    break;
                }
                if (GetAsyncKeyState(VK_F2))
                {
                    ofstream dr;
                    dr.open("dr.dat", ios::trunc);
                    system("cls");
                    if (l == 'C')
                        cout << "<-Esc\nCE Group.|CE Access\n�������������ַ�����ǽ�ִ�������ĸ�������\n\nF7:������ַ����ס��ѡ��\nF8:��������ַ����ס��ѡ��\nF9:ÿ��ѯ��";
                    if (l == 'S')
                        cout << "<-Esc\nCE Group.|CE Access\nIf you enter a URL, which of the following actions will we perform? \n\nF7:Visit the URL and remember the selection \nF8:Do not visit the URL and remember the selection \nF9:Ask each time";
                    if (l == 'K')
                        cout << "<-Esc\nCE Group.|CE Access\nIf you enter a web address, which of the following actions will we perform? \n\nF7:Visit the URL and remember the selection \nF8:Do not visit the URL and remember the selection \nF9:Ask each time";
                    while (true)
                    {
                        if (GetAsyncKeyState(VK_ESCAPE))
                        {
                            dr<<r;
                            dr.close();
                            goto A;
                        }

                        if (GetAsyncKeyState(VK_F7))
                        {
                            dr << '1';
                            dr.close();
                            break;
                        }
                        if (GetAsyncKeyState(VK_F8))
                        {
                            dr << '2';
                            dr.close();
                            break;
                        }
                        if (GetAsyncKeyState(VK_F9))
                        {
                            dr << '0';
                            dr.close();
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
        if (GetAsyncKeyState(VK_F3))
        {
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n������\n\n��ǰ�汾:4.0.0.888\n�Ƿ�ǰ��CE Group������CE Accessҳ��鿴���°汾���˽���ࣿ(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0.888\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0.888\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            while (true)
            {
                if (GetAsyncKeyState('Y'))
                {
                    system("start https://www.cegroup.buzz/product/ceaccess");
                    goto A;
                }
                if (GetAsyncKeyState('N')||GetAsyncKeyState(VK_ESCAPE))
                    goto A;
            }
        }
        if (GetAsyncKeyState(VK_F4))
        {
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n����CE Access\n\nCE Access\n��ǰ�汾:4.0.0.888\n����ʱ��:2022/9/16\n������:Mark Deng\nCE Group����:cegroup.buzz\nCE Accessҳ��:cegroup.buzz/product/ceaccess\n��ϵ����:dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access\nCurrent Version:4.0.0.888\nRelease Date:2022/9/16\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access\nCurrent Version:4.0.0.888\nRelease Date:2022/9/16\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            system("pause");
            goto A;
        }
        if(GetAsyncKeyState(VK_F5))
            system("start https://www.cegroup.buzz/product/ceawel.html");
    }
    system("cls");
    if(cnm!=1)
    {
        cnm=2;
        if (l == 'C')
            cout <<"CE Group.|CE Access\n"<< n << ",лл�������Ѿ���ɸ��ģ��´δ����ʱ����Ч!\n\n";
        if (l == 'S')
            cout <<"CE Group.|CE Access\n"<< n << ",Thank you very much. Your settings have been changed and will take effect the next time you open the software!\n\n";
        if (l == 'K')
            cout <<"CE Group.|CE Access\n"<< n << ",Thank you. The settings have been changed and will take effect the next time you open the software!\n\n";
        system("pause");
        if(wsgsb==1)
            exit(114514);
        system("cls");
    }
}
void http()
{
    int len=in.size();
    if (in[0]=='h'&&in[1]=='t'&&in[2]=='t'&&in[3]=='p'&&in[4]=='s'&&in[5]==':'&&in[6]=='/'&&in[7]=='/'||in[0]=='h'&&in[1]=='t'&&in[2]=='t'&&in[3]=='p'&&in[4]==':'&&in[5]=='/'&&in[6]=='/')
    {
        ifstream dr;
        dr.open("dr.dat",ios::in);
        dr>>r;
        if (r=='1')
        {
            web(in);
            return;
        }
        system("cls");
        if (l == 'C')
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        while (r!=2)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                web(in);
                break;
            }
            if (GetAsyncKeyState(VK_F8))
                break;
            if (GetAsyncKeyState(VK_F1))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "1";
                dr.close();
                web(in);
                break;
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "2";
                dr.close();
                break;
            }
        }
    }
    string ini="http://";
    if(in[0]=='w'&&in[1]=='w'&&in[2]=='w'&&in[3]=='.')
    {
        ifstream dr;
        dr.open("dr.dat",ios::in);
        char r;
        dr>>r;
        if (r=='1')
        {
            ini+=in;
            web(ini);
            return;
        }
        system("cls");
        if (l == 'C')
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        while (r!=2)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                ini+=in;
                web(ini);
                break;
            }
            if (GetAsyncKeyState(VK_F1))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "1";
                dr.close();
                ini+=in;
                web(ini);
                break;
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "2";
                dr.close();
                break;
            }
            if (GetAsyncKeyState(VK_F8))
                break;
        }
    }
    if((in[len-4]=='.'&&in[len-3]=='c'&&in[len-2]=='o'&&in[len-1]=='m')||(in[len-3]=='.'&&in[len-2]=='c'&&in[len-1]=='n')||(in[len-5]=='.'&&in[len-4]=='b'&&in[len-3]=='u'&&in[len-2]=='z'&&in[len-1]=='z')||(in[len-4]=='.'&&in[len-3]=='o'&&in[len-2]=='r'&&in[len-1]=='g')||(in[len-3]=='.'&&in[len-2]=='i'&&in[len-1]=='o'))
    {
        ini="http://www.";
        ifstream dr;
        dr.open("dr.dat",ios::in);
        char r;
        dr>>r;
        if (r=='1')
        {
            ini+=in;
            web(ini);
            return;
        }
        system("cls");
        if (l == 'C')
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        while (r!=2)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                ini+=in;
                web(ini);
                break;
            }
            if (GetAsyncKeyState(VK_F1))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "1";
                dr.close();
                ini+=in;
                web(ini);
                break;
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "2";
                dr.close();
                break;
            }
            if (GetAsyncKeyState(VK_F8))
                break;
        }
    }
}
void cpy()
{
    for (int i = 0; i < in.size(); i++)
    {
        switch (in[i])
        {
        case '+':
        {
            search += "%2B";
            break;
        }
        case ' ':
        {
            search += "+";
            break;
        }
        case '!':
        {
            search += "%21";
            break;
        }
        case '@':
        {
            search += "%40";
            break;
        }
        case '#':
        {
            search += "%23";
            break;
        }
        case '$':
        {
            search += "%24";
            break;
        }
        case '%':
        {
            search += "%25";
            break;
        }
        case '^':
        {
            search += "%5E";
            break;
        }
        case '&':
        {
            search += "%26";
            break;
        }
        case '(':
        {
            search += "%28";
            break;
        }
        case ')':
        {
            search += "%29";
            break;
        }
        case '{':
        {
            search += "%7B";
            break;
        }
        case '}':
        {
            search += "%7D";
            break;
        }
        case '[':
        {
            search += "%5B";
            break;
        }
        case ']':
        {
            search += "%5D";
            break;
        }
        case '\\':
        {
            search += "%5C";
            break;
        }
        case '|':
        {
            search += "%7C";
            break;
        }
        case ':':
        {
            search += "%3A";
            break;
        }
        case ';':
        {
            search += "%3B";
            break;
        }
        case '\'':
        {
            search += "%27";
            break;
        }
        case '`':
        {
            search += "%60";
            break;
        }
        case '=':
        {
            search += "%3D";
            break;
        }
        case ',':
        {
            search += "%2C";
            break;
        }
        case '/':
        {
            search += "%2F";
            break;
        }
        case '?':
        {
            search += "%3F";
            break;
        }
        default:
        {
            search += in[i];
            break;
        }
        }
    }
}
void Google()
{
    if (t == 'L')
        system("color 9E");
    if (t == 'H')
        system("color E0");
    if (t == 'Q')
        system("color B0");
    if (t == 'X')
        system("color 9F");
    if (t == 'B')
        system("color F0");
    if (t == 'S')
        system("color 0F");
    if (t == 'Y')
        system("color 17");
    if (t == 'R')
        system("color CF");
    char Google[300];
    search =  "https://www.google.com/search?q=" ;
    if (l == 'C')
        cout << "\n(�����������������\"/s\")\n\nGoogle����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    getline(cin, in);
    if(in=="/s")
    {
        setting();
        return;
    }
    http();
    if(sb==1)
        return;
    cpy();
    if (l == 'C')
        history(in, "Google����",search);
    if (l == 'S')
        history(in, "Google search",search);
    if (l == 'K')
        history(in, "Google search",search);
    search=start+" "+search;
    strcpy(Google, search.c_str());
    system(Google);
}
void Bing()
{
    if (t == 'L')
        system("color 3F");
    if (t == 'H')
        system("color E0");
    if (t == 'Q')
        system("color B0");
    if (t == 'X')
        system("color 9F");
    if (t == 'B')
        system("color F0");
    if (t == 'S')
        system("color 0F");
    if (t == 'Y')
        system("color 17");
    if (t == 'R')
        system("color CF");
    char Bing[300];
    search =  "https://www.bing.com/search?q=" ;
    if (l == 'C')
        cout << "\n(�����������������\"/s\")\n\nBing����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    getline(cin, in);
    if(in=="/s")
    {
        setting();
        return;
    }
    http();
    if(sb==1)
        return;
    cpy();
    if (l == 'C')
        history(in, "Bing����",search);
    if (l == 'S')
        history(in, "Bing search",search);
    if (l == 'K')
        history(in, "Bing search",search);
    search=start+" "+search;
    strcpy(Bing, search.c_str());
    system(Bing);
}
void Baidu()
{
    if (t == 'L')
        system("color 1F");
    if (t == 'H')
        system("color E0");
    if (t == 'Q')
        system("color B0");
    if (t == 'X')
        system("color 9F");
    if (t == 'B')
        system("color F0");
    if (t == 'S')
        system("color 0F");
    if (t == 'Y')
        system("color 17");
    if (t == 'R')
        system("color CF");
    char Baidu[300];
    search =  "https://www.baidu.com/s?word=" ;
    if (l == 'C')
        cout << "\n(�����������������\"/s\")\n\nBaidu����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    getline(cin, in);
    if(in=="/s")
    {
        setting();
        return;
    }
    http();
    if(sb==1)
        return;
    cpy();
    if (l == 'C')
        history(in, "Baidu����", search);
    if (l == 'S')
        history(in, "Baidu search", search);
    if (l == 'K')
        history(in, "Baidu search", search);
    search=start+" "+search;
    strcpy(Baidu, search.c_str());
    system(Baidu);
}
void web(string w)
{
    char web[300];
    sb=1;
    if (l == 'C')
        history(in, "ֱ�ӷ�����ҳ", w);
    if (l == 'S')
        history(in, "Web", w);
    if (l == 'K')
        history(in, "Web", w);
    string search =  "start " ;
    search+=w;
    strcpy(web, search.c_str());
    system(web);
}
void language()
{
    ofstream dl;
    dl.open("dl.dat", ios::out);
    while (true)
    {
        if (GetAsyncKeyState(VK_F7))
        {
            dl << "C";
            l = 'C';
            dl.close();
            break;
        }
        if (GetAsyncKeyState(VK_F8))
        {
            dl << "S";
            l = 'S';
            dl.close();
            break;
        }
        if (GetAsyncKeyState(VK_F9))
        {
            dl << "K";
            l = 'K';
            dl.close();
            break;
        }
    }
}
void name()
{
    string n;
    if (l == 'C')
        cout <<"���������û���(�벻Ҫ�����ո��):";
    if (l == 'S')
        cout << "Enter your username (please do not include the space bar):";
    if (l == 'K')
        cout << "Enter your username (please do not include the space bar):";
    cin >> n;
    ofstream dn;
    dn.open("dn.dat", ios::out);
    dn << n;
    dn.close();
}
void themes()
{
    if (l == 'C')
        cout << "����F��ѡ���Ӧ������:\n\nF1:���ж��(����Ӧ����)\n\nF2:���Ż�\nF3:������\nF4:�Ǻ���\n\nF5:���Ű�\nF6:�����\n\nF7:Ӳ����\nF8:���\n\n";
    if (l == 'S')
        cout << "Press F key to select the corresponding theme:\n\nF1: Popular and colorful theme (adaptive theme)\n\nF2: Light and elegant yellow\nF3: Fresh green\nF4: Galaxy blue\n\nF5: Elegant white\nF6: Deep black\n\nF7: Tough blue\nF8: Wisdom red\n\n";
    if (l == 'K')
        cout << "Press F key to select the corresponding theme:\n\nF1: Popular and colorful theme (adaptive theme)\n\nF2: Light and elegant yellow\nF3: Fresh green\nF4: Galaxy blue\n\nF5: Elegant white\nF6: Deep black\n\nF7: Tough blue\nF8: Wisdom red\n\n";
    ofstream dt;
    dt.open("dt.dat", ios::out);
    while (true)
    {
        if (GetAsyncKeyState(VK_F1))
        {
            system("color 9E");
            dt << 'L';
            dt.close();
            t = 'L';
            break;
        }
        if (GetAsyncKeyState(VK_F2))
        {
            system("color E0");
            dt << 'H';
            dt.close();
            t = 'H';
            break;
        }
        if (GetAsyncKeyState(VK_F3))
        {
            system("color B0");
            dt << 'Q';
            dt.close();
            t = 'Q';
            break;
        }
        if (GetAsyncKeyState(VK_F4))
        {
            system("color 9F");
            dt << 'X';
            dt.close();
            t = 'X';
            break;
        }
        if (GetAsyncKeyState(VK_F5))
        {
            system("color F0");
            dt << 'B';
            dt.close();
            t = 'B';
            break;
        }
        if (GetAsyncKeyState(VK_F6))
        {
            system("color 0F");
            dt << 'S';
            dt.close();
            t = 'S';
            break;
        }
        if (GetAsyncKeyState(VK_F7))
        {
            system("color 17");
            dt << 'Y';
            dt.close();
            t = 'Y';
            break;
        }
        if (GetAsyncKeyState(VK_F8))
        {
            system("color CF");
            dt << 'R';
            dt.close();
            t = 'R';
            break;
        }
    }
}
void Default()
{
    ofstream dd;
    dd.open("dd.dat", ios::out);
    if (l == 'C')
        cout << "�밴��F��ѡ��Ĭ�Ϸ���ģʽ:\nF7:Google���� \nF8:Bing���� \nF9:Baidu���� \n\n";
    if (l == 'S')
        cout << "Please press the F key to select the default access mode:\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search \n\n";
    if (l == 'K')
        cout << "Please press F to select the default access mode:\nF7:Google search \nF8:Bing search \nF9:Baidu search \n\n";
    while (true)
    {
        if (GetAsyncKeyState(VK_F7))
        {
            dd << 'G';
            dd.close();
            break;
        }
        if (GetAsyncKeyState(VK_F8))
        {
            dd << 'I';
            dd.close();
            break;
        }
        if (GetAsyncKeyState(VK_F9))
        {
            dd << 'A';
            dd.close();
            break;
        }
    }
}
int main()
{

C:
    time_t rtime;
    time(&rtime);
    ifstream dd;
    ifstream dl;
    ifstream dn;
    ifstream dt;
    dd.open("dd.dat",ios::in);
    dd >> d;
    dd.close();
    dl.open("dl.dat", ios::in);
    dl >> l;
    dl.close();
    dn.open("dn.dat", ios::in);
    dn >> n;
    dn.close();
    dt.open("dt.dat", ios::in);
    dt >> t;
    dt.close();
    if (l == 'C')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n"<<"��� " <<n << "!\n��ӭʹ��CE Access\n";
    if (l == 'S')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" <<  "Hello "<<n <<"!\nWelcome to use CE Access!\n";
    if (l == 'K')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" <<  "Hello "<<n <<"!\nWelcome to CE Access!\n";
    if (d == 'G')
    {
        Google();
        if(cnm>=1)
        {
            cnm=0;
            goto C;
        }
        return 0;
    }
    if (d == 'I')
    {
        Bing();
        if(cnm>=1)
        {
            cnm=0;
            goto C;
        }
        return 0;
    }
    if (d == 'A')
    {
        Baidu();
        if(cnm>=1)
        {
            cnm=0;
            goto C;
        }
        return 0;
    }
    system("cls");
    system("color F0");
    cout << "CE Group.|CE Access" << "\n��л��ѡ��CE Access��\nThank you for choosing  CE Access!\n\n\n\n"<<"Welcome!\n\n";
    system("color 90");
    Beep(re1, 200);
    Sleep(64);
    system("color A0");
    Beep(do1, 200);
    Sleep(64);
    system("color B0");
    Beep(mi, 200);
    Sleep(64);
    system("color C0");
    Beep(so, 400);
    Sleep(64);
    system("color D0");
    Beep(do, 1200);
    Sleep(64);
    system("color F0");
    Sleep(1500);
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\nCE Access��CE Group���µķ��ʹ��ߣ�����ŵ���ÿ�Դ����ѣ�������CE Group����:cegroup.buzz��ȡ��CE Access�����¹ٷ��汾�������������������Ǯ�����˱����Ʒ����ô��һ����ƭ�ˣ��뵽�ٷ�����(cegroup.buzz)��ȡ���µ���������Ʒ������ʹ�ù������������������Ҫ������������飬��ͨ�������ʼ���ϵ���ǽ��з�����dengyanbin@cegroup.wecom.work�������ڴ���������������CE Access���һ�а�Ȩ��CE Group���С�\n\nCE Access is the access tool of CE Group and is promised to be permanently open source and free of charge. You can get the latest official version of CE Access on the official website of CE Group:cegroup.buzz. If you have paid for this product in other channels, you must be cheated! Please go to the official channel (cegroup.buzz) to get the latest free genuine version of the product.If you encounter problems or want to give us suggestions, you can contact us by email for feedback: dengyanbin@cegroup.wecom.work We look forward to hearing from you. All rights to everything related to CE Access belong to CE Group.\n\n";
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\n����ʽ��ʼ֮ǰ��������Ҫ�Ƚ���һЩ��Ҫ�����ã�����������ʹ��CE Access����Ϊ���ṩ���õķ��񣬸�л������⣡\n\nBefore the official start, we need to make some necessary settings to use CE access normally to provide you with better service, thank you for your understanding!\n\n";
    system("pause");
    system("cls");
    cout << "CE Group.|CE Access\n����\nLanguage\n\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����:\n\nPlease press the corresponding F key to select the default display language of the program:\n\nF7:��������\nF8:English(US)\nF9:English(UK)\n\n";
    language();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n�û���\n\n̫���ˣ������Ǹ���ô�ƺ����أ�\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nUser Name\n\nGreat! What should we call you?\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nUsername\n\nThat's great! What should we call you?\n";
    name();
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n����\n\nѡ��һ����ϲ��������ɣ�\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nTheme\n\nChoose a theme of your choice! \n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nThemes\n\nChoose a theme of your choice! \n\n";
    themes();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\nĬ�Ϸ���ģʽ\n\n���һ�������ˣ�";
    if (l == 'S')
        cout << "CE Group.|CE Access\nDefault Access Mode\n\nLast step!";
    if (l == 'K')
        cout << "CE Group.|CE Access\nDefault access mode\n\nThe final step!";
    Default();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\nCE Access��ӭ����\n\n��ϲ��һ�ж���׼��������\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    system("pause");
    system("start https://cegroup.buzz/product/ceawel.html");
}
