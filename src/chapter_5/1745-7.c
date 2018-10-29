/*二叉树结点中的最大元素值*/

int getBiggestValue(BiTree T)
{
	if(NULL == T)
		return 0;

	int maxLeft = getBiggestValue(T->leftChild);
	int maxRight = getBiggestValue(T->rightChild);
	int max = maxLeft > maxRight ? maxLeft : maxRight;

	return max > T->data ? max : T->data;

