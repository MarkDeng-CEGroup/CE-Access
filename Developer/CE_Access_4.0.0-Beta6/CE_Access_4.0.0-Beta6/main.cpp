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
        hitory << endl <<endl<< "����ʱ��:" << ctime(&curtime) << endl << "����ģʽ:" << mode << endl << "���ʵ�����:" << in << endl<<"����: "<<link<<endl;
    if (l == 'S')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
    if (l == 'K')
        hitory << endl <<endl<< "Access Time:" << ctime(&curtime) << endl << "Access Mode:" << mode << endl << "Access Things:" << in << endl<<"link: "<<link<<endl;
    if (l == 'J')
        hitory << endl <<endl<< "�L���r�g:" << ctime(&curtime) << endl << "����������`��:" << mode << endl << "�L���Κsʷ:" << in << endl<<"��󥯼�: "<<link<<endl;
}
void setting()
{
A:
    system("cls");
    system("color F0");
    cnm=0;
    if (l == 'C')
        cout <<"<-E+Esc\nCE Group.|CE Access\n����\n\n�밴F��ѡ��Ҫ�޸ĵĶ�Ӧ����:\n\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\n\nF8+Esc:�û���\nF9:����\n\nF10:��ס��ѡ��\n\nF1:�����������!\n\nF2:����\"/s\"\n\nF3:������\nF5:��ʹ��ָ�Ϻͻ�ӭҳ(����)\nF4:����CE Access";
    if (l == 'S')
        cout <<"<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\n\nF8+Esc:User Name\nF9:Theme\n\nF10:Remembered Options\n\nF1:Clear all data!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    if (l == 'K')
        cout << "<-E+Esc\nCE Group.|CE Access\nSetting\n\nPlease press F to select the corresponding setting to be modified:\n\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\n\nF8+Esc:Username\nF9:Themes\n\nF10:Remembered Options\n\nF1:Clear all data!\n\nF2:Search\"/s\"\n\nF3:Check for updates\nF5:Using help(Chinese only)\nF4:About CE Access";
    if (l == 'J')
        cout << "<-E+Esc\nCE Group.|CE Access\n�O�����ޤ�\n\nF�ܥ����Ѻ���ơ��������ԓ�����O�����x�k���Ƥ�������:\n\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\n\nF8+Esc:��`���`��\nF9:�ȥԥå���\nF10:����Щ`�ɥ��ץ����\n\nF1:ȫ�ǩ`������ȥ����!\n\nF2:����\"/s\"\n\nF3:���åץǩ`�Ȥ�_�J����\nF4:CE Access�ˤĤ���";
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
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\n\n������ȫ�ǩ`�����������Ƥ褤�ΤǤ��礦���� ���g������ä�Ԫ�ˑ���ޤ���!(Y/N)\n\n";
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
            cout << "<-Esc\nCE Group.|CE Access\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����: Please press the corresponding F key to select the default display language of the program: ���ꤹ��F���`��Ѻ���ơ��ץ����Υǥե���Ȥα�ʾ���Z���x�k���Ƥ�������:\n\nF8:��������\nF9:English(US)\nF10:English(UK)\nF1:�ձ��Z";
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
                cout << "<-����\"Esc\"\nCE Group.|CE Access\n���������û���(�벻Ҫ�����ո��):";
            if (l == 'S')
                cout << "<-Input\"Esc\"\nCE Group.|CE Access\nEnter your username (please do not include the space bar):";
            if (l == 'K')
                cout << "<-Input\"Esc\"\nCE Group.|CE Access\nEnter your username (please do not include the space bar):";
            if (l == 'J')
                cout << "<-�������ޤ�\"Esc\"\nCE Group.|CE Access\n��`���`�����������Ƥ������������ک`���Щ`�����ʤ��Ǥ���������:";
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
                cout << "<-Esc\nCE Group.|CE Access\n����F��ѡ���Ӧ������:\n\nF7:���ж��(Ĭ������)\nF8:��������\nF10:����ڰ�";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF10:Minimalist Black&White";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nPress F key to select the corresponding theme:\n\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\n�ץ�ӥ�`����Ʃ`�ޤ��x�k����ˤϡ�F���`��Ѻ���ޤ�:\n\nF7:�ݥåץ���ե�(�ǥե���ȥƩ`��)\nF8:���饷�å��֥�`�ۥ磻��\nF10:�ߥ˥ޥꥹ�Ȱ��\\n\n";
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
                cout << "<-N+Esc\nCE Group.|CE Access\n���ļ�ס��ѡ��:\n\nF1:Ĭ�Ϸ���ģʽ\nF2:��������ַ�Ĳ���";
            if (l == 'S')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Operation on the input URL";
            if (l == 'K')
                cout << "<-N+Esc\nCE Group.|CE Access\nChange the remembered options:\n\nF1:Default access mode\nF2:Action on input URLs";
            if (l == 'J')
                cout << "<-N+Esc\nCE Group.|CE Access\n\nF1:�ǥե���ȤΥ���������`��\nF2:�������줿URL�ˌ����륢�������";
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
                    if (l == 'J')
                        cout << "<-Esc\nCE Group.|CE Access\nF���`��Ѻ���ơ��ǥե���ȤΥ���������`�ɤ��x�k��:\n\nF7:Google����\nF8��Bing����\nF9��Baidu����";
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
                    if (l == 'J')
                        cout << "<-Esc\nCE Group.|CE Access\nURL�������������ϡ��ΤΤɤΥ���������g�Ф��ޤ�����\n\nF7��URL�˥������������x�k��ҙ���Ƥ�������\nF8��URL�˥��������������x�k��ҙ���Ƥ�������\nF9�������|�����Ƥ�������";
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
                cout << "<-Esc\nCE Group.|CE Access\n������\n\n��ǰ�汾:4.0.0-Beta6(4.0.0.664)\n�Ƿ�ǰ��CE Group������CE Accessҳ��鿴���°汾���˽���ࣿ(Y/N)\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0-Beta6(4.0.0.664)\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nCheck for updates\n\nCurrent Version: 4.0.0-Beta6(4.0.0.664)\nDo you go to the CE Access page on the CE Group website to see the latest version or learn more? (Y/N)\n\n";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\n���åץǩ`�Ȥ�_�J����\n\n�F�ڤΥЩ`�����: 4.0.0-Beta6(4.0.0.664)\nCE����`�ץ����Ȥ�CE Access�Υک`�������°��Ҋ���ꡢԔ����_�J�����ꤹ�뤳�ȤϤ���ޤ����� (Y/N)\n\n";
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
                cout << "<-Esc\nCE Group.|CE Access\n����CE Access\n\nCE Access-Beta\n��ǰ�汾:4.0.0-Beta6(4.0.0.664)\n����ʱ��:2022/9/8\n������:Mark Deng\nCE Group����:cegroup.buzz\nCE Accessҳ��:cegroup.buzz/product/ceaccess\n��ϵ����:dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'S')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access-Beta\nCurrent Version:4.0.0-Beta6(4.0.0.664)\nRelease Date:2022/9/8\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'K')
                cout << "<-Esc\nCE Group.|CE Access\nAbout CE Access\n\nCE Access-Beta\nCurrent Version:4.0.0-Beta6(4.0.0.664)\nRelease Date:2022/9/8\nPublisher:Mark Deng\nCE Group official website:cegroup.buzz\nCE Access page: cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
            if (l == 'J')
                cout << "<-Esc\nCE Group.|CE Access\nCE���������ˤĤ���\n\nCE Access-Beta\n�F�ڤΥЩ`�����: 4.0.0-Beta6(4.0.0.664)\n�k���գ�2022/9/8\n�k���ߣ�Mark Deng\nCE����`�ץ��ե�����륵���ȣ�cegroup.buzz\nCE Access�ک`����cegroup.buzz/product/ceaccess\nContact us: dengyanbin@cegroup.wecom.work\n\n";
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
        if (l == 'J')
            cout <<"CE Group.|CE Access\n"<< n << ",���꤬�Ȥ��������ޤ����O����������졢�Τ˥��եȤ��_�����Ȥ����Є��ˤʤ�ޤ�!\n\n";
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
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURL�������������Ȥ��ʳ�����ޤ���������URL��ֱ�ӥ����������ޤ���?\n\nF7:�Ϥ�    F8:������\n\nF1���Ϥ��������x�k��ҙ���Ƥ����Ƥ���������F2���������������x�k��ҙ���Ƥ����Ƥ���������";
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
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURL�������������Ȥ��ʳ�����ޤ���������URL��ֱ�ӥ����������ޤ���?\n\nF7:�Ϥ�    F8:������\n\nF1���Ϥ��������x�k��ҙ���Ƥ����Ƥ���������F2���������������x�k��ҙ���Ƥ����Ƥ���������";
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
            cout <<"CE Group.|CE Access\n��⵽����������ַ,�Ƿ�Ҫֱ�ӷ��ʸ���ַ?\n\nF7:��    F8:��\n\nF1:��(��ס����ѡ��)    F2:��(��ס����ѡ��)";
        if (l == 'S')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'K')
            cout << "CE Group.|CE Access\nDetected that you have entered a URL, do you want to visit the URL directly?\n\nF7:Yes F8:No\n\nF1: Yes (remember this selection) F2: No (remember this selection)";
        if (l == 'J')
            cout << "CE Group.|CE Access\nURL�������������Ȥ��ʳ�����ޤ���������URL��ֱ�ӥ����������ޤ���?\n\nF7:�Ϥ�    F8:������\n\nF1���Ϥ��������x�k��ҙ���Ƥ����Ƥ���������F2���������������x�k��ҙ���Ƥ����Ƥ���������";
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
        cout << "\n(�����������������\"/s\")\n\nGoogle����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nGoogle search:";
    if (l == 'J')
        cout << "\n(�O����������ˤϡ��ΤΤ褦���������ޤ�\"/s\"��\n\nGoogle����:";
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
    if (l == 'J')
        history(in, "Google����",search);
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
        cout << "\n(�����������������\"/s\")\n\nBing����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBing search:";
    if (l == 'J')
        cout << "\n(�O����������ˤϡ��ΤΤ褦���������ޤ�\"/s\"��\n\nBing����:";
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
    if (l == 'J')
        history(in, "Bing����",search);
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
        cout << "\n(�����������������\"/s\")\n\nBaidu����:";
    if (l == 'S')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    if (l == 'K')
        cout << "\n(To change the settings, please enter\"/s\")\n\nBaidu search:";
    if (l == 'J')
        cout << "\n(�O����������ˤϡ��ΤΤ褦���������ޤ�\"/s\"��\n\nBaidu����:";
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
    if (l == 'J')
        history(in, "Baidu����", search);
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
        cout <<"���������û���(�벻Ҫ�����ո��):";
    if (l == 'S')
        cout << "Enter your username (please do not include the space bar):";
    if (l == 'K')
        cout << "Enter your username (please do not include the space bar):";
    if (l == 'J')
        cout << "��`���`�����������Ƥ������������ک`���Щ`�����ʤ��Ǥ���������:";
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
        cout << "�밴��F��ѡ��Ĭ�Ϸ���ģʽ:\nF7:Google���� \nF8:Bing���� \nF9:Baidu���� \n\n";
    if (l == 'S')
        cout << "Please press the F key to select the default access mode:\nF7:Google Search \nF8:Bing Search \nF9:Baidu Search \n\n";
    if (l == 'K')
        cout << "Please press F to select the default access mode:\nF7:Google search \nF8:Bing search \nF9:Baidu search \n\n";
    if (l == 'J')
        cout << "F���`��Ѻ���ơ��ǥե���ȤΥ���������`�ɤ��x�k��:\nF7:Google����\nF8��Bing����\nF9��Baidu����\n\n";
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
    if (l == 'J')
        cout << "CE Group.|CE Access   " <<ctime(&rtime)<< "\n\n" << "����ˤ��� " <<n <<"!\nCE Access�ؤ褦������\n";
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
    cout << "CE Group.|CE Access" << "\n��л��ѡ��CE Access��\nThank you for choosing  CE Access!\nCE Access�������x�Ӥ����������꤬�Ȥ��������ޤ�!\n\n\n\n"<<"Welcome!\n\n";
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\nCE Access��CE Group���µķ��ʹ��ߣ�����ŵ���ÿ�Դ����ѣ�������CE Group����:cegroup.buzz��ȡ��CE Access�����¹ٷ��汾�������������������Ǯ�����˱����Ʒ����ô��һ����ƭ�ˣ��뵽�ٷ�����(cegroup.buzz)��ȡ���µ���������Ʒ����ʹ�õ���Beta�汾���ȶ��Խϲ�������������Ҫ������������飬��ͨ�������ʼ���ϵ���ǽ��з�����dengyanbin@cegroup.wecom.work�������ڴ���������������CE Access���һ�а�Ȩ��CE Group���С�\n\nCE Access is the access tool of CE Group and is promised to be permanently open source and free of charge. You can get the latest official version of CE Access on the official website of CE Group:cegroup.buzz. If you have paid for this product in other channels, you must be cheated! Please go to the official channel (cegroup.buzz) to get the latest free genuine version of the product. You are using a Beta version, which is less stable. If you encounter problems or want to give us suggestions, you can contact us by email for feedback: dengyanbin@cegroup.wecom.work We look forward to hearing from you. All rights to everything related to CE Access belong to CE Group.\n\nCE Access��CE����`�פΥ��������ĩ`��ǡ���õĤ˥��`�ץ󥽩`�����ĥե�`�Ǥ��뤳�Ȥ��s������Ƥ��ޤ��� CE Access��������ʽ��ϡ�CE����`�פΥ����֥�����:cegroup.buzz�����֤Ǥ��ޤ��� �����uƷ�����ΤȤ����餪���B�ä��I�ä��ˤϡ��ܤä�����줿���Ȥˤʤ�ޤ��衣 ���¤Οo����Ҏ������֤���ˤϡ���ʽ�����ͥ루cegroup.buzz���إ����������Ƥ��������� �٩`�����ʹ�ä��Ƥ��뤿�ᡢ�����Ԥ��ͤ��ʤäƤ��ޤ������}���k���������Ϥ䥢�ɥХ�����ϣ���Έ��Ϥϡ�E��`�룺dengyanbin@cegroup.wecom.work �ե��`�ɥХå����ܤ������Ƥ���ޤ������B�j�򤪴������Ƥ���ޤ���\n\n";
    system("pause");
    system("cls");
    cout<<"CE Group.|CE Access\n\n����ʽ��ʼ֮ǰ��������Ҫ�Ƚ���һЩ��Ҫ�����ã�����������ʹ��CE Access����Ϊ���ṩ���õķ��񣬸�л������⣡\n\nBefore the official start, we need to make some necessary settings to use CE access normally to provide you with better service, thank you for your understanding!\n\n��ʽ���_ʼ����ǰ�ˡ�CE  Access������ʹ�ä��Ƥ���������`�ӥ����ṩ���뤿��˱�Ҫ���O�����Ф���Ҫ������ޤ��������Τۤɤ��������������ޤ���\n\n";
    system("pause");
    system("cls");
    cout << "CE Group.|CE Access\n����\nLanguage\n���Z\n\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n���ꤹ��F���`��Ѻ���ơ��ץ����Υǥե���Ȥα�ʾ���Z���x�k���Ƥ�������:\n\nF7:��������\nF8:English(US)\nF9:English(UK)\nF10:�ձ��Z\n\n";
    language();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n�û���\n\n̫���ˣ������Ǹ���ô�ƺ����أ�\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nUser Name\n\nGreat! What should we call you?\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nUsername\n\nThat's great! What should we call you?\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\n��`���`��\n\n�������Ǥ��ͤ��� �ʤ�ƺ��٤Ф����������\n";
    name();
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\n����\n\nѡ��һ����ϲ��������ɣ�\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nTheme\n\nChoose a theme of your choice! \n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nThemes\n\nChoose a theme of your choice! \n\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\n�ȥԥå���\n\n���ä��ʥƩ`�ޤ��x�Ӥ�������\n\n";
    themes();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\nĬ�Ϸ���ģʽ\n\n���һ�������ˣ�";
    if (l == 'S')
        cout << "CE Group.|CE Access\nDefault Access Mode\n\nLast step!";
    if (l == 'K')
        cout << "CE Group.|CE Access\nDefault access mode\n\nThe final step!";
    if (l == 'J')
        cout << "CE Group.|CE Access\n�ǥե���ȤΥ���������`��\n\n����Υ��ƥåפ�!";
    Default();
    system("pause");
    system("cls");
    if (l == 'C')
        cout << "CE Group.|CE Access\nCE Access��ӭ����\n\n��ϲ��һ�ж���׼��������\n\n";
    if (l == 'S')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    if (l == 'K')
        cout << "CE Group.|CE Access\nCE Access Welcome! \n\nCongratulations! Everything is ready!\n\n";
    if (l == 'J')
        cout << "CE Group.|CE Access\nCE Access�Ϥ��ʤ���Zӭ���ޤ�! \n\n����ǤȤ��������ޤ��� ���٤ƤΜʂ䤬�������ץ����Ϥ��ä���K�ˤ�!\n\n";
    system("pause");
    system("start https://cegroup.buzz/product/ceawel.html");
}
