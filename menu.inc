<?php
function mli($url,$namelink,$img="http://cdn3.iconfinder.com/data/icons/google-material-design-icons/48/ic_keyboard_arrow_right_48px-128.png",$imgcss=" width:24px;"){ 
    return '<li><a href="'.$url.'" ><img style="'.$imgcss.'" src="'.$img.'" /> '.$namelink.'</a>';
}
function mli_($url,$namelink,$img="http://cdn3.iconfinder.com/data/icons/google-material-design-icons/48/ic_keyboard_arrow_right_48px-128.png",$imgcss=" width:24px;"){ 
    return '<li><a href="'.$url.'" target="_blank" ><img style="'.$imgcss.'" src="'.$img.'" /> '.$namelink.'</a>';
}
function mliq($url,$namelink,$img="http://cdn3.iconfinder.com/data/icons/google-material-design-icons/48/ic_keyboard_arrow_right_48px-128.png",$imgcss=" width:24px;"){ 
    return '<li><a href="'.$url.'" ><img style="'.$imgcss.'" src="'.$img.'" /> '.$namelink.'</a></li>';
}
function mliq_($url,$namelink,$img="http://cdn3.iconfinder.com/data/icons/google-material-design-icons/48/ic_keyboard_arrow_right_48px-128.png",$imgcss=" width:24px;"){ 
    return '<li><a href="'.$url.'" target="_blank" ><img style="'.$imgcss.'" src="'.$img.'" /> '.$namelink.'</a></li>';
}
echo addcss("menu.css");
?>
<div class="containermenu">
<ul id="nav">


<!-- Inicio -->
	<?php echo mli_("index.php","Inicio","https://s20.directupload.net/images/220106/73v493k3.png");?>
    <div class="subs">
    <div class="col">
        <ul>
        <?php echo mli_("http://www.facebook.com/","Facebook","https://s20.directupload.net/images/220106/ul8kwwid.png");
		?>
            <div class="subs">
                <div class="col">
<ul>
<?php
echo "".
mliq_('http://www.facebook.com/groups/436793206420443','Celulares Baratos Cochabamba').
mliq_('http://www.facebook.com/groups/CelularesCbba','CelularesCbba').
mliq_('http://www.facebook.com/groups/1536469333341536','Venta de Computadoras, Laptops y Accesorios COCHABAMBA (Nuevas o Usadas)').
mliq_('http://www.facebook.com/groups/407306279463460','Venta de Accesorios para COMPUTADORAS COCHABAMBA').
mliq_('http://www.facebook.com/groups/219265151597516','VENTA DE AUTOS Y MOTOS COCHABAMBA').
mliq_('http://www.facebook.com/groups/1687967368094985','AUTO-VENTA COCHABAMBA').
mliq_('http://www.facebook.com/groups/ddyfree/','BARRIO CHINO COCHABAMBA').
mliq_('http://www.facebook.com/groups/estudiantevende','ESTUDIANTE VENDE COCHABAMBA').
'';
?>
</ul>
                </div>
            </div>     
        </li>   
        <?php echo mli_("http://www.youtube.com/","Youtube","https://s20.directupload.net/images/220106/a2wj6cwu.png");?>
            <div class="subs">
                <div class="col">
<?php
echo "<ul>".
mliq_('https://www.youtube.com/feed/trending','2Popular on YouTube').
mliq_('http://www.youtube.com/playlist?list=PLFgquLnL59alW3xmYiWRaoz0oM3H17Lth','New Music This Week').
mliq_('http://www.youtube.com/channel/UC-9-kyTW8ZkZNDHQJ6FgpwQ','Music'). 
mliq_('http://www.youtube.com/channel/UCEgdi0XIXXZ-qJOFPf4JSKw','Sports'). 
mliq_('http://www.youtube.com/channel/UCOpNcN46UbXVtpKMrmU4Abg','Gaming'). 
mliq_('http://www.youtube.com/channel/UCYfdidRxbB8Qhf0Nx7ioOYw','News').  
mliq_('https://www.youtube.com/results?search_query=Bolivia&sp=CAI%253D','Noticias recientes de Bolivia').
mliq_('https://www.youtube.com/results?search_query=pelicula&sp=CAISBhABGAIgAQ%253D%253D','Ultimas Peliculas').
mliq_('https://www.youtube.com/results?search_query=documental&sp=CAISBBABGAI%253D','Documentales recientes').
mliq_('https://www.youtube.com/results?search_query=predica&sp=CAISBBABGAI%253D','Predicas recientes').
mliq_('https://www.youtube.com/results?search_query=curso&sp=CAISBBABGAI%253D','Cursos').
mliq_('https://www.youtube.com/results?search_query=como+reparar&sp=CAI%253D','Como reparar').
mliq_('https://www.youtube.com/results?search_query=As%C3%AD+funciona&sp=CAISBBABGAM%253D','Asi funciona').
mliq_('https://www.youtube.com/results?search_query=audiolibro+espa%C3%B1ol&sp=CAISBBABGAI%253D','Audiolibros').
mliq_('http://www.youtube.com/results?sp=CAISAggEUBQ%253D&q=ser+un+buen+youtuber','ser buen youtuber').
'</ul>';
?> 
                </div>
            </div>
        </li>
        
        </ul>
    </div>
    </div>
    </li>

<!--APRENDE -->
    <li><a href="#"><span>
       Aprende...</span></a>
    <div class="subs">
        <div class="col">
	<ul>
<?php  
echo 
mliq_("http://localhost/w/aprende","tutoriales").
mliq_("http://localhost/w/libros","libros").
'';
?> 	</ul>   
        </div>
    </div>
    </li>
	
    <!--TECNOLOGIA -->
    <li><a href="#"><span>
        Negocios...</span></a>
    <div class="subs">
        <div class="col">
	<ul>
<?php  
echo 
mliq("http://localhost/w/celulares/","Cell's/Celulares").
mliq("http://localhost/w/computadoras","Computers/Computadoras").
mliq_("http://www.dhl.com.bo/content/dam/downloads/bo/express/es/shipping/rate_guide/dhl_express_rate_transit_guide_bo_es.pdf","Tarifas-DHL-Bolivia").
'';
?> 	</ul>   
        </div>
    </div>
    </li>   
	
	
    <!--musica-->
    <li><a href="#"><span> 
        Musica</span></a>
    <div class="subs">
        <div class="col">
        <ul>
        <li><a href="#">
            <img src="https://i.postimg.cc/rssWnHYr/m64c.png" width="32" /> En linea</a>
            <div class="subs">
                <div class="col">
<?php
echo "<ul>".
mliq_('musica',"actuales",'https://i.postimg.cc/L6YTTqP8/u2b64.png').
mliq_('radios',"radios en linea",'https://i.postimg.cc/SKPyMbj0/radio.png').
mliq_('https://www.spotify.com/',"spotify",'https://i.postimg.cc/66PYsVLX/s.png').
mliq_('https://www.accuradio.com/',"accuradio",'https://i.postimg.cc/YSbYkkFP/acuradio.png').
mliq_('https://music.cliggo.com/',"cliggo",'https://i.postimg.cc/Qdv3HW3G/c.png').
mliq_('https://www.jango.com/',"jango",'https://i.postimg.cc/MZ3r6Jwg/j.png').
'</ul>';
?>
                </div>
            </div>
        </li>     
        <li><a href="#"><img src="https://i.postimg.cc/wxkRL9Mb/au64.png" width="32" />pasados</a>
            <div class="subs">
                <div class="col">
<?php
echo "<ul>".
mliq_('http://localhost/w/sites/2010s.php',"2020's",'').
mliq_('http://localhost/w/sites/2010s.php',"2010's",'http://forums.tomisimo.org/images/smilies/question-mark.gif').
mliq_('http://localhost/w/sites/2000s.php',"2000's",'http://ichef.bbci.co.uk/images/ic/256x256/p02l4wr2.jpg').
mliq_('http://localhost/w/sites/1990s.php',"90's",'https://i.postimg.cc/rsC8Xy00/bs128.png').
mliq_('http://localhost/w/sites/1980s.php',"80's",'http://www.hola.com/imagenes/biografias/michael-jackson/79629-jackson10.jpg').
mliq_('http://localhost/w/sites/1970s.php',"70's",'https://i.postimg.cc/1Xxt1YvT/a64.png').
mliq_('http://localhost/w/sites/1960s.php',"60's",'https://i.postimg.cc/Gpsqm4cf/b64.jpg').
mliq_('http://localhost/w/sites/1950s.php',"50's",'https://i.postimg.cc/bwPzTt5x/e64.png').
'</ul>';
?>
                </div>
            </div>
        </li>
        <li><a href="#">
            <span><img src="http://www.teleus.com.au/resources/images/admin/submenu_icon.gif" /> Artistas</span></a>
            <div class="subs">
            <div class="col">               
<?php
echo '<ul>'.
mliq_('#',"artista1").
mliq_('#',"artista1").
'</ul>';
?>              
            </div>    
            </div>
        </li>
    </ul>
    </div>
    </div>
    </li>

	<!--videos-->
    <li><a href="#"><span> 
        Videos</span></a>
    <div class="subs">
        <div class="col">
        <ul>
		
        <li><a href="#">
            <span>
            <img src="data:image/jpeg;base64,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" width="30" />
            Peliculas</span></a>
            <div class="subs">
                <div class="col">
<?php 
echo '<ul>'.
mliq_('http://localhost/w/peliculas','de youtube').
mliq_('https://www.popcornflix.com/','popcornflix').
mliq_('https://movidy.co/','modivy').
mliq_('https://netflix.10s.live/','netflix10slive').
mliq_('https://www.zonadeporteshd.me/','zonadeporteshd').
mliq_('https://verpelisonline.tv/','ver-pelis').
mliq_('https://aquipelis.net','aquipelis').
mliq_('https://www.peelink2.net','peelink2').
mliq_('https://cinetux.nu','cinetux').
mliq_('https://https://cuevana3.live/','la cuevana').
mliq_('https://pelisplus.me/','pelis y series').
mliq_('https://https://pelisplus.live/','pelis y series').
mliq_('https://www.pelisplanet.com','pelisplanet').
mliq_('https://animeflv.ac','animeflv').
mliq_('https://www.animeid.tv/','animeid').
mliq_('https://jkanime.net/','jkanime').
mliq_('https://www.crunchyroll.com','crunchyroll').
mliq_('https://animeblix.com/','animeblix').
mliq_('https://tioanime.com/','tioanime').
mliq_('https://animefenix.com/','animefenix').
mliq_('https://ytanime.tv/','ytanime').
mliq_('https://monoschinos.com/','monoschinos').
mliq_('http://localhost/w/peliculas/descargar',' >> descargar').
mliq_('https://www.programasvirtualespc.net/peliculas','programasvirtualespc').
mliq_('#','NOTICIAS otaku').
mliq_('http://portalotakuweb.wordpress.com/','portalotakuweb').
mliq_('http://ramenparados.com/','ramenparados').


'</ul>';
?>
                </div>
            </div>
        </li>
        
        <li><a href="http://localhost/w/series/">
            <span><img src="data:image/jpeg;base64,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"  width="30" />
			Series</span></a>
            <div class="subs">
            <div class="col">
                
<?php
echo '<ul>'.
mliq_('http://localhost/w/series/ashvsevil/',"Ash vs Evil 16+").
mliq_('http://localhost/w/series/dragonballsuper/',"Dragon Ball Super 6+").
mliq_('http://localhost/w/series/fullmetalalchemist/',"Full Metal Alchemist 14+").
mliq_('http://localhost/w/series/theflash/',"The Flash 12+").
mliq_('http://localhost/w/series/yuyuhakusho/',"Yu Yu Hakusho 14+").
'</ul>';
?>           
                
            </div>    
            </div>
        </li>
    </ul>
    </div>
    </div>
    </li>
	
 <!--webs -->
    <li><a href="#"><span> 
        Sitios Webs </span></a>
    <div class="subs">
        <div class="col">     
        <ul>

	<!--news noticias -->
    <li><a href="#"><span>   Noticias</span></a>
    <div class="subs">
        <div class="col">
<?php 
echo '<ul>'.
mliq_('https://www.wsj.com/pro/cybersecurity','cibersecurity').
mliq_('http://www.profesionalreview.com/','profesionalreview').
'</ul>';
?>
    </div>
    </div>
    </li>

	
 <!--memes -->
    <li><a href="#">
    <span>Humor y memes</span></a>
    <div class="subs">
        <div class="col">
<?php
echo '<ul>'.
mliq_('http://memegenerator.net/',"memegenerator").
mliq_('http://es.memedroid.com',"memedroid").
mliq_('http://www.memes.com/generator',"memes.com").
mliq_('http://imgflip.com/memegenerator',"imgflip").
mliq_('#','_________').
mliq_('http://estrenos10.com',"estrenos10").
mliq_('http://www.estadepelis.net',"estadepelis").
mliq_('#','___UTILES___').
mliq_('https://dictation.io/',"Dictado een linea").
mliq_('https://www.pdfescape.com/',"Editor PDF").
mliq_('https://meet.jit.si/',"Reuniones Jitsi").
mliq_('#','___audio___').
mliq_('https://www.bensound.com/',"Bensound").
mliq_('https://studio.youtube.com/channel/UCP4jYpHvKTlAP3X7lVMR2Sg/music',"Biblioteca de audio u2n").
mliq_('https://freepd.com/',"freepd.com").
mliq_('https://freemusicarchive.org/',"freemusicarchive.org").
mliq_('http://freemusicpublicdomain.com/',"freemusicpublicdomain").
mliq_('https://www.freemusicpublicdomain.com/',"freemusicpublicdomain").
mliq_('https://www.joshwoodward.com/',"joshwoodward").
mliq_('https://tobu.io/',"tobu").
mliq_('https://mixkit.co/free-stock-music/',"mixkit").
mliq_('https://mobygratis.com/',"mobygratis").
mliq_('https://musopen.org/',"musopen").
mliq_('https://www.pastemagazine.com/music',"pastemagazine").
mliq_('https://www.purple-planet.com/',"purple-planet").
mliq_('https://www.bensound.com/royalty-free-music',"bensound").
mliq_('http://teknoaxe.com/Home.php',"teknoaxe").
'</ul>';
?>      
    </div>
    </div>
    </li>
    
<!--imagenes -->
    <li><a href="#">
    <span>Imagenes</span></a>
    <div class="subs">
        <div class="col">
<?php
echo '<ul>'.
mliq_('#',"---editar").
mliq_('http://webresizer.com/resizer/',"webresizer").
mliq_('https://www.remove.bg/',"remover fondo").
mliq_('#',"---subir").
mliq_('http://www.directupload.net/','directupload').
mliq_('http://postimages.org/','postimages').
mliq_('http://www.flickr.com/','flickr (registro)').
mliq_('http://i.ibb.co/','imgbb').
mliq_('http://imgur.com/','imgur').
mliq_('https://www.remove.bg/',"Remove Image Background").
mliq_('http://www.subirimagenes.com/',"subir imagenes").
mliq_('https://filesharing24.com/',"subir archivos hasta 100mb").
mliq_('https://wetransfer.com/',"subir archivos hasta 2gb").
'</ul>';
?>
    </div>
    </div>
    </li>
    </ul>
    </div>
    </div>
    </li>
<!--Software        -->
    <li><a href="http://localhost/w/programas"><span>
        Programas</span></a>
    <div class="subs">
        <div class="col">
            <ul>
            <li><a href="http://localhost/w/juegos">
            <span>JUEGOS</span></a>
            <div class="subs">
                <div class="col">
<?php
echo '<ul>'. 
mliq_('http://www.twitch.tv','.tv','http://wwwhatsnew.com/wp-content/uploads/2014/08/TwitchTV-logo.png',"width: 64px;").
mliq_('http://store.steampowered.com/about/','>','http://store.akamai.steamstatic.com/public/shared/images/header/globalheader_logo.png',"width: 64px;").
mliq_('http://www.nvidia.es/object/all-pc-games-es.html','nvidia').
mliq_('http://www.amd.com/es-xl/innovations/software-technologies/technologies-gaming','amd').
'</ul>';
?>
                </div>
            </div>
            <li><a href="#">
            <span><img src="http://es.seaicons.com/wp-content/uploads/2016/06/Network-Download-icon.png" width="30" />DD/DESCARGA DIRECTA</span></a>
            <div class="subs">
                <div class="col">
<?php
echo '<ul>'. 
mliq_('http://www.programasvirtualespc.net',"programasvirtualespc").
mliq_('http://www.legionprogramas.org',"legionprogramas").
mliq_('http://www.megawarez.org',"megawarez").
mliq_('http://www.intercambiosvirtuales.org',"intercambiosvirtuales.org").
mliq_('http://programas24-7.com',"programas24-7").
mliq_('http://www.taringa.net/',"taringa.jpg").
mliq_('http://karanpc.com',"karanpc").
mliq_('http://avxhome.se',"AvaxHome").
mliq_('http://www.fiuxy.co/',"fiuxy.com").
mliq_('http://downcargas.com/',"downcargas.com").
mliq_('http://ba-k.com/',"ba-k.com").
mliq_('#','__________').
mliq_('http://www.deluxedescargas.com/','deluxedescargas').
mliq_('http://sanet.cd/','sanet.cd').
mliq_('http://www.boroz123.xyz/search/label/software','boroz123.xyz').
mliq_('http://www.servicio-software.net/','servicio-software').
mliq_('http://filehippo.com','filehippo').
mliq_('http://www.todofullsoft.com','todofullsoft').
mliq_('http://phovui.vietbao.com/','phovui.vietbao.com').
mliq_('http://www.abueloinformatico.es/','abueloinformatico').
mliq_('http://recursosarquitecturablog.wordpress.com/','recursosarquitecturablog').
mliq_('http://www.bajenlo.com','bajenlo.com').
mliq_('http://downloadly.ir/software/','downloadly.ir').
'</ul>';
?>
                </div>
            </div>
			
            </li>
<li><a href="#">
            <span><img src="http://orig00.deviantart.net/eaba/f/2016/114/5/f/mega_icon_2_by_fungumars-da02rvz.png" width="30" />
            SERVIDORES</span></a>
            <div class="subs">
                <div class="col">
<?php
echo '<ul>'. 
mliq_('http://mega.co.nz/','megadownload').
mliq_('http://www.mediafire.com/','mediafire').
mliq_('http://depositfiles.com/','depositfiles').
mliq_('http://www.zippyshare.com/','zippyshare').
mliq_('http://bitshare.com/','bitshare').
'</ul>';
?>
                </div>
            </div>
            </li>

            </ul>
        </div>
    </div>
    </li>

    <!--contador visitas-->
    <li>
    contador
    </li>
    
    </ul>
