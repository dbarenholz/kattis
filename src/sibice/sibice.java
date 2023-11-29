package sibice;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class sibice {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringTokenizer s = new StringTokenizer(r.readLine());

    int N = Integer.parseInt(s.nextToken());
    int W = Integer.parseInt(s.nextToken());
    int H = Integer.parseInt(s.nextToken());

    while (N-- > 0) {
      int c = Integer.parseInt(r.readLine());
      w.write(c * c <= H * H + W * W ? "DA\n" : "NE\n");
    }

    w.write("\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new sibice()).run();
  }

}
