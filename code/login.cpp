#include <fstream>
#include <iostream>
#include <string>

#define ID_FILE_PATH "../../AprilOS/usr/id.txt"
#define PASS_FILE_PATH "../../AprilOS/usr/password.txt"

using namespace std;

int main()
{
	string inputID;
	string inputPassword;
	int flag=0;

	cout << " Input your ID : ";
	cin >>inputID;
	cout << " Input your PASSWORD : ";
	cin >>inputPassword;
	ifstream openFile(ID_FILE_PATH);	
	if(openFile.is_open())
	{
		string temp;
		while(getline(openFile, temp))
		{
			if(temp == inputID)
				break;
			else
				flag++;
		}
	}
	openFile.close();

	ifstream openPASS(PASS_FILE_PATH);
	if( openPASS.is_open())
	{
		string temp;
		int i=0;
		while(getline(openPASS,temp))
		{
			cout<<"#"<<flag<<endl;
			cout<<i<<endl;
			if(i==flag)
				break;
			i++;
		}
		if(temp == inputPassword)
			cout <<"login!!"<<endl;
		else
			cout <<" error ! "<<endl;
	}
	openPASS.close();
}














