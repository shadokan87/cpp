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
NAME	=	onsenfoudunom

CXX		=	clang++ -std=c++98

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

LFLAGS	=	-lpthread


SRCS	=	./main.cpp ./span.cpp

OBJS	=	$(SRCS:.cpp=.o)


all:		$(NAME)
			@echo -e "\t\t\n\t\t------\n\t${NAME}: generated\n\t\t------\n"
			@echo "$$SPLASHART"

$(NAME):	$(OBJS)
			${CXX} ${CFLAGS} ${LFLAGS} -o ${NAME} ${OBJS} ${LIBFT}

clean:
			$(RM) $(OBJS)
			@echo -e "\t\t\n\t\t------\n\t${NAME}: object files cleaned\n\t\t------\n"
			@echo "$$SPLASHART"

fclean:		clean
			$(RM) $(NAME)
			@echo -e "\t\t\n\t\t------\n\t${NAME}: fclean\n\t\t------\n"

re:			fclean $(NAME)
			@echo -e "\t\t\n\t\t------\n\t${NAME}: re make\n\t\t------\n"
			@echo "$$SPLASHART"

.PHONY:		all clean fclean re f
