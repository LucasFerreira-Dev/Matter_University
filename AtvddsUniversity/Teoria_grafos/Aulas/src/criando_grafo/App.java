package criando_grafo;

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

        System.out.println("===== GRAPH 1 =====");
        graph.showGraph();
        graph.showType();

        // new graph
        Graph graph2 = new Graph();

        graph2.addVertex(u);
        graph2.addVertex(v);
        graph2.addVertex(w);

        Edge e1 = new Edge("a", "u", "v");
        Edge e2 = new Edge("a'", "v", "u");

        Edge e3 = new Edge("b", "v", "w");
        Edge e4 = new Edge("b'", "w", "v");

        Edge e5 = new Edge("c", "u", "w");
        Edge e6 = new Edge("c'", "w", "u");

        graph2.addEdge(e1);
        graph2.addEdge(e2);
        graph2.addEdge(e3);
        graph2.addEdge(e4);
        graph2.addEdge(e5);
        graph2.addEdge(e6);

        Graph graph3 = new Graph();

        graph3.addVertex(1);
        graph3.addVertex(2);
        graph3.addVertex(3);
        graph3.addVertex(4);
        graph3.addVertex(5);
        graph3.addVertex(6);

        Edge a1 = new Edge(null, "1", "3");
        Edge a2 = new Edge(null, "1", "4");
        Edge a3 = new Edge(null, "1", "5");
        Edge a4 = new Edge(null, "2", "3");
        Edge a5 = new Edge(null, "2", "4");
        Edge a6 = new Edge(null, "2", "5");
        Edge a7 = new Edge(null, "3", "5");
        Edge a8 = new Edge(null, "4", "5");

        graph3.addEdge(a1);
        graph3.addEdge(a2);
        graph3.addEdge(a3);
        graph3.addEdge(a4);
        graph3.addEdge(a5);
        graph3.addEdge(a6);
        graph3.addEdge(a7);
        graph3.addEdge(a8);

        System.out.println("\n===== GRAPH 2 =====");
        graph2.showGraph();
        graph2.showType();

        System.out.println("\n===== GRAPH 3 =====");
        graph3.showGraph();
        graph3.showType();
    }
}