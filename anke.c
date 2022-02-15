#include<stdio.h>
#include<string.h>

int main(){

char str[300];
char *ans1="y",*ans2="y",*ans3="n",*ans4="n",*ans5="y",*ans6="y";
char *ans7="n",*ans8="y",*ans9="y",*ans10="n",*ans11="y",*ans12="y";
char *ans13="y",*ans14="y",*ans15="y",*ans16="n",*ans17="y",*ans18="y";
char *ans19="y",*ans20="y",*ans21="y",*ans22="y",*ans23="n",*ans24="y";
char *ans25="y",*ans26="y",*ans27="y",*ans28="y",*ans29="y",*ans30="y";

double a=0,b=0,c=0,d=0,e=0;
int i=0;
//n=0x6e,110,o=0x6f,111;
printf("\n");
printf("安全運転自己診断\n");
printf("日ごろ，あなたが運転している様子を答えてください．\n設問は30問あります．\n「はい」のときは，yを\n「いいえ」のときはnを入力してください．\n");
printf("大文字で入力すると正しく判定できないので，小文字で入力してください\n");

i+=1;
printf("\n");
printf("%d\n",i);
printf("運転中，身支度や飲食をすることがある．\n");
scanf("%s",&str[8]);
if(strcmp(&str[8],ans1)==0){
    e+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("信号が赤になる前に，急いで交差点に進入することがある．\n");
scanf("%s",&str[16]);
if(strcmp(&str[16],ans2)==0){
    e+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("運転に自信がないほうだ\n");
scanf("%s",&str[32]);
if(strcmp(&str[32],ans3)==0){
    e+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("合流のとき，進もうか止まろうか迷うことがある．\n");
scanf("%s",&str[40]);
if(strcmp(&str[40],ans4)==0){
    e+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("運転中，よくオーディオ，テレビの操作をする．\n");
scanf("%s",&str[48]);
if(strcmp(&str[48],ans5)==0){
    e+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("同じ出発地と目的地でも，経路を変えることがある．\n");
scanf("%s",&str[56]);
if(strcmp(&str[56],ans6)==0){
    e+=1;
}else{
}


i+=1;
printf("\n");
printf("%d\n",i);
printf("同乗者が全員シートベルトをするように注意している．\n");
scanf("%s",&str[64]);
if(strcmp(&str[64],ans7)==0){
    d+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("運転中に眠気を感じることがある．\n");
scanf("%s",&str[72]);
if(strcmp(&str[72],ans8)==0){
    d+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("交差点では長く待たなくてすむように，いつもすばやく右折する．\n");
scanf("%s",&str[80]);
if(strcmp(&str[80],ans9)==0){
    d+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("長距離の運転を控える．\n");
scanf("%s",&str[88]);
if(strcmp(&str[88],ans10)==0){
    d+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("流れにのっていれば，制限速度どおりに走る必要はない．\n");
scanf("%s",&str[96]);

if(strcmp(&str[96],ans11)==0){
    d+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("追い越しや車線変更をするほうだ．\n");
scanf("%s",&str[104]);
if(strcmp(&str[104],ans12)==0){
    d+=1;
}else{
}


i+=1;
printf("\n");
printf("%d\n",i);
printf("カーブミラーに移る他車の位置を見誤ることがある．\n");
scanf("%s",&str[112]);
if(strcmp(&str[112],ans13)==0){
    c+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("隠れて行う取り締まりには腹が立つ．\n");
scanf("%s",&str[120]);
if(strcmp(&str[120],ans14)==0){
    c+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("一時停止規制の交差点で，完全に止まらず通過することがある．\n");
scanf("%s",&str[128]);
if(strcmp(&str[128],ans15)==0){
    c+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("夜間や悪天候の時は，運転しないようにする．\n");
scanf("%s",&str[136]);
if(strcmp(&str[136],ans16)==0){
    c+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("脇見をしていて，ハッとすることがある．\n");
scanf("%s",&str[144]);
if(strcmp(&str[144],ans17)==0){
    c+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("歩行者が道路をゆっくり横断しているとイライラする．\n");
scanf("%s",&str[152]);
if(strcmp(&str[152],ans18)==0){
    c+=1;
}else{
}


i+=1;
printf("\n");
printf("%d\n",i);
printf("何度も信号で止められると，とても嫌な感じがする．\n");
scanf("%s",&str[160]);
if(strcmp(&str[160],ans19)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("走行中，携帯電話に着信があると，受けてしまう．\n");
scanf("%s",&str[168]);
if(strcmp(&str[168],ans20)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("考え事をしていてハッとすることがある．\n");
scanf("%s",&str[176]);
if(strcmp(&str[176],ans21)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("前の車のブレーキランプに気づくのが遅れて，慌てることがある．\n");
scanf("%s",&str[184]);
if(strcmp(&str[184],ans22)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("体調を整えてから運転する．\n");
scanf("%s",&str[192]);
if(strcmp(&str[192],ans23)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("助手席に同乗者（成人）がいると運転しやすい．\n");
scanf("%s",&str[200]);
if(strcmp(&str[200],ans24)==0){
    b+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("後ろからクラクションを鳴らされると腹が立つ．\n");
scanf("%s",&str[208]);
if(strcmp(&str[208],ans25)==0){
    a+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("カーナビや地図を見ながら運転することがある．\n");
scanf("%s",&str[216]);
if(strcmp(&str[216],ans26)==0){
    a+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("前を自転車が走っているときは，早く追い越す．\n");
scanf("%s",&str[224]);
if(strcmp(&str[224],ans27)==0){
    a+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("人から運転が強引だと言われたことがある．\n");
scanf("%s",&str[232]);
if(strcmp(&str[232],ans28)==0){
    a+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("前方があいていると，ついスピードが出てしまう．\n");
scanf("%s",&str[240]);
if(strcmp(&str[240],ans29)==0){
    a+=1;
}else{
}

i+=1;
printf("\n");
printf("%d\n",i);
printf("ほかに交通手段があっても，つい車で出かけてしまう．\n");
scanf("%s",&str[248]);
if(strcmp(&str[248],ans30)==0){
    a+=1;
}else{
}
printf("\n");


printf("自信と慣れの注意度：%lf ％\n",(a*100)/6);
printf("集中力の注意度：%lf ％\n",(b*100)/6);
printf("注意力の注意度：%lf ％\n",(c*100)/6);
printf("安全意識の注意度：%lf ％\n",(d*100)/6);
printf("慎重さの注意度：%lf ％\n",(e*100)/6);

return 0;
}
