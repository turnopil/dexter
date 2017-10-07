{"filter":false,"title":"greedy.c","tooltip":"/pset1/greedy.c","ace":{"folds":[],"scrolltop":358,"scrollleft":0,"selection":{"start":{"row":46,"column":1},"end":{"row":46,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":34,"state":"start","mode":"ace/mode/c_cpp"}},"hash":"5c61de4c302c5e5a0a2e18f85558237155c5e92e","undoManager":{"mark":52,"position":52,"stack":[[{"start":{"row":0,"column":0},"end":{"row":44,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <math.h>","#include <stdio.h>","","int main(void)  ","{","    float change;","    int coins, cents;","","    printf(\"O hai! \");","","    // Get change owed, must be positive","    do","    {","        printf(\"How much change is owed?\\n\");","        change = GetFloat();","    }","    while (change < 0);","","    // Avoid imprecision by converting to cents","    cents = (int) round(change * 100);","","    // Initialize coins","    coins = 0;","","    // Modulo math - Quarters","    coins += cents / 25;","    cents %= 25;","","    // Modulo - Dimes","    coins += cents / 10;","    cents %= 10;","","    // Modulo - Nickels","    coins += cents / 5;","    cents %= 5;","","    // Pennies","    coins += cents;","","    // Print Result","    printf(\"%i\\n\", coins);","","    return 0;","}"],"id":1}],[{"start":{"row":8,"column":0},"end":{"row":11,"column":40},"action":"remove","lines":["","    printf(\"O hai! \");","","    // Get change owed, must be positive"],"id":2}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":28},"action":"remove","lines":["Avoid imprecision by "],"id":3}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"remove","lines":["c"],"id":4}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"insert","lines":["C"],"id":5}],[{"start":{"row":19,"column":3},"end":{"row":19,"column":23},"action":"remove","lines":[" // Initialize coins"],"id":6}],[{"start":{"row":18,"column":0},"end":{"row":19,"column":3},"action":"remove","lines":["","   "],"id":7}],[{"start":{"row":12,"column":28},"end":{"row":13,"column":0},"action":"insert","lines":["",""],"id":8},{"start":{"row":13,"column":0},"end":{"row":13,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":12,"column":28},"end":{"row":13,"column":0},"action":"insert","lines":["",""],"id":10},{"start":{"row":13,"column":0},"end":{"row":13,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":13,"column":8},"end":{"row":14,"column":62},"action":"insert","lines":["if(given_amount == 0||given_amount <= 0)","        printf(\"Number Should be greater then Zero EG:10\\n:\");"],"id":11}],[{"start":{"row":12,"column":28},"end":{"row":13,"column":0},"action":"insert","lines":["",""],"id":12},{"start":{"row":13,"column":0},"end":{"row":13,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":14,"column":11},"end":{"row":14,"column":23},"action":"remove","lines":["given_amount"],"id":13},{"start":{"row":14,"column":11},"end":{"row":14,"column":12},"action":"insert","lines":["c"]}],[{"start":{"row":14,"column":12},"end":{"row":14,"column":13},"action":"insert","lines":["h"],"id":14}],[{"start":{"row":14,"column":13},"end":{"row":14,"column":14},"action":"insert","lines":["a"],"id":15}],[{"start":{"row":14,"column":14},"end":{"row":14,"column":15},"action":"insert","lines":["n"],"id":16}],[{"start":{"row":14,"column":15},"end":{"row":14,"column":16},"action":"insert","lines":["g"],"id":17}],[{"start":{"row":14,"column":16},"end":{"row":14,"column":17},"action":"insert","lines":["e"],"id":18}],[{"start":{"row":14,"column":24},"end":{"row":14,"column":36},"action":"remove","lines":["given_amount"],"id":19},{"start":{"row":14,"column":24},"end":{"row":14,"column":25},"action":"insert","lines":["c"]}],[{"start":{"row":14,"column":25},"end":{"row":14,"column":26},"action":"insert","lines":["h"],"id":20}],[{"start":{"row":14,"column":26},"end":{"row":14,"column":27},"action":"insert","lines":["a"],"id":21}],[{"start":{"row":14,"column":27},"end":{"row":14,"column":28},"action":"insert","lines":["n"],"id":22}],[{"start":{"row":14,"column":28},"end":{"row":14,"column":29},"action":"insert","lines":["g"],"id":23}],[{"start":{"row":14,"column":29},"end":{"row":14,"column":30},"action":"insert","lines":["e"],"id":24}],[{"start":{"row":15,"column":55},"end":{"row":15,"column":56},"action":"remove","lines":["0"],"id":25}],[{"start":{"row":15,"column":54},"end":{"row":15,"column":55},"action":"remove","lines":["1"],"id":26}],[{"start":{"row":15,"column":53},"end":{"row":15,"column":54},"action":"remove","lines":[":"],"id":27}],[{"start":{"row":15,"column":52},"end":{"row":15,"column":53},"action":"remove","lines":["G"],"id":28}],[{"start":{"row":15,"column":51},"end":{"row":15,"column":52},"action":"remove","lines":["E"],"id":29}],[{"start":{"row":25,"column":7},"end":{"row":25,"column":21},"action":"remove","lines":["Modulo math - "],"id":30}],[{"start":{"row":29,"column":7},"end":{"row":29,"column":16},"action":"remove","lines":["Modulo - "],"id":31}],[{"start":{"row":33,"column":7},"end":{"row":33,"column":16},"action":"remove","lines":["Modulo - "],"id":32}],[{"start":{"row":40,"column":7},"end":{"row":40,"column":13},"action":"remove","lines":["Print "],"id":33}],[{"start":{"row":7,"column":21},"end":{"row":8,"column":0},"action":"insert","lines":["",""],"id":36},{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":8,"column":4},"end":{"row":9,"column":0},"action":"insert","lines":["",""],"id":37},{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":5},"action":"insert","lines":["p"],"id":38}],[{"start":{"row":9,"column":5},"end":{"row":9,"column":6},"action":"insert","lines":["r"],"id":39}],[{"start":{"row":9,"column":6},"end":{"row":9,"column":7},"action":"insert","lines":["i"],"id":40}],[{"start":{"row":9,"column":7},"end":{"row":9,"column":8},"action":"insert","lines":["n"],"id":41}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["f"],"id":42}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["t"],"id":43}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":12},"action":"insert","lines":["()"],"id":44}],[{"start":{"row":9,"column":11},"end":{"row":9,"column":13},"action":"insert","lines":["\"\""],"id":45}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"insert","lines":["o"],"id":46}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":[" "],"id":47}],[{"start":{"row":9,"column":14},"end":{"row":9,"column":15},"action":"insert","lines":["H"],"id":48}],[{"start":{"row":9,"column":15},"end":{"row":9,"column":16},"action":"insert","lines":["a"],"id":49}],[{"start":{"row":9,"column":16},"end":{"row":9,"column":17},"action":"insert","lines":["i"],"id":50}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":["!"],"id":51}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"remove","lines":["o"],"id":52}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"insert","lines":["O"],"id":53}],[{"start":{"row":9,"column":20},"end":{"row":9,"column":21},"action":"insert","lines":[";"],"id":54}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"insert","lines":[" "],"id":55}],[{"start":{"row":0,"column":0},"end":{"row":46,"column":1},"action":"remove","lines":["#include <cs50.h>","#include <math.h>","#include <stdio.h>","","int main(void)  ","{","    float change;","    int coins, cents;","    ","    printf(\"O Hai! \");","","    do","    {","        printf(\"How much change is owed?\\n\");","        change = GetFloat();","        ","        if(change == 0||change <= 0)","        printf(\"Number Should be greater then Zero \\n:\");","        ","    }","    while (change < 0);","","    // Converting to cents","    cents = (int) round(change * 100);","","    coins = 0;","","    // Quarters","    coins += cents / 25;","    cents %= 25;","","    // Dimes","    coins += cents / 10;","    cents %= 10;","","    // Nickels","    coins += cents / 5;","    cents %= 5;","","    // Pennies","    coins += cents;","","    // Result","    printf(\"%i\\n\", coins);","","    return 0;","}"],"id":56},{"start":{"row":0,"column":0},"end":{"row":46,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <math.h>","#include <stdio.h>","","int main(void)  ","{","    float change;","    int coins, cents;","    ","    printf(\"O Hai! \");","","    do","    {","        printf(\"How much change is owed?\\n\");","        change = GetFloat();","        ","        if(change == 0||change <= 0)","        printf(\"Number Should be greater then Zero \\n:\");","        ","    }","    while (change < 0);","","    // Converting to cents","    cents = (int) round(change * 100);","","    coins = 0;","","    // Quarters","    coins += cents / 25;","    cents %= 25;","","    // Dimes","    coins += cents / 10;","    cents %= 10;","","    // Nickels","    coins += cents / 5;","    cents %= 5;","","    // Pennies","    coins += cents;","","    // Result","    printf(\"%i\\n\", coins);","","    return 0;","}"]}]]},"timestamp":1473189167565}