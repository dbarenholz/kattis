package cetvrta;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class cetvrta {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int[] xVal = new int[3];
    int[] yVal = new int[3];

    for (int i = 0; i < 3; i++) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      xVal[i] = Integer.parseInt(s.nextToken());
      yVal[i] = Integer.parseInt(s.nextToken());
    }

    int x = 0;
    int y = 0;

    if (xVal[0] == xVal[1]) {
      x = xVal[2];
    } else if (xVal[1] == xVal[2]) {
      x = xVal[0];
    } else {
      x = xVal[1];
    }

    if (yVal[0] == yVal[1]) {
      y = yVal[2];
    } else if (yVal[1] == yVal[2]) {
      y = yVal[0];
    } else {
      y = yVal[1];
    }

    w.write(x + " " + y + "\n");
    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new cetvrta()).run();
  }

}
