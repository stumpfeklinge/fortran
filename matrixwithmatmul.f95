program matrix_multiplication
implicit none
integer :: N
real, allocatable, dimension(:,:) :: A, B, C
3integer :: i, j, k
real :: start_time, stop_time
write(*, *) "Введите размер матрицы:"
read(*, *) N
allocate(A(N, N), B(N, N), C(N, N))
call random_seed()
do i = 1, N
do j = 1, N
call random_number(A(i, j))
call random_number(B(i, j))
end do
end do
call cpu_time(stop_time)
C = matmul(A, B)
call cpu_time(stop_time)
print *, "Время выполнения: ", stop_time - start_time, " секунд"
deallocate(A, B, C)
end program matrix_multiplication
