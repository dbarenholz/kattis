package alphabetspam;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

class alphabetspam {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    String chars = r.readLine();
    r.close();

    int n = chars.length();
    // I had too much fun writing bad code here.
    double[] counts = Arrays.stream(chars.chars()
        .mapToObj(c -> (char) c)
        .map(c -> new int[] { c == '_' ? 1 : 0, Character.isLowerCase(c) ? 1 : 0, Character.isUpperCase(c) ? 1 : 0 })
        .reduce(new int[] { 0, 0, 0 },
            (_r, e) -> {
              int[] x = new int[_r.length];
              for (int i = 0; i < _r.length; i++) {
                x[i] = _r[i] + e[i];
              }
              return x;
            }))
        .asDoubleStream().map(c -> c / n).toArray();

    double symbs = n - Arrays.stream(counts).map(x -> x * n).sum();

    w.write(counts[0] + "\n");
    w.write(counts[1] + "\n");
    w.write(counts[2] + "\n");
    w.write(symbs / (double) n + "\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new alphabetspam()).run();
  }

}
