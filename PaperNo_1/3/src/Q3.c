#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------
void search(int arr[], int n, int x) {
    //Begin your statements here
    
     n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
    
    //End your statements
}

//----DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[], int* pn) {
	printf("Enter number of elements:");
    scanf("%d", pn);
    int i;
    for (i = 0; i < *pn; i++){
    	printf("a[%d]=",i);
    	 scanf("%d", &a[i]);
	}       
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
    system("cls");
    printf("\nTEST Q3 (2 marks):\n");
    int a[100], n, x;
    input(a, &n);    
    printf("Enter x: ");
    scanf("%d", &x);    
    printf("OUTPUT:\n");
	search(a, n, x);	
	printf("\n");
  	system("pause");
    return 0;    
}
//============================================================

