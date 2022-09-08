#include<iostream>
#include<string>
#include<string.h>
#include<windows.h>
#include<fstream>
#include<ctime>
#include<time.h>
using namespace std;
char l,t,d,r;
string n,in,search,start="start";
int sb=0,cnm=0;
void Default();
void web(string w);
void Google();
void Bing();
void Baidu();
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
        hitory << endl <<endl<< "访问时间:" << ctime(&curtime) << endl << "访问模式:" << mode << endl << "访问的内容:" << in << endl<<"链接: "<<link<<endl;
    if (l == 'S')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
    if (l == 'K')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
    if (l == 'J')
        hitory << endl <<endl<< "訪問時間:" << ctime(&curtime) << endl << "アクセスモード:" << mode << endl << "訪問の歴史:" << in << endl<<"リンク集: "<<link<<endl;
}
void setting()
{
A:
    system("cls");
    system("color F0");
    cnm=0;
    if (l == 'C')
        cout <<"<-E+Esc\nCE Group.|CE Access\n设置\n\n请按F键选择要修改的对应设置:\n\nF7:显示语言\n   表示言語\n   Display Language\n\nF8+Esc:用户名\nF9:主题\n\nF10:记住的选项\n\nF1:清除所有数据!\n\nF2:搜索\"/s\"\n\nF3:检查更新\nF5:打开使用指南和欢迎页(中文)\nF4:关于CE Access";
    if (l == 'S')
        cout <<"<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:显示语言\n   表示言語\n   Display Language\n\nF8+Esc:User Name\nF9:Theme\n\nF10:Remembered Options\n\nF1:Clear all data!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    if (l == 'K')
        cout << "<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:显示语言\n   表示言語\n   Display Language\n\nF8+Esc:Username\nF9:Themes\n\nF10:Remembered Options\n\nF1:Clear all data!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    if (l == 'J')
        cout << "<-E+Esc\nCE Group.|CE Access\n設定します\n\nFボタンを押して、変更する該当の設定を選択してください:\n\nF7:显示语言\n   表示言語\n   Display Language\n\nF8+Esc:ユーザー名\nF9:トピックス\nF10:リメンバードオプション\n\nF1:全データを消去せよ!\n\nF2:検索\"/s\"\n\nF3:アップデートを確認する\nF4:CE Accessについて";
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
                cout << "<-Esc\nCE Group.|CE Access\n\n确定删除全部数据吗?操作后将永久不可还原!(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the data? It will be permanently irreversible after the operation!(Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\n\nAre you sure you want to delete all the data? After the operation it will be permanently irreversible!(Y/N)\n\n";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\n\n本当に全データを削除してよいのでしょうか？ 手術後は永久に元に戻りません!(Y/N)\n\n";
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
            cout << "<-Esc\nCE Group.|CE Access\n请按对应的F键选择程序默认显示语言: Please press the corresponding F key to select the default display language of the program: 対応するFキーを押して、プログラムのデフォルトの表示言語を選択してください:\n\nF8:简体中文\nF9:English(US)\nF10:English(UK)\nF1:日本語";
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
                if (GetAsyncKeyState(VK_F1))
                {
                    dal << "J";
                    l = 'J';
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
                cout << "<-输入\"Esc\"\nCE Group.|CE Access\n输入您的用户名(请不要包含空格键):";
            if (l == 'S')
                cout << "<-Input\"Esc\"\nCE Group.|CE Access\nEnter your username (please do not include the space bar):";
            if (l == 'K')
                cout << "<-Input\"Esc\"\nCE Group.|CE Access\nEnter your username (please do not include the space bar):";
            if (l == 'J')
                cout << "<-入力します\"Esc\"\nCE Group.|CE Access\nユーザー名を入力してください（スペースバーを入れないでください）:";
            cin >> dn;
            if(dn=="Esc")
            {
                dan << n;
                goto A;
            }
            dan << dn;
            dan.close();
            break;
        }
        if (GetAsyncKeyState(VK_F9))
        {
            ofstream dat;
            dat.open("dt.dat", ios::trunc);
            system("cls");
            if (l == 'C')
                cout << "<-Esc\nCE Group.|CE Access\n按下F键选择对应的主题:\n\nF7:流行多彩(默认主题)\nF8:经典蓝白\nF10:极简黑白";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF10:Minimalist Black&White";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\nプレビューするテーマを選択するには、Fキーを押します:\n\nF7:ポップカラフル(デフォルトテーマ)\nF8:クラシックブルーホワイト\nF10:ミニマリスト白黒\n\n";
            while (true)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    dat<<t;
                    dat.close();
                    goto A;
                }
                if (GetAsyncKeyState(VK_F7))
                {
                    system("color F0");
                    dat << 'L';
                    dat.close();
                    t = 'L';
                    break;
                }
                if (GetAsyncKeyState(VK_F8))
                {
                    system("color 17");
                    dat << 'D';
                    dat.close();
                    t = 'D';
                    break;
                }
                if (GetAsyncKeyState(VK_F10))
                {
                    system("color F0");
                    dat << 'J';
                    dat.close();
                    t = 'J';
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
                cout << "<-N+Esc\nCE Group.|CE Access\n更改记住的选项:\n\nF1:默认访问模式\nF2:对输入网址的操作";
            if (l == 'S')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Operation on the input URL";
            if (l == 'K')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Action on input URLs";
            if (l == 'J')
                cout << "<-N+Esc\nCE Group.|CE Access\n\nF1:デフォルトのアクセスモード\nF2:入力されたURLに対するアクション";
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
                        cout << "<-Esc\nCE Group.|CE Access\n请按下F键选择默认访问模式:\n\nF7:Google搜索 \nF8:Bing搜索 \nF9:Baidu搜索";
                    if (l == 'S')
                        cout << "<-Esc\nCE Group.|CE Access\nPlease press the F key to select the default access mode:\n\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search";
                    if (l == 'K')
                        cout << "<-Esc\nCE Group.|CE Access\nPlease press F to select the default access mode:\n\nF7:Google search \nF8:Bing search \nF9:Baidu search";
                    if (l == 'J')
                        cout << "<-Esc\nCE Group.|CE Access\nFキーを押して、デフォルトのアクセスモードを選択し:\n\nF7:Google検索\nF8：Bing検索\nF9：Baidu検索";
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
                        cout << "<-Esc\nCE Group.|CE Access\n如果您输入了网址，我们将执行以下哪个操作？\n\nF7:访问网址并记住该选择\nF8:不访问网址并记住该选择\nF9:每次询问";
                    if (l == 'S')
                        cout << "<-Esc\nCE Group.|CE Access\nIf you enter a URL, which of the following actions will we perform? \n\nF7:Visit the URL and remember the selection \nF8:Do not visit the URL and remember the selection \nF9:Ask each time";
                    if (l == 'K')
                        cout << "<-Esc\nCE Group.|CE Access\nIf you enter a web address, which of the following actions will we perform? \n\nF7:Visit the URL and remember the selection \nF8:Do not visit the URL and remember the selection \nF9:Ask each time";
                    if (l == 'J')
                        cout << "<-Esc\nCE Group.|CE Access\nURLを入力した場合、次のどのアクションを実行しますか？\n\nF7：URLにアクセスして選択を覚えてください\nF8：URLにアクセスせずに選択を覚えてください\nF9：毎回質問してください";
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
                            dr << '0';
                            dr.close();
                            break;
                        }
                        if (GetAsyncKeyState(VK_F9))
                        {
                            dr << ' ';
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
                cout << "<-Esc\nCE Group.|CE Access\n检查更新\n\n当前版本:4.0.0-Beta6(4.0.0.664)\n是否前往CE Group官网的CE Access页面查看最新版本或了解更多？(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0-Beta6(4.0.0.664)\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0-Beta6(4.0.0.664)\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\nアップデートを確認する\n\n現在のバージョン: 4.0.0-Beta6(4.0.0.664)\nCEグループサイトのCE Accessのページで最新版を見たり、詳細を確認したりすることはありますか？ (Y/N)\n\n";
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
                cout << "<-Esc\nCE Group.|CE Access\n关于CE Access\n\nCE Access-Beta\n当前版本:4.0.0-Beta6(4.0.0.664)\n发布时间:2022/9/8\n发布人:Mark Deng\nCE Group官网:cegroup.buzz\nCE Access页面:cegroup.buzz/product/ceaccess\n联系我们:dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access-Beta\nCurrent Version:4.0.0-Beta6(4.0.0.664)\nRelease Date:2022/9/8\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access-Beta\nCurrent Version:4.0.0-Beta6(4.0.0.664)\nRelease Date:2022/9/8\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\nCEアクセスについて\n\nCE Access-Beta\n現在のバージョン: 4.0.0-Beta6(4.0.0.664)\n発売日：2022/9/8\n発行者：Mark Deng\nCEグループオフィシャルサイト：cegroup.buzz\nCE Accessページ：cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
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
            cout <<"CE Group.|CE Access\n"<< n << ",谢谢，设置已经完成更改，下次打开软件时将生效!\n\n";
        if (l == 'S')
            cout <<"CE Group.|CE Access\n"<< n << ",Thank you very much. Your settings have been changed and will take effect the next time you open the software!\n\n";
        if (l == 'K')
            cout <<"CE Group.|CE Access\n"<< n << ",Thank you. The settings have been changed and will take effect the next time you open the software!\n\n";
        if (l == 'J')
            cout <<"CE Group.|CE Access\n"<< n << ",ありがとうございます。設定が変更され、次にソフトを開いたときに有効になります!\n\n";
        system("pause");
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
            cout <<"CE Group.|CE Access\n检测到您输入了网址,是否要直接访问该网址?\n\nF7:是    F8:否\n\nF1:是(记住本次选择)    F2:否(记住本次选择)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURLを入力したことが検出されました。そのURLに直接アクセスしますか?\n\nF7:はい    F8:いいえ\n\nF1：はい（この選択を覚えておいてください）F2：いいえ（この選択を覚えておいてください）";
        while (r!=0)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                web(in);
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
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "0";
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
            cout <<"CE Group.|CE Access\n检测到您输入了网址,是否要直接访问该网址?\n\nF7:是    F8:否\n\nF1:是(记住本次选择)    F2:否(记住本次选择)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURLを入力したことが検出されました。そのURLに直接アクセスしますか?\n\nF7:はい    F8:いいえ\n\nF1：はい（この選択を覚えておいてください）F2：いいえ（この選択を覚えておいてください）";
        while (r!=0)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                ini+=in;
                web(ini);
            }
            if (GetAsyncKeyState(VK_F1))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "1";
                dr.close();
                ini+=in;
                web(ini);
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "0";
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
            cout <<"CE Group.|CE Access\n检测到您输入了网址,是否要直接访问该网址?\n\nF7:是    F8:否\n\nF1:是(记住本次选择)    F2:否(记住本次选择)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURLを入力したことが検出されました。そのURLに直接アクセスしますか?\n\nF7:はい    F8:いいえ\n\nF1：はい（この選択を覚えておいてください）F2：いいえ（この選択を覚えておいてください）";
        while (r!=0)
        {
            if (GetAsyncKeyState(VK_F7))
            {
                ini+=in;
                web(ini);
            }
            if (GetAsyncKeyState(VK_F1))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "1";
                dr.close();
                ini+=in;
                web(ini);
            }
            if (GetAsyncKeyState(VK_F2))
            {
                ofstream dr;
                dr.open("dr.dat",ios::out);
                dr << "0";
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
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color F0");
    char Google[300];
    search =  "https://www.google.com/search?q=" ;
    if (l == 'C')
        cout << "\n(如需更改设置请输入\"/s\")\n\nGoogle搜索:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    if (l == 'J')
        cout << "\n(設定を変更するには、次のように入力します\"/s\"）\n\nGoogle検索:";
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
        history(in, "Google搜索",search);
    if (l == 'S')
        history(in, "Google search",search);
    if (l == 'K')
        history(in, "Google search",search);
    if (l == 'J')
        history(in, "Google検索",search);
    search=start+" "+search;
    strcpy(Google, search.c_str());
    system(Google);
}
void Bing()
{
    if (t == 'L')
        system("color 3F");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color F0");
    char Bing[300];
    search =  "https://www.bing.com/search?q=" ;
    if (l == 'C')
        cout << "\n(如需更改设置请输入\"/s\")\n\nBing搜索:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    if (l == 'J')
        cout << "\n(設定を変更するには、次のように入力します\"/s\"）\n\nBing検索:";
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
        history(in, "Bing搜索",search);
    if (l == 'S')
        history(in, "Bing search",search);
    if (l == 'K')
        history(in, "Bing search",search);
    if (l == 'J')
        history(in, "Bing検索",search);
    search=start+" "+search;
    strcpy(Bing, search.c_str());
    system(Bing);
}
void Baidu()
{
    if (t == 'L')
        system("color 1F");
    if (t == 'D')
        system("color 17");
    if (t == 'J')
        system("color F0");
    char Baidu[300];
    search =  "https://www.baidu.com/s?word=" ;
    if (l == 'C')
        cout << "\n(如需更改设置请输入\"/s\")\n\nBaidu搜索:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    if (l == 'J')
        cout << "\n(設定を変更するには、次のように入力します\"/s\"）\n\nBaidu検索:";
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
        history(in, "Baidu搜索", search);
    if (l == 'S')
        history(in, "Baidu search", search);
    if (l == 'K')
        history(in, "Baidu search", search);
    if (l == 'J')
        history(in, "Baidu検索", search);
    search=start+" "+search;
    strcpy(Baidu, search.c_str());
    system(Baidu);
}
void web(string w)
{
    char web[300];
    sb=1;
    if (l == 'C')
        history(in, "直接访问网页", w);
    if (l == 'S')
        history(in, "Web", w);
    if (l == 'K')
        history(in, "Web", w);
    if (l == 'J')
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
        cout <<"输入您的用户名(请不要包含空格键):";
    if (l == 'S')
        cout << "Enter your username (please do not include the space bar):";
    if (l == 'K')
        cout << "Enter your username (please do not include the space bar):";
    if (l == 'J')
        cout << "ユーザー名を入力してください（スペースバーを入れないでください）:";
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
            system("color F0");
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
        cout << "请按下F键选择默认访问模式:\nF7:Google搜索 \nF8:Bing搜索 \nF9:Baidu搜索 \n\n";
    if (l == 'S')
        cout << "Please press the F key to select the default access mode:\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search \n\n";
    if (l == 'K')
        cout << "Please press F to select the default access mode:\nF7:Google search \nF8:Bing search \nF9:Baidu search \n\n";
    if (l == 'J')
        cout << "Fキーを押して、デフォルトのアクセスモードを選択し:\nF7:Google検索\nF8：Bing検索\nF9：Baidu検索\n\n";
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
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n"<<"你好 " <<n << "!\n欢迎使用CE Access\n";
    if (l == 'S')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" <<  "Hello "<<n <<"!\nWelcome to use CE Access!\n";
    if (l == 'K')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" <<  "Hello "<<n <<"!\nWelcome to CE Access!\n";
    if (l == 'J')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" << "こんにちは " <<n <<"!\nCE Accessへようこそ！\n";
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
    cout << "CE Group.|CE Access" << "\n感谢您选择CE Access！\nThank you for choosing  CE Access!\nCE Accessセスをお選びいただきありがとうございます!\n\n\n\n"<<"Welcome!\n\n";
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\nCE Access是CE Group旗下的访问工具，并承诺永久开源、免费，您可在CE Group官网:cegroup.buzz获取到CE Access的最新官方版本。如果您在其他渠道花钱购买了本款产品，那么您一定被骗了！请到官方渠道(cegroup.buzz)获取最新的免费正版产品。您使用的是Beta版本，稳定性较差，如遇到问题或想要向我们提出建议，可通过电子邮件联系我们进行反馈：dengyanbin@cegroup.wecom.work，我们期待听到您的声音。CE Access相关一切版权归CE Group所有。\n\nCE Access is the access tool of CE Group and is promised to be permanently open source and free of charge. You can get the latest official version of CE Access on the official website of CE Group:cegroup.buzz. If you have paid for this product in other channels, you must be cheated! Please go to the official channel (cegroup.buzz) to get the latest free genuine version of the product. You are using a Beta version, which is less stable. If you encounter problems or want to give us suggestions, you can contact us by email for feedback: dengyanbin@cegroup.wecom.work We look forward to hearing from you. All rights to everything related to CE Access belong to CE Group.\n\nCE AccessはCEグループのアクセスツールで、恒久的にオープンソースかつフリーであることが約束されています。 CE Accessの最新正式版は、CEグループのウェブサイト:cegroup.buzzで入手できます。 この製品を他のところからお金を払って買った人は、ぼったくられたことになりますよ。 最新の無料正規版を入手するには、公式チャンネル（cegroup.buzz）へアクセスしてください。 ベータ版を使用しているため、安定性が低くなっています。問題が発生した場合やアドバイスをご希望の場合は、Eメール：dengyanbin@cegroup.wecom.work フィードバックを受け付けております。ご連絡をお待ちしております。\n\n";
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\n在正式开始之前，我们需要先进行一些必要的设置，才能正常地使用CE Access，以为您提供更好的服务，感谢您的理解！\n\nBefore the official start, we need to make some necessary settings to use CE access normally to provide you with better service, thank you for your understanding!\n\n正式に開始する前に、CE  Access正常に使用してより良いサービスを提供するために必要な設定を行う必要があります。ご理解のほどよろしくお願いいたします。\n\n";
    system("pause");
    system("cls");
    cout << "CE Group.|CE Access\n语言\nLanguage\n言語\n\n请按对应的F键选择程序默认显示语言:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n対応するFキーを押して、プログラムのデフォルトの表示言語を選択してください:\n\nF7:简体中文\nF8:English(US)\nF9:English(UK)\nF10:日本語\n\n";
    language();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n用户名\n\n太棒了！那我们该怎么称呼您呢？\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nUser Name\n\nGreat! What should we call you?\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nUsername\n\nThat's great! What should we call you?\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\nユーザー名\n\nすごいですねぇ。 なんて呼べばいいんだろう？\n";
    name();
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n主题\n\n选择一个您喜爱的主题吧！\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nTheme\n\nChoose a theme of your choice! \n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nThemes\n\nChoose a theme of your choice! \n\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\nトピックス\n\nお好きなテーマをお選びください\n\n";
    themes();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n默认访问模式\n\n最后一个步骤了！";
    if (l == 'S')
        cout << "CE Group.|CE Access\nDefault Access Mode\n\nLast step!";
    if (l == 'K')
        cout << "CE Group.|CE Access\nDefault access mode\n\nThe final step!";
    if (l == 'J')
        cout << "CE Group.|CE Access\nデフォルトのアクセスモード\n\n最後のステップだ!";
    Default();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\nCE Access欢迎您！\n\n恭喜！一切都已准备就绪！\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\nCE Accessはあなたを歓迎します! \n\nおめでとうございます。 すべての準備が整い、プログラムはいったん終了し!\n\n";
    system("pause");
    system("start https://cegroup.buzz/product/ceawel.html");
}
