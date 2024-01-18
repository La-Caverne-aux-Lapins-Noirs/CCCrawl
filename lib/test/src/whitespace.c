/*
** Jason Brillante "Damdoshi"
** Hanged Bunny Studio 2014-2022
** EFRITS SAS 2021-2024
** Pentacle Technologie 2008-2024
**
** TechnoCore
*/

#include		"test.h"

int			main(int		argc,
			     char		**argv)
{
  TEST_INTRO();

  i = 0;
  s = "      \n\r\t      /* lel \n   */\n    // lol      \n  \035   !";
  assert(read_whitespace(s, &i) == true);
  assert(s[i] == '!');

  i = 0;
  assert(read_whitespace("//    ", &i) == true);
  assert(s[i] == '\0');

  i = 0;
  assert(read_whitespace("/*    ", &i) == false);
  assert(s[i] == '/');

  TEST_OUTRO();
}
