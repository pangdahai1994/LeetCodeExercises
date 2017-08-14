#include<iostream>
#define moded 1000000007

using namespace std;

int compare(const void *a, const void *b)
{
	int *pa = (int*)a;
	int *pb = (int*)b;
	return (*pa) - (*pb);
}

int main() {
	int n, k;
	cin >> n >> k;
	int jihe[100000];
	for (int i = 0; i < n; i++) {
		cin >> jihe[i];
	}
	qsort(jihe, n, sizeof(int), compare);

	return 0;
}