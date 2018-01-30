<!-- DEBUT DU CODE DU FORMULAIRE -->
<script language="JavaScript" type="text/javascript">
// -----------------------------------------------------------------------------------------
// ------------------- Verification de la validité de l'adresse mail. ------------------------
// ------------------------------- Ne pas modifier -----------------------------------------
// -----------------------------------------------------------------------------------------
function verifMail(a){

testm = false;
reg = new RegExp("^[A-Za-z0-9]+([_\\.\\-\\+][A-Za-z0-9]*)*@[A-Za-z0-9]+([_\\.\\-][A-Za-z0-9]{1,})*\\.([A-Za-z]{2,}){1}$", "");
var ResultEmail = reg.test(a);
if (ResultEmail) testm=true;
return testm;
}

function CheckDate(d) {

// Cette fonction vérifie le format JJ/MM/AAAA saisi et la validité de la date.
// Le séparateur est défini dans la variable separateur
var amin=1901; // année mini
var amax=2100; // année maxi
var separateur="/"; // separateur entre jour/mois/annee
var j=(d.substring(0,2));
var m=(d.substring(3,5));
var a=(d.substring(6));
var ok=1;
if ( ((isNaN(j))||(j < 1)||(j > 31)) && (ok==1) ) {
ok=0;
}
if ( ((isNaN(m))||(m < 1)||(m > 12)) && (ok==1) ) {
ok=0;
}
if ( ((isNaN(a))||(a < amin)||(a > amax)) && (ok==1) ) {
ok=0;
}
if ( ((d.substring(2,3)!=separateur)||(d.substring(5,6)!=separateur)) && (ok==1) ) {
alert("Les séparateurs de date doivent être des +separateur+"); ok=0;
}
if (ok==1) {

var d2=new Date(a,m-1,j);
j2=d2.getDate();
m2=d2.getMonth()+1;
a2=d2.getFullYear();
if (a2 <=100) {a2=1900+a2}
if ( (j!=j2)||(m!=m2)||(a!=a2) ) {
alert("La date "+d+" n'existe pas !");
ok=0;
}

}
return ok;
}

// -----------------------------------------------------------------------------------------
// -------------------- Verification des champs obligatoires -------------------------------
// Pour rajouter des champs obligatoires, copier coller le code suivant et modifier les noms.
// -----------------------------------------------------------------------------------------
function valid(){

var collectElements=document.forms["AbonnementDOLIST"].elements;
var MessErreur = "Veuillez corriger les problemes suivants : \n \n";
var testUtil = 1;

if(document.getElementById('email').value != ""){

if (verifMail(document.getElementById('email').value) == true) // à enlever si le champs n'est pas l'e-mail
testUtil = eval(testUtil&1); // Ne pas modifier
else {
MessErreur = MessErreur+"\t - Adresse E-mail invalide \n";
testUtil = eval(testUtil&0); //Ne pas modifier
}

if (document.getElementById('email').value == document.getElementById('controlEmail').value)
testUtil = eval(testUtil&1); // Ne pas modifier
else {
MessErreur = MessErreur+"\t - Veuillez ressaisir votre adresse e-mail. \n";
testUtil = eval(testUtil&0); //Ne pas modifier
}

}
else{

MessErreur = MessErreur+"\t - Remplir le champ Adresse E-mail \n";
testUtil = eval(testUtil&0); // Ne pas modifier

}
if(document.AbonnementDOLIST.do_field_14_2.value.replace(/(^\s*)|(\s*$)/g,'') == ""){
MessErreur = MessErreur+"\t - Remplir le champ Nom \n";
testUtil = eval(testUtil&0); // Ne pas modifier
}
if(document.AbonnementDOLIST.do_field_15_1.value.replace(/(^\s*)|(\s*$)/g,'') == ""){
MessErreur = MessErreur+"\t - Remplir le champ Prénom \n";
testUtil = eval(testUtil&0); // Ne pas modifier
}

// --------- Verification de la syntaxe des champs date et des champs numeriques. -----------
// ------------------------------- NE PAS MODIFIER -----------------------------------------
for(i=0;i < collectElements.length;i++){

// Verification du contenu des champs numériques
if(collectElements[i].id.substr(0,9) == "customint" || collectElements[i].id.substr(0,12) == "fieldinteger"){

if(collectElements[i].value != ""){
if(isNaN(collectElements[i].value)){
MessErreur= MessErreur+"\t - "+collectElements[i].value+" n'est pas un chiffre. \n";
testUtil = eval(testUtil&0);
}
}

}

// Verification du contenu des champs date
if(collectElements[i].id.substr(0,10) == "customdate" || collectElements[i].id == "birthdate" || collectElements[i].id.substr(0,13) == "fielddatetime"){

if(collectElements[i].value != ""){
if(CheckDate(collectElements[i].value) == 0){
MessErreur= MessErreur+"\t - "+collectElements[i].value+" n'est pas sous la forme JJ/MM/AAAA. \n";
testUtil = eval(testUtil&0);
}
}

}

}
// -------- Fin vérification de la syntaxe des champs date et des champs numeriques. --------

// ----------------------- Ne pas modifier la partie ci-dessous ----------------------------
if(testUtil == 1){
CallService();
return false;}
else alert(MessErreur);
}
function IsMemberExist(response){
if(response) return ConfirmMemberExist();
else document.AbonnementDOLIST.submit();
}
function ConfirmMemberExist() {
if (confirm('Votre email est déjà présent. Souhaitez-vous mettre à jour votre profil ?')) {document.AbonnementDOLIST.submit();}}
function CallService(){
var service = new WS('http://f.info.defenseurdesdroits.fr/Services/FormService.asmx', WSDataType.jsonp);
service.call("GetEmail", { listId: $("#do_ListId").val(), email: $("#email").val()}, IsMemberExist);
}
//---------------------------------------------------------------------------------------------------
</script>
<script src="http://f.info.defenseurdesdroits.fr/script/jquery-1.3.2.min.js" type="text/javascript"></script>
<script src="http://f.info.defenseurdesdroits.fr/script/jMsAjax.js" type="text/javascript"></script>
<script src="http://f.info.defenseurdesdroits.fr/script/WS.js" type="text/javascript"></script>
</head>
<body>
<!-- Initialisation données -->
<form NAME='AbonnementDOLIST' METHOD='post' action='http://f.info.defenseurdesdroits.fr/sw/default.aspx' accept-charset='UTF-8' >
<input type="hidden" name='do_ListId' id='do_ListId' value='828'>
<input type="hidden" name="do_IdSubscribe" value="3">
<input type="hidden" name='do_redirect' value="http://www.defenseurdesdroits.fr/newsletter-valide">
<input type="hidden" name='do_SponsorId' value="[SPIDKC]">
<!-- Vérification champs-->

<table border=0>
<tr>
<td align="right">Civilité : </td>
<td><select name="do_field_17_31">
<option value="">- Faites votre choix -</option>
<option value="1">Madame</option>
<option value="3">Monsieur</option>
</select></td>
</tr>
<tr>
<td align="right">Nom<font color="#FF0000"> * </font> : </td>
<td><input type="Text" id="lastname" Name="do_field_14_2" maxlength="64"></td>
</tr>
<tr>
<td align="right">Prénom<font color="#FF0000"> * </font> : </td>
<td><input type="Text" id="firstname" Name="do_field_15_1" maxlength="64"></td>
</tr>
<tr>
<td align="right">Société / Organisme : </td>
<td><input type="Text" id="company" Name="do_field_16_3" maxlength="128"></td>
</tr>
<tr>
<td align="right">Adresse e-mail<font color="#FF0000"> * </font> : </td>
<td><input type="Text" id="email" Name="do_field_13_7"></td>
</tr>
<tr>
<td align="right">Veuillez ressaisir votre Adresse e-mail<font color="#FF0000"> * </font> : </td>
<td><input type="Text" id="controlEmail" name="controlEmail" onpaste="return false;"></td>
</tr>
<input type="hidden" name="do_interest_27" value="154" />

<tr>
<td>Les champs marqués d'un <font color='#FF0000'> * </font> sont obligatoires.<br><br></td>
</tr>
<!-- Boutons interactifs -->
<tr>
<td align=right><input type='button' value='Inscription' onclick='valid();'></td>
<td><input type='reset' value='Effacer formulaire'></td>
</tr>
</table>
</form>