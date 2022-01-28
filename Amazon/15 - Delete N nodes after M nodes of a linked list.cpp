class Solution
{
public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        Node* curr = head;
        while (curr) {
            int x = M, y = N;
            while (curr and --x)
                curr = curr->next;

            if (!curr) return;
            Node* temp = curr;
            while (temp and y--)
                temp = temp->next;

            if (!temp) {
                curr->next = NULL;
                return ;
            }
            curr->next = temp->next;
            curr = curr->next;
        }
    }
};