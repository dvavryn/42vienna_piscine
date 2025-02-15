/* 
    -   Create a function ft_fibonacci that returns the n-th element of the
        Fibonacci sequence, the first element being at the 0 index. We will
        consider that the Fibonacci sequence statrs like this: 0, 1, 1, 2.
        
    -   Overflows must not be handled, the function return will be undefined.

    -   Here is how it should be prototyped:
            int ft_fibonacci(int index);

    -   Obviously, ft_fibonacci has to be recursive.

    -   If the index is less than 0, the function should return -1.
*/

int ft_fibonacci(int index);

int main (void)
{

}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
}