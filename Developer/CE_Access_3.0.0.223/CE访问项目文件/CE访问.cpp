#include<iostream>
#include<string>
#include<string.h>
#include<windows.h>
#include<fstream>
#include<ctime>
#include<time.h>
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
char l,t;
void Default();
void history(string in,string mode,string link) 
{
    ofstream hitory;
    if (l == 'C')
        hitory.open("CE������ʷ��¼.doc", ios::out | ios::app);
    if (l == 'S')
        hitory.open("CE Access History.doc", ios::out | ios::app);
    if (l == 'K')
        hitory.open("CE Access History.doc", ios::out | ios::app);
    if (l == 'J')
        hitory.open("CE�L���Κsʷ.doc", ios::out | ios::app);
    time_t curtime;
    time(&curtime); 
    if (l == 'C')
        hitory << endl <<endl<< "����ʱ��:" << ctime(&curtime) << endl << "����ģʽ:" << mode << endl << "���ʵ�����:" << in << endl<<"����:"<<link<<endl;
    if (l == 'S')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link:"<<link<<endl;
    if (l == 'K')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link:"<<link<<endl;
    if (l == 'J')
        hitory << endl <<endl<< "�L���r�g:" << ctime(&curtime) << endl << "����������`��:" << mode << endl << "�L���Κsʷ:" << in << endl<<"��󥯼�:"<<link<<endl;
}
void Google()
{
    if (t == 'L')
        system("color 9E");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color 07");
    char Google[300];
    string search =  "start https://www.google.com/search?q=" ;
    string in;
    if (l == 'C')
        cout << "\n(����������������CE���ʹ�����)\n\nGoogle����:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nGoogle search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nGoogle search:";
    if (l == 'J')
        cout << "\n(�O����������ˤ�CE Access Toolbox�˥����������Ƥ���������\n\nGoogle����:";
    getline(cin, in);
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
    if (l == 'C')
        history(in, "Google����",search);
    if (l == 'S')
        history(in, "Google search",search);
    if (l == 'K')
        history(in, "Google search",search);
    if (l == 'J')
        history(in, "Google����",search);
    strcpy(Google, search.c_str());
    cout << "\a";
    system(Google);
}
void Bing()
{
    if (t == 'L')
        system("color BF");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color 07");
    char Bing[300];
    string search =  "start https://cn.bing.com/search?q=" ;
    string in;
    if (l == 'C')
        cout << "\n(����������������CE���ʹ�����)\n\nBing����:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBing search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBing search:";
    if (l == 'J')
        cout << "\n(�O����������ˤ�CE Access Toolbox�˥����������Ƥ���������\n\nBing����:";
    getline(cin, in);
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
    if (l == 'C')
        history(in, "Bing����",search);
    if (l == 'S')
        history(in, "Bing search",search);
    if (l == 'K')
        history(in, "Bing search",search);
    if (l == 'J')
        history(in, "Bing����",search);
    strcpy(Bing, search.c_str());
    cout << "\a";
    system(Bing);
}
void Baidu()
{
    if (t == 'L')
        system("color 1F");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color 07");
    char Baidu[300];
    string search =  "start https://www.baidu.com/s?word=" ;
    string in;
    if (l == 'C')
        cout << "\n(����������������CE���ʹ�����)\n\nBaidu����:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBaidu search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBaidu search:";
    if (l == 'J')
        cout << "\n(�O����������ˤ�CE Access Toolbox�˥����������Ƥ���������\n\nBaidu����:";
    getline(cin, in);
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
    if (l == 'C')
        history(in, "Baidu����", search);
    if (l == 'S')
        history(in, "Baidu search", search);
    if (l == 'K')
        history(in, "Baidu search", search);
    if (l == 'J')
        history(in, "Baidu����", search);
    strcpy(Baidu, search.c_str());
    cout << "\a";
    system(Baidu);
}
void web()
{
    if (t == 'L')
        system("color F8");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color 07");
    char web[300];
    string search =  "start https://" ;
    string in;
    if (l == 'C')
        cout << "\n(����������������CE���ʹ�����)\n\nֱ�ӷ�����ҳ:https://";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nVisit the website directly:https://";
    if (l == 'K')
        cout << "\n(To change settings go to CE Access Toolbox)\n\nVisit the website directly:https://";
    if (l == 'J')
        cout << "\n(�O����������ˤ�CE Access Toolbox�˥����������Ƥ���������\n\nֱ�ӥ����֥����Ȥ��E��������:https://";
    getline(cin, in);
    search+=in;
    if (l == 'C')
        history(in, "ֱ�ӷ�����ҳ",search);
    if (l == 'S')
        history(in, "Visit the website directly",search);
    if (l == 'K')
        history(in, "Visit the website directly",search);
    if (l == 'J')
        history(in, "ֱ�ӥ����֥����Ȥ��E��������",search);
    strcpy(web, search.c_str());
    cout << "\a";
    system(web);
}
void language()
{
    ofstream dl;
    dl.open("dl.dat", ios::out);
    cout << "����\nLanguage\n���Z\n\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n���ꤹ��F���`��Ѻ���ơ��ץ����Υǥե���Ȥα�ʾ���Z���x�k���Ƥ�������:\n\nF7:��������\nF8:English(US)\nF9:English(UK)\nF10:�ձ��Z\n\n";
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
        if (GetAsyncKeyState(VK_F10))
        {
            dl << "J";
            l = 'J';
            dl.close();
            break;
        }
    }
}
void name()
{
    string n;
    if (l == 'C')
        cout <<"\n���������û���(�벻Ҫ�����ո��):";
    if (l == 'S')
        cout << "\nEnter your username (please do not include the space bar):";
    if (l == 'K')
        cout << "\nEnter your username (please do not include the space bar):";
    if (l == 'J')
        cout << "\n��`���`�����������Ƥ������������ک`���Щ`�����ʤ��Ǥ���������:";
    cin >> n;
    ofstream dn;
    dn.open("dn.dat", ios::out);
    dn << n;
    dn.close();
}
void themes()
{
    if (l == 'C')
        cout << "����F��ѡ���Ӧ������:\nF7:���ж��(Ĭ������)\nF8:��������\nF9:����ڰ�\n\n";
    if (l == 'S')
        cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
    if (l == 'K')
        cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
    if (l == 'J')
        cout << "�ץ�ӥ�`����Ʃ`�ޤ��x�k����ˤϡ�F���`��Ѻ���ޤ�:\nF7:�ݥåץ���ե�(�ǥե���ȥƩ`��)\nF8:���饷�å��֥�`�ۥ磻��\nF9:�ߥ˥ޥꥹ�Ȱ��\\n\n";
    ofstream dt;
    dt.open("dt.dat", ios::out);
    while (true)
    {
        if (GetAsyncKeyState(VK_F7))
        {
            system("color F0");
            dt << 'L';
            dt.close();
            t = 'L';
            break;
        }
        if (GetAsyncKeyState(VK_F8))
        {
            system("color 17");
            dt << 'D';
            dt.close();
            t = 'D';
            break;
        }
        if (GetAsyncKeyState(VK_F9))
        {
            system("color 07");
            dt << 'J';
            dt.close();
            t = 'J';
            break;
        }
    }
}
void Default()
{
    ofstream dd;
    dd.open("dd.dat", ios::out);
    if (l == 'C')
        cout << "\n�밴��F��ѡ��Ĭ�Ϸ���ģʽ:\nF7:Google���� \nF8:Bing���� \nF9:Baidu���� \nF10:ֱ�ӷ�����ҳ\n\n";
    if (l == 'S')
        cout << "\nPlease press the F key to select the default access mode:\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search \nF10:Directly access the web \n\n";
    if (l == 'K')
        cout << "\nPlease press F to select the default access mode:\nF7:Google search \nF8:Bing search \nF9:Baidu search \nF10:Direct access to the web \n\n";
    if (l == 'J')
        cout << "\nF���`��Ѻ���ơ��ǥե���ȤΥ���������`�ɤ��x�k��:\nF7:Google����\nF8��Bing����\nF9��Baidu����\nF10��Web�ؤ�ֱ�ӥ����������x�k�����������Ƥ�������\n\n";
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
        if (GetAsyncKeyState(VK_F10))
        {
            dd << 'W';
            dd.close();
            break;
        }
    }
}
int main()
{

    time_t rtime;
    time(&rtime);
    char d;
    system("color F0");
    string n;
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
        cout << ctime(&rtime)<< "\n\n"<<"��� " <<n << "!\n��ӭʹ��CE����\n";
    if (l == 'S')
        cout << ctime(&rtime) << "\n\n" <<  "Hello "<<n <<"!\nWelcome to use CE Access!\n";
    if (l == 'K')
        cout << ctime(&rtime) << "\n\n" <<  "Hello "<<n <<"!\nWelcome to CE Access!\n";
    if (l == 'J')
        cout << ctime(&rtime) << "\n\n" << "����ˤ��� " <<n <<"!\nCE�L���ؤ褦������\n";
    if (d == 'G') 
    {
        Google();
        return 0;
    }
    if (d == 'I')
    {
        Bing();
        return 0;
    }
    if (d == 'A')
    {
        Baidu();
        return 0;
    }
    if (d == 'W')
    {
        web();
        return 0;
    }
    system("cls");
    cout << "\n��л��ѡ��CE���ʣ�\nThank you for choosing  CE Access!\nCE�L���������x�Ӥ����������꤬�Ȥ��������ޤ�!\n\n\n\n"<<"Welcome!"<<"\n\n";
    system("color 10");
    Beep(so1, 200);
    Sleep(64);
    system("color 20");
    Beep(fa1, 200);
    Sleep(64);
    system("color 30");
    Beep(la, 400);
    Sleep(64);
    system("color 40");
    Beep(si, 400);
    Sleep(64);
    system("color 50");
    Beep(mi1, 200);
    Sleep(64);
    system("color 60");
    Beep(re, 200);
    Sleep(64);
    system("color 70");
    Beep(fa, 400);
    Sleep(64);
    system("color 80");
    Beep(so, 400);
    Sleep(64);
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
    Sleep(3000);
    system("cls");
    cout<<"\n����ʽ��ʼ֮ǰ��������Ҫ�Ƚ���һЩ��Ҫ�����ã�����������ʹ��CE���ʣ���Ϊ���ṩ���õķ��񣬸�л������⣡(�������ڹ������и�����Щ����)\n\nBefore the official start, we need to make some necessary settings to use CE access normally to provide you with better service, thank you for your understanding!(These settings can be subsequently changed in the toolbox)\n\n��ʽ���_ʼ����ǰ�ˡ�CE����������������ʹ�ä��Ƥ���������`�ӥ����ṩ���뤿��˱�Ҫ���O�����Ф���Ҫ������ޤ��������Τۤɤ��������������ޤ���(�������O���ϡ������ᡢ�ĩ`��ܥå����ǉ�����뤳�Ȥ��Ǥ��ޤ���\n\n";
    system("pause");
    system("cls");
    cout << "\a";
    language();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "�û���\n\n̫���ˣ������Ǹ���ô�ƺ����أ�\n";
    if (l == 'S')
        cout << "User Name\n\nGreat! What should we call you?\n";
    if (l == 'K')
        cout << "Username\n\nThat's great! What should we call you?\n";
    if (l == 'J')
        cout << "��`���`��\n\n�������Ǥ��ͤ��� �ʤ�ƺ��٤Ф����������\n";
    name();
    cout << "\n";
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "����\n\nѡ��һ����ϲ��������ɣ�\n\n";
    if (l == 'S')
        cout << "Theme\n\nChoose a theme of your choice! \n\n";
    if (l == 'K')
        cout << "Themes\n\nChoose a theme of your choice! \n\n";
    if (l == 'J')
        cout << "�ȥԥå���\n\n���ä��ʥƩ`�ޤ��x�Ӥ�������\n\n";
    themes();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "Ĭ�Ϸ���ģʽ\n\n���һ�������ˣ�";
    if (l == 'S')
        cout << "Default Access Mode\n\nLast step!";
    if (l == 'K')
        cout << "Default access mode\n\nThe final step!";
    if (l == 'J')
        cout << "�ǥե���ȤΥ���������`��\n\n����Υ��ƥåפ�!";
    Default();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "CE���ʻ�ӭ����\n\n��ϲ��һ�ж���׼���������رճ�����ٴδ򿪼��ɿ�ʼ���ʣ�\n";
    if (l == 'S')
        cout << "CE Access Welcome! \n\nCongratulations! Everything is ready, closed the program and opened again to start accessing!\n";
    if (l == 'K')
        cout << "CE Access Welcome! \n\nCongratulations! Everything is ready, closed the program and opened again to start accessing!\n";
    if (l == 'J')
        cout << "CE�L���Ϥ��ʤ���Zӭ���ޤ�! \n\n����ǤȤ��������ޤ��� ���٤ƤΜʂ䤬�������ץ����Ϥ��ä���K�ˤ����٤��_���ƥ����������_ʼ���ޤ�!\n";
    system("pause");
    cout << "\a";
    return 0;
}
