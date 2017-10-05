#ifndef _SORT_H_
#define _SORT_H_

#ifdef __cplusplus
extern "C" {
#endif
	//ð������
	void BubbleSort(int arr[], const size_t len);
	//��������
	void InsertionSort(int arr[], const size_t len);
	//ϣ������
	void ShellSort(int arr[], const size_t len);
	//ѡ������
	void SelectSort(int arr[], const size_t len);
	//��������
	void QuickSort(int arr[], const size_t len);
	//�鲢����
	void MergeSort(int arr[], const size_t len);
	//������
	void HeapSort(int arr[], const size_t len);
	//��������
	void CountSort(int arr[], const size_t len);
	//Ͱ����
	void BucketSort(int arr[], const size_t len);
	//��������
	void RadixSort(int arr[], const size_t len);
#ifdef __cplusplus
}
#endif


#endif
