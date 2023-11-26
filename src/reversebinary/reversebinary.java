package reversebinary;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class reversebinary {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    int n = Integer.parseInt(r.readLine());
    r.close();
    
    String b = Integer.toBinaryString(n);
    String rev = new StringBuilder(b).reverse().toString();

    w.write(Integer.parseInt(rev, 2) + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new reversebinary()).run();
  }

}
