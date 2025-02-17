package til_hamingju;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class til_hamingju {
  BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

  private void run() throws IOException {
    w.write("TIL HAMINGJU MED AFMAELID FORRITUNARKEPPNI FRAMHALDSSKOLANNA!\n");
    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new til_hamingju()).run();
  }

}
