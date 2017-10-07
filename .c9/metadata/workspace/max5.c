{"filter":false,"title":"max5.c","tooltip":"/max5.c","undoManager":{"mark":80,"position":80,"stack":[[{"start":{"row":0,"column":0},"end":{"row":21,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <string.h>"," ","char * longest_word(char * str, const char * delim) {","    if ( str = strtok(str, delim) ) {","        char * next = longest_word(NULL, delim);","        return ( next && strlen(next) > strlen(str) ) ? next : str;","    }","    else","        return NULL;","}"," ","#define DELIM \" \\t\\n\""," ","int main(void) {","    char buf[BUFSIZ];","    ","    while ( printf(\"String: \") && fgets(buf, BUFSIZ, stdin) && *buf != '\\n' )","        printf(\"The first longest word: %s\\n\", longest_word(buf, DELIM));","        ","    return 0;","}"],"id":1}],[{"start":{"row":4,"column":14},"end":{"row":4,"column":15},"action":"insert","lines":["="],"id":5}],[{"start":{"row":0,"column":0},"end":{"row":21,"column":1},"action":"remove","lines":["#include <stdio.h>","#include <string.h>"," ","char * longest_word(char * str, const char * delim) {","    if ( str == strtok(str, delim) ) {","        char * next = longest_word(NULL, delim);","        return ( next && strlen(next) > strlen(str) ) ? next : str;","    }","    else","        return NULL;","}"," ","#define DELIM \" \\t\\n\""," ","int main(void) {","    char buf[BUFSIZ];","    ","    while ( printf(\"String: \") && fgets(buf, BUFSIZ, stdin) && *buf != '\\n' )","        printf(\"The first longest word: %s\\n\", longest_word(buf, DELIM));","        ","    return 0;","}"],"id":6},{"start":{"row":0,"column":0},"end":{"row":21,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <string.h>"," ","char * longest_word(char * str, const char * delim) {","    if ( str == strtok(str, delim) ) {","        char * next = longest_word(NULL, delim);","        return ( next && strlen(next) > strlen(str) ) ? next : str;","    }","    else","        return NULL;","}"," ","#define DELIM \" \\t\\n\""," ","int main(void) {","    char buf[BUFSIZ];","    ","    while ( printf(\"String: \") && fgets(buf, BUFSIZ, stdin) && *buf != '\\n' )","        printf(\"The first longest word: %s\\n\", longest_word(buf, DELIM));","        ","    return 0;","}"]}],[{"start":{"row":15,"column":21},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":7},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":16,"column":4},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":8},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["i"],"id":9}],[{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["n"],"id":10}],[{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["d"],"id":11}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":["e"],"id":12}],[{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["x"],"id":13},{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":["z"]}],[{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"remove","lines":["z"],"id":14}],[{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":[" "],"id":15}],[{"start":{"row":17,"column":10},"end":{"row":17,"column":11},"action":"insert","lines":["="],"id":16}],[{"start":{"row":17,"column":11},"end":{"row":17,"column":12},"action":"insert","lines":[" "],"id":17}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["B"],"id":18}],[{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":["u"],"id":19}],[{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":["f"],"id":20}],[{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"remove","lines":["f"],"id":21}],[{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"remove","lines":["u"],"id":22}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"remove","lines":["B"],"id":23}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["b"],"id":24}],[{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":["u"],"id":25}],[{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":["f"],"id":26}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"insert","lines":[" "],"id":27}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"remove","lines":[" "],"id":28}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":17},"action":"insert","lines":["[]"],"id":29}],[{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"insert","lines":["i"],"id":30}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"insert","lines":["i"],"id":31}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["n"],"id":32}],[{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["t"],"id":33}],[{"start":{"row":20,"column":73},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":34},{"start":{"row":21,"column":0},"end":{"row":21,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":21,"column":8},"end":{"row":21,"column":9},"action":"insert","lines":["p"],"id":35}],[{"start":{"row":21,"column":9},"end":{"row":21,"column":10},"action":"insert","lines":["r"],"id":36}],[{"start":{"row":21,"column":10},"end":{"row":21,"column":11},"action":"insert","lines":["i"],"id":37}],[{"start":{"row":21,"column":11},"end":{"row":21,"column":12},"action":"insert","lines":["n"],"id":38}],[{"start":{"row":21,"column":12},"end":{"row":21,"column":13},"action":"insert","lines":["t"],"id":39}],[{"start":{"row":21,"column":13},"end":{"row":21,"column":14},"action":"insert","lines":["f"],"id":40}],[{"start":{"row":21,"column":14},"end":{"row":21,"column":16},"action":"insert","lines":["()"],"id":41}],[{"start":{"row":21,"column":15},"end":{"row":21,"column":17},"action":"insert","lines":["\"\""],"id":42}],[{"start":{"row":21,"column":16},"end":{"row":21,"column":17},"action":"insert","lines":["i"],"id":43}],[{"start":{"row":21,"column":17},"end":{"row":21,"column":18},"action":"insert","lines":["e"],"id":44}],[{"start":{"row":21,"column":18},"end":{"row":21,"column":19},"action":"insert","lines":["r"],"id":45}],[{"start":{"row":21,"column":18},"end":{"row":21,"column":19},"action":"remove","lines":["r"],"id":46}],[{"start":{"row":21,"column":17},"end":{"row":21,"column":18},"action":"remove","lines":["e"],"id":47}],[{"start":{"row":21,"column":16},"end":{"row":21,"column":17},"action":"remove","lines":["i"],"id":48}],[{"start":{"row":21,"column":16},"end":{"row":21,"column":17},"action":"insert","lines":["i"],"id":49}],[{"start":{"row":21,"column":17},"end":{"row":21,"column":18},"action":"insert","lines":["t"],"id":50}],[{"start":{"row":21,"column":18},"end":{"row":21,"column":19},"action":"insert","lines":["e"],"id":51}],[{"start":{"row":21,"column":19},"end":{"row":21,"column":20},"action":"insert","lines":["r"],"id":52}],[{"start":{"row":21,"column":20},"end":{"row":21,"column":21},"action":"insert","lines":[" "],"id":53}],[{"start":{"row":21,"column":21},"end":{"row":21,"column":22},"action":"insert","lines":["i"],"id":54}],[{"start":{"row":21,"column":21},"end":{"row":21,"column":22},"action":"remove","lines":["i"],"id":55}],[{"start":{"row":21,"column":21},"end":{"row":21,"column":22},"action":"insert","lines":["%"],"id":56}],[{"start":{"row":21,"column":22},"end":{"row":21,"column":23},"action":"insert","lines":["i"],"id":57}],[{"start":{"row":21,"column":24},"end":{"row":21,"column":25},"action":"insert","lines":[","],"id":58}],[{"start":{"row":21,"column":23},"end":{"row":21,"column":24},"action":"insert","lines":["\\"],"id":59}],[{"start":{"row":21,"column":24},"end":{"row":21,"column":25},"action":"insert","lines":["n"],"id":60}],[{"start":{"row":21,"column":27},"end":{"row":21,"column":28},"action":"insert","lines":["i"],"id":61}],[{"start":{"row":21,"column":28},"end":{"row":21,"column":29},"action":"insert","lines":["n"],"id":62}],[{"start":{"row":21,"column":29},"end":{"row":21,"column":30},"action":"insert","lines":["d"],"id":63}],[{"start":{"row":21,"column":30},"end":{"row":21,"column":31},"action":"insert","lines":["e"],"id":64}],[{"start":{"row":21,"column":31},"end":{"row":21,"column":32},"action":"insert","lines":["x"],"id":65}],[{"start":{"row":21,"column":33},"end":{"row":21,"column":34},"action":"insert","lines":[";"],"id":66}],[{"start":{"row":17,"column":21},"end":{"row":17,"column":22},"action":"insert","lines":[";"],"id":67}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":["i"],"id":68}],[{"start":{"row":16,"column":5},"end":{"row":16,"column":6},"action":"insert","lines":["n"],"id":69}],[{"start":{"row":16,"column":6},"end":{"row":16,"column":7},"action":"insert","lines":["t"],"id":70}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"insert","lines":[" "],"id":71}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":["i"],"id":72}],[{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":[";"],"id":73}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":10},"action":"remove","lines":["int i;"],"id":74}],[{"start":{"row":17,"column":19},"end":{"row":17,"column":20},"action":"remove","lines":["i"],"id":75}],[{"start":{"row":17,"column":19},"end":{"row":17,"column":20},"action":"insert","lines":["B"],"id":76}],[{"start":{"row":17,"column":20},"end":{"row":17,"column":21},"action":"insert","lines":["U"],"id":77}],[{"start":{"row":17,"column":21},"end":{"row":17,"column":22},"action":"insert","lines":["F"],"id":78}],[{"start":{"row":17,"column":22},"end":{"row":17,"column":23},"action":"insert","lines":["S"],"id":79}],[{"start":{"row":17,"column":23},"end":{"row":17,"column":24},"action":"insert","lines":["I"],"id":80}],[{"start":{"row":17,"column":24},"end":{"row":17,"column":25},"action":"insert","lines":["Z"],"id":81}],[{"start":{"row":16,"column":1},"end":{"row":17,"column":27},"action":"remove","lines":["   ","   int index = buf[BUFSIZ];"],"id":82}],[{"start":{"row":16,"column":1},"end":{"row":17,"column":4},"action":"remove","lines":["","    "],"id":83}],[{"start":{"row":19,"column":7},"end":{"row":19,"column":34},"action":"remove","lines":[" printf(\"iter %i\\n\",index);"],"id":84}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":9,"column":20},"end":{"row":9,"column":20},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1471943446380,"hash":"3dc09e231e47250879af7ecac0e0ff19c0ec21bb"}