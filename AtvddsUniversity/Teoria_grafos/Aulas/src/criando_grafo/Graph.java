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

    public boolean isDirected() {
        for (Edge edge : edges) {
            boolean foundReverse = false;

            for (Edge other : edges) {
                if (edge.edge1.equals(other.edge2) && edge.edge2.equals(other.edge1)) {
                    foundReverse = true;
                    break;
                }
            }

            if (!foundReverse) {
                return true; // directed
            }
        }

        return false; // not directed
    }

    public void showType() {
        if (isDirected()) {
            System.out.println("\nThe graph is DIRECTED.");
        } else {
            System.out.println("\nThe graph is NOT directed.");
        }
    }

    public void showGraph() {
        System.out.printf("Vertices:\n\t");
        for (int i = 0; i < vertices.size(); i++) {
            System.out.print(vertices.get(i));

            if (i < vertices.size() - 1) {
                System.out.print(", ");
            }
        }

        System.out.printf("\n\nEdges:\n\t");
        for (int i = 0; i < edges.size(); i++) {
            System.out.print(edges.get(i).name);

            if (i < edges.size() - 1) {
                System.out.print(", ");
            }
        }

        System.out.printf("\n\nEdge list:\n");
        for (Edge e : edges) {
            System.out.printf("\t%s\n", e);
        }
    }
}