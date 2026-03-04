public class Edge {
    String name;
    String edge1;
    String edge2;

    public Edge(String name, String edge1, String edge2){
        this.name = name;
        this.edge1 = edge1;
        this.edge2 = edge2;
    }

    @Override
    public String toString() {
        return name + ": (" + edge1 + ", " + edge2 + ")";
    }
}
