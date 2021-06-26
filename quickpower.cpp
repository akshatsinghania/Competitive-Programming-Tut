using namespace std;
int quickpower(int a,int p){
    int res=1;
    int b=0;
    while(p){
        if(p&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
}