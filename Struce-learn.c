
#include<stdio.h>
#include<string.h>
struct HOME
{
	char name[20];//�ƶ�����
	int num;//�ƶ�����
}; //;����ȱ
int main()
{
	struct HOME h ={"���",2}; //��ֵ
	/*printf("���壺%s\n",h.name);*/
	//printf("���ڳ�Ա��%d��\n",h.num);
	//h.num=3;
	strcpy(h.name,"�Լ�");//strcpy--string copy--�⺯����Ҫʹ��ͷ�ļ�
	printf("�������ϣ�%s\n",h.name);
	printf("����ĳ�Ա��%d��\n",h.num);
	//struct HOME* pb=&h;//ȡ��ַ���ƶ�����
	//printf("���壺%s\n",h.name);//�ṹ�����.��Ա
	//printf("���壺%d\n",h.num);//�ṹ�����.��Ա
	//printf("���壺%s\n",(*pb).name);//�ṹ�����.��Ա
	//printf("���ڳ�Ա��%d��\n",pb->num);//�ṹ��ָ��->��Ա
	return 0;
}