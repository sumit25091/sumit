#include <stdio.h>
#include <string.h>


void extractDomainInfo(char *url)
 {
   
    char *domain_start = strstr(url, "://");
    if (domain_start != NULL)
	 {
        domain_start += 3; 
    } else
	 {
        domain_start = url; 
    }
    
    char *domain_end = strpbrk(domain_start, "/:");
    if (domain_end == NULL)
	 {
        domain_end = domain_start + strlen(domain_start); // End of string
    }
    
    char domain[100];
    strncpy(domain, domain_start, domain_end - domain_start);
    domain[domain_end - domain_start] = '\0'; 
    
    char *dot = strrchr(domain, '.');
    char domain_code[10];
    if (dot != NULL) 
	{
        strcpy(domain_code, dot + 1);
    } else {
        strcpy(domain_code, "");
    }
    
    printf("Domain name: %s\n", domain);
    printf("Domain code: %s\n", domain_code);
}

int main() {
    char url[100]; 
    
    
    printf("Enter the website URL: ");
    fgets(url, sizeof(url), stdin);
    
    
    url[strcspn(url, "\n")] = 0;
    

    extractDomainInfo(url);
    
    return 0;
}
