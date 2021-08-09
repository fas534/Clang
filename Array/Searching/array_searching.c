#include<stdio.h>
int main()
{
    char str[5], max_size = 5, size = 0;
    char key;
    int i, srch = 0;

    // Assigning
    for(i = 0; i < max_size; i++)
    {
        scanf("%c%*c", &str[i], printf("%d. -> ", i));
    }

    // Accessing
    for(i = 0; i < max_size; i++)
    {
        printf("%d. %d => %c\n", i, &str[i], str[i]);
    }

    // Searching
    while (scanf("%c%*c", &key)!=EOF)
    {
        for(i = 0; i < max_size; i++)
        {
            if(str[i] == key)
            {
                srch = 1;
            }
        }

        if(srch == 1)
        {
            printf("%c found\n", key);
            srch = 0;
        } else {
            printf("%c Not Found\n", key);
        }

    }
    

    return 0;
}