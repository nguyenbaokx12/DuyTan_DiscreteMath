	#include<stdio.h>
	#include<conio.h>
	#include<iostream>
	#define MAX 100
	int G[MAX][MAX],n;
	int V[MAX];
	FILE *fptr;
	//----------------------------------
	int Init_Graph(char *path){
		int i, j;
		fptr=fopen(path,"r");
		if(fptr==NULL){
			printf("ERROR");
			return 1;
		}
		fscanf(fptr,"%d",&n);
		for(i=1; i<=n; i++){
			V[i]=0;
			for(j=i;j<=n;j++)G[i][j]=0;
		}
		while(!feof(fptr)){
			fscanf(fptr, "%d",&i);fscanf(fptr,"%d",&j);
			fscanf(fptr, "%d",&G[i][j]);G[j] [i] =G[i] [j];
		}
		fclose(fptr);
		return 0;
	}
	//-----------------------------------
	void DFS(int v){
		int u;
		printf("%d\t",v);
		V[v]=1;
		for(u=1; u<=n; u++)
			if(G[v][u]!=0 && V[u]==0)  DFS(u);
		printf("\n");
	}
	//------------------------------------
	int main(int argc, char *argv[]){
		int u,i,e;
		Init_Graph("Graph.INP");
		do{  
			printf("Nhap dinh bat dau: ");
			e = scanf("%d",&u);
			if(u>0 && u<=n)DFS(u);
			for(i=1;i<=n;i++)V[i]=0;
		}while(e !=0);
		getch();
		return 0;
	}
