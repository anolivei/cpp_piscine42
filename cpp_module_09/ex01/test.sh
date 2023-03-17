make re;
./RPN;

export COMMAND="(1 + 1)" && printf "${COMMAND}: " && ./RPN "${COMMAND}";
export COMMAND="1 + 1" && printf "${COMMAND}: " && ./RPN "${COMMAND}";
export COMMAND="1 1 + 1" && printf "${COMMAND}: " && ./RPN "${COMMAND}";
export COMMAND="1 1 + 0 /" && printf "${COMMAND}: " && ./RPN "${COMMAND}";

export COMMAND="8 9 * 9 - 9 - 9 - 4 - 1 +" && printf "${COMMAND}: " && ./RPN "${COMMAND}";
export COMMAND="7 7 * 7 -" && printf "${COMMAND}: " && ./RPN "${COMMAND}";

make fclean;
