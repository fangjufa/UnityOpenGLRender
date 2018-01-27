#pragma once
#include<string>
#include<fstream>

using namespace std;

class FileDebug
{
public:
	static void Log(string message)
	{
		ofstream fout;

		//ios_base::app即向后追加内容而不覆盖掉之前的内容,它是Append的缩写。默认是会覆盖掉之前内容的。
		//如果一开始没有这个日志文件的话，那么它会创建这个目录文件，具体的文件路径下面有说。
		fout.open("LogFile.txt", ios_base::app);
		fout << message << '\n';
		fout.close();
	}
};