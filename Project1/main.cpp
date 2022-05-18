#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef int ElemType;//Ϊ������������򵥵ı���������ͳһ˳������������

typedef struct {
	ElemType data[MaxSize];//˳���
	int Length;//��ǰ���ڵ�Ԫ�ظ���
}SqList;

bool intial(SqList& L) {
	L.Length = 0;
	return true;
};

bool ListInsert(SqList& L, int i, ElemType e) {
	if (i<1 || i>L.Length+1) {
		return false;
	}
	if (L.Length>MaxSize-1) {
		return false;//��ǰ˳����Ѿ�����
	}
	for (int j = L.Length-1; j >=i-1; j--) {//forѭ���ر���Ҫע���ں�����i��ָ�ڼ����������������±�Ҫ-1
		L.data[j + 1] = L.data[j];
	}
	L.data[i - 1] = e;//��������ر�������Ԫ��
	L.Length++;
	return true;
};

bool ListDelete(SqList &L, int i) {
	if (i<1 || i>L.Length) {
		return false;
	}
	for (int j = i - 1; j < L.Length-1; j++) {//ͬ�ϲ��룬ɾ��ͬ��Ҫע��forѭ���Ĵ���
		L.data[j] = L.data[j + 1];
	}
	L.Length--;

};//ɾ��ָ��λ�õ�Ԫ��

int ListLocate(SqList& L, ElemType e) {
	for (int i = 0; i <= L.Length-1; i++) {
		if (e == L.data[i]) {
			return i+1;
		}
	}
	return 0;
}
int main(){
	SqList L;//����˳���
	bool ret;//����boolֵ��ʾ�ж�
	int locate;
	ret = intial(L);
	if (ret) {
		printf("��ʼ���ɹ�");
	}
	L.data[0] = 0;//��ʼ������
	L.data[1] = 1;
	L.data[2] = 2;
	L.data[3] = 3;
	L.Length = 4;
	ret = ListInsert(L,1,100);
	ret = ListDelete(L, 1);
	locate= ListLocate(L,3);
	if (0==locate) {
		printf("û���ҵ���Ԫ��");
	}
	else {
		printf("��λ�ɹ�����Ԫ���ڵ�%dλ",locate);
	}
};