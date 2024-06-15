
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
		printf("%d",array[i]);

	if (array) delete []array;
}
