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
#define size 1000

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int mat[size+1][size+1];

int lcs(string a, string b, int l1, int l2){
	
	for(int i=0;i<=l1;i++)
		mat[i][0] = 0;
	for(int j=0;j<=l2;j++)
		mat[0][j] = 0;
	
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			if(a[i-1] == b[j-1])
				mat[i][j] = mat[i-1][j-1]+1;
			else
				mat[i][j] = max(mat[i][j-1], mat[i-1][j]);
		}
	}
	
	return mat[l1][l2];
}

int main(){
	
	string s, t;
	while(true){
		cin >> s;
		if(s == "#")
			break;
		cin >> t;
		int res = lcs(s, t, s.length(), t.length());
		printf("%d\n", (s.length() - res) * 15 + (t.length() - res) * 30);
	}
    return 0;
}
