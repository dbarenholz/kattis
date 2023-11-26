package autori;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class autori {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    String[] W = r.readLine().split("-");
    for (String ww : W) {
      w.write(ww.charAt(0));
    }

    w.write("\n");
    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new autori()).run();
  }

}
