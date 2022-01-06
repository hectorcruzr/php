<?php
/**
 * @author hector cruz rocabado
 * @copyright 2019-2022
 */
function addcss($sourcecss="url"){
    return '<link href="'.$sourcecss.'" rel="stylesheet" type="text/css" />'; 
}
function addjs($src="jquery.js",$tipo="text/javascript"){
    return '<script type="'.$tipo.'" src="'.$src.'" />'; 
}
function html(){ 
return '<!DOCTYPE html>
<html>'."\n";
}
function htmlq(){ 
return '</html>';
}
function htmll(){ 
return '<!DOCTYPE html>
	<html lang="'.lenguaje().'">'."\n";
}
function htmlpl($lang="es"){ 
return '<!DOCTYPE html>
	<html lang="'.$lang.'">';
}
function head(){
return '<head>';
}
function headq(){ return '</head>'."\n"; 
}
function headt($title="titulo"){ //menos de 55 caracteres
	return '<head><title>'.$title.'</title>'."\n";
}
function headtq($title="titulo"){ //menos de 55 caracteres
	return '<head><title>'.$title.'</title></head>'."\n";
}

function meta(){ return '<meta>';
}
function metac($charset="utf-8"){ 
	return '<meta charset"'.$charset.'" />'."\n";
	}
function metah($he="descripcion",$c=""){ 
	return '<meta http-equiv="'.$he.'" content="'.$c.'" />'."\n";
	}
function metanc($name="descripcion",$c="nombre proyecto"){ 
	return '<meta name="'.$name.'" content="'.$c.'" />'."\n";
	}
function linkrh($rel="stylesheet",$href="https://www.w3schools.com/w3css/4/w3.css"){ 
	return '<link rel="'.$rel.'" href="'.$href.'" />'."\n";
	}
function linkrth($rel="stylesheet",$tipo="text/css",$href="https://www.w3schools.com/w3css/4/w3.css"){ 
	return '<link rel="'.$rel.'" type="'.$tipo.'" href="'.$href.'" />'."\n";
	}
function linkhrt($href="https://www.w3schools.com/w3css/4/w3.css",$rel="stylesheet",$tipo="text/css"){ 
	return '<link href="'.$href.'" rel="'.$rel.'" type="'.$tipo.'" />'."\n";
	}
function body(){
	return '<body>'."\n";
}
function bodys(){
	return '<body>'."\n";
}
function bodyq(){
	return '</body>'."\n";
}
function nav(){
	return '<nav>';
}
function navq(){
	return '</nav>';
}
function headert(){
	return '<header>';
}
function headerq(){
	return '</header>'."\n";
}
function section(){
	return '<section>';
}
function sectionq(){
	return '</section>'."\n";
}
function article(){
	return '<article>';
}
function articleq(){
	return '</article>'."\n";
}
function aside(){
	return '<aside>';
}
function asideq(){
	return '</aside>'."\n";
}
function footer(){
	return '<footer>';
}
function footerq(){
	return '</footer>'."\n";
}
function footert($title="titulo"){
	return '<footer>'.$title;
}
function footertq($title="titulo"){
	return '<footer>'.$title.'</footer>'."\n";
}
function divt($contenido=""){
	return '<div>'.$contenido;
}
function divq(){
	return '</div>';
}
function divtq($contenido=""){
	return '<div>'.$contenido.divq()."\n";
}
function divc($clase="clase_css"){
	return '<div class="'.$clase.'">';
}
function divct($clase="clase_css",$contenido=""){
	return '<div class="'.$clase.'">'.$contenido;
}
function divctq($clase="clase_css",$contenido=""){
	return '<div class="'.$clase.'">'.$contenido.divq()."\n";
}
function ul(){
	return '<>';
}
function uli($identificador="id"){
	return '<ul id="'.$identificador.'">';
}
function ulq(){
	return '</ul>';
}
function ol(){
	return '<>';
}
function oli($identificador="id"){
	return '<ol id="'.$identificador.'">';
}
function olq(){
	return '</ol>';
}
function li(){
	return '<>';
}
function lii($identificador="id"){
	return '<li id="'.$identificador.'">';
}
function liq(){
	return '</li>';
}

/*
function (){
	return '<>';
}
function (){
	return '<>';
}
function (){
	return '<>';
}
function (){
	return '<>';
}
*/
//TAGS
function scripts($source){
	return '<script src="'.$source.'"></script>'."\n";
}
function br(){
	return '<br>';
}	
function em(){
	return '<em>';
}
function emq(){
	return '</em>';
}

function emt($contenido="contenido em"){
	return '<em>'.$contenido;
}

function emtq($contenido="contenido em"	){
	return '<br>'.$contenido.emq()."\n";
}

function a(){
	return '<a>';
}
function aq(){
	return '</a>';
}
function ah($href="#"){
	return '<a href="'.$href.'">';
}
function aht($href="#",$text="texto"){
	return '<a href="'.$href.'">'.$text;
}
function ahtq($href="#",$text="texto"){
	return '<a href="'.$href.'">'.$text.aq()."\n";
}
function ach($clase="clase1", $href="#"){
	return '<a class="'.$clase.'" href="'.$href.'">';
}
function acht($clase="clase1", $href="#",$text="texto"){
	return '<a class="'.$clase.'" href="'.$href.'">'.$text;
}
function achtq($clase="clase1", $href="#",$text="texto"){
	return '<a class="'.$clase.'" href="'.$href.'">'.$text.aq()."\n";
}

function h1(){
	return '<h1>';
}
function h2(){
	return '<h2>';
}
function h3(){
	return '<h3>';
}
function h4(){
	return '<h4>';
}
function h5(){
	return '<h5>';
}
function h6(){
	return '<h6>';
}
function h1q(){
	return '</h1>';
}
function h2q(){
	return '</h2>';
}
function h3q(){
	return '</h3>';
}
function h4q(){
	return '</h4>';
}
function h5q(){
	return '</h5>';
}
function h6q(){
	return '</h6>';
}
function h1t($title="titulo1"){
	return '<h1>'.$title;
}
function h1tq($title="titulo1"){
	return '<h1>'.$title.h1q()."\n";
}
function h2t($title="titulo2"){
	return '<h2>'.$title;
}
function h2tq($title="titulo2"){
	return '<h2>'.$title.h2q()."\n";
}
function h3t($title="titulo3"){
	return '<h3>'.$title;
}
function h3tq($title="titulo3"){
	return '<h3>'.$title.h3q()."\n";
}
function h4t($title="titulo4"){
	return '<h4>'.$title;
}
function h4tq($title="titulo4"){
	return '<h4>'.$title.h4q()."\n";
}
function h5t($title="titulo5"){
	return '<h5>'.$title;
}
function h5tq($title="titulo5"){
	return '<h5>'.$title.h5q()."\n";
}
function h6t($title="titulo6"){
	return '<h6>'.$title;
}
function h6tq($title="titulo6"){
	return '<h6>'.$title.h6q()."\n";
}
function h1s($style=" ",$title="titulo1"){
	return '<h1 style"'.$style.'">'.$title;
}
function h2s($style=" ",$title="titulo2"){
	return '<h2 style"'.$style.'">'.$title;
}
function h3s($style=" ",$title="titulo3"){
	return '<h3 style"'.$style.'">'.$title;
}
function h4s($style=" ",$title="titulo4"){
	return '<h4 style"'.$style.'">'.$title;
}
function h5s($style=" ",$title="titulo5"){
	return '<h5 style"'.$style.'">'.$title;
}
function h6s($style=" ",$title="titulo6"){
	return '<h6 style"'.$style.'">'.$title;
}
function p(){
	return '<p>';
}
function pq(){
	return '</p>';
}
function pt($text="parrafo"){
	return '<p>'.$text;
}
function ptq($text="parrafo"){
	return '<p>'.$text.pq()."\n";
}
function span(){
	return '<span>';
}
function spanq(){
	return '</span>';
}
function spant($contenido){
	return '<span>'.$contenido;
}
function spanct($clase="clase_css", $contenido="span contenido"){
	return '<span class="'.$clase.'">'.$contenido;
}
function spancst($clase="clase_css", $style="",$contenido="span contenido"){
	return '<span class="'.$clase.'" style="'.$style.'">'.$contenido;
}
function spanctq($clase="clase_css", $contenido="span contenido"){
	return '<span class="'.$clase.'">'.$contenido.spanq()."\n";
}
function spancstq($clase="clase_css", $style="",$contenido="span contenido"){
	return '<span class="'.$clase.'" style="'.$style.'">'.$contenido.spanq()."\n";
}

/*
function (){
	return '<>';
}
function (){
	return '<>';
}
*/
// ejm de plantilla
function ejm00(){
return html().headtq("Page Title").
	body().h1tq("This is Heading").ptq("This is a paragraph").
	bodyq().htmlq();	
}
function ejm01(){
// css https://mycodestock-sandbox.com/sandbox/css/13092?key=
return 
htmll().
	headtq("Titulo de la web| Menos de 55 caracteres").
	linkrh("stylesheet","css/ejm01.css").
	body().nav().ptq("menu op1 op2").navq().
	headert().h1tq("Mi sitio web").ptq("en HTML5").
	headerq().
	section().article().h2tq("Titulo del contenido").ptq("Contenido").
		articleq().
	sectionq().
	aside().h3tq("Titulo del contenido").ptq("Contenido").asideq().
	footertq("Creado por un tipo").
	bodyq().htmlq();	
}

function ejm02(){
// css https://mycodestock-sandbox.com/sandbox/css/13092?key=
return 
htmll().headt("Titulo de la web| Menos de 55 caracteres").
	metac().metanc("description","palabras clave entre 150 y 160 caracteres").
	linkrh("stylesheet","estilomycodestock.css").
	headq().
	body().nav().
		achtq("active","index.php","Inicio").
		ahtq("uno.htm","Uno").
		ahtq("dos.htm","Dos").
		ahtq("tres.htm","Tres").
	navq().
	headert().h1tq("Mi sitio web").
			ptq("en HTML5").
	headerq().
	section().article().h2tq("Titulo del contenido").
			ptq("Contenido").
	articleq().
	sectionq().
	aside().h3tq("Titulo del contenido").
			ptq("Contenido").
	asideq().
	footert("Creado por un tipo").footerq().
	bodyq().htmlq();	
}

//detecta el idioma del navegador del cliente
function lenguaje() { 
return substr($_SERVER["HTTP_ACCEPT_LANGUAGE"],0,2); 
}
?>