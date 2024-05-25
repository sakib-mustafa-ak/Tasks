#include <bits/stdc++.h>
using namespace std;

// Define the Node struct
struct Node
{
    int data;
    Node *next;
};
Node *root = nullptr;

void add_node(int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (root == nullptr)
    {
        root = new_node;
    }
    else
    {
        Node *current_node = root;
        while (current_node->next != nullptr)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void delete_node(int data)
{
    Node *current_node = root;
    Node *previous_node = nullptr;
    while (current_node->data != data)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }
    if (current_node == root) // to delete the node
    {
        Node *temp = root; // keep root in a temp node
        root = root->next;
        delete (temp); // free memory
    }
    else // to delete the non-root node/others node
    {
        previous_node->next = current_node->next;
        delete (current_node);
    }
}

// function to insert a node at a specific position
void insert_node(int index, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (index == 0)
    {
        new_node->next = root;
        root = new_node;
    }
    else
    {
        Node *current = root;
        for (int i = 0; i < index - 1 && current != nullptr; ++i)
        {
            current = current->next;
        }
        if (current != nullptr)
        {
            new_node->next = current->next;
            current->next = new_node;
        }
        else
        {
            cout << "Index is out of bounds" << endl;
            delete new_node; // Clean up the allocated node
        }
    }
}

int list_length()
{
    Node *current = root;
    int count = 0;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

void print_forward()
{
    Node *current = root;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void print_backward(Node *node)
{
    if (node != nullptr)
    {
        print_backward(node->next);
        cout << node->data << " ";
    }
}

int main()
{
    int node_data[5] = {1, 2, 4, 6, 8};
    for (int i : node_data)
    {
        add_node(i);
    }

    cout << "Forward Traversal: ";
    print_forward();

    cout << "Backward Traversal: ";
    print_backward(root);
    cout << endl;

    cout << "Current length of list: " << list_length() << endl;

    // Insert a node at position 2 with data 5
    insert_node(2, 5);
    cout << "After insertion: ";
    print_forward();

    return 0;
}