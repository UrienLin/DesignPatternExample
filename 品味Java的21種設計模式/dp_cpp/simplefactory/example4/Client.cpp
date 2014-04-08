#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example4 {

void Client::main(std::string args[]) {
    //重要改变，没有new Impl()了，取而代之Factory.createApi()
    //注意这里传递的参数，修改参数就可以修改行为，试试看吧
    Api *api = Factory::createApi(2);
    api->test1("哈哈，不要紧张，只是个测试而已！");
}
}
}
}
}
}
