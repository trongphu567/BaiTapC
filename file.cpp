//su dung mang dong 1 chieu
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;
	fp = fopen ("C:\\Users\\Dell\\Documents\\data.inp", "rt");


	// err=fopen_s(&fp,"C:\\Users\\Dell\\Documents\\data.inp", "rt");

	if (!fp)
	{
		printf ("Cannot open file!");
		exit(0);
	}

    /*
	if (err)
	{
		cout << "Cannot open file!";
		exit(0);
	}
    */
   /*
	int num;
	fscanf(fp, "%d", &num);
	if (num < 1)
	{
		printf( "Data is error!");
		fclose(fp);
		exit(0);
	}
	int *array;
	array = new int[num];
	if (!array)
	{
		printf( "Not enough memory!");
		fclose(fp);
		exit(0);
	}
	int tmp;
	for (int i = 0; i < num; i++)
	{
		fscanf(fp, "%d", &tmp);
		array[i] = tmp;
	}
	fclose(fp);
	//xuat ra man hinh mang
	for (int i = 0; i < num; i++)
		printf("%d ",array[i]);

	if (array) delete []array;
}
*/

//su dung mang dong 2 chieu
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;
	fp = fopen ("C:\\Users\\Dell\\Documents\\data2.inp", "rt");


	// err=fopen_s(&fp,"C:\\Users\\Dell\\Documents\\data.inp", "rt");

	if (!fp)
	{
		printf ("Cannot open file!");
		exit(0);
	}
*/
	/*
	if (err)
	{
		cout << "Cannot open file!";
		exit(0);
	}
	*/

/*
/*
	int row,col;
	fscanf(fp, "%d", &row);
    fscanf(fp,"%d",&col);
	if (row < 1 || col<1)
	{
		printf( "Data is error!");
		fclose(fp);
		exit(0);
	}
	int **array;
	//const int length=10;
    //array=new int *[length];
    //for (int i=0;i<length;i++)
        //array[i]=new int [length];
    array=new int *[col];
    for (int i=0;i<col;i++)
        array[i]=new int [col];
	if (!array)
	{
		printf( "Not enough memory!");
		fclose(fp);
		exit(0);
	}
	int tmp;
	for (int i = 0; i < row; i++)
        for (int j=0;j<col;j++)
	    {
		    fscanf(fp, "%d", &tmp);
		    array[i][j] = tmp;
	    }
	fclose(fp);
	//xuat ra man hinh mang
	for (int i = 0; i < row; i++)
    {
        for (int j=0;j<col;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }
		
    for (int i=0;i<row;i++)
        if (array[i])
            delete []array[i];
    if (array) delete []array;
}
*/
/*
//su dung mang tinh 2 chieu
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;
	fp = fopen ("C:\\Users\\Dell\\Documents\\data2.inp", "rt");


	// err=fopen_s(&fp,"C:\\Users\\Dell\\Documents\\data.inp", "rt");

	if (!fp)
	{
		printf ("Cannot open file!");
		exit(0);
	}

    /*
	if (err)
	{
		cout << "Cannot open file!";
		exit(0);
	}
*/
    /*
	int row,col;
	fscanf(fp, "%d", &row);
    fscanf(fp,"%d",&col);
	if (row < 1 || col<1)
	{
		printf( "Data is error!");
		fclose(fp);
		exit(0);
	}
    int array[5][5];
	if (!array)
	{
		printf( "Not enough memory!");
		fclose(fp);
		exit(0);
	}
	int tmp;
	for (int i = 0; i < row; i++)
        for (int j=0;j<col;j++)
	{
		fscanf(fp, "%d", &tmp);
		array[i][j] = tmp;
	}
	fclose(fp);
	//xuat ra man hinh mang
	for (int i = 0; i < row; i++)
    {
        for (int j=0;j<col;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }
}
*/
/* #include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{

 	char data[100];
	ifstream file;
	file.open("C:\\Users\\Dell\\Documents\\intro.txt");
	if(!file)
	{
		cout<<"K mo duoc tep tin";
		exit(0);
	}
	while (file)
	{
		file>>data;
		cout<<data;
	}
		
	cout<<endl;
	file.close();


} */

/* #include <stdio.h>
#include <stdlib.h>
void docfile (int a[],int &n);
void HoanVi(int &a,int &b);
void sapxep(int a[],int n);
void ghifile(int a[],int n);
int main()
{
	int a[100],n;
	docfile(a,n);
	sapxep(a,n);
	ghifile(a,n);
}
void docfile(int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\songuyen.inp","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void HoanVi (int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void sapxep(int a[],int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (a[i]>a[j]) HoanVi(a[i],a[j]);
}
void ghifile(int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\songuyen.out","w");
	fprintf(fp,"%d",n);
	for (int i=0;i<n;i++)
		fprintf(fp,"%d ",a[i]);
	fclose(fp);
}

 */

/*  
//bai 1 phan 3
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\sochan.dat","w");
	for (int i=0;i<=100;i++)
		if (i %2==0) fprintf(fp,"%d ",i);
	fclose(fp);
}
 */
/*
//bai 2 
#include <stdio.h>
#include <stdlib.h>
void docfile(int a[],int &n);
void ghifile(int a[],int n);
void printArray(int a[],int n);
int main()
{
	int n,a[100];
	docfile(a,n);
	printArray(a,n);
	ghifile(a,n);
}
void docfile(int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\array.inp","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);		//doc so ptu
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);		//doc tung ptu
	fclose(fp);
}
void printArray(int a[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
}
void ghifile(int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\array.out","w");
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=a[i];
	fprintf(fp,"%d",sum);		
	fclose(fp);
}
*/
//bai 3
/* 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f1,*f2;
	char a;
	f1=fopen("C:\\Users\\Dell\\Documents\\ngaydautien.txt","r");
	if(!f1)
	{
		printf("Cannot open file!");
		exit(0);
	}
	f2=fopen("C:\\Users\\Dell\\Documents\\ducphuc.txt","w");
	if (!f2)
	{
		printf("Cannot open file!");
		exit(0);
	}
	while(a!=EOF)
	{
		a=fgetc(f1);
		if (a!=EOF)
			fputc(a,f2);
	}

	fclose(f1);
	fclose(f2);
	printf("Da copy noi dung thanh cong!");
}
 */
//bai 5
/* 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Readfile(int a[],int &n);
void Writefile(int a[],int n);
bool ktsongto(int n);
void printArray(int a[],int n);
int main()
{
	int a[100],n;
	Readfile(a,n);
	printArray(a,n);
	Writefile(a,n);
}
void Readfile (int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\nt.inp","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);	//doc so ptu cua mang
	if (n<1)
	{
		printf("Data is error!");
		exit(0);
	}
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);		//doc tung ptu trong mang
	fclose(fp);
}
bool ktsongto(int n)
{
	if (n<2) return false;
	else
	{
		for (int i=2;i<=sqrt(n);i++)
			if (n%i==0) return false;
	}
	return true;
}
void printArray(int a[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
}
void Writefile (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\nt.out","w");
	int count=0;
	for (int i=0;i<n;i++)
		if (ktsongto(a[i])) count++;
	fprintf(fp,"%d",count);
	fprintf(fp,"\n");
	for (int i=0;i<n;i++)
		if (ktsongto(a[i])) fprintf(fp,"%d ",a[i]);	
	fclose(fp);
}
 */

//bai 6
/*
#include <stdio.h>
#include <stdlib.h>
void Readfile(int a[],int &n);
void Writefile(int a[],int n);
bool EvenNumber(int n);
bool OddNumber(int n);
void swap(int &a,int &b);
void SelectionSort(int a[],int n);
void printArray(int a[],int n);
int MaxArray(int a[],int n);
int main()
{
	int a[100],n;
	Readfile(a,n);
	SelectionSort(a,n);
	printArray(a,n);
	Writefile(a,n);
}
void Readfile(int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\input.txt","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	if (n<1)
	{
		printf("Data is error!");
		exit(0);
	}
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void SelectionSort(int a[],int n)
{
	int i,j,min_idx;
	for (int i=0;i<n-1;i++)
	{
		min_idx=i;
		for (int j=i+1;j<n;j++)
			if (a[j]<a[min_idx])
				min_idx=j;
		swap(a[i],a[min_idx]);
	}
}
bool EvenNumber(int n)
{
	if (n%2==0) return true;
	return false;
}
bool OddNumber(int n)
{
	if (n%2!=0) return true;
	return false;
}
int MaxArray(int a[],int n)
{
	int max=a[0];
	for (int i=0;i<n;i++)
		if (a[i]>max) max=a[i];
	return max;
}
void printArray(int a[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
}
void Writefile(int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\output.txt","w");
	int count_even=0,count_odd=0;
	int max=MaxArray(a,n);
	for (int i=0;i<n;i++)
	{
		if (EvenNumber(a[i])) count_even++;
		if (OddNumber(a[i])) count_odd++;
	}
	fputs("Cau a:",fp);
	fprintf(fp,"%d",max);
	fprintf(fp,"\n");
	fputs("Cau b:",fp);
	fprintf(fp,"%d ",count_even);
	fprintf(fp,"%d",count_odd);
	fprintf(fp,"\n");
	fputs("Cau c:",fp);
	SelectionSort(a,n);
	for (int i=0;i<n;i++)
	{
		if (i%10==0) fprintf(fp,"\n");
		fprintf(fp,"%d ",a[i]);
	}
	fclose(fp);
}
*/
//ky thuat lap trinh file voi mang 1 chieu
// thktlt3-01
/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Readfile (int a[],int &n);
void Writefile (int a[],int n);
bool ktsongto(int n);
int ReverseNum(int n);
bool ParNum(int n);
int UCLN(int a,int b);
void songtocungnhau(int a[],int n);
bool sntdoixung (int n);
void demsongto(int a[],int n);
void demsntPar (int a[],int n);
void printArray(int a[],int n);
void demcapsnt(int a[],int n);
void demsntdx(int a[],int n);
int ktbitrung (int a[],int n);
void demsntkhac(int a[],int n);
bool MersenneNum(int a[],int n);
void demMerNum (int a[],int n);
int main()
{
	int a[100],n;
	Readfile(a,n);
	printArray(a,n);
	printf("\n");
	demsongto(a,n);
	demsntPar(a,n);
	demcapsnt(a,n);
	demsntdx(a,n);
	demsntkhac(a,n);
	demMerNum(a,n);


}
void Readfile (int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.inp","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	if (n<1) 
	{
		printf("Data is error!");
		exit(0);
	}
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void printArray(int a[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
}
bool ktsongto(int n)
{
	if (n<2) return false;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return false;
	return true;
}
int ReverseNum(int n)
{
	int dv,sdn=0;
	while (n!=0)
	{
		dv=n%10;
		sdn=sdn*10+dv;
		n/=10;
	}
	return sdn;
}
bool ParNum(int n)
{
	if (ReverseNum(n)==n) return true;
	return false;
}
int UCLN(int a,int b)
{
	while (a!=b)
	{
		if (a>b) a=a-b;
		else b=b-a;

	}
	return a;
}
bool sntdoixung (int n)
{
	if (ktsongto(n))
	{
		int SoTruoc,SoSau;
		int i=1;
		while (true)
		{
			SoTruoc=n-i;
			SoSau=n+i;
			if (ktsongto(SoTruoc) && ktsongto(SoSau))
				return true;
			i++;
		}
	}
	return false;
}
void songtocungnhau(int a[],int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (UCLN(a[i],a[j])==1) printf("(%d,%d) ",a[i],a[j]);
}
int ktbitrung (int a[],int n,int idx)
{
	for (int i=idx-1;i>=0;i--)
		if (a[i]==a[idx]) return 0;	//bi trung
	return 1;		//k bi trung
}
bool MersenneNum (int n)
{
	int i=0;
	while (n>pow(2,i))
	{
		i++;
	}
	if (n==pow(2,i)-1) return true;
	return false;
}
//cau 1
void demsongto(int a[],int n)
{
	FILE* fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","w");
	int c_snt=0;
	fputs("CAU 1: ",fp);
	for (int i=0;i<n;i++)
		if (ktsongto(a[i])) c_snt++;
	fprintf(fp,"%d",c_snt);
	fprintf(fp," ");
	fclose(fp);
}
void demsntPar (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","a");
	int c_sntpar=0;
	for (int i=0;i<n;i++)
		if (ktsongto(a[i]) && ParNum(a[i])) c_sntpar++;
	fprintf(fp,"%d",c_sntpar);
	fputs("\n",fp);
	fclose(fp);
}
//cau 2
void demcapsnt (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","a");
	int c_capsnt=0;
	fputs("CAU 2: ",fp);
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (UCLN(a[i],a[j])==1) c_capsnt++;
	fprintf(fp,"%d ",c_capsnt);
	fputs("\n",fp);
	fclose(fp);
}
//cau 3
void demsntdx (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","a");
	int c_sntdx=0;
	fputs("CAU 3: ",fp);
	for (int i=0;i<n;i++)
		if (sntdoixung(a[i])) c_sntdx++;
	fprintf(fp,"%d ",c_sntdx);
	fputs("\n",fp);
	fclose(fp);
}
//cau 4
void demsntkhac (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","a");
	int c_snt=0;
	fputs("CAU 4: ",fp);
	for (int i=0;i<n;i++)
	{
		int iteration=ktbitrung(a,n,i);
		if (iteration==1)
		{
			if (ktsongto(a[i])) c_snt++;
		}
	}
	fprintf(fp,"%d",c_snt);
	fputs("\n",fp);
	fclose(fp);
}
//cau 5
void demMerNum (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI2.out","a");
	int c_mernum=0;
	fputs("CAU 5: ",fp);
	for (int i=0;i<n;i++)
		if (ktsongto(a[i]) && MersenneNum(a[i])) c_mernum++;
	fprintf(fp,"%d",c_mernum);
	fputs("\n",fp);
	fclose(fp);
	system("pause");
} */
//thktlt3-02
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Readfile (int a[],int &n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.inp","r");
	if (!fp)
	{
		printf("Cannot open file!");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	for (int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void printArray(int a[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
}//cau 1
//so chinh phuong
bool sochinhphuong (int n)
{
	for (int i=1;i<=n;i++)
		if (i*i==n) return true;
	return false;
}
void demscphuong (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","w");
	fputs("CAU 1: ",fp);
	int c_scp=0;
	for (int i = 0; i <n; i++)
	{
		if (sochinhphuong(a[i])) c_scp++;
	}
	fprintf(fp,"%d",c_scp);
	fputs(" ",fp);
	fclose(fp);
}
//so hoan chinh
bool sohoanchinh (int n)
{
	int sum=0;
	for (int i=1;i<n;i++)
		if (n%i==0) sum+=i;
	if (sum==n) return true;
	return false;
}
void demsohchinh (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int c_shc=0;
	for (int i = 0; i < n; i++)
	{
		if (sohoanchinh(a[i])) c_shc++;
	}
	fprintf(fp,"%d",c_shc);
	fputs(" ",fp);
	fclose(fp);
}
//so armstrong
// dem so luong chu so cua mot so
int demChuSo (int n)
{
	int count=0;
	while (n>0)
	{
		n/=10;
		count++;
	}
	return count;
}
bool soArmstrong (int n)
{
	int num=demChuSo(n);
	int tmp=n,last,sum=0;
	while (tmp>0)
	{
		last=tmp%10;
		tmp/=10;
		sum+=pow(last,num);
	}
	if (sum==n) return true;
	return false;
}
void demSoArmStrong (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int c_sarm=0;
	for (int i = 0; i < n; i++)
	{
		if (soArmstrong(a[i])) c_sarm++;
	}
	fprintf(fp,"%d",c_sarm);
	fputs(" ",fp);
	fclose(fp);
}
//so nguyen to
bool SNT (int n)
{
	if (n<2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i==0) return false;	
	}
	return true;
}
void demSNT (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int c_snt=0;
	for (int i = 0; i < n; i++)
	{
		if (SNT(a[i])) c_snt++;
	}
	fprintf(fp,"%d",c_snt);
	fputs(" ",fp);
	fclose(fp);
	
}
//so doi xung
int ReverseNum (int n)
{
	int last,rnum=0;
	while (n>0)
	{
		last=n%10;
		rnum+=last;
		n/=10;
	}
	return rnum;
}
bool soDoiXung (int n)
{
	if (ReverseNum(n)==n) return true;
	return false;
}
void demsodx (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int c_sdx=0;
	for (int i = 0; i < n; i++)
	{
		if (soDoiXung(a[i])) c_sdx++;
	}
	fprintf(fp,"%d",c_sdx);
	fputs("\n",fp);
	fclose(fp);
}
//cau 1
//cau 2
//max so chinh phuong
void MaxCP (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	fputs("CAU 2: ",fp);
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (sochinhphuong(a[i]) && a[i]>max) max=a[i];
	}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fclose(fp);
}
//max so hoan chinh
void MaxHoanChinh (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (sohoanchinh(a[i]) && a[i]>max) max=a[i];
	}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fclose(fp);
}
// max so soArmstrong
void MaxArmstrong (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (soArmstrong(a[i]) && a[i]>max) max=a[i];
	}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fclose(fp);
}
//max so nguyen to
void MaxPrimeNum (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (SNT(a[i]) && a[i]>max) max=a[i];
	}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fclose(fp);
}
// max so doi xung
void MaxDx (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (soDoiXung(a[i]) && a[i]>max) max=a[i];
	}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fputs("\n",fp);
	fclose(fp);
}
//cau 2
//cau 3
void CountNum (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int count=0,max=0;
	fputs("CAU 3: ",fp);
	for (int i = 0; i < n-1; i++)
		for (int j = i+1;j < n; j++)
			if (a[i]==a[j]) 
			{
				count++;
				max=a[i];
			}
	fprintf(fp,"%d",max);
	fputs(" ",fp);
	fprintf(fp,"%d",count);
	fputs("\n",fp);
	fclose(fp);
}
//cau 3
//cau 4
int ktbitrung (int a[],int n,int idx)
{
	for (int i = idx-1; i >=0; i--)
	{
		if (a[i]==a[idx]) return 0;		//bi trung
	}
	return 1;		//k bi trung
}
void demSoKhac (int a[],int n)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Dell\\Documents\\THI3.out","a");
	int count=0;
	fputs("CAU 4: ",fp);
	for (int i = 0; i < n; i++)
	{
		int temp=ktbitrung(a,n,i);
		if (temp==1) count++;
	}
	fprintf(fp,"%d",count);
	fputs("\n",fp);
	fclose(fp);
}
int main()
{
	int a[100],n;
	Readfile(a,n);
	printArray(a,n);
	//cau 1
	demscphuong(a,n);
	demsohchinh(a,n);
	demSoArmStrong(a,n);
	demSNT(a,n);
	demsodx(a,n);
	//cau 1
	
	//cau 2
	MaxCP(a,n);
	MaxHoanChinh(a,n);
	MaxArmstrong(a,n);
	MaxPrimeNum(a,n);
	MaxDx(a,n);
	//cau 2

	//cau 3
	CountNum(a,n);
	//cau 3

	// cau 4
	demSoKhac(a,n);
	//cau 4
	system("pause");

}


