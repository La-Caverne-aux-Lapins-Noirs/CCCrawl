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
  assert(read_postfix_expression(&p, "Identifier.SubIdentifier->FarIdentifier++--", &i) == 1);
  
  TEST_OUTRO();
}
