// Find and replace template to problem-name (without underscore)
package template;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class template {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
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
