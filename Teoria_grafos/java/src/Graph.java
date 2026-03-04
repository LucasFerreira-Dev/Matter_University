import java.util.ArrayList;

public class Graph {
    ArrayList<Vertex> vertices;
    ArrayList<Edge> edges;

    public Graph(){
        vertices = new ArrayList<>();
        edges = new ArrayList<>();
    }

    public void addVertex(Vertex v){
        vertices.add(v);
    }

    public void addEdge(Edge e){
        edges.add(e);
    }

    public void showGraph(){
        System.out.println("Vértices:");
        for(Vertex v : vertices){
            System.out.println(v);
        }

        System.out.println("\nArestas:");
        for(Edge e : edges){
            System.out.println(e);
        }
    }
}