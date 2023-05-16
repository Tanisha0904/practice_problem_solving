def dfs(node, visited, graph):
    visited[node] = True
    count = 1
    for neighbor in graph[node]:
        if not visited[neighbor]:
            count += dfs(neighbor, visited, graph)
    return count

# Read input values
N = int(input())
M = int(input())

# Initialize empty adjacency list
graph = [[] for _ in range(N)]

# Add edges to adjacency list
for i in range(M):
    X, Y = map(int, input().split())
    graph[X].append(Y)

# Find largest Friend Circle using DFS
max_count = 0
visited = [False] * N
for i in range(N):
    if not visited[i]:
        count = dfs(i, visited, graph)
        max_count = max(max_count, count)

# Print output
print(max_count)