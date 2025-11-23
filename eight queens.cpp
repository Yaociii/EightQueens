// try to solve eight queens problem
/*
//mine  ver1.0  复杂 
#include <stdio.h>

int main()
{
    int a[8][8] = { 0 },flag=1,root=0;
    for (int i1 = 0; i1 < 8; i1++) 
    {
        a[0][i1] = 1;
       
        for (int i2 = 0; i2 < 8; i2++)
        {
            if (i2 - i1 == 0) continue;
            else 
            {
                a[1][i2] = 1;
                for (int i3 = 0; i3 < 8; i3++)
                {
                    if ((i3 - i1)*(i3-i2) == 0) continue;
                    else
                    {
                        a[2][i3] = 1;
                        for (int i4 = 0; i4 < 8; i4++)
                        {
                            if ((i4 - i1) * (i4 - i2) * (i4 - i3) == 0) continue;
                            else
                            {
                                a[3][i4] = 1;
                                for (int i5 = 0; i5 < 8; i5++)
                                {
                                    if ((i5 - i1) * (i5 - i2) * (i5 - i3)*(i5-i4) == 0) continue;
                                    else
                                    {
                                        a[4][i5] = 1;
                                        for (int i6 = 0; i6 < 8; i6++)
                                        {
                                            if ((i6 - i1) * (i6 - i2) * (i6 - i3) * (i6 - i4)*(i6-i5) == 0) continue;
                                            else
                                            {
                                                a[5][i6] = 1;
                                                for (int i7 = 0; i7< 8; i7++)
                                                {
                                                    if ((i7 - i1) * (i7 - i2) * (i7 - i3) * (i7 - i4) * (i7 - i5)*(i7-i6) == 0) continue;
                                                    else
                                                    {
                                                        a[6][i7] = 1;
                                                        for (int i8 = 0; i8 < 8; i8++)
                                                        {
                                                            if ((i8 - i1) * (i8 - i2) * (i8 - i3) * (i8 - i4) * (i8 - i5) * (i8 - i6)*(i8-i7) == 0) continue;
                                                            else
                                                            {
                                                                a[7][i8] = 1;
                                                                //斜向检验 
                                                                for (int m=0,n=0;m<8;m++,n=0)
                                                                {
                                                                    int m1 = m,sum=0;
                                                                    for (; m1 < 8; m1++, n++)
                                                                    {
                                                                        sum += a[m1][n];
                                                                    }
                                                                    if (sum > 1) flag = 0;
                                                                    
                                                                }
                                                                
                                                                for (int m = 0, n = 0; n < 8; n++,m=0)
                                                                {
                                                                    int n1 = n, sum = 0;
                                                                    for (; n1 < 8; n1++, m++)
                                                                    {
                                                                        sum += a[m][n1];
                                                                    }
                                                                    if (sum > 1) flag = 0;
                                                                   
                                                                }
                                                                
                                                                for (int m = 0, n = 7; m<8; m++,n=7)
                                                                {
                                                                    int m1 = m, sum = 0;
                                                                    for (; m1<8; m1++, n--)
                                                                    {
                                                                        sum += a[m1][n];
                                                                    }
                                                                    if (sum > 1) flag = 0;
                                                                   
                                                                }
                                                                
                                                                for (int m = 0, n = 7; 0 <= n; n--,m=0)
                                                                {
                                                                    int n1=n, sum = 0;
                                                                    for (; 0 <= n1; m++, n1--)
                                                                    {
                                                                        sum += a[m][n1];
                                                                    }
                                                                    if (sum > 1) flag = 0;
                                                                    
                                                                }
                                                                if (flag == 1)
                                                                {
                                                                    root++;
                                                                    for (int m = 0, n = 0; m < 8; m++,n=0)
                                                                    {
                                                                        for (; n < 8; n++)
                                                                        {
                                                                            printf("%-2d", a[m][n]);
                                                                            if (n == 7) printf("\n");
                                                                        }
                                                                    }
                                                                    printf("\n\n");
                                                                }
                                                                flag = 1;
                                                                a[7][i8] = 0;


                                                            }


                                                        }


                                                        a[6][i7] = 0;
                                                    }


                                                }


                                                a[5][i6] = 0;
                                            }


                                        }

                                        a[4][i5] = 0;
                                    }


                                }
                                a[3][i4] = 0;
                            }
                                

                        }
                        a[2][i3] = 0;
                     }
                  
                }
           
                a[1][i2] = 0;
            }
        }
        
        
        a[0][i1] = 0;
    }
    printf("root=%d", root);
    return 0;
}*/


/*
//chen
#include<stdio.h>
int main()
{
    int m = 0;
    for (int i1 = 0; i1 <= 7; i1++)
    {
        int arr[8][8] = { 0 };
        arr[0][i1] = 1;
        for (int i2 = 0; i2 <= 7; i2++)
            if (i1 != i2)
            {
                arr[1][i2] = 1;
                for (int i3 = 0; i3 <= 7; i3++)
                    if (i3 != i1 && i3 != i2)
                    {
                        arr[2][i3] = 1;
                        for (int i4 = 0; i4 <= 7; i4++)
                            if (i4 != i1 && i4 != i2 && i4 != i3)
                            {
                                arr[3][i4] = 1;
                                for (int i5 = 0; i5 <= 7; i5++)
                                    if (i5 != i1 && i5 != i2 && i5 != i3 && i5 != i4)
                                    {
                                        arr[4][i5] = 1;
                                        for (int i6 = 0; i6 <= 7; i6++)
                                            if (i6 != i1 && i6 != i2 && i6 != i3 && i6 != i4 && i6 != i5)
                                            {
                                                arr[5][i6] = 1;
                                                for (int i7 = 0; i7 <= 7; i7++)
                                                    if (i7 != i1 && i7 != i2 && i7 != i3 && i7 != i4 && i7 != i5 && i7 != i6)
                                                    {
                                                        arr[6][i7] = 1;
                                                        for (int i8 = 0; i8 <= 7; i8++)
                                                            if (i8 != i1 && i8 != i2 && i8 != i3 && i8 != i4 && i8 != i5 && i8 != i6 && i8 != i7)
                                                            {
                                                                arr[7][i8] = 1;
                                                                int flag = 1;
                                                                for (int n = 0; n <= 7; n++)
                                                                {
                                                                    for (int k = 0; k <= 7; k++)
                                                                        if (arr[n][k] == 1)
                                                                        {
                                                                            for (int j = 1; n + j <= 7 && k + j <= 7; j++)
                                                                            {
                                                                                if (arr[n + j][k + j] == 1)
                                                                                    flag = 0;
                                                                            }
                                                                            for (int j = 1; n + j <= 7 && k - j >= 0; j++)
                                                                            {
                                                                                if (arr[n + j][k - j] == 1)
                                                                                    flag = 0;
                                                                            }


                                                                        }

                                                                }
                                                                if (flag == 1)
                                                                {
                                                                    for (int n = 0; n <= 7; n++)
                                                                    {
                                                                        for (int k = 0; k <= 7; k++)
                                                                        {
                                                                            if (k == 7)
                                                                                printf("%d\n", arr[n][k]);
                                                                            else
                                                                                printf("%d", arr[n][k]);
                                                                        }
                                                                    }
                                                                    printf("\n"); m++;
                                                                }

                                                                arr[7][i8] = 0;
                                                            }


                                                        arr[6][i7] = 0;
                                                    }

                                                arr[5][i6] = 0;
                                            }

                                        arr[4][i5] = 0;
                                    }
                                arr[3][i4] = 0;
                            }
                        arr[2][i3] = 0;
                    }
                arr[1][i2] = 0;
            }
    }
    printf("%d种", m);
    return 0;
}//斜向检验有所简化 
*/

/*
//ver 2.0  二维数组，进一步优化回溯算法并用斜率的绝对值检验斜向
#include<stdio.h>
int check(int a[][8], int row, int col);
int main()
{
	int a[8][8] ={0},root=0;
	for(int i1=0;i1<8;i1++)
	{   
        a[0][i1] = 1;
        for (int i2 = 0; i2 < 8; i2++)
        {
            a[1][i2] = 1;
            if(!check(a, 1, i2)) continue;
            for (int i3 = 0; i3 < 8; i3++)
            {
                a[2][i3] = 1;
                if (!check(a, 2, i3)) continue;
                for (int i4 = 0; i4 < 8; i4++)
                {
                    a[3][i4] = 1;
                    if (!check(a, 3, i4)) continue;
                    for (int i5 = 0; i5 < 8; i5++)
                    {
                        a[4][i5] = 1;
                        if (!check(a, 4,i5)) continue;
                        for (int i6 = 0; i6 < 8; i6++)
                        {
                            a[5][i6] = 1;
                            if (!check(a, 5, i6)) continue;
                            for (int i7 = 0; i7 < 8; i7++)
                            {
                                a[6][i7] = 1;
                                if (!check(a, 6, i7)) continue;
                                for (int i8 = 0; i8 < 8; i8++)
                                {
                                    a[7][i8] = 1;
                                    if (!check(a, 7, i8)) continue;
                                    for (int m = 0; m < 8; m++)
                                    {  
                                        for (int n = 0; n < 8; n++)
                                        {
                                            printf("%2d", a[m][n]);
                                            if ((n +1)% 8 == 0) printf("\n"); 
                                        }
                                    }
                                    printf("\n");
                                    root++;
                                    a[7][i8] = 0;
                                }
                                a[6][i7] = 0;
                            }
                            a[5][i6] = 0;
                        }
                        a[4][i5] = 0;
                    }
                    a[3][i4] = 0;
                }
                a[2][i3] = 0;
            }
            a[1][i2] = 0;
        }
        a[0][i1] = 0;
	}
    printf("root=%d", root);
    return 0; 
}

int check(int a[][8], int row, int col)
{
    //check col
    for (int i = 0; i < row; i++)
    {
        if (a[i][col])
        {
            a[row][col] = 0;
            return 0;
        }
    }   
    //check lean
    for (int i = 0; i < row; i++)
    {
        for (int n = 0; n <= 7; n++)
        {
            if (a[i][n])
            {
                double k = 1.0*(col - n) / (row - i);//除法默认为整除！！！！！！！！！！！！！！
                if (k==1||k==-1)
                {
                    a[row][col] = 0;
                    return 0;
                }
            }
                
        }
    }
    return 1;

}
 */

/*
//ver 3.0 变更为一维数组，为n皇后问题铺垫
#include<stdio.h>

//check函数可复用，将列改为对应值即可
int check(int *a, int row)
{
    //check col
    for (int i = 0; i < row; i++)
    {
        if (a[i]==a[row])
        {
            return 0;
        }
    }
    //check lean
    for (int i = 0; i < row; i++)
    {
        double k = 1.0 * (a[row] - a[i])/ (row - i);//除法默认为整除！！！！！！！！！！！！！！
        if (k == 1 || k == -1)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int a[8] = { 0 },root=0;
    for (int i1 = 0; i1 < 8; i1++)
    {
        a[0] = i1;
        for (int i2 = 0; i2 < 8; i2++)
        {
            a[1] = i2;
            if (!check(a,1)) continue;
            for (int i3 = 0; i3 < 8; i3++)
            {
                a[2] = i3;
                if (!check(a, 2)) continue;
                for (int i4 = 0; i4 < 8; i4++)
                {
                    a[3] = i4;
                    if (!check(a, 3)) continue;
                    for (int i5 = 0; i5 < 8; i5++)
                    {
                        a[4] = i5;
                        if (!check(a, 4)) continue;
                        for (int i6 = 0; i6 < 8; i6++)
                        {
                            a[5] = i6;
                            if (!check(a, 5)) continue;
                            for (int i7 = 0; i7 < 8; i7++)
                            {
                                a[6] = i7;
                                if (!check(a, 6)) continue;
                                for (int i8 = 0; i8 < 8; i8++)
                                {
                                    a[7] = i8;
                                    if (!check(a, 7)) continue;
                                    root++;
                                    for (int n = 0; n < 8; n++)
                                    {
                                        printf("%d", a[n]);
                                    }
                                    printf("\n\n");
                                }
                            }
                        }

                    }
                }
            }

        }
        
    }
    printf("root=%d", root);
    return 0;
}
//哈哈哈，一遍过
*/

/*
//ver 4.0 拓展至n皇后
#include<stdio.h>

//check函数仍可复用，且无需修改     

int check(int* a, int row)
{
    //check col
    for (int i = 0; i < row; i++)
    {
        if (a[i] == a[row])
        {
            return 0;
        }
    }
    //check lean
    for (int i = 0; i < row; i++)
    {
        double k = 1.0 * (a[row] - a[i]) / (row - i);//除法默认为整除！！！！！！！！！！！！！！
        if (k == 1 || k == -1)
        {
            return 0;
        }
    }
    return 1;

}

void queen(int* a, int n,int max);
int root = 0;

int main()
{
    int n;
   
    printf("请输入皇后的个数n(0<n<1000)\n(输入任意字母或输入任意该区间以外的整数以结束)\n");
    //外部输入任意的n
    while (scanf_s("%d", &n) == 1 && n > 0&&n<1000)
    {
        int max = n;
        int a[1000] = { 0 };
        queen(a, n,max);
        printf("%d皇后共有%d个解\n\n",n, root);
        root = 0;
    }
    return 0;
}

void queen(int* a, int n,int max)
{
    if (n == 1)
    {   
        for (int m = 0; m < max; m++)
        {
            a[max - (n)] = m;
            if (!check(a, max - (n))) continue;
            root++;
            for (int m = 0; m < max; m++)
            {
                printf("%-4d", a[m]);
                
            }
            printf("\n\n");
        }
       
    }
    else
    {
        for (int m = 0; m < max; m++)
        {
            a[max-(n)] = m;
            if (!check(a, max-(n))) continue;
            else queen(a, n - 1, max);

        }
    }

}
//大获成功！

*/


#include<stdio.h> 
#include<stdlib.h>

int check(int* a, int row)
{
    //check col
    for (int i = 0; i < row; i++)
    {
        if (a[i] == a[row])
        {
            return 0;
        }
    }
    //check lean
    for (int i = 0; i < row; i++)
    {
        double k = 1.0 * (a[row] - a[i]) / (row - i);//除法默认为整除！！！！！！！！！！！！！！
        if (k == 1 || k == -1)
        {
            return 0;
        }
    }
    return 1;

}

void queen(int* a, int n, int max);
int root = 0;

int main()
{
    int n;
    scanf("%d", &n);
    int max = n;
    int* a = (int*)malloc(max * sizeof(int));
    queen(a, n, max);
    if (root) printf("%d", root);
    else printf("无解");
    return 0;
}

void queen(int* a, int n, int max)
{
    if (n == 1)
    {
        for (int m = 0; m < max; m++)
        {
            a[max - (n)] = m;
            if (!check(a, max - (n))) continue;
            root++;
        }

    }
    else
    {
        for (int m = 0; m < max; m++)
        {
            a[max - (n)] = m;
            if (!check(a, max - (n))) continue;
            else queen(a, n - 1, max);

        }
    }

}
