package hello;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;

class hello {
  private void run() throws IOException {
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    w.write("Hello World!\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new hello()).run();
  }

}
