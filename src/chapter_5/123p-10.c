/*二叉树的第k个数*/

int i=1;
ElemType PreNode(BiTree b, int k){
  if(b==NULL)
      return '#';
  if(i==k)
      return b->data;
  i++;
  ch=PreNode(b->lchild, k);
  if(ch!='#')
      return ch;
  ch=PreNpde(b->rchild, k);
  return ch;
}
