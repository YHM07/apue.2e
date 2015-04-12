#ch4fdir Makefile
# OUTPUT := ../output
# OBJS := $(OUTPUT)/umask.o
# a.out: $(OBJS)
# # gcc -o ../output/a.out $(OBJS)
# 	gcc -o a.out $<
# 
# $(OUTPUT)/umask.o: umask.c
# 	gcc -c -o $(OUTPUT)/umask.o umask.c 
# 
# 
# 
# .PHONY : clean
# clean:
# 	rm $(OUTPUT)/*.o 


EXEC   := a.out

OBJDIR := output
SRCDIR := src
INCDIR := inc
LIBDIR := lib 

LIBS   := apue 

# VPATH := src
vpath %.c $(SRCDIR)
vpath %.h $(INCDIR)

CFLAGS := -Wall -O1 
CFLAGS += $(addprefix -I, $(INCDIR)) 

LDFLAFS := $(addprefix -L,$(LIBDIR))
LDFLAFS += $(addprefix -l,$(LIBS))

CC     := gcc
SRC    := $(wildcard *.c) $(wildcard $(SRCDIR)/*.c)
OBJS   := $(patsubst %.c,$(OBJDIR)/%.o,$(notdir $(SRC)))

# ALL:
# 	@echo $(SRC)
# 	@echo $(OBJS)

# vpath <pattern> <directories> # 为符号模式<pattern>的文件指定搜索目录<directories>
# vpath <pattern> # 清除符合模式<pattern>的文件的搜索目录
# vpath # 清除所有已被设置好的文件搜索目录


$(EXEC):$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAFS)
$(OBJDIR)/%.o:$(SRC)
	$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAFS)



.PHONY : clean 
clean:
	rm $(OBJDIR)/*.o $(EXEC)
