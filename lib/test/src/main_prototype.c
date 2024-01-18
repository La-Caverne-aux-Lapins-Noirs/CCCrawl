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
  s = "int main(void);";
  p.last_error_id = -1;
  if (read_declaration(&p, s, &i) != 1)
    GOTOERROR();
  i = 0;
  p.last_error_id = -1;
  if (read_translation_unit(&p, "file", s, &i, true, false) != 1)
    GOTOERROR();

  TEST_OUTRO();
}

