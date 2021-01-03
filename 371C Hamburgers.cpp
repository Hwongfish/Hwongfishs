/*
algorithm #1 Hwongfish 
#include<iostream>
using namespace std;
__int64 needb = 0, needs = 0, needc = 0;
__int64 hadb = 0, hads = 0, hadc = 0;
__int64 prib = 0, pris = 0, pric = 0;
__int64 hamb = 0, hams = 0, hamc = 0;
__int64 money = 0;
int main(){
	char a[200] = { 0 };
	scanf("%s",a);
	scanf("%lld%lld%lld",&hadb,&hads,&hadc);
	scanf("%lld%lld%lld",&prib,&pris,&pric);
	for(int i = 0;a[i]!=0;++i){
		if(a[i]=='B') hamb++;
		if(a[i]=='S') hams++;
		if(a[i]=='C') hamc++;
	}
	scanf("%lld",&money);
	__int64 min = 0, max = money + hadb + hads +hadc;
	while(max-min>1){
		__int64 mid=(min+max)/2,tmp=money;
		if(mid*hamb>hadb) tmp-=(mid*hamb-hadb)*prib;
		if(mid*hams>hads) tmp-=(mid*hams-hads)*pris;
		if(mid*hamc>hadc) tmp-=(mid*hamc-hadc)*pric;
		if(tmp>=0) min=mid;
		else max=mid;
	}
	printf("%lld",min);
	return 0;
}
*/