#include <iostream>
#include <fstream>
#include <string>


#define ID_FILE_PATH "../../AprilOS/usr/ID.txt"
#define PASS_FILE_PATH "../../AprilOS/usr/PASSWORD.txt"

using namespace std;


int main()
{
	string id;
	string pass;
	string temp;

	ofstream fid,fpass;
	fid.open(ID_FILE_PATH,ios::app);
	fpass.open(PASS_FILE_PATH,ios::app);	

	cout << "New account ID : " ;
	cin >> id;

	while(1)
	{
		cout << "password : ";
		cin >> pass;
		cout << "password : ";
		cin>> temp;
	
		if(pass != temp)
		{
			cout << "password is not match" << endl;
		}
		else
		{
			break;
		}
	}
	fid << id << endl;
	fpass << pass <<endl;	
	fid.close();
	fpass.close();


	return 0;
}
