#define SIZE 100
#include<stdio.h>


void nhapMang ( int A [], int n);
void xuatMang ( int A [], int n);
double trungBinhCongDuong(int A[], int n);
int tongMang  (int A [], int n);
float timPhanTuLonNhat(int A[], int n);
int timPhanTuNhoNhat(int A[], int n);
bool kiemTraTonTai(int A [], int n, int x);
void sapXepGiamDan(int A[], int n);






 int main ()
{
	int A[SIZE];
	int n, kq;

	
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);int main();


//Goi ham cau a  
    nhapMang(A,n);
    
//Goi ham cau b
    printf("\n Mang vua nhap la : ");
	xuatMang(A,n);

//Goi ham cau c
 printf("\nTrung binh cong cac phan tu duong trong mang la : %d ",kq); 

//Goi ham cau d
	kq = tongMang(A,n);
	printf("\nTong cac gia trong mang la %d", kq);

//Goi ham cau e
     printf("\nGia tri lon nhat trong mang A: %.2f", timPhanTuLonNhat(A, n));
printf("\nGia tri nho nhat trong mang A: %d", timPhanTuNhoNhat(A, n));



//Goi ham cau g
    sapXepGiamDan(A, n);
    printf("\nMang sau khi sap xep giam dan: ");
    xuatMang(A, n);

  return 0;
  }
  
  
   void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); 
		i++;
	}
}
  
  
  
  void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}









double trungBinhCongDuong(int A[], int n) {
    int tong = 0, dem = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > 0) {
            tong += A[i];
            dem++;
        }
    }
    if (dem == 0) return 0;  
    return (double)tong / dem;
}




bool kiemTraTonTai(int a [], int n, int x) {
    for (int i = 0; i < n; i++) {
        if ( a [i] == x) return true;
    }
    return false;
}


float timPhanTuLonNhat(int A[], int n) {
    float max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}


int timPhanTuNhoNhat(int A[], int n){
	int min = A[0];
	for (int i= 1 ; i < n ; i++){
		if (A[i]< min){
			min = A[i];
			
		}
	}
	
	return min;
	
}






void sapXepGiamDan(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] < A[j]) {
                float temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}



















int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
