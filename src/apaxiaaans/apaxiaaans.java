package apaxiaaans;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class apaxiaaans {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    String str = r.readLine();
    String pattern = "([a-zA-Z])(\\1{1,})";
    String res = str.replaceAll(pattern, "$1");
    w.write(res);
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new apaxiaaans()).run();
  }

}
