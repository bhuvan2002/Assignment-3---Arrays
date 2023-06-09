#include <stdio.h>
typedef short int16_t;
enum js_var_type {JS_VAR_NULL, JS_VAR_UNDEFINED, JS_VAR_NAN, JS_VAR_BOOL, JS_VAR_INT16, JS_VAR_STRING, JS_VAR_ARRAY, JS_VAR_DICT};
struct js_var {
    enum js_var_type type;
    int16_t number;
    void *data;
};
struct js_var js_var_from(enum js_var_type type) {
    struct js_var v;
    v.type = type;
    v.data = NULL;
    return v;
}

struct array_number_t {
    int16_t size;
    int16_t capacity;
    int16_t* data;
};

static struct array_number_t * (*nextPermutation)(struct array_number_t *);
static ARRAY(ARRAY(void *)) gc_22_arrays;
static struct array_number_t * tmp_result;
static int16_t tmp_array[3] = { 1, 2, 3 };
static int16_t i;
struct array_number_t * nextPermutation_func(struct array_number_t * nums)
{
    int16_t i;
    int16_t i;
    int16_t j;
    int16_t temp;

    ARRAY_CREATE(gc_22_arrays, 2, 0);

    n = nums->size;
    i = js_var_from(JS_VAR_NAN) - 2;
    for (;i >= 0;i--)
        if (nums->data[i] < nums->data[i + 1])
    {
        int16_t j;
        j = js_var_from(JS_VAR_NAN) - 1;
        for (;j > i;j--)
            if (nums->data[j] > nums->data[i])
        {
            int16_t tmp_array[2];
            int16_t right[1];
            int16_t index;
            int16_t k;
            tmp_array[0] = nums->data[i];
            tmp_array[1] = nums->data[j];
            tmp_array[0] = nums->data[j];
            tmp_array[1] = nums->data[i];
            right[0] = /* Unsupported node: ...nums.slice(i + 1).reverse() */;
             ;
            index = 0;
            k = i + 1;
            for (;k < js_var_from(JS_VAR_NAN);k++)
                nums->data[k] = right[index++];
            for (gc_i = 0; gc_i < gc_22_arrays->size; gc_i++) {
                free(gc_22_arrays->data[gc_i]->data);
                free(gc_22_arrays->data[gc_i]);
            }
            free(gc_22_arrays->data);
            free(gc_22_arrays);
            return nums;
        }
    }
    i = 0;
    j = nums->size - 1;
    while (i < j) {
        temp = nums->data[i];
        nums->data[i] = nums->data[j];
        nums->data[j] = temp;
        i++;
        j--;
    }
    for (gc_i = 0; gc_i < gc_22_arrays->size; gc_i++) {
        free(gc_22_arrays->data[gc_i]->data);
        free(gc_22_arrays->data[gc_i]);
    }
    free(gc_22_arrays->data);
    free(gc_22_arrays);
    return nums;

}

int main(void) {
    nextPermutation = nextPermutation_func;
    tmp_result = ((void *)nextPermutation(tmp_array));
    printf("[ ");
    for (i = 0; i < tmp_result->size; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", tmp_result->data[i]);
    }
    printf(" ]\n");

    return 0;
}
