import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i< a.length; i++){
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the value to be searched: ");
        int x = sc.nextInt();
        sc.close();
        long start = System.nanoTime();
        binary(a, x);
        long end = System.nanoTime();
        long execution = end - start;
        double seconds = (double) execution/ 1000000000.0;
        System.out.println("Execution time: " + seconds + " seconds");
    }
    public static void binary(int a[], int x){
        int lo = 0;
        int hi = a.length-1;
        while (hi - lo>1){
            int mid = (hi+lo)/2;
            if (a[mid]<x){
                lo = mid+1;
            }
            else {
                hi = mid;
            }
        }
        if (a[lo] == x){
            System.out.println("Found At Index "+lo);
        }
        else if (a[hi] == x) {
            System.out.println("Found At Index "+hi);
        }
        else {
            System.out.println("Not Found");
        }
    }
}
