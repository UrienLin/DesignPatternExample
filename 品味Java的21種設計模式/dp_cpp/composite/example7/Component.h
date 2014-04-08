#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example7 {

///
/// <summary> * 抽象的组件对象 </summary>
///
class Component {
    ///
    ///  <summary> * 记录每个组件的路径 </summary>
    ///
private:
    std::string componentPath;
    ///
    ///  <summary> * 获取组件的路径 </summary>
    ///  * <returns> 组件的路径 </returns>
    ///
public:
    virtual std::string getComponentPath();
    ///
    ///  <summary> * 设置组件的路径 </summary>
    ///  * <param name="componentPath"> 组件的路径 </param>
    ///
    virtual void setComponentPath(std::string componentPath);
    ///
    ///  <summary> * 获取组件的名称 </summary>
    ///  * <returns> 组件的名称 </returns>
    ///
    virtual std::string getName() = 0;

    /*-------------------以下是原有的定义----------------------*/

    ///
    ///  <summary> * 输出组件自身的名称 </summary>
    ///
    virtual void printStruct(std::string preStr) = 0;

    ///
    ///  <summary> * 向组合对象中加入组件对象  </summary>
    ///  * <param name="child"> 被加入组合对象中的组件对象 </param>
    ///
    virtual void addChild(Component *child);

    ///
    ///  <summary> * 从组合对象中移出某个组件对象 </summary>
    ///  * <param name="child"> 被移出的组件对象 </param>
    ///
    virtual void removeChild(Component *child);

    ///
    ///  <summary> * 返回某个索引对应的组件对象 </summary>
    ///  * <param name="index"> 需要获取的组件对象的索引，索引从0开始 </param>
    ///  * <returns> 索引对应的组件对象 </returns>
    ///
    virtual Component *getChildren(int index);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            componentPath = "";

            initialized = true;
        }
    }

public:
    Component() {
        InitializeInstanceFields();
    }
};


}
}
}
}
}