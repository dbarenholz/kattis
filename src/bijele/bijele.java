package bijele;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class bijele {
  private void run() throws IOException {
    BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

    String l = r.readLine();
    StringTokenizer s = new StringTokenizer(l);

    int king = Integer.parseInt(s.nextToken());
    int queen = Integer.parseInt(s.nextToken());
    int rook = Integer.parseInt(s.nextToken());
    int bish = Integer.parseInt(s.nextToken());
    int knight = Integer.parseInt(s.nextToken());
    int pawn = Integer.parseInt(s.nextToken());

    int kingNeeded = 1 - king;
    int queenNeeded = 1 - queen;
    int rookNeeded = 2 - rook;
    int bishNeeded = 2 - bish;
    int knightNeeded = 2 - knight;
    int pawnNeeded = 8 - pawn;

    String ret = kingNeeded + " " + queenNeeded + " " + rookNeeded + " " + bishNeeded + " "
        + knightNeeded + " " + pawnNeeded;

    w.write(ret + "\n");
    w.flush();

  }

  public static void main(String[] a) throws IOException {
    (new bijele()).run();
  }

}
