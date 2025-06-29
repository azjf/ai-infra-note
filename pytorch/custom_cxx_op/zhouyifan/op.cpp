#include <iostream>

#include <torch/torch.h>

static torch::Tensor my_add(const torch::Tensor &t1, const torch::Tensor &t2)
{
    assert(t1.size(0) == t2.size(0));
    assert(t1.size(1) == t2.size(1));
    auto result = t1 + t2;
    std::cout << result << std::endl;
    return result;
}

TORCH_LIBRARY(my_ops, m) { m.def("my_add", my_add); }
