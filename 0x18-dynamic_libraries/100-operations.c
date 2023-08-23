int add(int i, int j);
int sub(int i, int j);
int mul(int i, int j);
int div(int i, int j);
int mod(int i, int j);

/**
* add - adds two numbers together
* @i: number 1
* @j: second 2
* Return: the sum
*/

int add(int i, int j)
{
	return (i + j);
}

/**
* sub - subtracts two integers
* @i: number 1
* @j: second 2
* Return: the subtract
*/

int sub(int i, int j)
{
	return (i - j);
}

/**
* mul - multiplies two integers
* @i: number 1
* @j: second 2
* Return: the multiple
*/

int mul(int i, int j)
{
	return (i * j);
}

/**
* div - divideds two integers
* @i: number 1
* @j: second 2
* Return: the dividend integer
*/

int div(int i, int j)
{
	return (i / j);
}

/**
 * mod - finds the modulus of two integers
 * @i: number 1
 * @j: second 2
 * Return: the modulus
*/

int mod(int i, int j)
{
	return (i % j);
}
