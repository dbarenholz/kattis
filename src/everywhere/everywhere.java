package everywhere;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashSet;
import java.util.Set;

class everywhere {
  /**
   * @throws IOException
   */
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    int n = Integer.parseInt(r.readLine());
    while (n --> 0) {
      Set<String> W = new HashSet<>();
      int i = Integer.parseInt(r.readLine());
      while (i --> 0) {
        W.add(r.readLine());
      }
      w.write(W.size() + "\n");
    }

    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new everywhere()).run();
  }

}
