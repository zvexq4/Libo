#include "libft.h"
#include <stdio.h>


void my_free(void * ptr)
{
	free(ptr);
}
int main(void)
{
	t_list *hamza;
	hamza = ft_lstnew(ft_strdup("Çağıl"));
	printf("%s", (char *)hamza->content);
	ft_lstdelone(hamza,my_free);
	if (!hamza)
		printf("silindi");
}