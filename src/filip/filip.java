package filip;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class filip {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    StringTokenizer s = new StringTokenizer(r.readLine());

    int a = Integer.parseInt(new StringBuilder(s.nextToken()).reverse().toString());
    int b = Integer.parseInt(new StringBuilder(s.nextToken()).reverse().toString());
    w.write((a > b ? a : b) + "\n");

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new filip()).run();
  }

}
