
class Solution
{
    int i = 0;
public:
    Solution() {i = 0;}
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root)
    {
        vector<int> v;
        if (root == NULL)      {
            v.push_back(0);
            return v;
        }

        serialize(root->left);
        cout << root->data << " ";
        serialize(root->right);
    }

    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        if (A.size() == 0)
            return NULL;
        if (A[i] == 0) {
            i++;
            return NULL;
        }

        Node* root = new Node(A[i++]);
        root->left = deSerialize(A);
        root->right = deSerialize(A);
        return root;
    }

};