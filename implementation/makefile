PROJ_NAME = function
SRC= function.c\
	function_test.c\
	.vscode\Unity\src\unity.c

INC = -I .\vscode\Unity\src

ifdef OS
RM = del /q
FixPath =$(sust /,\,$1)
EXEC =exe
else
ifreq ($(shell uname), Linux)
RM= rm -rf
FixPath= $1
EXEC =out
endif


build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath, $(PROJ_NAME).$(EXEC))

coverage: $(SRC)
	gcc $(INC) -fprofile-arcs -ftest-coverage $^ -o test.exe	
		./test.exe
