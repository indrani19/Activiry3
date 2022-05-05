PROJECT = sum_of_characters_in_name
SRC = main.c main1.c



ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


Build:
	gcc $(SRC)  -o $(PROJECT).out

Run :
	./$(PROJECT).out

