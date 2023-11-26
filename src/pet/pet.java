package pet;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

class pet {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    ArrayList<Integer> arr = new ArrayList<>();
    for (int i = 0; i < 5; i++) {
      StringTokenizer s = new StringTokenizer(r.readLine());
      arr.add(Integer.parseInt(s.nextToken())
          + Integer.parseInt(s.nextToken())
          + Integer.parseInt(s.nextToken())
          + Integer.parseInt(s.nextToken()));
    }
    r.close();
    
    int max = Collections.max(arr);
    w.write(arr.indexOf(max) + 1 + " " + max + "\n");

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new pet()).run();
  }

}