# class Node:
#     def __init__(self,value):
#         self.value = value
#         self.children = []
#
# def add_child(parent, child):
#     parent.children.append(child)
#
# def tree_heights(node):
#     if node is None:
#         return 0
#     if not node.children:
#         return 1
#     heights = []
#     for child in node.children:
#         heights.append(1 + tree_heights(child))
#     return max(heights)
#
# def main():
#     n = int(input())
#     for i in range(1,n+1):
#         x = int(input())
#         node = Node(1)
#         add_child(node,x)
#
# if __name__ == "__main__":
#     main()
def find_minimum_groups(n, managers):
    from collections import defaultdict, deque

    # Create an adjacency list for the tree
    tree = defaultdict(list)
    roots = []

    for i in range(n):
        if managers[i] == -1:
            roots.append(i)
        else:
            tree[managers[i] - 1].append(i)

    def dfs(node):
        if not tree[node]:  # If the node has no children
            return 1
        max_depth = 0
        for child in tree[node]:
            max_depth = max(max_depth, dfs(child))
        return max_depth + 1

    # Compute the maximum depth from each root
    max_depth = 0
    for root in roots:
        max_depth = max(max_depth, dfs(root))

    return max_depth


# Read input
n = int(input().strip())
managers = [int(input().strip()) for _ in range(n)]

# Output the result
print(find_minimum_groups(n, managers))
