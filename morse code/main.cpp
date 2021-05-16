#include <iostream>
#include<vector>
#include<windows.h>
#include "mmsystem.h"
using namespace std;
int main() 
{
	char a;
	vector<char> vec;
	cout<<"Enter the sentence you want to convert. Make sure to end it with a dot."<<endl;
	while(true)
	{
		cin>>a;
		if(a=='.') break;
		vec.push_back(a);
	}
	for (int i=0; i<vec.size(); i++)
	{
		if(vec[i]=='e') PlaySound(TEXT("e.wav"), NULL, SND_SYNC);
		else if(vec[i]=='t') PlaySound(TEXT("t.wav"), NULL, SND_SYNC);
		else if(vec[i]=='i') PlaySound(TEXT("i.wav"), NULL, SND_SYNC);
		else if(vec[i]=='a') PlaySound(TEXT("a.wav"), NULL, SND_SYNC);
		else if(vec[i]=='n') PlaySound(TEXT("n.wav"), NULL, SND_SYNC);
		else if(vec[i]=='m') PlaySound(TEXT("m.wav"), NULL, SND_SYNC);
		else if(vec[i]=='s') PlaySound(TEXT("s.wav"), NULL, SND_SYNC);
		else if(vec[i]=='u') PlaySound(TEXT("u.wav"), NULL, SND_SYNC);
		else if(vec[i]=='r') PlaySound(TEXT("r.wav"), NULL, SND_SYNC);
		else if(vec[i]=='w') PlaySound(TEXT("w.wav"), NULL, SND_SYNC);
		else if(vec[i]=='d') PlaySound(TEXT("d.wav"), NULL, SND_SYNC);
		else if(vec[i]=='k') PlaySound(TEXT("k.wav"), NULL, SND_SYNC);
		else if(vec[i]=='g') PlaySound(TEXT("g.wav"), NULL, SND_SYNC);
		else if(vec[i]=='o') PlaySound(TEXT("o.wav"), NULL, SND_SYNC);
		else if(vec[i]=='h') PlaySound(TEXT("h.wav"), NULL, SND_SYNC);
		else if(vec[i]=='v') PlaySound(TEXT("v.wav"), NULL, SND_SYNC);
		else if(vec[i]=='f') PlaySound(TEXT("f.wav"), NULL, SND_SYNC);
		else if(vec[i]=='l') PlaySound(TEXT("l.wav"), NULL, SND_SYNC);
		else if(vec[i]=='p') PlaySound(TEXT("p.wav"), NULL, SND_SYNC);
		else if(vec[i]=='j') PlaySound(TEXT("j.wav"), NULL, SND_SYNC);
		else if(vec[i]=='b') PlaySound(TEXT("b.wav"), NULL, SND_SYNC);
		else if(vec[i]=='x') PlaySound(TEXT("x.wav"), NULL, SND_SYNC);
		else if(vec[i]=='c') PlaySound(TEXT("c.wav"), NULL, SND_SYNC);
		else if(vec[i]=='y') PlaySound(TEXT("y.wav"), NULL, SND_SYNC);
		else if(vec[i]=='z') PlaySound(TEXT("z.wav"), NULL, SND_SYNC);
		else if(vec[i]=='q') PlaySound(TEXT("q.wav"), NULL, SND_SYNC);
		if (vec[i+1]==' ') PlaySound(TEXT("7sec.wav"), NULL, SND_SYNC);
		else PlaySound(TEXT("3sec.wav"), NULL, SND_SYNC);
	}
	return 0;
}
