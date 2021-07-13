import java.util.*;
public class Main
{
public static void main(String[] args)
{
int n, m;
Scanner sc = new Scanner(System.in);
System.out.print(“\nEnter the order of the matrix : “);
m = sc.nextInt();
n = sc.nextInt();
int[][] mat1 = new int[m][n];
int[][] mat2 = new int[m][n];
int[][] mat3 = new int[m][n];
System.out.print(“\nInput the matrix 1 elements : “);
int i, j;
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
mat1[i][j] = sc.nextInt();
}

System.out.print(“\nInput the matrix 2 elements : “);
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
mat2[i][j] = sc.nextInt();
}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
}

System.out.println(“Addition of the two matrices :”);
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
System.out.print(mat3[i][j] + ” “);
System.out.println();
}

}
/* Java program to multiply two matrices */
import java.util.Scanner;

class Main
{
public static void main(String args[])
{
int m, n, p, q, sum = 0, c, d, k;

Scanner in = new Scanner(System.in);
System.out.println(“Enter the number of rows and columns of first matrix”);
m = in.nextInt();
n = in.nextInt();

int first[][] = new int[m][n];

System.out.println(“Enter elements of first matrix”);

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
first[c][d] = in.nextInt();

System.out.println(“Enter the number of rows and columns of second matrix”);
p = in.nextInt();
q = in.nextInt();

if (n != p)
System.out.println(“The matrices can’t be multiplied with each other.”);
else
{
int second[][] = new int[p][q];
int multiply[][] = new int[m][q];

System.out.println(“Enter elements of second matrix”);

for (c = 0; c < p; c++)
for (d = 0; d < q; d++)
second[c][d] = in.nextInt();

for (c = 0; c < m; c++)
{
for (d = 0; d < q; d++)
{
for (k = 0; k < p; k++)
{
sum = sum + first[c][k]*second[k][d];
}

multiply[c][d] = sum;
sum = 0;
}
}

System.out.println(“Product of the matrices:”);

for (c = 0; c < m; c++)
{
for (d = 0; d < q; d++)
System.out.print(multiply[c][d]+”\t”);

System.out.print(“\n”);
}
}
}
}
