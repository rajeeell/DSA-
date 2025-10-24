class TreeNode:
    def __init__(self, val):
        self.val=val
        self.right=None
        self.left=None
    
    def insert(root, val):
        if not root:
            return TreeNode(val)
        
        elif val>root.val:
            root.right=TreeNode.insert(root.right, val)
        elif val<root.val:
            root.left=TreeNode.insert(root.left, val)
        return root
    
def inorder(root):
    if not root:
        return []
    return inorder(root.left) + [root.val] + inorder(root.right)

if __name__ == "__main__":
    root = None
    for v in [10, 5, 15, 3, 7]:
        root = TreeNode.insert(root, v)

    print("Inorder traversal:", inorder(root))