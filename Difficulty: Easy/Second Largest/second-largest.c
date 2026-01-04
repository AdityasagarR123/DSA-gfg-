int getSecondLargest(int arr[], int n) {
    int largest = arr[0];

  
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int secondLargest = -1;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
