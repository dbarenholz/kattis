package conundrum;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class conundrum {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    char[] in = r.readLine().toCharArray();
    int count = 0;

    for (int i = 0; i < in.length; i++) {
      if (i % 3 == 0) {
        if (in[i] != 'P') {
          count++;
        }
      }
      if (i % 3 == 1) {
        if (in[i] != 'E') {
          count++;
        }
      }
      if (i % 3 == 2) {
        if (in[i] != 'R') {
          count++;
        }
      }
    }

    w.write(count + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new conundrum()).run();
  }

}
