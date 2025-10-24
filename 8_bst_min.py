class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

    def insert(root, val):
    
        if not root:
            return TreeNode(val)
        if val > root.val:
            root.right = TreeNode.insert(root.right, val)
        elif val < root.val:
            root.left = TreeNode.insert(root.left, val)
        return root

    def findMin(root):
        curr = root
        while curr and curr.left:
            curr = curr.left
        return curr


def inorder(root):
    """Helper to print sorted BST contents."""
    return inorder(root.left) + [root.val] + inorder(root.right) if root else []


if __name__ == "__main__":
    # Build a simple BST
    vals = [10, 5, 15, 3, 7, 12, 18]
    root = None
    for v in vals:
        root = TreeNode.insert(root, v)

    print("Inorder traversal:", inorder(root))

    # Test findMin on full tree
    minNode = TreeNode.findMin(root)
    print("Minimum value in tree:", minNode.val)

    # Test findMin on a subtree
    sub_min = TreeNode.findMin(root.right)
    print("Minimum value in right subtree:", sub_min.val)
