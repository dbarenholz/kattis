package easiest;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class easiest {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    while (true) {
      int n = Integer.parseInt(r.readLine());
      if (n == 0)
        break;

      int p = 11;
      while (sumDigits(n) != sumDigits(n * p))
        p++;
      w.write(p + "\n");
    }

    w.flush();
  }

  private int sumDigits(int x) {
    int s = 0;
    while (x > 0) {
      s += x % 10;
      x = x / 10;
    }
    return s;
  }

  public static void main(String[] a) throws IOException {
    (new easiest()).run();
  }

}
