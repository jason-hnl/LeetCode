/*
         * Memory Usage: 15 MB, less than 32.20% of C++ online submissions for Symmetric Tree.
        {
            TreeNode *t1 = q.front();
            q.pop();
            TreeNode *t2 = q.front();
            q.pop();

            if (t1 == nullptr && t2 == nullptr)
            if (t1->val != t2->val)
                return false;

            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);
        }
        {
            //same with method 2
            TreeNode *t1 = q.front();
            q.pop();
            TreeNode *t2 = q.front();
            q.pop();

            if (t1 == nullptr && t2 == nullptr)
            if (t1->val != t2->val)
                return false;

            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);
        }