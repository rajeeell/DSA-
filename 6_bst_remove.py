def findMin(root):
    curr=root
    while curr and curr.left:
        curr=curr.left
    return curr

def remove(root, val):
    if not root:
        return None
    
    if val>root.val:
        root.right=remove(root.right, val)
    elif val<root.val:
        root.left=remove(root.left, val)
    else:
        if not root.left:
            return root.right
        elif not root.right:
            return root.left
        else:
            minVal=findMin(root.right)
            root.val=minVal.val
            root.right=remove(root.right, minVal.val)
    return root