#include<stdio.h>
//MrHaddis

int main() {
    //记录N
    int number;
    //记录M
    int deviation;
    scanf("%d %d", &number, &deviation);
    //两个边界条件
    if (number < 1 || number > 100) {
        return 0;
    }
    if (deviation < 0) {
        return 0;
    }
    //定义数组array
    int array[number];
    //定义的数组，去循环获取输入的内容
    for (int i = 0; i < number; i++) {
        scanf("%d", &array[i]);
    }
    //这里有两个for循环，
    //deviation循环是偏移次数循环
    //number循环是一个单次向右移动一个位置的循环
    //所以嵌套一下就可以了
    for (int k = 0; k < deviation; ++k) {
        //number循环是一个单次向右移动一个位置的循环
        for (int j = 0; j < number; j++) {
            //这里是一个位置的交换，
            //从后往前移动，每次把最后一位和前面的一位交换一下位置
            //举例说明
            // 1 2 3 4 的初始数组
            //第一次交换结果为 4 2 3 1
            //第二次交换结果为 4 1 3 2
            //第三次交换结果为 4 1 2 3
            //即完成了向右偏移一位
            //可以参考冒泡排序，思想是一样的
            //只不过这里是最后一位和第一位交换，不是相邻的交换
            int first = array[j];
            array[j] = array[number - 1];
            array[number - 1] = first;
        }
    }
    //这是已经移动完位置的数组了
    for (int l = 0; l < number; ++l) {
        //输出结果
        printf("%d", array[l]);
        //在最后一次时不输出空格
        if (l < number - 1) {
            printf(" ");
        }
    }
    return 0;
}