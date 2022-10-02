void DFS(Graph graph, int x, bool visited[])
{
	visited[x] = true;

	for (int i = 0; i < graph[x]; i++)
	{
		int y = graph[x][i];
		if (visited[y] == false)
		{
			DFS(graph, y, visited);
		}
	}
}