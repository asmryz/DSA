
public class App {

    public static void main(String[] args) throws Exception {
        SingleLinkedList sList = new SingleLinkedList();

        // Add nodes to the list
        sList.addNode(1);
        sList.addNode(2);
        sList.addNode(3);
        sList.addNode(4);

        // Displays the nodes present in the list
        sList.display();

        // DoubleLinkedList dList = new DoubleLinkedList();
        // // Add nodes to the list
        // dList.addNode(1);
        // dList.addNode(2);
        // dList.addNode(3);
        // dList.addNode(4);
        // dList.addNode(5);

        // // Displays the nodes present in the list
        // dList.display();

        // CircularLinkedList cl = new CircularLinkedList();
        // // Adds data to the list
        // cl.add(1);
        // cl.add(2);
        // cl.add(3);
        // cl.add(4);
        // // Displays all the nodes present in the list
        // cl.display();

    }
}
