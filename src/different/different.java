package different;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

class different {
  private void run() throws IOException {
    Scanner sc = new Scanner(System.in);
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    while (sc.hasNextLong()) {
      w.write(Math.abs(sc.nextLong() - sc.nextLong()) + "\n");
    }
    sc.close();
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new different()).run();
  }

}
