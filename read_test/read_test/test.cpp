#include<iostream>
#include <fstream>
#include <cstring> 
#include<engine.h>
#include<windows.h>
#include<vector>
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
using namespace std;
int main()
{
	ifstream infile;
	infile.open("C:/Users/77487/Desktop/text.txt");
	if (!infile) cout << "error" << endl;
	char str[1024];
	while (!infile.eof())
	{
		infile >> str;
	}
	printf("%d\n", strlen(str));
	infile.close();
	vector<double>data;
	char *tokenPtr = strtok(str, ",");
	while (tokenPtr != NULL) {
		double a = atof(tokenPtr);
		data.push_back(a);
		cout << tokenPtr << endl;
		tokenPtr = strtok(NULL, ",");
	}
	cout.precision(10);
	for (int i=0;  i<data.size();i++)
	{
		cout << data[i] << endl;
	}
	Engine *ep;
	mxArray *c;
	mxArray *T = mxCreateDoubleMatrix(1, data.size(), mxREAL);
	if (!(ep=engOpen("\0")))
	{
		cout << "can't start matlab engine" << endl;
	}
	engSetVisible(ep, true);
	cout << "can open matlab engine" << endl;
	engEvalString(ep, "state=enableservice('AutomationServer',true);");
	engEvalString(ep, "state=enableservice('AutomationServer');");
	engEvalString(ep, "cd C:/Users/77487/Desktop/遗传+人工势场+test/遗传+人工势场(代码)");
	Sleep(100);
	memcpy((void *)mxGetPr(T), (void *)(&data[0]), data.size()*sizeof(double));
	engPutVariable(ep, "b", T);
	engEvalString(ep, "n=2;");
	engEvalString(ep, "points=main(b,n)");
	c = engGetVariable(ep, "points");
	double *p = mxGetPr(c);
	size_t M = mxGetM(c);
	size_t N = mxGetN(c);
	vector<vector<double> > m(M);
	for (int i = 0; i < M; i++)
	{
		m[i].resize(N);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			m[j][i] = *p;
			p++;
			cout << m[j][i] << endl;
		}
	}
	FILE *outFile = fopen("C:/Users/77487/Desktop/aaa.txt", "w");
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N-1 ; j++)
		{
			fprintf(outFile, "%f,", m[i][j]);
		}
	}
	fprintf(outFile, "%f", m[M-1][N-1]);
	fclose(outFile);
// 	engClose(ep);
	return 0;
}