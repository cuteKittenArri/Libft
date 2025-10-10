/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knajmech <knajmech@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:34:49 by knajmech          #+#    #+#             */
/*   Updated: 2025/10/10 11:40:16 by knajmech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>
#include <signal.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>

//#include <criterion/new/assert.h>
Test(is_functions, test_isalpha)
{
	cr_assert((!!ft_isalpha('A')) == (!!isalpha('A')));
	cr_assert((!!ft_isalpha('2')) == (!!isalpha('2')));
	cr_assert((!!ft_isalpha('z' + 1)) == (!!isalpha('z' + 1)));
}

Test(is_functions, test_isdigit)
{
	cr_assert((!!ft_isdigit('5')) == (!!isdigit('5')));
	cr_assert((!!ft_isdigit(47)) == (!!isdigit(47)));
	cr_assert((!!ft_isdigit('a')) == (!!isdigit('a')));
}

Test(is_functions, test_isalnum)
{
	cr_assert((!!ft_isalnum(48)) == (!!isalnum(48)));
	cr_assert((!!ft_isalnum(98)) == (!!isalnum(98)));
	cr_assert((!!ft_isalnum(120)) == (!!isalnum(120)));
}

Test(is_functions, test_isascii)
{
	cr_assert((ft_isascii(125)) == (isascii(125)));
}


Test(is_functions, test_isprint)
{
	cr_assert((!!ft_isprint(2)) == (!!isprint(2)));
	cr_assert((!!ft_isprint(49)) == (!!isprint(49)));
}

char str[] = "This is a stupid test, and I hate everything, and everything sucks, and yeah.";
char str2[] = "This is good. I love this. I love life.";

char delimitter[] = " ";

Test(basic_funcs, test_strlen)
{
	cr_assert((ft_strlen(str)) == (strlen(str)));
	cr_assert((ft_strlen(str2)) == (strlen(str2)));
	cr_assert((ft_strlen(delimitter)) == (strlen(delimitter)));
}

Test(basic_funcs, test_memset)
{
	char s1[] = "This is a stupid test, and I hate everything, and everything sucks, and yeah.";
	char s2[] = "This is a stupid test, and I hate everything, and everything sucks, and yeah.";
	//char *ft_ptr = ft_memset(s1+2, 'c', 4);
	//char *std_ptr = memset(s2+2, 'c', 4);
	
	//cr_assert(ft_ptr == std_ptr, "Pointers differ: ft=%p std=%p", ft_ptr, std_ptr);

	//cr_assert((ft_memset(s1+8, 'c', 2)) == (memset(s2+8, 'c', 2)));
	cr_assert_arr_eq((ft_memset(s1+2, 'c', 10)), ((memset(s2+2, 'c', 10))), 10);
	//cr_assert((ft_memset(str+3, 'c', 5)) == (memset(str+3, 'c', 5)));
}

Test(basic_funcs, test_memmove)
{
	cr_assert((ft_memmove(str+8, str, 9)) == (memmove(str+8, str, 9)));
	cr_assert((ft_memmove(str+2, str, 3)) == (memmove(str+2, str, 3)));
	cr_assert((ft_memmove(str+3, str, 4)) == (memmove(str+3, str, 4)));
}

Test(basic_funcs, test_bzero)
{
	char s1[10] = "abcdef";
	char s2[10] = "abcdef";

	ft_bzero(s1, 3);
	bzero(s2, 3);

	cr_assert_arr_eq(s1, s2, 7);
}

Test(basic_funcs, test_memcpy)
{
	char s1[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah.";
	char s2[] = "ing, and everything sucks, and yeah.";
	char s3[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah.";
	//char s4[] = "everything sucks, and yeah.";     
	//cr_assert((ft_memcpy(str+8, str, 9)) == (memcpy(str+8, str, 9)));
    //cr_assert((ft_memcpy(str+2, str, 3)) == (memcpy(str+2, str, 3)));
    //cr_assert((ft_memcpy(str+3, str, 4)) == (memcpy(str+3, str, 4)));
	//cr_assert((memcpy(s1+2, s1, 4)) == (ft_memcpy(s1+2, s2, 4)));
	cr_assert_arr_eq((ft_memcpy(s1, s2, 15)), ((memcpy(s3, s2, 15))), 15);

	//struct cr_mem mem_buffer1 = {.data = ft_memcpy(s1, s2, 15), .size = 15};
	//struct cr_mem mem_buffer2 = {.data = memcpy(s3, s2, 15), .size = 15};
	//cr_assert(eq(mem, mem_buffer1, mem_buffer2));
}

Test(basic_funcs, test_strlcpy)
{
	char string[20] = "Hello world 42";
	char string2[20] = "Hello world 42";

	cr_assert((ft_strlcpy(str, str2, 10)) == (strlcpy(str, str2, 10)));
	cr_assert((ft_strlcpy(string, string+2, 4)) == (strlcpy(string2, string2+2, 4)));
}

Test(basic_funcs, test_strlcat)
{
	char str[20] = "Hello";
    char str2[20] = "World";
	char string[20] = "Hello world 42";
	char string2[20] = "Hello world 42";

    // Copy originals for comparison
    char ft_dest[20];
    char std_dest[20];
    strcpy(ft_dest, str2);
    strcpy(std_dest, str2);

    size_t ft_ret = ft_strlcat(ft_dest, str, 5);
    size_t std_ret = strlcat(std_dest, str, 5);

    cr_assert(ft_ret == std_ret, "Return values differ: ft=%zu, std=%zu", ft_ret, std_ret);
	cr_assert(strcmp(ft_dest, std_dest) == 0, "Strings differ: ft=\"%s\" std=\"%s\"", ft_dest, std_dest);

    // Log or print the results
    cr_log_info("Result ft_dest: \"%s\"\n", ft_dest);
    cr_log_info("Result std_dest: \"%s\"\n", std_dest);
	printf("%s", str);
	cr_assert((ft_strlcat(str2, str, 5)) == (strlcat(str2, str, 5)));
	printf("%s", str);
	cr_assert((ft_strlcat(string + 3, string, 5)) == (strlcat(string2 + 3, string2, 5)));
}

Test(basic_funcs, test_toupper)
{
	cr_assert((ft_toupper('A')) == (toupper('A')));
	cr_assert((ft_toupper('a')) == (toupper('a')));
	cr_assert((ft_toupper('4')) == (toupper('4')));
}

Test(basic_funcs, test_tolower)
{
    cr_assert((ft_tolower('a')) == (tolower('a')));
	cr_assert((ft_tolower('A')) == (tolower('A')));
	cr_assert((ft_tolower('4')) == (tolower('4')));
}

Test(basic_funcs, test_strchr)
{
	char s1[10] = "abcdef";
	//char s2[10] = "abcdef";

	char *ft_ptr = ft_strchr(s1, 'a');
    char *std_ptr = strchr(s1, 'a');
    cr_assert(ft_ptr == std_ptr, "Pointers differ: ft=%p std=%p", ft_ptr, std_ptr);
	cr_assert((ft_strchr(s1, 'a')) == (strchr(s1, 'a')));
	cr_assert((ft_strchr(s1, 'g')) == (strchr(s1, 'g')));
	cr_assert((ft_strchr(s1, 'd')) == (strchr(s1, 'd')));
}

Test(basic_funcs, test_strrchr)
{
	char s1[10] = "abcdef";
	char s2[10] = "abcaba";
	char s3[10] = "bcdea";
	char s4[20] = "abcdedsd a";
	char s5[20] = "bcdef a b k a";

	cr_assert((ft_strrchr(s1, 'a')) == (strrchr(s1, 'a')));
	cr_assert((ft_strrchr(s2, 'a')) == (strrchr(s2, 'a')));
	cr_assert((ft_strrchr(s3, 'a')) == (strrchr(s3, 'a')));
	cr_assert((ft_strrchr(s4, 'a')) == (strrchr(s4, 'a')));
	cr_assert((ft_strrchr(s5, 'a')) == (strrchr(s5, 'a')));
}

Test(basic_funcs, test_strncmp)
{
	char s1[10] = "absdef";
	char s2[10] = "abcdef";
	char s3[10] = "abddef";
	char s4[10] = "bbddef";
	char s5[10] = "bbddeh";

	cr_assert(ft_strncmp(s1, s2, 6) == strncmp(s1, s2, 6));
	cr_assert(ft_strncmp(s3, s4, 6) == strncmp(s3, s4, 6));
	cr_assert(ft_strncmp(s4, s5, 6) == strncmp(s4, s5, 6));
}

Test(basic_funcs, test_memchr)
{
	char string[] = "Hello world 42";
	const void *ft_ptr[10];
	const void *std_ptr[10];
	ft_ptr[0] = ft_memchr(string, '4', 15);
    std_ptr[0] = memchr(string, '4', 15);
	ft_ptr[1] = ft_memchr(string, 'H', 15);
	std_ptr[1] = memchr(string, 'H', 15);
	ft_ptr[2] = ft_memchr(string, '4', 15);
	std_ptr[2] = memchr(string, '4', 15);
	ft_ptr[3] = ft_memchr(string, '2', 15);
	std_ptr[3] = memchr(string, '2', 15);
	ft_ptr[4] = ft_memchr(string, '1', 9);
	std_ptr[4] = memchr(string, '1', 9);
	ft_ptr[5] = ft_memchr(string, 'H', 15);
	std_ptr[5] = memchr(string, 'H', 15);
	ft_ptr[6] = ft_memchr(string, '2', 15);
	std_ptr[6] = memchr(string, '2', 15);
	ft_ptr[7] = ft_memchr(string, 'd', 3);
	std_ptr[7] = memchr(string, 'd', 3);
	ft_ptr[8] = ft_memchr(string, '1', 3);
	std_ptr[8] = memchr(string, '1', 3);
/*	cr_assert(ft_ptr[0] == std_ptr[0], "Pointers differ: ft=%p std=%p", ft_ptr[0], std_ptr[0]);	
	cr_assert(ft_ptr[1] == std_ptr[1], "Pointers differ: ft=%p std=%p", ft_ptr[1], std_ptr[1]);
	cr_assert(ft_ptr[2] == std_ptr[2], "Pointers differ: ft=%p std=%p", ft_ptr[2], std_ptr[2]);
	cr_assert(ft_ptr[3] == std_ptr[3], "Pointers differ: ft=%p std=%p", ft_ptr[3], std_ptr[3]);
	cr_assert(ft_ptr[4] == std_ptr[4], "Pointers differ: ft=%p std=%p", ft_ptr[4], std_ptr[4]);
	cr_assert(ft_ptr[5] == std_ptr[5], "Pointers differ: ft=%p std=%p", ft_ptr[5], std_ptr[5]);
	cr_assert(ft_ptr[7] == std_ptr[7], "Pointers differ: ft=%p std=%p", ft_ptr[7], std_ptr[7]);
	cr_assert(ft_ptr[8] == std_ptr[8], "Pointers differ: ft=%p std=%p", ft_ptr[8], std_ptr[8]);
*/
	int i;
    for (i = 0; i < 9; i++)
        cr_assert(ft_ptr[i] == std_ptr[i],
                  "Test %dfailed: ft_memchr returned %p, memchr returned %p",
                  i, ft_ptr[i], std_ptr[i]);
}

Test(basic_funcs, test_memcmp)
{
	void *string = "Hello world 42";
    void *string2 = "Hello world 44";
	void *string3 = "sello world42";
    void *string4 = "Hello world 83";

	cr_assert(ft_memcmp(string, string2, 10) == memcmp(string, string2, 10));
	cr_assert(ft_memcmp(string, string3, 10) == memcmp(string, string3, 10));
	cr_assert(ft_memcmp(string, string4, 15) == memcmp(string, string4, 15));
	cr_assert(ft_memcmp(string4, string3, 10) == memcmp(string4, string3, 10));
}

Test(basic_funcs, test_strnstr)
{
	char string[] = "Hello world. 42 is the answer to the universe, to everything, based on hitchhiker's guide to the galaxy";
    const void *ft_ptr[10];
    const void *std_ptr[10];
    ft_ptr[0] = ft_strnstr(string, "world", 150);
    std_ptr[0] = strnstr(string, "world", 150);
    ft_ptr[1] = ft_strnstr(string, "answer", 150);
    std_ptr[1] = strnstr(string, "answer", 150);
    ft_ptr[2] = ft_strnstr(string, "Hello", 150);
    std_ptr[2] = strnstr(string, "Hello", 150);
    ft_ptr[3] = ft_strnstr(string, "H", 150);
    std_ptr[3] = strnstr(string, "H", 150);
    ft_ptr[4] = ft_strnstr(string, "galaxy", 150);
    std_ptr[4] = strnstr(string, "galaxy", 150);
    ft_ptr[5] = ft_strnstr(string, "y", 150);
    std_ptr[5] = strnstr(string, "y", 150);
    ft_ptr[6] = ft_strnstr(string, " ", 150);
    std_ptr[6] = strnstr(string, " ", 150);
    ft_ptr[7] = ft_strnstr(string, "42", 150);
    std_ptr[7] = strnstr(string, "42", 150);
    ft_ptr[8] = ft_strnstr(string, "moo", 150);
    std_ptr[8] = strnstr(string, "moo", 150);
	int i;
    for (i = 0; i < 9; i++)
		cr_assert(ft_ptr[i] == std_ptr[i],
			"Test %d failed: ft_strnstr returned %p, memchr returned %p",
			i, ft_ptr[i], std_ptr[i]);
}

Test(basic_funcs, test_atoi)
{
	cr_assert(ft_atoi("84314") == atoi("84314"));
	cr_assert(ft_atoi("-67243") == atoi("-67243"));
	cr_assert(ft_atoi("8") == atoi("8"));
	cr_assert(ft_atoi("0") == atoi("0"));
	cr_assert(ft_atoi("") == atoi(""));
	cr_assert(ft_atoi("2147483647") == atoi("2147483647"));
	cr_assert(ft_atoi("-2147483648") == atoi("-2147483648"));
}

Test(basic_funcs, test_calloc)
{
	size_t size = 5;

	cr_assert_arr_eq(ft_calloc(size, 1), calloc(size, 1), 5);
}

Test(basic_funcs, test_strdup)
{
	char str[] = "this is the string you are checking";
	int size = ft_strlen(str);
	cr_assert_arr_eq(ft_strdup(str), strdup(str), size);
}

Test(part_2, test_substr)
{
	char const s[] = "this is the test input";
	int start = 5;
	size_t len = ft_strlen(s);

	cr_assert_arr_eq(ft_substr(s, start, len), "is the test input", 18);	
}

Test(part_2, test_strjoin)
{
	char const s[] = "this is the test input ";
	char const s2[] = "and I need it concactanated to this";
	char const compare[] = "this is the test input and I need it concactanated to this";

	cr_assert_arr_eq(ft_strjoin(s, s2), compare, 58, "Test failed: compare len:%zu strjoin:%s", ft_strlen(compare), ft_strjoin(s, s2));
}

Test(part_2, test_strtrim)
{
	char const *s1 = "      here      ";
	char const *s2 = " ";
	char *expected = "here";

	cr_assert_arr_eq(ft_strtrim(s1, s2), expected, 5);

}
