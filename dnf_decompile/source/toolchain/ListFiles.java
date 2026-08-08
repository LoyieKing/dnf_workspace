import ghidra.app.script.GhidraScript;
import ghidra.framework.model.DomainFile;
import ghidra.framework.model.DomainFolder;
public class ListFiles extends GhidraScript {
    public void run() throws Exception {
        DomainFolder root = getProjectData().getRootFolder();
        list(root, "");
    }
    void list(DomainFolder f, String ind) {
        for (DomainFile df : f.getFiles()) println("FILE: " + ind + df.getName());
        for (DomainFolder sf : f.getFolders()) { println("DIR: " + ind + sf.getName()); list(sf, ind + "  "); }
    }
}
