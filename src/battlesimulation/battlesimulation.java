package battlesimulation;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class battlesimulation {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringBuilder sb = new StringBuilder();
    char[] in = r.readLine().toCharArray();

    for (int i = 0; i < (in.length); i++) {

      char[] t;

      try {
        t = new char[] { in[i], in[i + 1], in[i + 2] };
      } catch (ArrayIndexOutOfBoundsException e) {
        // process the last 2 characters
        try {
          while (true) {
            sb.append(match(in[i]));
            i++;
          }
        } catch (ArrayIndexOutOfBoundsException e2) {
          break;
        }
      }

      switch (isCombo(t)) {
        case '+':
          sb.append('C');
          i += 2;
          break;
        case '-':
          sb.append(match(in[i]));
          break;
      }
    }
    sb.append("\n");
    w.write(sb.toString());
    w.flush();

  }

  /**
   * Helper function to check if {@code arr} is a combo move.
   *
   * @param arr character array that is or is not a combo move
   * @return {@code '+'} if {@code arr} is a combo move,
   *         {@code '-'} otherwise
   */
  private char isCombo(char[] arr) {
    // RBK || RKB || BKR || BRK || KRB || KBR
    return ((arr[0] != arr[1]) && (arr[1] != arr[2]) && (arr[0] != arr[2])) ? '+' : '-';
  }

  /**
   * Helper function to match a character.
   *
   * @param c character to match
   * @return {@code 'S'} if {@code c == 'R'},
   *         {@code 'H'} if {@code c == 'L'},
   *         {@code 'K'} if {@code c == 'B'},
   *         {@code '~'} otherwise.
   */
  private char match(char c) {
    switch (c) {
      case 'R': // an S in case of R
        return 'S';
      case 'B': // a K in case of B
        return 'K';
      case 'L': // an H in case of L
        return 'H';
    }
    return '~';
  }

  public static void main(String[] a) throws IOException {
    (new battlesimulation()).run();
  }

}
