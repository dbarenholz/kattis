package carefulascent;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class carefulascent {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringTokenizer s = new StringTokenizer(r.readLine());
    int[] pos = { Integer.parseInt(s.nextToken()), Integer.parseInt(s.nextToken()) };
    int nShields = Integer.parseInt(r.readLine());
    int hor_dist = 0;
    double effective = 0.0;

    for (int i = 0; i < nShields; i++) {
      s = new StringTokenizer(r.readLine());
      int lower = Integer.parseInt(s.nextToken());
      int upper = Integer.parseInt(s.nextToken());
      double factor = Double.parseDouble(s.nextToken());

      hor_dist += (upper - lower);
      effective += (upper - lower) * factor;
    }
    effective += (pos[1] - hor_dist);

    // write the output
    w.write((pos[0] / effective) + "\n");
    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new carefulascent()).run();
  }

}
