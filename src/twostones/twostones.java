package twostones;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class twostones {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    int n = Integer.parseInt(r.readLine());
    r.close();
    w.write(n % 2 == 0 ? "Bob\n" : "Alice\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new twostones()).run();
  }

}
