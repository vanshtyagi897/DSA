#include <bits/stdc++.h>
using namespace std;

// Node structure for polynomial
struct Node {
    int coeff;   // coefficient
    int pow;     // power
    Node* next;
};

// Function to create a new node
Node* createNode(int coeff, int pow) {
    Node* newNode = new Node();
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

// Insert a term at the end of polynomial
void insert(Node*& head, int coeff, int pow) {
    Node* newNode = createNode(coeff, pow);
    if (head == NULL) {      // first node
        head = newNode;
        return;
    } 
    Node* temp = head;
    while (temp->next != NULL){
         temp = temp->next;
    }     
    temp->next = newNode;
    
}

// Display polynomial
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->coeff << "x^" << temp->pow;
        if (temp->next != NULL) cout << " + ";
        temp = temp->next;
    }
    cout<<endl;
}

// Add two polynomials
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow == poly2->pow) {
            insert(result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->pow > poly2->pow) {
            insert(result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        }
        else {
            insert(result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        }
    }

    // Remaining terms
    while (poly1 != NULL) {
        insert(result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insert(result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }

    return result;
}

int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    // Polynomial 1: 5x^3 + 4x^2 + 2
    insert(poly1, 5, 3);
    insert(poly1, 4, 2);
    insert(poly1, 2, 0);

    // Polynomial 2: 3x^3 + 2x^1 + 1
    insert(poly2, 3, 3);
    insert(poly2, 2, 1);
    insert(poly2, 1, 0);

    cout << "Polynomial 1: ";
    display(poly1);

    cout << "Polynomial 2: ";
    display(poly2);

    Node* sum = addPolynomials(poly1, poly2);

    cout << "Sum: ";
    display(sum);

    return 0;
}