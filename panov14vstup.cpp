//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("Vvedit rozmir masivu: ");
//    scanf_s("%d", &n);
//    int* array = (int*)malloc(n * sizeof(int));
//    if (array == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    printf("Vvedti elementi masivu\n");
//    for (int i = 0; i < n; ++i) {
//        printf("Element %d: ", i + 1);
//        scanf_s("%d", &array[i]);
//    }
//    int min = array[0], max = array[0];
//    int minIndex = 0, maxIndex = 0;
//
//    for (int i = 1; i < n; ++i) {
//        if (array[i] < min) {
//            min = array[i];
//            minIndex = i;
//        }
//        if (array[i] > max) {
//            max = array[i];
//            maxIndex = i;
//        }
//    }
//    printf("min znach %d\n", min);
//    printf("max znach %d\n", max);
//    int distance = maxIndex - minIndex;
//    printf("Vidstan: %d\n", distance);
//    free(array);
//    return 0; 
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n, sum = 0;
//    printf("Vvedit rozmir masivu ");
//    scanf_s("%d", &n);
//    int* array = (int*)malloc(n * sizeof(int));
//    if (array == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    printf("Vvedit elementi masivu\n");
//    for (int i = 0; i < n; ++i) {
//        printf("Element %d: ", i + 1);
//        scanf_s("%d", &array[i]);
//        sum += array[i];
//    }
//     int average = sum / n;
//     printf("Ser znach= %d\n", average);
//    free(array);
//    return 0;
//}