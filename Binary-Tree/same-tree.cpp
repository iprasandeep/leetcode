bool isSameTree(TreeNode* p, TreeNode* q)
{
	if(p == NULL and q == NULL) return true;
	if(p == NULL or q == NULL) return false;
	if(p->val != q->val) return false;
	
	return isSameTree(p->right, q->right) and isSametree(p->left, q->left);
}
