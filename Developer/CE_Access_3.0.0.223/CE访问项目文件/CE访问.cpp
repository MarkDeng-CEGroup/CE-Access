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
        hitory.open("CE访问历史记录.doc", ios::out | ios::app);
    if (l == 'S')
        hitory.open("CE Access History.doc", ios::out | ios::app);
    if (l == 'K')
        hitory.open("CE Access History.doc", ios::out | ios::app);
    if (l == 'J')
        hitory.open("CE訪問の歴史.doc", ios::out | ios::app);
    time_t curtime;
    time(&curtime); 
    if (l == 'C')
        hitory << endl <<endl<< "访问时间:" << ctime(&curtime) << endl << "访问模式:" << mode << endl << "访问的内容:" << in << endl<<"链接:"<<link<<endl;
    if (l == 'S')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link:"<<link<<endl;
    if (l == 'K')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link:"<<link<<endl;
    if (l == 'J')
        hitory << endl <<endl<< "訪問時間:" << ctime(&curtime) << endl << "アクセスモード:" << mode << endl << "訪問の歴史:" << in << endl<<"リンク集:"<<link<<endl;
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
        cout << "\n(如需更改设置请进入CE访问工具箱)\n\nGoogle搜索:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nGoogle search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nGoogle search:";
    if (l == 'J')
        cout << "\n(設定を変更するにはCE Access Toolboxにアクセスしてください）\n\nGoogle検索:";
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
        history(in, "Google搜索",search);
    if (l == 'S')
        history(in, "Google search",search);
    if (l == 'K')
        history(in, "Google search",search);
    if (l == 'J')
        history(in, "Google検索",search);
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
        cout << "\n(如需更改设置请进入CE访问工具箱)\n\nBing搜索:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBing search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBing search:";
    if (l == 'J')
        cout << "\n(設定を変更するにはCE Access Toolboxにアクセスしてください）\n\nBing検索:";
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
        history(in, "Bing搜索",search);
    if (l == 'S')
        history(in, "Bing search",search);
    if (l == 'K')
        history(in, "Bing search",search);
    if (l == 'J')
        history(in, "Bing検索",search);
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
        cout << "\n(如需更改设置请进入CE访问工具箱)\n\nBaidu搜索:";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBaidu search:";
    if (l == 'K')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nBaidu search:";
    if (l == 'J')
        cout << "\n(設定を変更するにはCE Access Toolboxにアクセスしてください）\n\nBaidu検索:";
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
        history(in, "Baidu搜索", search);
    if (l == 'S')
        history(in, "Baidu search", search);
    if (l == 'K')
        history(in, "Baidu search", search);
    if (l == 'J')
        history(in, "Baidu検索", search);
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
        cout << "\n(如需更改设置请进入CE访问工具箱)\n\n直接访问网页:https://";
    if (l == 'S')
        cout << "\n(To change the settings go to CE Access Toolbox)\n\nVisit the website directly:https://";
    if (l == 'K')
        cout << "\n(To change settings go to CE Access Toolbox)\n\nVisit the website directly:https://";
    if (l == 'J')
        cout << "\n(設定を変更するにはCE Access Toolboxにアクセスしてください）\n\n直接ウェブサイトをご覧ください:https://";
    getline(cin, in);
    search+=in;
    if (l == 'C')
        history(in, "直接访问网页",search);
    if (l == 'S')
        history(in, "Visit the website directly",search);
    if (l == 'K')
        history(in, "Visit the website directly",search);
    if (l == 'J')
        history(in, "直接ウェブサイトをご覧ください",search);
    strcpy(web, search.c_str());
    cout << "\a";
    system(web);
}
void language()
{
    ofstream dl;
    dl.open("dl.dat", ios::out);
    cout << "语言\nLanguage\n言語\n\n请按对应的F键选择程序默认显示语言:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n対応するFキーを押して、プログラムのデフォルトの表示言語を選択してください:\n\nF7:简体中文\nF8:English(US)\nF9:English(UK)\nF10:日本語\n\n";
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
        cout <<"\n输入您的用户名(请不要包含空格键):";
    if (l == 'S')
        cout << "\nEnter your username (please do not include the space bar):";
    if (l == 'K')
        cout << "\nEnter your username (please do not include the space bar):";
    if (l == 'J')
        cout << "\nユーザー名を入力してください（スペースバーを入れないでください）:";
    cin >> n;
    ofstream dn;
    dn.open("dn.dat", ios::out);
    dn << n;
    dn.close();
}
void themes()
{
    if (l == 'C')
        cout << "按下F键选择对应的主题:\nF7:流行多彩(默认主题)\nF8:经典蓝白\nF9:极简黑白\n\n";
    if (l == 'S')
        cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
    if (l == 'K')
        cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
    if (l == 'J')
        cout << "プレビューするテーマを選択するには、Fキーを押します:\nF7:ポップカラフル(デフォルトテーマ)\nF8:クラシックブルーホワイト\nF9:ミニマリスト白黒\n\n";
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
        cout << "\n请按下F键选择默认访问模式:\nF7:Google搜索 \nF8:Bing搜索 \nF9:Baidu搜索 \nF10:直接访问网页\n\n";
    if (l == 'S')
        cout << "\nPlease press the F key to select the default access mode:\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search \nF10:Directly access the web \n\n";
    if (l == 'K')
        cout << "\nPlease press F to select the default access mode:\nF7:Google search \nF8:Bing search \nF9:Baidu search \nF10:Direct access to the web \n\n";
    if (l == 'J')
        cout << "\nFキーを押して、デフォルトのアクセスモードを選択し:\nF7:Google検索\nF8：Bing検索\nF9：Baidu検索\nF10：Webへの直接アクセスを選択し、入力してください\n\n";
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
        cout << ctime(&rtime)<< "\n\n"<<"你好 " <<n << "!\n欢迎使用CE访问\n";
    if (l == 'S')
        cout << ctime(&rtime) << "\n\n" <<  "Hello "<<n <<"!\nWelcome to use CE Access!\n";
    if (l == 'K')
        cout << ctime(&rtime) << "\n\n" <<  "Hello "<<n <<"!\nWelcome to CE Access!\n";
    if (l == 'J')
        cout << ctime(&rtime) << "\n\n" << "こんにちは " <<n <<"!\nCE訪問へようこそ！\n";
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
    cout << "\n感谢您选择CE访问！\nThank you for choosing  CE Access!\nCE訪問セスをお選びいただきありがとうございます!\n\n\n\n"<<"Welcome!"<<"\n\n";
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
    cout<<"\n在正式开始之前，我们需要先进行一些必要的设置，才能正常地使用CE访问，以为您提供更好的服务，感谢您的理解！(后续可在工具箱中更改这些设置)\n\nBefore the official start, we need to make some necessary settings to use CE access normally to provide you with better service, thank you for your understanding!(These settings can be subsequently changed in the toolbox)\n\n正式に開始する前に、CEアクセスを正常に使用してより良いサービスを提供するために必要な設定を行う必要があります。ご理解のほどよろしくお願いいたします。(これらの設定は、その後、ツールボックスで変更することができます）\n\n";
    system("pause");
    system("cls");
    cout << "\a";
    language();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "用户名\n\n太棒了！那我们该怎么称呼您呢？\n";
    if (l == 'S')
        cout << "User Name\n\nGreat! What should we call you?\n";
    if (l == 'K')
        cout << "Username\n\nThat's great! What should we call you?\n";
    if (l == 'J')
        cout << "ユーザー名\n\nすごいですねぇ。 なんて呼べばいいんだろう？\n";
    name();
    cout << "\n";
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "主题\n\n选择一个您喜爱的主题吧！\n\n";
    if (l == 'S')
        cout << "Theme\n\nChoose a theme of your choice! \n\n";
    if (l == 'K')
        cout << "Themes\n\nChoose a theme of your choice! \n\n";
    if (l == 'J')
        cout << "トピックス\n\nお好きなテーマをお選びください\n\n";
    themes();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "默认访问模式\n\n最后一个步骤了！";
    if (l == 'S')
        cout << "Default Access Mode\n\nLast step!";
    if (l == 'K')
        cout << "Default access mode\n\nThe final step!";
    if (l == 'J')
        cout << "デフォルトのアクセスモード\n\n最後のステップだ!";
    Default();
    system("pause");
    system("cls");
    cout << "\a";
    if (l == 'C')
        cout << "CE访问欢迎您！\n\n恭喜！一切都已准备就绪，关闭程序后再次打开即可开始访问！\n";
    if (l == 'S')
        cout << "CE Access Welcome! \n\nCongratulations! Everything is ready, closed the program and opened again to start accessing!\n";
    if (l == 'K')
        cout << "CE Access Welcome! \n\nCongratulations! Everything is ready, closed the program and opened again to start accessing!\n";
    if (l == 'J')
        cout << "CE訪問はあなたを歓迎します! \n\nおめでとうございます。 すべての準備が整い、プログラムはいったん終了し、再び開いてアクセスを開始します!\n";
    system("pause");
    cout << "\a";
    return 0;
}
