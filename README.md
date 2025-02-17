# Kattis Solutions

This repository contains my [Kattis](https://open.kattis.com/users/dbarenholz) solutions.
Solutions may be in multiple languages.
You can check the table under [solved problems](#solved-problems) to see which ones I've solved, and in which languages.

## Editor Setup

I am using [vscode](https://code.visualstudio.com) as my editor.
Using the [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) extension, I have a single hotkey that will compile/build/run many languages.
I have bound the run command to `CTRL+SHIFT+B`, which is vscode's default _build_ keybind.

Related settings from `settings.json`:

```jsonc
{
  "code-runner.executorMap": {
    // modified / using
    "cpp": "cd $dir && mkdir -p build && g++ $fileName -o build/$fileNameWithoutExt && $dir/build/$fileNameWithoutExt",
    // -> move into directory of file
    // -> make 'build' directory
    // -> compile file.cpp to build/file using g++
    // -> execute ./build/file

    "java": "java",
    // -> run java /path/to/file.java; this compiles in-memory and runs the file

    "haskell": "runghc",
    // -> run runghc /path/to/file.hs; this yeets the file into the interpreter and runs it
  }
}
```

## Solved problems

| Problem              | Solutions |
| -------------------- | --------- |
| [aaah](https://open.kattis.com/problems/aaah) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/aaah/aaah.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/aaah/aaah.java) |
| [abc](https://open.kattis.com/problems/abc) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/abc/abc.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/abc/abc.java) |
| [addingtrouble](https://open.kattis.com/problems/addingtrouble) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/addingtrouble/addingtrouble.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/addingtrouble/addingtrouble.hs) |
| [a_lead_i_bio](https://open.kattis.com/problems/a_lead_i_bio) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/a_lead_i_bio/a_lead_i_bio.hs) |
| [alphabetspam](https://open.kattis.com/problems/alphabetspam) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/alphabetspam/alphabetspam.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/alphabetspam/alphabetspam.java) |
| [apaxiaaans](https://open.kattis.com/problems/apaxiaaans) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/apaxiaaans/apaxiaaans.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/apaxiaaans/apaxiaaans.java) |
| [apaxianparent](https://open.kattis.com/problems/apaxianparent) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/apaxianparent/apaxianparent.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/apaxianparent/apaxianparent.hs) |
| [autori](https://open.kattis.com/problems/autori) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/autori/autori.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/autori/autori.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/autori/autori.java) |
| [avion](https://open.kattis.com/problems/avion) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/avion/avion.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/avion/avion.hs) |
| [batterup](https://open.kattis.com/problems/batterup) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/batterup/batterup.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/batterup/batterup.hs) |
| [battlesimulation](https://open.kattis.com/problems/battlesimulation) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/battlesimulation/battlesimulation.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/battlesimulation/battlesimulation.java) |
| [bela](https://open.kattis.com/problems/bela) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/bela/bela.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/bela/bela.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/bela/bela.java) |
| [bergmal](https://open.kattis.com/problems/bergmal) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/bergmal/bergmal.hs) |
| [betting](https://open.kattis.com/problems/betting) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/betting/betting.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/betting/betting.hs) |
| [bijele](https://open.kattis.com/problems/bijele) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/bijele/bijele.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/bijele/bijele.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/bijele/bijele.java) |
| [bookingaroom](https://open.kattis.com/problems/bookingaroom) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/bookingaroom/bookingaroom.cpp) |
| [bus](https://open.kattis.com/problems/bus) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/bus/bus.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/bus/bus.hs) |
| [busnumbers](https://open.kattis.com/problems/busnumbers) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/busnumbers/busnumbers.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/busnumbers/busnumbers.java) |
| [canadianseh](https://open.kattis.com/problems/canadianseh) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/canadianseh/canadianseh.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/canadianseh/canadianseh.hs) |
| [carefulascent](https://open.kattis.com/problems/carefulascent) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/carefulascent/carefulascent.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/carefulascent/carefulascent.java) |
| [carrots](https://open.kattis.com/problems/carrots) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/carrots/carrots.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/carrots/carrots.hs) |
| [cetvrta](https://open.kattis.com/problems/cetvrta) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cetvrta/cetvrta.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/cetvrta/cetvrta.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/cetvrta/cetvrta.java) |
| [chanukah](https://open.kattis.com/problems/chanukah) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/chanukah/chanukah.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/chanukah/chanukah.hs) |
| [classfieldtrip](https://open.kattis.com/problems/classfieldtrip) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/classfieldtrip/classfieldtrip.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/classfieldtrip/classfieldtrip.hs) |
| [coconut](https://open.kattis.com/problems/coconut) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/coconut/coconut.cpp) |
| [codetosavelives](https://open.kattis.com/problems/codetosavelives) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/codetosavelives/codetosavelives.cpp) |
| [cold](https://open.kattis.com/problems/cold) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cold/cold.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/cold/cold.java) |
| [conundrum](https://open.kattis.com/problems/conundrum) | [java](https://github.com/dbarenholz/kattis/blob/main/src/conundrum/conundrum.java) |
| [countingclauses](https://open.kattis.com/problems/countingclauses) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/countingclauses/countingclauses.cpp) |
| [countthevowels](https://open.kattis.com/problems/countthevowels) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/countthevowels/countthevowels.cpp) |
| [cprnummer](https://open.kattis.com/problems/cprnummer) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cprnummer/cprnummer.cpp) |
| [cudoviste](https://open.kattis.com/problems/cudoviste) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cudoviste/cudoviste.cpp) |
| [cups](https://open.kattis.com/problems/cups) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cups/cups.cpp) |
| [cutinline](https://open.kattis.com/problems/cutinline) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cutinline/cutinline.cpp) |
| [cutthenegativity](https://open.kattis.com/problems/cutthenegativity) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/cutthenegativity/cutthenegativity.cpp) |
| [dagatal](https://open.kattis.com/problems/dagatal) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/dagatal/dagatal.hs) |
| [datum](https://open.kattis.com/problems/datum) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/datum/datum.cpp) |
| [deathknight](https://open.kattis.com/problems/deathknight) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/deathknight/deathknight.cpp) |
| [detaileddifferences](https://open.kattis.com/problems/detaileddifferences) | [java](https://github.com/dbarenholz/kattis/blob/main/src/detaileddifferences/detaileddifferences.java) |
| [dicecup](https://open.kattis.com/problems/dicecup) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/dicecup/dicecup.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/dicecup/dicecup.java) |
| [dicegame](https://open.kattis.com/problems/dicegame) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/dicegame/dicegame.cpp) |
| [different](https://open.kattis.com/problems/different) | [java](https://github.com/dbarenholz/kattis/blob/main/src/different/different.java) |
| [digitswap](https://open.kattis.com/problems/digitswap) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/digitswap/digitswap.cpp) |
| [divvyingup](https://open.kattis.com/problems/divvyingup) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/divvyingup/divvyingup.cpp) |
| [doublepassword](https://open.kattis.com/problems/doublepassword) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/doublepassword/doublepassword.cpp) |
| [dragafra](https://open.kattis.com/problems/dragafra) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/dragafra/dragafra.hs) |
| [drmmessages](https://open.kattis.com/problems/drmmessages) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/drmmessages/drmmessages.cpp) |
| [drunkvigenere](https://open.kattis.com/problems/drunkvigenere) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/drunkvigenere/drunkvigenere.cpp) |
| [dst](https://open.kattis.com/problems/dst) | [java](https://github.com/dbarenholz/kattis/blob/main/src/dst/dst.java) |
| [easiest](https://open.kattis.com/problems/easiest) | [java](https://github.com/dbarenholz/kattis/blob/main/src/easiest/easiest.java) |
| [echoechoecho](https://open.kattis.com/problems/echoechoecho) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/echoechoecho/echoechoecho.cpp) |
| [electricaloutlets](https://open.kattis.com/problems/electricaloutlets) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/electricaloutlets/electricaloutlets.cpp) |
| [eligibility](https://open.kattis.com/problems/eligibility) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/eligibility/eligibility.cpp) |
| [empleh](https://open.kattis.com/problems/empleh) | [java](https://github.com/dbarenholz/kattis/blob/main/src/empleh/empleh.java) |
| [encodedmessage](https://open.kattis.com/problems/encodedmessage) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/encodedmessage/encodedmessage.cpp) |
| [estimatingtheareaofacircle](https://open.kattis.com/problems/estimatingtheareaofacircle) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/estimatingtheareaofacircle/estimatingtheareaofacircle.cpp) |
| [everywhere](https://open.kattis.com/problems/everywhere) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/everywhere/everywhere.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/everywhere/everywhere.java) |
| [eyeofsauron](https://open.kattis.com/problems/eyeofsauron) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/eyeofsauron/eyeofsauron.cpp) |
| [fadingwind](https://open.kattis.com/problems/fadingwind) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/fadingwind/fadingwind.cpp) |
| [faktor](https://open.kattis.com/problems/faktor) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/faktor/faktor.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/faktor/faktor.java) |
| [fifa](https://open.kattis.com/problems/fifa) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/fifa/fifa.hs) |
| [fiftyshades](https://open.kattis.com/problems/fiftyshades) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/fiftyshades/fiftyshades.cpp) |
| [filip](https://open.kattis.com/problems/filip) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/filip/filip.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/filip/filip.java) |
| [finalexam2](https://open.kattis.com/problems/finalexam2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/finalexam2/finalexam2.cpp) |
| [findingana](https://open.kattis.com/problems/findingana) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/findingana/findingana.cpp) |
| [forcedchoice](https://open.kattis.com/problems/forcedchoice) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/forcedchoice/forcedchoice.cpp) |
| [freefood](https://open.kattis.com/problems/freefood) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/freefood/freefood.cpp) |
| [fyi](https://open.kattis.com/problems/fyi) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/fyi/fyi.cpp) |
| [gcvwr](https://open.kattis.com/problems/gcvwr) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/gcvwr/gcvwr.cpp) |
| [gerrymandering](https://open.kattis.com/problems/gerrymandering) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/gerrymandering/gerrymandering.cpp) |
| [ghostleg](https://open.kattis.com/problems/ghostleg) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ghostleg/ghostleg.cpp) |
| [goatrope](https://open.kattis.com/problems/goatrope) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/goatrope/goatrope.cpp) |
| [grading](https://open.kattis.com/problems/grading) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/grading/grading.cpp) |
| [grassseed](https://open.kattis.com/problems/grassseed) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/grassseed/grassseed.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/grassseed/grassseed.java) |
| [greetings2](https://open.kattis.com/problems/greetings2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/greetings2/greetings2.cpp) |
| [hangingout](https://open.kattis.com/problems/hangingout) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/hangingout/hangingout.cpp) |
| [hangman](https://open.kattis.com/problems/hangman) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/hangman/hangman.cpp) |
| [harshadnumbers](https://open.kattis.com/problems/harshadnumbers) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/harshadnumbers/harshadnumbers.cpp) |
| [heartrate](https://open.kattis.com/problems/heartrate) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/heartrate/heartrate.cpp) |
| [heirsdilemma](https://open.kattis.com/problems/heirsdilemma) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/heirsdilemma/heirsdilemma.cpp) |
| [hello](https://open.kattis.com/problems/hello) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/hello/hello.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/hello/hello.java) |
| [helpaphd](https://open.kattis.com/problems/helpaphd) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/helpaphd/helpaphd.cpp) |
| [herman](https://open.kattis.com/problems/herman) | [java](https://github.com/dbarenholz/kattis/blob/main/src/herman/herman.java) |
| [hipphipp](https://open.kattis.com/problems/hipphipp) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/hipphipp/hipphipp.hs) |
| [hissingmicrophone](https://open.kattis.com/problems/hissingmicrophone) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/hissingmicrophone/hissingmicrophone.cpp) |
| [hittingtargets](https://open.kattis.com/problems/hittingtargets) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/hittingtargets/hittingtargets.cpp) |
| [homework](https://open.kattis.com/problems/homework) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/homework/homework.cpp) |
| [hradgreining](https://open.kattis.com/problems/hradgreining) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/hradgreining/hradgreining.hs) |
| [humancannonball2](https://open.kattis.com/problems/humancannonball2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/humancannonball2/humancannonball2.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/humancannonball2/humancannonball2.java) |
| [icpcawards](https://open.kattis.com/problems/icpcawards) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/icpcawards/icpcawards.cpp) |
| [internationaldates](https://open.kattis.com/problems/internationaldates) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/internationaldates/internationaldates.cpp) |
| [isithalloween](https://open.kattis.com/problems/isithalloween) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/isithalloween/isithalloween.cpp) |
| [jackolanternjuxtaposition](https://open.kattis.com/problems/jackolanternjuxtaposition) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/jackolanternjuxtaposition/jackolanternjuxtaposition.cpp) |
| [janitortroubles](https://open.kattis.com/problems/janitortroubles) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/janitortroubles/janitortroubles.cpp) |
| [jobexpenses](https://open.kattis.com/problems/jobexpenses) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/jobexpenses/jobexpenses.cpp) |
| [judgingmoose](https://open.kattis.com/problems/judgingmoose) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/judgingmoose/judgingmoose.cpp) |
| [jumbojavelin](https://open.kattis.com/problems/jumbojavelin) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/jumbojavelin/jumbojavelin.cpp) |
| [karte](https://open.kattis.com/problems/karte) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/karte/karte.cpp) |
| [kleptography](https://open.kattis.com/problems/kleptography) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/kleptography/kleptography.cpp) |
| [knightpacking](https://open.kattis.com/problems/knightpacking) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/knightpacking/knightpacking.cpp) |
| [knotknowledge](https://open.kattis.com/problems/knotknowledge) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/knotknowledge/knotknowledge.cpp) |
| [kornislav](https://open.kattis.com/problems/kornislav) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/kornislav/kornislav.cpp) |
| [kvedja](https://open.kattis.com/problems/kvedja) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/kvedja/kvedja.hs) |
| [ladder](https://open.kattis.com/problems/ladder) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ladder/ladder.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/ladder/ladder.java) |
| [laptopsticker](https://open.kattis.com/problems/laptopsticker) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/laptopsticker/laptopsticker.cpp) |
| [lastfactorialdigit](https://open.kattis.com/problems/lastfactorialdigit) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/lastfactorialdigit/lastfactorialdigit.cpp) |
| [leggja_samen](https://open.kattis.com/problems/leggja_samen) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/leggja_samen/leggja_samen.hs) |
| [licensetolaunch](https://open.kattis.com/problems/licensetolaunch) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/licensetolaunch/licensetolaunch.cpp) |
| [logicfunctions](https://open.kattis.com/problems/logicfunctions) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/logicfunctions/logicfunctions.cpp) |
| [lostlineup](https://open.kattis.com/problems/lostlineup) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/lostlineup/lostlineup.cpp) |
| [lubbilaerir](https://open.kattis.com/problems/lubbilaerir) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/lubbilaerir/lubbilaerir.hs) |
| [magictrick](https://open.kattis.com/problems/magictrick) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/magictrick/magictrick.cpp) |
| [makingameowth](https://open.kattis.com/problems/makingameowth) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/makingameowth/makingameowth.cpp) |
| [maptiles2](https://open.kattis.com/problems/maptiles2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/maptiles2/maptiles2.cpp) |
| [methodicmultiplication](https://open.kattis.com/problems/methodicmultiplication) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/methodicmultiplication/methodicmultiplication.cpp) |
| [metronome](https://open.kattis.com/problems/metronome) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/metronome/metronome.cpp) |
| [mixedfractions](https://open.kattis.com/problems/mixedfractions) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/mixedfractions/mixedfractions.cpp) |
| [moderatepace](https://open.kattis.com/problems/moderatepace) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/moderatepace/moderatepace.cpp) |
| [monopol](https://open.kattis.com/problems/monopol) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/monopol/monopol.cpp) |
| [musicalscales](https://open.kattis.com/problems/musicalscales) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/musicalscales/musicalscales.cpp) |
| [nastyhacks](https://open.kattis.com/problems/nastyhacks) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/nastyhacks/nastyhacks.cpp) |
| [nodup](https://open.kattis.com/problems/nodup) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/nodup/nodup.cpp) |
| [nsum](https://open.kattis.com/problems/nsum) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/nsum/nsum.cpp) |
| [numberfun](https://open.kattis.com/problems/numberfun) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/numberfun/numberfun.cpp) |
| [oddecho](https://open.kattis.com/problems/oddecho) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/oddecho/oddecho.cpp) |
| [oddities](https://open.kattis.com/problems/oddities) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/oddities/oddities.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/oddities/oddities.java) |
| [oddmanout](https://open.kattis.com/problems/oddmanout) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/oddmanout/oddmanout.cpp) |
| [ofugsnuid](https://open.kattis.com/problems/ofugsnuid) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ofugsnuid/ofugsnuid.cpp) |
| [ovissa](https://open.kattis.com/problems/ovissa) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/ovissa/ovissa.hs) |
| [parking2](https://open.kattis.com/problems/parking2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/parking2/parking2.cpp) |
| [pet](https://open.kattis.com/problems/pet) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pet/pet.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/pet/pet.java) |
| [pieceofcake2](https://open.kattis.com/problems/pieceofcake2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pieceofcake2/pieceofcake2.cpp) |
| [planina](https://open.kattis.com/problems/planina) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/planina/planina.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/planina/planina.java) |
| [pokechat](https://open.kattis.com/problems/pokechat) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pokechat/pokechat.cpp) |
| [pokerhand](https://open.kattis.com/problems/pokerhand) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pokerhand/pokerhand.cpp) |
| [pot](https://open.kattis.com/problems/pot) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pot/pot.cpp) |
| [provincesandgold](https://open.kattis.com/problems/provincesandgold) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/provincesandgold/provincesandgold.cpp) |
| [prsteni](https://open.kattis.com/problems/prsteni) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/prsteni/prsteni.cpp) |
| [ptice](https://open.kattis.com/problems/ptice) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ptice/ptice.cpp) |
| [pyramids](https://open.kattis.com/problems/pyramids) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/pyramids/pyramids.cpp) |
| [qaly](https://open.kattis.com/problems/qaly) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/qaly/qaly.cpp) |
| [quadrant](https://open.kattis.com/problems/quadrant) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/quadrant/quadrant.cpp) |
| [r2](https://open.kattis.com/problems/r2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/r2/r2.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/r2/r2.java) |
| [racingalphabet](https://open.kattis.com/problems/racingalphabet) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/racingalphabet/racingalphabet.cpp) |
| [railroad2](https://open.kattis.com/problems/railroad2) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/railroad2/railroad2.cpp) |
| [ratingproblems](https://open.kattis.com/problems/ratingproblems) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ratingproblems/ratingproblems.cpp) |
| [rectanglearea](https://open.kattis.com/problems/rectanglearea) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/rectanglearea/rectanglearea.cpp) |
| [reduplication](https://open.kattis.com/problems/reduplication) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/reduplication/reduplication.hs) |
| [relocation](https://open.kattis.com/problems/relocation) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/relocation/relocation.cpp) |
| [reversebinary](https://open.kattis.com/problems/reversebinary) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/reversebinary/reversebinary.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/reversebinary/reversebinary.java) |
| [rijeci](https://open.kattis.com/problems/rijeci) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/rijeci/rijeci.cpp) |
| [romans](https://open.kattis.com/problems/romans) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/romans/romans.cpp) |
| [sevenwonders](https://open.kattis.com/problems/sevenwonders) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sevenwonders/sevenwonders.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/sevenwonders/sevenwonders.java) |
| [shatteredcake](https://open.kattis.com/problems/shatteredcake) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/shatteredcake/shatteredcake.cpp) |
| [sibice](https://open.kattis.com/problems/sibice) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sibice/sibice.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/sibice/sibice.java) |
| [sifferprodukt](https://open.kattis.com/problems/sifferprodukt) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sifferprodukt/sifferprodukt.cpp) |
| [simonsays](https://open.kattis.com/problems/simonsays) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/simonsays/simonsays.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/simonsays/simonsays.java) |
| [skener](https://open.kattis.com/problems/skener) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/skener/skener.cpp) |
| [skocimis](https://open.kattis.com/problems/skocimis) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/skocimis/skocimis.cpp) |
| [skruop](https://open.kattis.com/problems/skruop) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/skruop/skruop.cpp) |
| [smil](https://open.kattis.com/problems/smil) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/smil/smil.cpp) |
| [sorttwonumbers](https://open.kattis.com/problems/sorttwonumbers) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sorttwonumbers/sorttwonumbers.cpp) |
| [spavanac](https://open.kattis.com/problems/spavanac) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/spavanac/spavanac.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/spavanac/spavanac.java) |
| [speeding](https://open.kattis.com/problems/speeding) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/speeding/speeding.cpp) |
| [squarepeg](https://open.kattis.com/problems/squarepeg) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/squarepeg/squarepeg.cpp) |
| [stickykeys](https://open.kattis.com/problems/stickykeys) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/stickykeys/stickykeys.cpp) |
| [stopwatch](https://open.kattis.com/problems/stopwatch) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/stopwatch/stopwatch.cpp) |
| [storafmaeli](https://open.kattis.com/problems/storafmaeli) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/storafmaeli/storafmaeli.hs) |
| [sumkindofproblem](https://open.kattis.com/problems/sumkindofproblem) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sumkindofproblem/sumkindofproblem.cpp) |
| [sumsquareddigits](https://open.kattis.com/problems/sumsquareddigits) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/sumsquareddigits/sumsquareddigits.cpp) |
| [synchronizinglists](https://open.kattis.com/problems/synchronizinglists) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/synchronizinglists/synchronizinglists.cpp) |
| [t9spelling](https://open.kattis.com/problems/t9spelling) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/t9spelling/t9spelling.cpp) |
| [taisformula](https://open.kattis.com/problems/taisformula) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/taisformula/taisformula.cpp) |
| [takkar](https://open.kattis.com/problems/takkar) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/takkar/takkar.hs) |
| [tarifa](https://open.kattis.com/problems/tarifa) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/tarifa/tarifa.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/tarifa/tarifa.java) |
| [telja](https://open.kattis.com/problems/telja) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/telja/telja.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/telja/telja.java) |
| [tetration](https://open.kattis.com/problems/tetration) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/tetration/tetration.cpp) |
| [thelastproblem](https://open.kattis.com/problems/thelastproblem) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/thelastproblem/thelastproblem.cpp) |
| [til_hamingju](https://open.kattis.com/problems/til_hamingju) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/til_hamingju/til_hamingju.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/til_hamingju/til_hamingju.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/til_hamingju/til_hamingju.java) |
| [timeloop](https://open.kattis.com/problems/timeloop) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/timeloop/timeloop.cpp) |
| [tolvunarfraedingar_telja](https://open.kattis.com/problems/tolvunarfraedingar_telja) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/tolvunarfraedingar_telja/tolvunarfraedingar_telja.hs) |
| [transitwoes](https://open.kattis.com/problems/transitwoes) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/transitwoes/transitwoes.cpp) |
| [triarea](https://open.kattis.com/problems/triarea) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/triarea/triarea.cpp) |
| [trik](https://open.kattis.com/problems/trik) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/trik/trik.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/trik/trik.java) |
| [twostones](https://open.kattis.com/problems/twostones) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/twostones/twostones.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/twostones/twostones.java) |
| [twosum](https://open.kattis.com/problems/twosum) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/twosum/twosum.cpp) |
| [ultimatebinarywatch](https://open.kattis.com/problems/ultimatebinarywatch) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/ultimatebinarywatch/ultimatebinarywatch.cpp) |
| [undeadoralive](https://open.kattis.com/problems/undeadoralive) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/undeadoralive/undeadoralive.cpp) |
| [upprodun](https://open.kattis.com/problems/upprodun) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/upprodun/upprodun.cpp) |
| [velkomin](https://open.kattis.com/problems/velkomin) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/velkomin/velkomin.cpp), [hs](https://github.com/dbarenholz/kattis/blob/main/src/velkomin/velkomin.hs), [java](https://github.com/dbarenholz/kattis/blob/main/src/velkomin/velkomin.java) |
| [vidsnuningur](https://open.kattis.com/problems/vidsnuningur) | [hs](https://github.com/dbarenholz/kattis/blob/main/src/vidsnuningur/vidsnuningur.hs) |
| [weakvertices](https://open.kattis.com/problems/weakvertices) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/weakvertices/weakvertices.cpp) |
| [whichisgreater](https://open.kattis.com/problems/whichisgreater) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/whichisgreater/whichisgreater.cpp) |
| [zamka](https://open.kattis.com/problems/zamka) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/zamka/zamka.cpp), [java](https://github.com/dbarenholz/kattis/blob/main/src/zamka/zamka.java) |
| [zanzibar](https://open.kattis.com/problems/zanzibar) | [cpp](https://github.com/dbarenholz/kattis/blob/main/src/zanzibar/zanzibar.cpp) |
