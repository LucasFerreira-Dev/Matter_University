package criando_grafo;

import java.util.ArrayList;

public class Graph {
    ArrayList<Vertex> vertices;
    ArrayList<Edge> edges;

    public Graph() {
        vertices = new ArrayList<>();
        edges = new ArrayList<>();
    }

    public void addVertex(Vertex v) {
        vertices.add(v);
    }

    public void addEdge(Edge e) {
        edges.add(e);
    }

    public void showGraph() {
        System.out.printf("Vértices:\n\t");
        for (int i = 0; i < vertices.size(); i++) {
            System.out.print(vertices.get(i));

            if (i < vertices.size() - 1) {
                System.out.print(", ");
            }
        }

        System.out.printf("\n\nArestas:\n\t");
        for (int i = 0; i < edges.size(); i++) {
            System.out.print(edges.get(i).name);

            if (i < edges.size() - 1) {
                System.out.print(", ");
            }
        }

        System.out.printf("\n\nTridente_h:\n");
        for (Edge e : edges) {
            System.out.printf("\t%s\n", e);
        }
    }
}