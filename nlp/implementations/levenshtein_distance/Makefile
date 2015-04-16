
GCC=g++
OBJS=levenshtein_distance.o $(MAIN).o
MAIN=main
CORE_DUMPS=core.*
TRASH= $(OBJS) $(MAIN) $(CORE_DUMPS) *.*~ *~ 
RM=rm -f


all:$(MAIN)

# $(MAIN):$(OBJS) $(USER_OBJS) $(LIBS)
$(MAIN): $(OBJS)
	@echo 'Building target: $@'
	$(GCC) -o $@ $^
	@echo 'Finished building: $@'

$(MAIN).o: $(MAIN).cpp
	$(GCC) -c $(MAIN).cpp

levenshtein_distance.o: levenshtein_distance.cpp levenshtein_distance.h
	$(GCC) -c levenshtein_distance.cpp

clean:
	clear; $(RM) $(TRASH); ls -l




# run:$(MAIN)
# 	./$(MAIN)


# success:$(MAIN)
# 	@echo 'make $@ beginning.'
# 	./$(MAIN) > $(MAIN).OK 
# 	@echo 'make  $@ finished.'

# diff:$(MAIN)
# 	@echo 'make $@ beginning.' 
# 	./$(MAIN) > $(MAIN).last_diff
# 	diff $(MAIN).last_diff $(MAIN).OK
# # if((diff $(MAIN).last_diff $(MAIN).OK) == 0)
# # 	@echo 'make  $@ successfully finished. All tests are OK.'
# # else
# # 	@echo 'make  $@ has fail. Some differences has been found.'
# 	@echo 'make  $@ finished.' OK.
