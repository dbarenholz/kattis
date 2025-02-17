package velkomin;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class velkomin {
  BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
  BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

  private void run() throws IOException {
    w.write("VELKOMIN!\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new velkomin()).run();
  }

}
