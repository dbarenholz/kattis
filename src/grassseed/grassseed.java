package grassseed;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class grassseed {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    double val = 0;
    double cost = Double.parseDouble(r.readLine());
    int lawns = Integer.parseInt(r.readLine());

    for (int i = 0; i < lawns; i++) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      double width = Double.parseDouble(s.nextToken());
      double height = Double.parseDouble(s.nextToken());
      val += width * height;
    }

    w.write(cost * val + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new grassseed()).run();
  }

}
