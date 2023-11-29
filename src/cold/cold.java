package cold;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class cold {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    int res = 0;
    StringTokenizer s = new StringTokenizer(r.readLine());
    while (n-- > 0) {
      if (Integer.parseInt(s.nextToken()) < 0)
        res++;
    }
    w.write(res + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new cold()).run();
  }

}
