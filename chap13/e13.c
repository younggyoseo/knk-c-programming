#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char domain[50], index_url[50], ch;
    char *p = domain;
    
    printf("Enter domain: ");
    while((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';
    
    build_index_url(domain, index_url);
    
    printf("%s\n", index_url);
    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    char temp_str[50] = "http://www.";
    strcat(strcat(temp_str, domain), "/index.html");
    strcpy(index_url, temp_str);
}
