package cd;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;

class cd {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    while (true) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      int n = Integer.parseInt(s.nextToken());
      int m = Integer.parseInt(s.nextToken());
      if (n == 0 && m == 0) {
        break;
      }

      Set<Integer> setOne = new HashSet<>();
      Set<Integer> bothSets = new HashSet<>();
      Set<Integer> setTwo = new HashSet<>();

      for (int i = 0; i < n; i++) {
        int cd = Integer.parseInt(r.readLine());
        setOne.add(cd);
        bothSets.add(cd);
      }

      for (int i = 0; i < m; i++) {
        int cd = Integer.parseInt(r.readLine());
        setTwo.add(cd);
        bothSets.add(cd);
      }

      w.write(setOne.size() + setTwo.size() - bothSets.size() + "\n");
    }
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new cd()).run();
  }

}
