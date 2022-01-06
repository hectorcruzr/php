<?php 
include ("inc/html.inc");
echo htmll().headt("Titulo de la web| Menos de 55 caracteres").
	metac().metanc("description","palabras clave entre 150 y 160 caracteres").
	linkrh("stylesheet","css/estilomycodestock.css");
echo headq().
	body().nav();
	include ("inc/menu.inc");  
	echo achtq("active","index.php"," <- este menu ya incluye su propio estilo menu.css");
echo navq().
	headert().h1tq("Titulo header").ptq("parrafo dentro de headers").
	headerq().
	section().article().h2tq("Titulo de section").ptq(" parrafo Contenido").
	articleq().
	sectionq().
	aside().h3tq("Titulo de aside").ptq("parrafo Contenido").
	asideq().
	footert("Footer").footerq().
	bodyq().htmlq();	

?>
