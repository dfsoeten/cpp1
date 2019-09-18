int main ()
{
    int var1, var2;
    int *ptr1, *ptr2;
    ptr1 = &var1;
    ptr2 = &var2;
    *ptr1 = 63;
    *ptr2 = 9;
    *ptr1 = *ptr2;
    ptr1 = ptr2;
    *ptr1 = 78;
    return 0;
}
