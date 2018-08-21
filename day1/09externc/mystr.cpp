
extern "C"{
int myStrlen( const char *s)
{
    int len = 0;
    while(*s)
    {
        len++;
        s++;
    }
    return len;
}
}
