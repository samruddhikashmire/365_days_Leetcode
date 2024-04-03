// Quick Sort
int partitionArray(int input[], int start, int end) {
    int pivot = input[start]; // Fixing the variable name
    int i = start;
    int j = end;
    while (i < j) {
        while (input[i] <= pivot && i <= end) // Fixing loop condition
            i++;
        while (input[j] > pivot && j >= start) // Fixing loop condition
            j--;
        if (i < j)
            swap(input[i], input[j]);
    }
    swap(input[j], input[start]);
    return j;
}

void quickSort(int input[], int start, int end) {
    if (start < end) {
        int pivot = partitionArray(input, start, end);
        quickSort(input, start, pivot - 1); // Fixing the recursive call
        quickSort(input, pivot + 1, end);   // Fixing the recursive call
    }
}
