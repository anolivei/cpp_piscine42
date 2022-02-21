/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/16 23:40:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const ShrubberyCreationForm& i);

#define ASCIITREE "\n\
              _{\ _{\{\/}/}/}__\n\
             {/{/\}{/{/\}(\}{/\} _\n\
            {/{/\}{/{/\}(_)\}{/{/\}  _\n\
         {\{/(\}\}{/{/\}\}{/){/\}\} /\}\n\
        {/{/(_)/}{\{/)\}{\(_){/}/}/}/}\n\
       _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}\n\
      {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}\n\
      _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}\n\
     {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}\n\
      {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}\n\
       {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)\n\
      {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}\n\
       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}\n\
         {/({/{\{/{\{\/}(_){\/}/}\}/}(\}\n\
          (_){/{\/}{\{\/}/}{\{\)/}/}(_)\n\
            {/{/{\{\/}{/{\{\{\(_)/}\n\
             {/{\{\{\/}/}{\{\\}/}\n\
              {){/ {\/}{\/} \}\}\n\
              (_)  \.-'.-/\n\
          __...--- |'-.-'| --...__\n\
   _...--"   .-'   |'-.-'|  ' -.  ""--..__\n\
 -"    ' .  . '    |.'-._| '  . .  '   jro\n\
 .  '-  '    .--'  | '-.'|    .  '  . '\n\
          ' ..     |'-_.-|\n\
  .  '  .       _.-|-._ -|-._  .  '  .\n\
              .'   |'- .-|   '.\n\
  ..-'   ' .  '.   `-._.-�   .'  '  - .\n\
   .-' '        '-._______.-'     '  .\n\
        .      ~,\n\
    .       .   |\   .    ' '-.\n\
    ___________/  \____________\n\
   / Never gonna give you up   \\n\
  |  Never gonna let you down   |\n\
  |  Never gonna turn around    |\n\
  |		and desert you          |\n\
   \___________________________/\n\
"

#endif
