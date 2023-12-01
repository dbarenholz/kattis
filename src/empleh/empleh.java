package empleh;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.List;

class empleh {
  BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
  BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

  char[][] board = {
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|...|:::|...|:::|...|:::|...|:::|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|:::|...|:::|...|:::|...|:::|...|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|...|:::|...|:::|...|:::|...|:::|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|:::|...|:::|...|:::|...|:::|...|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|...|:::|...|:::|...|:::|...|:::|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|:::|...|:::|...|:::|...|:::|...|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|...|:::|...|:::|...|:::|...|:::|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray(),
      "|:::|...|:::|...|:::|...|:::|...|".toCharArray(),
      "+---+---+---+---+---+---+---+---+".toCharArray()
  };

  int rowIndex(char x) {
    return 2 * ('8' - x) + 1;
  }

  int colIndex(char x) {
    return 4 * (x - 'a') + 2;
  }

  void setBoardItem(char r, char c, char value) {
    board[rowIndex(r)][colIndex(c)] = value;
  }

  boolean isPawn(Pair<String, Boolean> piece) {
    return piece.a.length() == 2;
  }

  char repr(Pair<String, Boolean> piece) {
    return isPawn(piece)
        ? (piece.b
            ? 'P' // white pawn
            : 'p') // black pawn
        : (piece.b
            ? Character.toUpperCase(piece.a.charAt(0)) // white piece
            : Character.toLowerCase(piece.a.charAt(0))); // black piece
  }

  void updateBoardFor(Pair<String, Boolean> piece) {
    char repr = repr(piece);
    char col = isPawn(piece) ? piece.a.charAt(0) : piece.a.charAt(1);
    char row = isPawn(piece) ? piece.a.charAt(1) : piece.a.charAt(2);

    setBoardItem(row, col, repr);
  }

  List<Pair<String, Boolean>> readInput() throws IOException {
    List<Pair<String, Boolean>> pieces = new ArrayList<>();
    this.r.skip(7); // ignore 'White: '
    String[] whites = this.r.readLine().split(",");
    for (String white : whites)
      if (white.strip() != "")
        pieces.add(new Pair<String, Boolean>(white, true));

    this.r.skip(7); // ignore 'Black: '
    String[] blacks = this.r.readLine().split(",");
    for (String black : blacks)
      if (black.strip() != "")
        pieces.add(new Pair<String, Boolean>(black, false));
    return pieces;
  }

  private void run() throws IOException {
    List<Pair<String, Boolean>> pieces = readInput();
    pieces.forEach(piece -> updateBoardFor(piece));

    for (char[] cs : board) {
      w.write(cs);
      w.write("\n");
    }

    w.flush();
  }

  public static void main(String[] a) throws IOException {
    (new empleh()).run();
  }

}

class Pair<A, B> {
  A a;
  B b;

  public Pair(A a, B b) {
    this.a = a;
    this.b = b;
  }

  @Override
  public String toString() {
    return "(" + a.toString() + "," + b.toString() + ")";
  }
}
