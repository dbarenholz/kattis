package trik;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class trik {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    char[] chars = r.readLine().toCharArray();
    boolean[] cups = { true, false, false };
    for (char c : chars) {
      switch (c) {
        case 'A': {
          swap(cups, 0, 1);
          break;
        }
        case 'B': {
          swap(cups, 1, 2);
          break;
        }
        case 'C': {
          swap(cups, 0, 2);
          break;
        }
        default:
          // should not happen
          break;
      }
    }

    for (int i = 0; i < cups.length; i++) {
      if (cups[i]) {
        w.write(i + 1 + "\n");
      }
    }
    
    w.flush();
  }

  private boolean[] swap(boolean[] arr, int a, int b) {
    boolean tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
    return arr;
  }

  public static void main(String[] a) throws IOException {
    (new trik()).run();
  }

}
