package oddities;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class oddities {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int n = Integer.parseInt(r.readLine());
    while (n-- > 0) {
      int x = Integer.parseInt(r.readLine());
      w.write(x + x % 2 == 0 ? " is even\n" : " is odd\n");
    }

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new oddities()).run();
  }

}
