#include<stdio.h>
struct student
{
	int id;
	char gender;//�Ա�
	char name[16];
};
int main()
{
	const char*filename = "d:\\aaa.txt";
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("����ʧ�ܣ�\n");
		return -1;
	}
	char buf[] = "������������������������";
	fwrite(buf, 1, sizeof(buf), fp);		
	fclose(fp);

	return 0;
}