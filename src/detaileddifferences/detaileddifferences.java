package detaileddifferences;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class detaileddifferences {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    while (n-- > 0) {
      String c = "";
      String a = r.readLine();
      w.write(a + "\n");
      String b = r.readLine();
      w.write(b + "\n");

      for (int i = 0; i < a.length(); i++) {
        c += a.charAt(i) == b.charAt(i) ? "." : "*";
      }
      w.write(c + "\n");
    }

    w.write("\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new detaileddifferences()).run();
  }

}
