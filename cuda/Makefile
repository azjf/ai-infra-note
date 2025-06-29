NVCC := nvcc
NVCC_FLAGS := -std=c++20 -Xcompiler -Wno-deprecated-gpu-targets -g -G

a.out: add.cu
	$(NVCC) $< -o $@ $(NVCC_FLAGS)

.PHONY: clean
clean:
	rm -f *.o a.out
