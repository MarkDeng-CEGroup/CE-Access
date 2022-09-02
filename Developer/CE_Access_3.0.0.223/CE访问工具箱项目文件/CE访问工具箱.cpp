#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;
int main()
{
	system("color F0");
	char l,t;
	string n;
	fstream dl;
	fstream dn;
	fstream dt;
	dt.open("dt.dat", ios::in);
	if(!dt)
	{
		cout<<"抱歉，设置还未完毕，暂时无法使用CE访问工具箱！\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n申し訳ありませんが、セットアップは完了しておらず、当面はCEを使用してツールボックスにアクセスできません!\n\n"; 
		system("pause");
		return 0;
	} 
	dt >> t;
	dt.close();
	if (t == 'L')
		system("color F0");
	if (t == 'D')
		system("color 17");
	if (t == 'J')
		system("color 07");
	dl.open("dl.dat", ios::in);
	if(!dl)
	{
		cout<<"抱歉，设置还未完毕，暂时无法使用CE访问工具箱！\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n申し訳ありませんが、セットアップは完了しておらず、当面はCEを使用してツールボックスにアクセスできません!\n\n"; 
		system("pause");
		return 0;
	} 
	dl >> l;
	dl.close();
	dn.open("dn.dat", ios::in);
	if(!dn)
	{
		cout<<"抱歉，设置还未完毕，暂时无法使用CE访问工具箱！\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n申し訳ありませんが、セットアップは完了しておらず、当面はCEを使用してツールボックスにアクセスできません!\n\n"; 
		system("pause");
		return 0;
	} 
	dn >> n;
	dn.close();
	if (l == 'C')
		cout << n << "您好!\n欢迎使用CE访问工具箱\n\n";
	if (l == 'S')
		cout << n << "Hello！\nWelcome to use CE Access Tookit!\n\n";
	if (l == 'K')
		cout << n << "Hello！\nWelcome to CE Access Toolkit!\n\n";
	if (l == 'J')
		cout << n << "こんにちは！\nCE Access Toolkitへようこそ！\n\n";
	if (l == 'C')
		cout <<"请按F键选择要修改的对应设置:\nF7:显示语言\n   表示言語\n   Display Language\nF8:用户名\nF9:主题\nF10:默认访问模式\n\nF1:清除所有数据!\n\n";
	if (l == 'S')
		cout <<"Please press F to select the corresponding setting to be modified:\nF7:显示语言\n   表示言語\n   Display Language\nF8:User Name\nF9:Theme\nF10:Default Access Mode\n\nF1:Clear all data!\n\n";
	if (l == 'K')
		cout << "Please press F to select the corresponding setting to be modified:\nF7:显示语言\n   表示言語\n   Display Language\nF8:Username\nF9:Themes\nF10:Default access mode\n\nF1:Clear all data!\n\n";
	if (l == 'J')
		cout << "Fボタンを押して、変更する該当の設定を選択してください:\nF7:显示语言\n   表示言語\n   Display Language\nF8:ユーザー名\nF9:トピックス\nF10:デフォルトのアクセスモード\n\nF1:全データを消去せよ!\n\n";
	while (true)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			system("cls");
			if (l == 'C')
				cout << "确定删除全部数据吗?操作后将永久不可还原!\n\n";
			if (l == 'S')
				cout << "Are you sure you want to delete all the data? It will be permanently irreversible after the operation!\n\n";
			if (l == 'K')
				cout << "Are you sure you want to delete all the data? After the operation it will be permanently irreversible!\n\n";
			if (l == 'J')
				cout << "本当に全データを削除してよいのでしょうか？ 手術後は永久に元に戻りません!\n\n";
			system("pause");
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
			break;
		}
		if (GetAsyncKeyState(VK_F7))
		{
			ofstream dal;
			dal.open("dl.dat", ios::trunc);
			system("pause");
			system("cls");
			cout << "\n语言\nLanguage\n言語\n\n请按对应的F键选择程序默认显示语言:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n対応するFキーを押して、プログラムのデフォルトの表示言語を選択してください:\n\nF7:简体中文\nF8:English(US)\nF9:English(UK)\nF10:日本語\n\n";
			while (true)
			{
				if (GetAsyncKeyState(VK_F7))
				{
					dal << "C";
					l = 'C';
					dal.close();
					break;
				}
				if (GetAsyncKeyState(VK_F8))
				{
					dal << "S";
					l = 'S';
					dal.close();
					break;
				}
				if (GetAsyncKeyState(VK_F9))
				{
					dal << "K";
					l = 'K';
					dal.close();
					break;
				}
				if (GetAsyncKeyState(VK_F10))
				{
					dal << "J";
					l = 'J';
					dal.close();
					break;
				}
			}
			break;
		}
		if (GetAsyncKeyState(VK_F8))
		{
			ofstream dan;
			dan.open("dn.dat", ios::trunc);
			system("pause");
			system("cls");
			if (l == 'C')
				cout << "\n输入您的用户名(请不要包含空格键):";
			if (l == 'S')
				cout << "\nEnter your username (please do not include the space bar):";
			if (l == 'K')
				cout << "\nEnter your username (please do not include the space bar):";
			if (l == 'J')
				cout << "\nユーザー名を入力してください（スペースバーを入れないでください）:";
			cin >> n;
			dan << n;
			dan.close();
			break;
		}
		if (GetAsyncKeyState(VK_F9))
		{
			ofstream dat;
			dat.open("dt.dat", ios::trunc);
			system("pause");
			system("cls");
			if (l == 'C')
				cout << "按下F键选择对应的主题:\nF7:流行多彩(默认主题)\nF8:经典蓝白\nF9:极简黑白\n\n";
			if (l == 'S')
				cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
			if (l == 'K')
				cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
			if (l == 'J')
				cout << "プレビューするテーマを選択するには、Fキーを押します:\nF7:ポップカラフル(デフォルトテーマ)\nF8:クラシックブルーホワイト\nF9:ミニマリスト白黒\n\n";
			while (true)
			{
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
				if (GetAsyncKeyState(VK_F9))
				{
					system("color 07");
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
			ofstream dad;
			dad.open("dd.dat", ios::trunc);
			system("pause");
			system("cls");
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
				if (GetAsyncKeyState(VK_F10))
				{
					dad << 'W';
					dad.close();
					break;
				}
			}
			break;
		}
	}
	system("cls");
    if (l == 'C')
    	cout << n << ",谢谢，设置已经完成更改，下次打开软件时将生效!\n\n";
	if (l == 'S')
		cout << n << ",Thank you very much. Your settings have been changed and will take effect the next time you open the software!\n\n";
	if (l == 'K')
		cout << n << ",Thank you. The settings have been changed and will take effect the next time you open the software!\n\n";
	if (l == 'J')
		cout << n << ",ありがとうございます。設定が変更され、次にソフトを開いたときに有効になります!\n\n";
	system("pause");
	return 0;
}
