/*
** image/2019-04-12-16-49-53.png
*/
unsigned int reverse_bits(unsigned int value)
{
    unsigned int answer = 0;
    /*用i不断左移直到为0来统计位数*/
    for (unsigned int i = 1; i != 0; i <<= 1)
    {
        /*
        value右移，answer左移
        */
        answer <<= 1;
        if (value & 1)
        {
            answer |= 1;
        }
        value >>= 1;
    }
}