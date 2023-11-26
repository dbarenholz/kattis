package sevenwonders;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.StringTokenizer;

class sevenwonders {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    String word = r.readLine();
    r.close();

    Map<Character, Integer> nC = new HashMap<>();
    for (int i = 0; i < word.length(); i++) {
      char c = word.charAt(i);
      if (!nC.containsKey(c))
        nC.put(c, 1);
      else
        nC.put(c, nC.get(c) + 1);
    }

    String str = nC.toString()
        .replace("{", "")
        .replace(",", "")
        .replace("}", "")
        .replace("}", "")
        .replace("C", "")
        .replace("T", "")
        .replace("G", "")
        .replace("=", "");

    StringTokenizer s = new StringTokenizer(str);
    int c, t, g;

    try {
      c = Integer.parseInt(s.nextToken());
    } catch (NoSuchElementException e) {
      c = 0;
    }
    try {
      t = Integer.parseInt(s.nextToken());
    } catch (NoSuchElementException e) {
      t = 0;
    }
    try {
      g = Integer.parseInt(s.nextToken());
    } catch (NoSuchElementException e) {
      g = 0;
    }

    int v = (int) (Math.pow(c, 2) + Math.pow(t, 2) + Math.pow(g, 2));
    int a = Math.min(Math.min(c, t), g);
    
    v += a * 7;

    w.write(v + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new sevenwonders()).run();
  }

}
