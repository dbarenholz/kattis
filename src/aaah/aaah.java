package aaah;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class aaah {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    String p = r.readLine();
    String d = r.readLine();
    r.close();

    w.write(d.length() <= p.length() ? "go\n"  : "no\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new aaah()).run();
  }

}
