import java.util.Arrays;

public class BinarySearch {

    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 6, 7, 9, 11, 13};
        int target = 7;

        int index = binarySearch(arr, target);

        if (index != -1) {
            System.out.println("Target element found at index " + index);
        } else {
            System.out.println("Target element not found in array");
        }
    }

    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }

}
