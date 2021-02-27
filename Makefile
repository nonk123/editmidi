OBJ = main.obj

editmidi.exe: $(OBJ)
	$(CC) /Fe:$@ $**

.PHONY: clean

clean:
	-rm editmidi.exe $(OBJ)
