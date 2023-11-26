package dicecup;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class dicecup {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringTokenizer s = new StringTokenizer(r.readLine());
    int a = Integer.parseInt(s.nextToken()) + 1;
    int b = Integer.parseInt(s.nextToken()) + 1;

    r.close();

    if (a >= b) {
      int tmp = a;
      a = b;
      b = tmp;
    }

    while (a <= b) {
      w.write(a + "\n");
      a++;
    }

    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new dicecup()).run();
  }

}
