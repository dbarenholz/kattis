package tarifa;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class tarifa {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int x = Integer.parseInt(r.readLine());
    int n = Integer.parseInt(r.readLine());
    int a = n + 1;
    int sum = 0;
    while (n-- > 0) {
      sum += Integer.parseInt(r.readLine());
    }
    r.close();

    w.write((a * x - sum) + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new tarifa()).run();
  }

}
