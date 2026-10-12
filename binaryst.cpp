#include <iostream>
using namespace std ;
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};


Node* insert(Node* root, int value) {

    
    if (root == NULL) {
        return new Node(value);
    }

    
    if (value < root->value) {
        root->left = insert(root->left, value);
    }

    
    else if (value > root->value) {
        root->right = insert(root->right, value);
    }

    return root;
}


Node* createBST() {

    Node* root = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        root = insert(root, value);
    }

    return root;
}
 
bool search(Node* root, int value) {

    
    if (root == NULL) {
        return false;
    }

    
    if (root->value == value) {
        return true;
    }

    
    if (value < root->value) {
        return search(root->left, value);
    }

    
    else {
        return search(root->right, value);
    }
}


Node* minValueNode(Node* root) {

    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }

    return temp;
}


Node* deleteNode(Node* root, int value) {

    
    if (root == NULL) {
        return root;
    }


    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    }


    else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    }

    else {

        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }


        else {
            Node* temp = minValueNode(root->right);

            root->value = temp->value;

            root->right = deleteNode(root->right, temp->value);
        }
    }

    return root;
}

void inorder(Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);

    cout << root->value << " ";

    inorder(root->right);
}

void preorder(Node* root) {

    if (root == NULL) {
        return;
    }

    cout << root->value << " ";

    preorder(root->left);

    preorder(root->right);
}

void postorder(Node* root) {

    if (root == NULL) {
        return;
    }

    postorder(root->left);

    postorder(root->right);

    cout << root->value << " ";
}


int main() {

    Node* root = createBST();

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);



    int value;

    cout << "\n\nEnter value to search: ";
    cin >> value;

    if (search(root, value)) {
        cout << "Value found";
    }
    else {
        cout << "Value not found";
    }


    cout << "\n\nEnter value to insert: ";
    cin >> value;

    root = insert(root, value);

    cout << "After insertion: ";
    inorder(root);


    
    cout << "\n\nEnter value to delete: ";
    cin >> value;

    root = deleteNode(root, value);

    cout << "After deletion: ";
    inorder(root);


    return 0;
}