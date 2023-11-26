package simonsays;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class simonsays {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    while (n-- > 0) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      if (s.nextToken().equals("Simon")) {
        if (s.nextToken().equals("says")) {
          while (s.hasMoreTokens())
            w.write(s.nextToken() + " ");
        }
      }
    }

    w.write("\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new simonsays()).run();
  }

}
