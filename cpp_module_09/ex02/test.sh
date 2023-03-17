make re;
./PmergeMe x y z
./PmergeMe 3 y 1
./PmergeMe 3 -2 1
./PmergeMe 5 4 3 3 2 1

./PmergeMe 1
./PmergeMe 2 1
./PmergeMe 3 2 1
./PmergeMe 4 3 2 1
./PmergeMe 5 4 3 2 1
./PmergeMe 6 5 4 3 2 1

./PmergeMe 1 2 3
./PmergeMe 3 2 1

./PmergeMe `shuf -i 1-3001 -n 3000 | tr "\n" " "`
#./PmergeMe `shuf -i 1-10001 -n 10000 | tr "\n" " "`

make fclean
