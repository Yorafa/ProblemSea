class FileSystem {
public:
    unordered_map<string, int> m;
    FileSystem() {
        
    }
    
    bool createPath(string path, int value) {
        if (path.compare("") == 0 || path.compare("/") == 0) return false;
        int lf = path.rfind("/");
        if (lf != 0){
            string subp = path.substr(0, lf);
            if (subp.size() > 0 && m.find(subp) == m.end()) return false;
        }
        if (m.find(path) != m.end()) return false;
        m[path] = value;
        return true;
    }
    
    int get(string path) {
        if (m.find(path) == m.end()) return -1;
        return m[path];
    }
};

/**
 * Your FileSystem object will be instantiated and called as such:
 * FileSystem* obj = new FileSystem();
 * bool param_1 = obj->createPath(path,value);
 * int param_2 = obj->get(path);
 */
