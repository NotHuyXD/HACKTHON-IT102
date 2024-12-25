#include <stdio.h>
#include <math.h>
int main(){
    int n, choice, num1=0;
    int arr[100];
    do {
        printf("======================MENU======================\n");
        printf("------------------------------------------------\n");
        printf("|1. Nhập giá trị cho mảng                      |\n");
        printf("|2. In ra mảng                                 |\n");
        printf("|3. Tìm giá trị nhỏ nhất và lớn nhất trong mảng|\n");
        printf("|4. In ra tổng các phần tử trong mảng          |\n");
        printf("|5. Thêm 1 phần tử vào cuối mảng               |\n");
        printf("|6. Xóa 1 phần tử                              |\n");
        printf("|7. Sắp xếp mảng theo thứ tự giảm dần          |\n");
        printf("|8. Tìm kiếm phần tử trong mảng                |\n");
        printf("|9. In ra các số nguyên tố trong mảng          |\n");
        printf("|10.Sắp xếp mảng theo thứ tự tăng dần          |\n");
        printf("|11.Thoát                                      |\n");
        printf("------------------------------------------------\n");
        printf("Mời bạn chọn: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
            printf("Nhập số phần tử của mảng: ");
            scanf("%d", &n);
            for (int i=0;i<n;i++){
                printf("Nhập phần tử thứ %d: ", i);
                scanf("%d", &arr[i]);
            }
            num1=1;
            break;
            case 2:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            printf("Các phần tử trong mảng là: ");
            for (int i=0;i<n;i++){
                printf("arr[%d]=%d ",i, arr[i]);
            }
            printf("\n");
            break;
            case 3:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            int max=arr[0], min=arr[0];
            for (int i=0;i<n;i++){
                if (arr[i]>max){
                    max=arr[i];
                }
                if (arr[i]<min){
                    min=arr[i];
                }
            }
            printf("Phần tử có giá trị lớn nhất trong mảng là %d,  Phần tử có giá trị nhỏ nhất trong mảng là %d\n", max, min);
            break;
            case 4:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            int tong=0;
            for (int i=0;i<n;i++){
                tong+=arr[i];
            }
            printf("Tổng các phần tử trong mảng là %d\n", tong);
            break;
            case 5:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            n++;
            int x;
            printf("Nhập giá trị cần thêm vào mảng: ");
            scanf("%d", &x);
            arr[n-1]=x;
            break;
            case 6:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            int del;
            printf("Nhập vị trí cần xóa (0-%d): ", n-1);
            scanf("%d", &del);
            for (int i=del;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            n--;
            break;
            case 7:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            for (int i=0;i<n-1;i++){
                for (int j=0;j<n-i-1;j++){
                    if (arr[j]<arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }   
                }
            }
            printf("Mảng theo thứ tự giảm dần là: ");
            for (int i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
            case 8:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            int search, countsearch=0;
            printf("Nhập giá trị cần tìm: ");
            scanf("%d", &search);
            for (int i=0;i<n;i++){
                if (arr[i]==search){
                    printf("Phần tử %d nằm ở vị trí arr[%d]\n", search, i);
                    countsearch++;
                }
            }
            if (countsearch==0){
            printf("Không tìm thấy phần tử %d trong mảng\n", search);}
            break;
            case 9:
            if (num1==0){
                printf("Chưa nhập mảng!\n");
                break;
            }
            int numcount;
            printf("Các số nguyên tố trong mảng là: ");
            for (int i=0;i<n;i++){
                int check=1;
                if (arr[i]<2){
                    check=0;
                }
                for (int j=2;j<=sqrt(arr[i]);j++){
                    if (arr[i]%j==0){
                        check=0;
                    }
                }
                if (check==1){
                    printf("arr[%d]=%d ",i, arr[i]);
                }
                
            }
            if (numcount==0){
                printf("Không có số nguyên tố nào trong mảng\n");
            }
            printf("\n");
                break;
                case 10:
                if (num1==0){
                    printf("Chưa nhập mảng!\n");
                    break;
                }
                for (int i=0;i<n-1;i++){
                    min=i;
                    for (int j=i+1;j<n;j++){
                        if (arr[min]>arr[j]){
                            min=j;
                        }

                    }
                    int temp=arr[min];
                        arr[min]=arr[i];
                        arr[i]=temp;
                }
                printf("Mảng theo thứ tự tăng dần là: ");
                for (int i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
                case 11: break;
                default: printf("Lựa chọn không hợp lệ!\n");


        }
    } while (choice!=11);
    return 0;
}