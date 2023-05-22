/**
 * _isdigit - returns if character is digit or not
 * @c: Character being tested
 * Return: 1 for digit, 0 for not digit
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
