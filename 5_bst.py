class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

    def search(self, target):
        if not self:
            return False

        if target > self.val:
            return self.right.search(target) if self.right else False
        elif target < self.val:
            return self.left.search(target) if self.left else False
        else:
            return True


if __name__ == "__main__":
    # build a small BST and test
    root = TreeNode(10)
    root.left = TreeNode(5)
    root.right = TreeNode(15)
    root.left.left = TreeNode(3)
    root.left.right = TreeNode(7)

    print("search 7 ->", root.search(7))   # True
    print("search 6 ->", root.search(6))   # False
