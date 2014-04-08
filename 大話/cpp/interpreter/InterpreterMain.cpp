#include "InterpreterMain.h"

namespace interpreter {

void InterpreterMain::main(std::string args[]) {
    PlayContext *context = new PlayContext();
    std::string content = "O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3 ";
    context->setContext(content);
    Expression *exp = 0;
    //Here we can define a factory to create the Expression.
    //because I want to focus on interpreter pattern so didn't do that.you can do it by yourself ,just enjoy this

    try {
        while (context->getContext().length() > 0) {
            std::string str = context->getContext().substr(0, 1);

            if (str.equals("O")) {
                exp = new Scale();
            } else {
                exp = new Note();
            }

            exp->interpret(context);
        }
    } catch (Exception *e) {
        e->printStackTrace();
    }
}
}