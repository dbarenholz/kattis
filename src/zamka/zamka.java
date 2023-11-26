package zamka;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

class zamka {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int l = Integer.parseInt(r.readLine());
    int d = Integer.parseInt(r.readLine());
    int x = Integer.parseInt(r.readLine());

    Set<Integer> set = new HashSet<>();

    while (l <= d) {
      if (sumDigits(l) == x)
        set.add(l);
      l++;
    }

    w.write(Collections.min(set) + "\n");
    w.write(Collections.max(set) + "\n");

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
    (new zamka()).run();
  }

}
