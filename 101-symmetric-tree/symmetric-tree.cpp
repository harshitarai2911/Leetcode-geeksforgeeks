class Solution {
public:
 bool check(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL)
            return true;

        if (a == NULL || b == NULL)
            return false;

        if (a->val != b->val)
            return false;

        return check(a->left, b->right) &&
               check(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return check(root->left ,root->right);
    }
};

/* method1
class Solution {
public:
    void invert(TreeNode* root) {
        if (root == NULL)
            return;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invert(root->left);
        invert(root->right);
    }

    bool isSame(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL)
            return true;

        if (a == NULL || b == NULL)
            return false;

        if (a->val != b->val)
            return false;

        return isSame(a->left, b->left) &&
               isSame(a->right, b->right);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        invert(root->left);

        bool ans = isSame(root->left, root->right);
        // we have stored the bool in ans
        invert(root->left);
        // again inverted the left side , so the tree reamains same as question
        return ans;
        //printed value of bool stored in ans
    }
};
*/