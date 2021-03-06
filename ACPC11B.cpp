#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>

#define VI vector<int>
#define VF vector<float>
#define VD vector<double>
#define VC vector<char>
#define VVI vector<VI>
#define VVF vector<VF>
#define VVD vector<VD>
#define VVC vector<VC>
#define SI set<int>
#define SF set<float>
#define SD set<double>
#define SC set<char>
#define SSI set<SI>
#define SSF set<SF>
#define SSD set<SD>
#define SSC set<SC>
#define STI stack<int>
#define STF stack<float>
#define STD stack<double>
#define STC stack<char>
#define STSTI stack<STI>
#define STSTF stack<STF>
#define STSTD stack<STD>
#define STSTC stack<STC>

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int compare (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main(){
    
    int j, i, a[1000], b[1000], t, n1, n2, min, diff;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n1);
        for(i=0;i<n1;i++)
            scanf("%d", &a[i]);
        scanf("%d", &n2);
        for(i=0;i<n2;i++)
            scanf("%d", &b[i]);
            
        qsort(a, n1, sizeof(int), compare);
        qsort(b, n2, sizeof(int), compare);
		        
        min = 1000000;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                diff = a[i] - b[j];
                if(diff < 0)
                    diff *= (-1);
                    
                if(diff < min)
                    min = diff;
            }
        }
        
        printf("%d\n", min);
    }
    return 0;
}
