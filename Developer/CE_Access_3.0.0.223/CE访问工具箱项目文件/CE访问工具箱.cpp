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
		cout<<"��Ǹ�����û�δ��ϣ���ʱ�޷�ʹ��CE���ʹ����䣡\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n�ꤷ�U����ޤ��󤬡����åȥ��åפ����ˤ��Ƥ��餺�������CE��ʹ�ä��ƥĩ`��ܥå����˥��������Ǥ��ޤ���!\n\n"; 
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
		cout<<"��Ǹ�����û�δ��ϣ���ʱ�޷�ʹ��CE���ʹ����䣡\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n�ꤷ�U����ޤ��󤬡����åȥ��åפ����ˤ��Ƥ��餺�������CE��ʹ�ä��ƥĩ`��ܥå����˥��������Ǥ��ޤ���!\n\n"; 
		system("pause");
		return 0;
	} 
	dl >> l;
	dl.close();
	dn.open("dn.dat", ios::in);
	if(!dn)
	{
		cout<<"��Ǹ�����û�δ��ϣ���ʱ�޷�ʹ��CE���ʹ����䣡\n\nSorry, the setup has not been completed, and the toolbox cannot be accessed using CE for the time being!\n\n�ꤷ�U����ޤ��󤬡����åȥ��åפ����ˤ��Ƥ��餺�������CE��ʹ�ä��ƥĩ`��ܥå����˥��������Ǥ��ޤ���!\n\n"; 
		system("pause");
		return 0;
	} 
	dn >> n;
	dn.close();
	if (l == 'C')
		cout << n << "����!\n��ӭʹ��CE���ʹ�����\n\n";
	if (l == 'S')
		cout << n << "Hello��\nWelcome to use CE Access Tookit!\n\n";
	if (l == 'K')
		cout << n << "Hello��\nWelcome to CE Access Toolkit!\n\n";
	if (l == 'J')
		cout << n << "����ˤ��ϣ�\nCE Access Toolkit�ؤ褦������\n\n";
	if (l == 'C')
		cout <<"�밴F��ѡ��Ҫ�޸ĵĶ�Ӧ����:\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\nF8:�û���\nF9:����\nF10:Ĭ�Ϸ���ģʽ\n\nF1:�����������!\n\n";
	if (l == 'S')
		cout <<"Please press F to select the corresponding setting to be modified:\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\nF8:User Name\nF9:Theme\nF10:Default Access Mode\n\nF1:Clear all data!\n\n";
	if (l == 'K')
		cout << "Please press F to select the corresponding setting to be modified:\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\nF8:Username\nF9:Themes\nF10:Default access mode\n\nF1:Clear all data!\n\n";
	if (l == 'J')
		cout << "F�ܥ����Ѻ���ơ��������ԓ�����O�����x�k���Ƥ�������:\nF7:��ʾ����\n   ��ʾ���Z\n   Display Language\nF8:��`���`��\nF9:�ȥԥå���\nF10:�ǥե���ȤΥ���������`��\n\nF1:ȫ�ǩ`������ȥ����!\n\n";
	while (true)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			system("cls");
			if (l == 'C')
				cout << "ȷ��ɾ��ȫ��������?���������ò��ɻ�ԭ!\n\n";
			if (l == 'S')
				cout << "Are you sure you want to delete all the data? It will be permanently irreversible after the operation!\n\n";
			if (l == 'K')
				cout << "Are you sure you want to delete all the data? After the operation it will be permanently irreversible!\n\n";
			if (l == 'J')
				cout << "������ȫ�ǩ`�����������Ƥ褤�ΤǤ��礦���� ���g������ä�Ԫ�ˑ���ޤ���!\n\n";
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
			cout << "\n����\nLanguage\n���Z\n\n�밴��Ӧ��F��ѡ�����Ĭ����ʾ����:\n\nPlease press the corresponding F key to select the default display language of the program:\n\n���ꤹ��F���`��Ѻ���ơ��ץ����Υǥե���Ȥα�ʾ���Z���x�k���Ƥ�������:\n\nF7:��������\nF8:English(US)\nF9:English(UK)\nF10:�ձ��Z\n\n";
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
				cout << "\n���������û���(�벻Ҫ�����ո��):";
			if (l == 'S')
				cout << "\nEnter your username (please do not include the space bar):";
			if (l == 'K')
				cout << "\nEnter your username (please do not include the space bar):";
			if (l == 'J')
				cout << "\n��`���`�����������Ƥ������������ک`���Щ`�����ʤ��Ǥ���������:";
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
				cout << "����F��ѡ���Ӧ������:\nF7:���ж��(Ĭ������)\nF8:��������\nF9:����ڰ�\n\n";
			if (l == 'S')
				cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
			if (l == 'K')
				cout << "Press F key to select the corresponding theme:\nF7:Pop Colorful (default theme)\nF8:Classic Blue and White\nF9:Minimalist Black&White\n\n";
			if (l == 'J')
				cout << "�ץ�ӥ�`����Ʃ`�ޤ��x�k����ˤϡ�F���`��Ѻ���ޤ�:\nF7:�ݥåץ���ե�(�ǥե���ȥƩ`��)\nF8:���饷�å��֥�`�ۥ磻��\nF9:�ߥ˥ޥꥹ�Ȱ��\\n\n";
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
    	cout << n << ",лл�������Ѿ���ɸ��ģ��´δ����ʱ����Ч!\n\n";
	if (l == 'S')
		cout << n << ",Thank you very much. Your settings have been changed and will take effect the next time you open the software!\n\n";
	if (l == 'K')
		cout << n << ",Thank you. The settings have been changed and will take effect the next time you open the software!\n\n";
	if (l == 'J')
		cout << n << ",���꤬�Ȥ��������ޤ����O����������졢�Τ˥��եȤ��_�����Ȥ����Є��ˤʤ�ޤ�!\n\n";
	system("pause");
	return 0;
}
