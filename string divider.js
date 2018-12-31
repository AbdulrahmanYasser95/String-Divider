function processData(input) {
    //Enter your code here
    //console.log(typeof (_input));
    var inAll=_input.split('\n');
    //console.log(inAll);
    var T = inAll[0];
    //console.log(T);
    //printf("starting\n");
    //printf("T=%d\n",$T);
    if ((0 < T) && (T < 11)) {
        //$inS;
        var outS = [];
        var outStrIndx = 0;
        for (var i = 1; i <= T; i++) {//check here!
            // fgets(inS,10000,stdin);
            //var outStrIndx = 0;
            //$outS = [];
            var inS = inAll[i];
            var inStrL = inS.length;
            //printf("%s\n",$inS);
            //printf("printed inS 1\n");
            //printf("%d\n",$inStrL);
            if ((2 <= inStrL) && (inStrL <= 10000)) {
                // puts(inS);
                //printf("%s\n",$inS);
                //printf("printed inS\n");
                for (var inStrIndx = 0; inStrIndx < inStrL; inStrIndx += 2) {
                    if (inS[inStrIndx] != '\0') {
                        outS[outStrIndx] = inS[inStrIndx];
                        // printf("inStrIndx=%d\n",inStrIndx);
                        // printf("outStrIndx=%d\n",outStrIndx);
                        // printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                        outStrIndx++;
                    }
                }
                // outStrIndx++;
                outS[outStrIndx] = ' ';
                // printf("outStrIndx=%d\n",outStrIndx);
                // printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                // outStrIndx++;
                // outS[outStrIndx]=' ';
                // printf("outStrIndx=%d\n",outStrIndx);
                // printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                outStrIndx++;
                for (var inStrIndx = 1; inStrIndx < inStrL; inStrIndx += 2) {
                    if (inS[inStrIndx] != '\0') {
                        outS[outStrIndx] = inS[inStrIndx];
                        // printf("inStrIndx=%d\n",inStrIndx);
                        // printf("outStrIndx=%d\n",outStrIndx);
                        // printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                        outStrIndx++;
                    }
                }
                // outStrIndx++;
                outS[outStrIndx] = '\n';
                outStrIndx++;
            }
            /*foreach($outS as value)
            {
                printf("%s", $value);
            }
            printf("\n");*/
            /*for (var prnti = 0; prnti < outS.length; prnti++){
                process.stdout.write(outS[prnti]); 
            }*/
            //console.log("iteration");
        }
        for (var prnti = 0; prnti < outS.length; prnti++) {
            process.stdout.write(outS[prnti]);
        }

    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
