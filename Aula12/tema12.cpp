#include <bits/stdc++.h>
using namespace std;
class Nodo{
    public:
    char data;
    Nodo *proximo;};
void push(Nodo** head_ref, char new_data){
    Nodo* new_Nodo = new Nodo();
    new_Nodo->data = new_data;
    new_Nodo->proximo = (*head_ref);
    (*head_ref) = new_Nodo;}
void deletaNodo(Nodo** head_ref, char key){
    Nodo* temp = *head_ref;
    Nodo* prec = NULL;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->proximo;
        delete temp;
        return;}
    else {
        while (temp != NULL && temp->data != key) {
            prec = temp;
            temp = temp->proximo;}
        if (temp == NULL)
            return;
        prec->proximo = temp->proximo;
        delete temp;}}
void printList(Nodo *Nodo){
    while (Nodo != NULL){
        cout<<" "<<Nodo->data;
        Nodo=Nodo->proximo;}
    cout << endl;}
int main(){
    Nodo* head = NULL;
    cout<<" Lista inicial: " << endl;
    printList(head);
    push(&head, 'N');
    push(&head, 'A');
    push(&head, 'I');
    push(&head, 'T');
    push(&head, 'S');
    push(&head, 'Y');
    push(&head, 'R');
    push(&head, 'H');
    push(&head, 'C');
    printList(head);
    cout<< endl;
    deletaNodo(&head, 'A');
    cout<<" Lista encadeada depois de deletar o i:\n ";
    cout<< endl;
    printList(head);     
    return 0;}