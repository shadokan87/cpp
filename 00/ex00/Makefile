define SPLASHART
             ;::::;                           
           ;::::; :;                          
         ;:::::'   :;                         
        ;:::::;     ;.                        
       ,:::::'       ;           OOO\         
       ::::::;       ;          OOOOO\        
       ;:::::;       ;         OOOOOOOO       
      ,;::::::;     ;'         / OOOOOOO      
    ;:::::::::`. ,,,;.        /  / DOOOOOO    
              -- Login: motoure --
              -- Github: shadokan87 --
 ,::::::;::::::;;;;::::;,   /  /        DOOO  
;`::::::`'::::::;;;::::: ,#/  /          DOOO 
:`:::::::`;::::::;;::: ;::#  /            DOOO
::`:::::::`;:::::::: ;::::# /              DOO
`:`:::::::`;:::::: ;::::::#/               DOO
 :::`:::::::`;; ;:::::::::##                OO
 ::::`:::::::`;::::::::;:::#                OO
 `:::::`::::::::::::;'`:;::#                O 
  `:::::`::::::::;' /  / `:#                  
   ::::::`:::::;'  /  /   `# 
endef
export SPLASHART
NAME	=	megaphone

CC		=	clang++

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

LFLAGS	=	-lpthread


SRCS	=	./megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)


all:		$(NAME)
			@echo "\t\t\n\t\t------\n\t${NAME}: generated\n\t\t------\n"
			@echo "$$SPLASHART"

$(NAME):	$(OBJS)
			${CC} ${CFLAGS} ${LFLAGS} -o ${NAME} ${OBJS} ${LIBFT}

clean:
			$(RM) $(OBJS)
			@echo "$$SPLASHART"

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
			@echo "$$SPLASHART"

.PHONY:		all clean fclean re f
