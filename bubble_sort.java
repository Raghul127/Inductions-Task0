
import java.util.*;
public class Solution
{
 public static void main(String[] args) 
 {
   int arr[] = { 10, 7, 3, 1, 9, 7, 4, 3 };
   System.out.print("Initial Array : ");
   printArray(arr);
   bubbleSort(arr);
  }
  public static void printArray(int[] arr)
  {
  for(int m = 0; m < arr.length; m++)
  {
   System.out.print(arr[m] + " ");
   }

  System.out.println();
  }
  static void bubbleSort(int[] arr)
  {
  for (int m = 0; m < arr.length; m++) 
  {
   for (int n = 0; n < arr.length - m - 1; n++)
   {
   if (arr[n] > arr[n + 1]) 
   {
    int temp = arr[n];
    arr[n] = arr[n + 1];
    arr[n + 1] = temp;
    }
    }

    System.out.print("After pass " + m + "  : ");
    printArray(arr);
  }
  }
  }
