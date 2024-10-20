time: ipc.o time.o main.o
	$(CC) -o $@ $^ -lrt

ipc.o: ipc.c
	$(CC) -c ipc.c

time.o: time.c
	$(CC) -c time.c

main.o: main.c
	$(CC) -c main.c

clean:
	-rm -f *.o time
	@echo "All clean!"