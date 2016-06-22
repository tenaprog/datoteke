#include <iostream>
using namespace std;

struct tockeS{
	float tx,ty;
	char slovo;
};

int particijaX(tockeS tocke[],int start,int end){
	int pivot = tocke[end].tx;
	int pindex = start;
	for (int i=start;i<end;i++){
		if (tocke[i].tx<tocke[end].tx){
			swap (tocke[i],tocke[pindex]);
			pindex++;
		}
	}
	swap (tocke[end],tocke[pindex]);
	return pindex;
}


void qsortX (tockeS tocke[],int start,int end){
	if (start<end){
		int pindex=particijaX(tocke,start,end);
		qsortX(tocke,start,pindex-1);
		qsortX(tocke,pindex+1,end);
	}
}


void qsortX (tockeS tocke[],int N){
	qsortX (tocke,0,N-1);
}



int particijaY(tockeS tocke[],int start,int end){
	int pivot = tocke[end].ty;
	int pindex = start;
	for (int i=start;i<end;i++){
		if (tocke[i].ty<tocke[end].ty){
			swap (tocke[i],tocke[pindex]);
			pindex++;
		}
	}
	swap (tocke[end],tocke[pindex]);
	return pindex;
	
}

void qsortY (tockeS tocke[],int start,int end){
	if (start<end){
		int pindex=particijaY(tocke,start,end);
		qsortY(tocke,start,pindex-1);
		qsortY(tocke,pindex+1,end);
	}
}

void qsortY (tockeS tocke[],int N){
	qsortY (tocke,0,N-1);
}

int main(){
	
	int N;
	do{
		cout<<"N: ";
		cin>>N;
	}while(N<2);
	
	tockeS tocke[N];
	for (int i=0;i<N;i++){
		cout<<"X: ";
		cin>>tocke[i].tx;
		cout<<"Y: ";
		cin>>tocke[i].ty;
		cout<<"Slovo: ";
		cin>>tocke[i].slovo; 
		cout<<endl;
	}
	cout<<"Sortirano po X"<<endl;
	qsortX(tocke,N);
	for (int i=0;i<N;i++){
		cout<<tocke[i].tx<<" "<<tocke[i].slovo<<endl;
	}
	
	cout<<"Sortirano po Y"<<endl;
	qsortY(tocke,N);
	for (int i=0;i<N;i++){
		cout<<tocke[i].ty<<" "<<tocke[i].slovo<<endl;
	}
	system ("Pause");
	return 0;
}
