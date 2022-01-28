class Solution {
    unordered_map<Node*, Node*> parent;
public:
    Node* populate(Node* root, int target) {
        queue<Node*> q;
        q.push(root);
        Node* tar = NULL;
        bool check = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                if (temp->data == target && check == 0) {
                    tar = temp;
                    check = 1;
                }
                if (temp->left != NULL) {
                    parent[temp->left] = temp;
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    parent[temp->right] = temp;
                    q.push(temp->right);
                }
            }
        }
        return tar;
    }

    int minTime(Node* root, int target)
    {
        Node* getval = populate(root, target);
        if (getval == NULL)
            return 0;
        unordered_set<Node*> vis;
        int res = 0;

        queue<Node*> q;
        q.push(getval);
        while (!q.empty()) {
            int qs = q.size();
            bool found = false;
            while (qs--) {
                Node* temp = q.front();
                q.pop();
                vis.insert(temp);
                if ((parent[temp]) && (vis.find(parent[temp]) == vis.end())) {
                    q.push(parent[temp]);
                    found = true;
                }
                if ((temp->left != NULL) && (vis.find(temp->left) == vis.end())) {
                    q.push(temp->left);
                    found = true;
                }
                if ((temp->right != NULL) && (vis.find(temp->right) == vis.end())) {
                    q.push(temp->right);
                    found = true;
                }
            }
            if (found)
                res++;
        }
        return res;
    }
};