package ladder;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

class ladder {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
    
    
    StringTokenizer s = new StringTokenizer(r.readLine());
    int h = Integer.parseInt(s.nextToken());
    int v = Integer.parseInt(s.nextToken());
    
    int out = (int) Math.ceil(h / Math.sin(Math.toRadians(v)));
    w.write(out + "\n");

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new ladder()).run();
  }

}
