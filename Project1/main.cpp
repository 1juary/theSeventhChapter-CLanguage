#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef int ElemType;//为复杂声明定义简单的别名，方便统一顺序表的数据类型

typedef struct {
	ElemType data[MaxSize];//顺序表
	int Length;//当前表内的元素个数
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
		return false;//当前顺序表已经满了
	}
	for (int j = L.Length-1; j >=i-1; j--) {//for循环特别需要注意在函数中i是指第几个数，但是数组下表要-1
		L.data[j + 1] = L.data[j];
	}
	L.data[i - 1] = e;//插入的是特别声明的元素
	L.Length++;
	return true;
};

bool ListDelete(SqList &L, int i) {
	if (i<1 || i>L.Length) {
		return false;
	}
	for (int j = i - 1; j < L.Length-1; j++) {//同上插入，删除同样要注意for循环的次数
		L.data[j] = L.data[j + 1];
	}
	L.Length--;

};//删除指定位置的元素

int ListLocate(SqList& L, ElemType e) {
	for (int i = 0; i <= L.Length-1; i++) {
		if (e == L.data[i]) {
			return i+1;
		}
	}
	return 0;
}
int main(){
	SqList L;//声明顺序表
	bool ret;//返回bool值表示判断
	int locate;
	ret = intial(L);
	if (ret) {
		printf("初始化成功");
	}
	L.data[0] = 0;//初始化链表
	L.data[1] = 1;
	L.data[2] = 2;
	L.data[3] = 3;
	L.Length = 4;
	ret = ListInsert(L,1,100);
	ret = ListDelete(L, 1);
	locate= ListLocate(L,3);
	if (0==locate) {
		printf("没有找到该元素");
	}
	else {
		printf("定位成功，该元素在第%d位",locate);
	}
};