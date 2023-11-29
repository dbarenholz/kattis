package abc;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

class abc {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    StringTokenizer s = new StringTokenizer(r.readLine());
    int[] nums = { Integer.parseInt(s.nextToken()), Integer.parseInt(s.nextToken()), Integer.parseInt(s.nextToken()) };
    Arrays.sort(nums);

    String line = r.readLine();
    r.close();

    switch (line) {
      case "ABC":
        w.write(nums[0] + " " + nums[1] + " " + nums[2] + "\n");
        break;
      case "ACB":
        w.write(nums[0] + " " + nums[2] + " " + nums[1] + "\n");
        break;
      case "BAC":
        w.write(nums[1] + " " + nums[0] + " " + nums[2] + "\n");
        break;
      case "BCA":
        w.write(nums[1] + " " + nums[2] + " " + nums[0] + "\n");
        break;
      case "CAB":
        w.write(nums[2] + " " + nums[0] + " " + nums[1] + "\n");
        break;
      case "CBA":
        w.write(nums[2] + " " + nums[1] + " " + nums[0] + "\n");
        break;
    }

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new abc()).run();
  }

}
