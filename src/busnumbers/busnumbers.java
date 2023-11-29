package busnumbers;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

class busnumbers {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    StringTokenizer s = new StringTokenizer(r.readLine());
    List<Integer> l = new ArrayList<>();
    while (n-- > 0)
      l.add(Integer.parseInt(s.nextToken()));

    Collections.sort(l);

    for (int i = 0; i < l.size(); i++) {
      int j;
      for (j = i + 1; j < l.size(); j++) {
        if (l.get(j) > l.get(j - 1) + 1) {
          break;
        }
      }
      j--;
      // int i = leftside incl
      // int j = rightside incl
      if (i == j) {
        w.write(l.get(j) + " ");
      } else if (l.get(i) == l.get(j) - 1) {
        w.write(l.get(i) + " ");
        w.write(l.get(j) + " ");
      } else {
        w.write(l.get(i) + "-" + l.get(j) + " ");
      }
      w.flush();
      i = j;
    }

  }

  public static void main(String[] a) throws IOException {
    (new busnumbers()).run();
  }

}
