int getSecondLargest(int *arr, int n) {
    
    for (int i = 0; i < n; i++) {
        int counter = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                int alreadyCounted = 0;

                // Check whether arr[j] was already counted
                for (int k = 0; k < j; k++) {
                    if (arr[k] == arr[j] && arr[i] < arr[k]) {
                        alreadyCounted = 1;
                        break;
                    }
                }

                if (!alreadyCounted) {
                    counter++;
                }
            }
        }

        if (counter == 1) {
            return arr[i];
        }
    }

    return -1;
}