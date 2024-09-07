class Solution {
public:
    bool check2(TreeNode* root , ListNode* head){
        if(head == NULL) return 1;
        if(root){
            if(head->val == root->val){
            return (check2(root->left , head->next) || check2(root->right , head->next));
        }
        }

        return 0;
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == NULL) return 0;
        if(head->val == root->val){
            if(check2(root , head)) return 1;
        }

        return ( isSubPath(head , root->left) || isSubPath(head, root->right) );

    }
};
