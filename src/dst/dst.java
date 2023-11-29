package dst;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class dst {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    while (n-- > 0) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      String fb = s.nextToken();

      int d = Integer.parseInt(s.nextToken()); // value to add / sub
      int h = Integer.parseInt(s.nextToken()); // hours
      int m = Integer.parseInt(s.nextToken()); // minutes

      if (d == 0) {
        w.write(h + " " + m + "\n");
      } else if (fb.equals("F")) {
        int sum = m + d;
        // we have to account for 2 hours
        if (sum >= 60) {
          h++;
          sum -= 60;
          // second hour
          if (sum >= 60) {
            h++;
            sum -= 60;
          }
        }
        h = (h % 24); // remove unnecessary hours
        w.write(h + " " + sum + "\n");
      } else if (fb.equals("B")) {
        int min = m - d;
        if (min < 0) { // 2 hours
          h--;
          min += 60;
          if (min < 0) {
            h--;
            min += 60;
          }
        }
        // negative hours, add 24 to it
        if (h < 0) {
          h += 24;
        }
        w.write(h + " " + min + "\n");
      }

    }
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new dst()).run();
  }

}
