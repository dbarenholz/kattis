package herman;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class herman {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    int radius = Integer.parseInt(r.readLine());
    double pi = Math.PI;
    double normalArea = pi * Math.pow(radius, 2);
    double taxiCab = 2 * Math.pow(radius, 2);
    w.write(normalArea + "\n");
    w.write(taxiCab + "\n");
    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new herman()).run();
  }

}
