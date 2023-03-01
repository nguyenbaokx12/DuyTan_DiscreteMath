#include <iostream>
#include <stdio.h>
#define Max 5
#include <algorithm>
using namespace std;


	//bai 1
		int card(int A[],int S[],int n){
		int s = 0;
		for(int i = 0;i<n;i++){
			if(S[i] == i){
				for(int j = i+1;j<n;j++){
					if(A[i] == A[j]) S[j]=0;
					S[i] = 0;
					s++
				;};
			};
		};
		return s;
	}
	//bai 2 
		int equals(int A[],int B[]){
			int n = 5;
			sort(A,A + n);
			sort(B,A + n);
			bool equals = true;
			for(int i = 0;i<n;i++){
					if(A[i]!=B[i]){
						equals == false;
						break;
					}
					
				}
					return equals;
			}
		
			
	int main(int argc,char ** argv){
		int A[Max]={1,1,2,4,2}, //bai 1 tim luc luong
		S[Max] ={1,1,1,1,1},n=5;
		printf("card(A) = %d \n",card(A,S,n));
		int C[Max]={1,2,4,5,3}, //bai 2 
		D[Max] ={2,1,3,4,5};
		if(equals(C,D)==true){
			cout<<"hai Tap hop bang nhau";
		}else{
			cout<<"khong bang nhau";
		}	
	}
