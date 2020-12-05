//
// Created by tomo on 2020/12/5.
//

#ifndef SORT_SORT_H
#define SORT_SORT_H

#include <iostream>


namespace tomo {

    /**
* 用枢轴元素将待排序列划分为两个部分
* @param a 待排序的泛型数组
* @param low 数组第一个元素的对应的数组下标
* @param high 数组最后一个元素对应的数组下标
* @return 枢轴元素下标
*/
    template<typename T>
    int partition(T a[], int low, int high) {
        int pivot = a[low]; // 第一个元素作为枢轴
        while (low < high) {// 用low, high搜索枢轴的最终位置
            while (low < high && a[high] >= pivot)--high;
            a[low] = a[high]; // 比枢轴小的元素移动到左端
            while (low < high && a[low] <= pivot)++low;
            a[high] = a[low]; // 比枢轴大的元素移动到右端
        }
        a[low] = pivot; // 枢轴元素存放到最终位置
        return low; // 存放枢轴元素的最终位置
    }

    /**
 * 快速排序
 * @param a 待排序的泛型数组
 * @param low 数组第一个元素的对应的数组下标
 * @param high 数组最后一个元素对应的数组下标
 */
    template<typename T>
    void quick_sort(T a[], int low, int high) {
        if (low < high) { // 递归跳出条件
            int pivot_pos = partition(a, low, high); // 划分.
            quick_sort(a, low, pivot_pos - 1); // 划分左子表
            quick_sort(a, pivot_pos + 1, high); // 划分右子表
        }
    }


}
#endif //SORT_SORT_H

