
#include "Message.h"
//constructorul fara parametrii, adica cel implicit
Message::Message() {

    this->text = "";

}

//constructorul cu parametrii
Message::Message(const User &sender, const User &receiver, const string &text) {
    this->text = text;
    this->sender = sender;
    this->receiver = receiver;
}

//destructorul
Message::~Message() = default;


//getterii
string& Message::getText() {
    return this->text;
}

User& Message::getReceiver() {
    return this->receiver;
}

User& Message::getSender() {
    return this->sender;
}

//setterii
void Message::setText(const string &t) {
    this->text= t;
}

void Message::setSender(const User &s) {
    this->sender = s;
}

void Message::setReceiver(const User &r) {
    this->receiver = r;
}

//operatorul de atribuire
Message &Message::operator=(const Message &m) {
    if (this!=&m)
    {this->text=m.text;
        this->sender = m.sender;
        this->receiver= m.receiver;
    }
    return *this;
}

//operatorul de egalitate
bool Message::operator==(const Message &alt_mesaj) {
    return (this->text == alt_mesaj.text && this->sender == alt_mesaj.sender && this->receiver == alt_mesaj.receiver);
}

//operatorul <<
ostream &operator<<(ostream &os, Message mesaj) {
    os<<"Cel care trimite mesajul: " << mesaj.sender;
    os<<"Cel care primeste mesajul: "<<mesaj.receiver;
    os<<"Mesajul trimis: "<<mesaj.text;
    return os;
}

//operatorul !=
bool Message::operator!=(const Message &alt_mesaj) {
    return !(*this==alt_mesaj);
}
