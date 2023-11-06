#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line;
	istream ini_file{
		"Original.txt";
	}
	ofstream out_file{
		"copy.txt";
	}
	if(ini_file&&out_file)
	{
		while(getline(ini.file,line))
		{
			out_file<<line<<endl;
		}
	}
	else
	{
		cout<<"Cannot read a file";
	}
	ini_file.close();
	out_file.close();
	return 0;
}
