#include "Parser.h"

Parser::Parser() {
    source = "";
}

Parser::~Parser() {
    for (int i = 0; i < children.size(); i++)
        delete children[i];
}

Element* Parser::createElement(const string& name) {
    if (name == "circle") return new Circle();
    else if (name == "rect") return new Rectangle();
    if (name == "ellipse") return new Ellipse();
    else if (name == "line") return new Line();
    else if (name == "polyline") return new Polyline();
    else if (name == "polygon") return new Polygon();
    else if (name == "text") return new Text();
    else return nullptr;
}

void Parser::loadFromFile(const string source) {
    xml_document<> doc;
    ifstream file(source);
    vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    buffer.push_back('\0');
    doc.parse<0>(&buffer[0]);

    xml_node<>* rootNode = doc.first_node("svg");
    if (!rootNode)
        return;
    for (xml_node<>* node = rootNode->first_node(); node; node = node->next_sibling()) {
        string ele_name = node->name();
        Element* ele = createElement(ele_name);
        if (ele) {
            ele->parseAttributes(node);
            children.push_back(ele);
        }
    }
}

const vector<Element*>& Parser::getChildren() {
    return children;
}
