#ifndef __M2WEIGHT_H_
#define __M2WEIGHT_H_
#include "MayhemHeights.h"
#define DEFAULT_WEIGHT (10000)
#define CALC_WEIGHT \
w=0; \
\
/*First, the units that have weight values. Mainly determined by footprint size (with some exceptions)*/\
\
w=w+(h==ARMAAS)*800+(h==ARMACH)*96+(h==ARMACK)*6+(h==ARMACSUB)*800+(h==ARMACV)*96+(h==ARMAH)*96;\
w=w+(h==ARMAMPH)*6+(h==ARMANAC)*96+(h==ARMARSPD)*800+(h==ARMARTH)*4000+(h==ARMASER)*6+(h==ARMBATS)*8000;\
w=w+(h==ARMBH)*6+(h==ARMBOA)*96+(h==ARMBULL)*96+(h==ARMCARRY)*8000+(h==ARMCH)*6+(h==ARMCIPH)*96;\
w=w+(h==ARMCK)*6+(h==ARMCOM)*96+(h==ARMCROC)*6+(h==ARMCRUS)*4000+(h==ARMCS)*800+(h==ARMCV)*96;\
w=w+(h==ARMDECOM)*96+(h==ARMDH)*96+(h==ARMDUKE)*96+(h==ARMFARK)*6+(h==ARMFAST)*6+(h==ARMFAV)*6;\
w=w+(h==ARMFH)*96+(h==ARMFIDO)*6+(h==ARMFLASH)*6+(h==ARMFLEA)*6+(h==ARMG2)*4000+(h==ARMGS)*4000;\
w=w+(h==ARMHAM)*6+(h==ARMHH)*96+(h==ARMHRK)*6+(h==ARMIMPAL)*800+(h==ARMIND)*800+(h==ARMJACK)*800;\
w=w+(h==ARMJAM)*6+(h==ARMJETH)*6+(h==ARMLATNK)*6+(h==ARMLMART)*6+(h==ARMMANNI)*96+(h==ARMMARK)*6;\
w=w+(h==ARMMART)*96+(h==ARMMAV)*6+(h==ARMMERL)*96+(h==ARMMH)*96+(h==ARMMINE2)*96+(h==ARMMLS)*800;\
w=w+(h==ARMMLV)*6+(h==ARMMOOSE)*96+(h==ARMMSHIP)*4000+(h==ARMODIN)*6+(h==ARMORCA)*800+(h==ARMPHOVR)*800;\
w=w+(h==ARMPIKE)*4000+(h==ARMPT)*800+(h==ARMPW)*6+(h==ARMRAZ)*800+(h==ARMRESPD)*96+(h==ARMROCK)*6;\
w=w+(h==ARMROY)*800+(h==ARMSAM)*96+(h==ARMSCAB)*800+(h==ARMSCORP)*96+(h==ARMSCRAM)*96+(h==ARMSCUDD)*800;\
w=w+(h==ARMSEER)*96+(h==ARMSH)*6+(h==ARMSNIPE)*96+(h==ARMSPDAA)*6+(h==ARMSPID)*96+(h==ARMSPY)*6;\
w=w+(h==ARMSS)*800+(h==ARMSTUMP)*6+(h==ARMSUB)*96+(h==ARMSUBK)*96+(h==ARMTEM)*800+(h==ARMTICK)*6;\
w=w+(h==ARMTIGER)*800+(h==ARMTOM)*800+(h==ARMVADER)*6+(h==ARMVANG)*800+(h==ARMWAR)*6+(h==ARMWOLF)*800;\
w=w+(h==ARMXCH)*96+(h==ARMXCK)*96+(h==ARMXCSUB)*800+(h==ARMXCV)*800+(h==ARMXJAM)*96+(h==ARMYORK)*96;\
w=w+(h==ARMZEPH)*4000+(h==ARMZEUS)*6;\
w=w+(h==CORACH)*96+(h==CORACK)*6+(h==CORACSUB)*800+(h==CORACV)*96+(h==CORADON)*800+(h==CORADVRH)*800;\
w=w+(h==CORAH)*96+(h==CORAIRRT)*800+(h==CORAK)*6+(h==CORAMPH)*6+(h==CORARCH)*4000+(h==CORARTH)*800;\
w=w+(h==CORBATS)*8000+(h==CORBEETL)*6+(h==CORBH)*6+(h==CORBOSS)*96+(h==CORCAN)*6+(h==CORCARRY)*8000;\
w=w+(h==CORCH)*6+(h==CORCK)*6+(h==CORCOM)*96+(h==CORCRASH)*6+(h==CORCREM)*96+(h==CORCRUS)*4000;\
w=w+(h==CORCRUST)*800+(h==CORCS)*800+(h==CORCV)*96+(h==CORDECOM)*96+(h==CORDH)*96+(h==CORETER)*6;\
w=w+(h==CORFAST)*6+(h==CORFAV)*6+(h==CORFDEV)*800+(h==CORFH)*96+(h==CORGATOR)*6+(h==CORGOL)*96;\
w=w+(h==CORHATCH)*6+(h==CORHH)*96+(h==CORHRK)*6+(h==CORJUP)*800+(h==CORKETZ)*800+(h==CORLEVLR)*6;\
w=w+(h==CORLMART)*6+(h==CORMABM)*96+(h==CORMART)*96+(h==CORMDOOM)*800+(h==CORMH)*96+(h==CORMINE1)*96;\
w=w+(h==CORMIST)*96+(h==CORMLS)*800+(h==CORMLV)*6+(h==CORMMTH)*96+(h==CORMORT)*6+(h==CORMSHIP)*4000;\
w=w+(h==CORNECRO)*96+(h==COROMNI)*4000+(h==CORPEN)*96+(h==CORPHOVR)*800+(h==CORPREC)*800+(h==CORPROTEUS)*800;\
w=w+(h==CORPT)*800+(h==CORPYRO)*6+(h==CORRAID)*6+(h==CORRATTLE)*800+(h==CORREAP)*96+(h==CORREAVR)*96;\
w=w+(h==CORREX)*4000+(h==CORROACH)*6+(h==CORROY)*4000+(h==CORSAT)*96+(h==CORSCORP)*96+(h==CORSEAL)*6;\
w=w+(h==CORSENT)*96+(h==CORSH)*6+(h==CORSHARK)*96+(h==CORSJAM)*800+(h==CORSLING)*96+(h==CORSNAP)*96;\
w=w+(h==CORSNIPE)*96+(h==CORSPEC)*6+(h==CORSPY)*6+(h==CORSS)*96+(h==CORSSUB)*4000+(h==CORSTORM)*6;\
w=w+(h==CORSUB)*96+(h==CORSUMO)*96+(h==CORTHUD)*6+(h==CORTRUCK)*96+(h==CORVICE)*800+(h==CORVIKNG)*800;\
w=w+(h==CORVOYR)*6+(h==CORVRAD)*96+(h==CORVROC)*96+(h==CORXCH)*800+(h==CORXCK)*96+(h==CORXCS)*4000;\
w=w+(h==CORXCV)*800+(h==CORXJAM)*96;\
/*Finally, the unknown units*/\
if(w==0) \
{ \
	w=DEFAULT_WEIGHT; \
} \
// Also, hope as strongly as you can that there's isn't any two units with the same height but different TCLASS.
// So, from now on, all we have to do is
//
// var h,w;
// h=get UNIT_HEIGHT(id);
// CALC_WEIGHT
//
// and automatically will take the value of the transportation cost of the unit of id id.
#endif