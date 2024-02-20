all:
	clang-format -i *.cpp
	g++ hop_problem.cpp -o hop_problem.bin
	./hop_problem.bin 4 3 # Should be 7
clean:
	rm -vf *.bin
