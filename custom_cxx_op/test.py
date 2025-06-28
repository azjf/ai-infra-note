import torch

torch.ops.load_library("./build/libcustom_op.so")

def main():
    a = torch.rand([1, 2])
    b = torch.rand([1, 2])
    c = torch.ops.my_ops.my_add(a, b)
    d = a + b
    print(c, d, c - d)

if __name__ == '__main__':
    main()
