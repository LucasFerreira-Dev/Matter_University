public class App {
    public static void main(String[] args) {

        Graph graph = new Graph();

        Vertex u = new Vertex("u");
        Vertex v = new Vertex("v");
        Vertex w = new Vertex("w");
        Vertex x = new Vertex("x");
        Vertex y = new Vertex("y");

        graph.addVertex(u);
        graph.addVertex(v);
        graph.addVertex(w);
        graph.addVertex(x);
        graph.addVertex(y);

        Edge a = new Edge("a", "u", "v");
        Edge b = new Edge("b", "u", "u");
        Edge c = new Edge("c", "v", "w");
        Edge d = new Edge("d", "w", "x");
        Edge e = new Edge("e", "v", "x");
        Edge f = new Edge("f", "w", "x");
        Edge g = new Edge("g", "u", "x");
        Edge h = new Edge("h", "x", "y");

        graph.addEdge(a);
        graph.addEdge(b);
        graph.addEdge(c);
        graph.addEdge(d);
        graph.addEdge(e);
        graph.addEdge(f);
        graph.addEdge(g);
        graph.addEdge(h);

        graph.showGraph();
    }
}