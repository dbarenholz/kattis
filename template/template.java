package template;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class template {
  BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
  BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

  private void run() throws IOException {  
    int n = Integer.parseInt(r.readLine());
    while (n --> 0) {
      // solve here
    }

    w.write("\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new template()).run();
  }

}
