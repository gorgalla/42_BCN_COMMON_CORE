 #include <stdio.h>
 #include <stdlib.h>
 #include <fcntl.h>
 #include "get_next_line.h"
 
 void    ft_print(int fd, int lines)
 {
     int     i;  
     char    *line;
 
     i = 0;
     while (i < lines)
     {
         line = get_next_line(fd);
         printf("%s", line);
         free (line);
         i++;
     }
 }
 
 int main(int argc, char **args)
 {
     int     fd;
 
     if (argc == 2 || argc == 3)
     {
         fd = open(args[1], O_RDONLY);
         if (fd == -1)
             return (-1);
         if (argc == 3)
             ft_print (fd, atoi(args[2]));
         else
             ft_print (fd, 8);
         close(fd);
     }
     else
         printf("Bad usage: enter parameters <path> [lines]");
     return (0);
 }
