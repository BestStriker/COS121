clean:
	make clear
	rm *.h.gch *.out *.o

run: main.out
	./main.out

main.out:
	g++ -std=c++11 -g -static *.cpp -o main.out

debug: main.out
	gdb ./main.out

clear:
	reset				
