package spavanac;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class spavanac {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringTokenizer s = new StringTokenizer(r.readLine());
    int h = Integer.parseInt(s.nextToken());
    int m = Integer.parseInt(s.nextToken());

    int a = 15 + m;
    int b = m - 45;

    if (m >= 45)
      w.write(h + " " + b + "\n");
    else if (h == 0)
      w.write("23 " + a + "\n");
    else
      w.write(h - 1 + " " + a + "\n");

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new spavanac()).run();
  }

}
