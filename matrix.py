import numpy as np
import time
def sozdanie(n):
array = np.random.randint(-10, 11, size=(n, n))
4return array
size =int(input("Введите размер матриц\n"))
arr1=sozdanie(size)
arr2=sozdanie(size)
start_time = time.time()
arr3=np.matmul(arr1,arr2)
end_time = time.time()
print("Время выполнения алгоритма: ",end_time-start_time)
