class TreeNode:
    def __init__(self,val):
        self.val=val
        self.right=None
        self.left=None

    def inorder(self, root):
        if not root:
            return
        self.inorder(root.left)
        print(root.val)
        self.inorder(root.right)

    def preorder(self, root):
        if not root:
            return
        print(root.val)
        self.preorder(root.left)
        self.preorder(root.right)
    
    def postorder(self, root):
        if not root:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.val)

root = TreeNode(4)
root.left = TreeNode(3)
root.right = TreeNode(6)
root.left.left = TreeNode(2)
root.right.left = TreeNode(5)
root.right.right = TreeNode(7)

root.postorder(root)
