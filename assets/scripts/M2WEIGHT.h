#ifndef __M2SIZE_H_
#define __M2SIZE_H_
#include "MayhemHeights.h"
#define DEFAULT_WEIGHT (10000)
#define CALC_WEIGHT \
w=0; \
\
/*First, the units that have weight values. Mainly determined by footprint size (with some exceptions)*/\
\
w=w+(h==ARMAAS)*800+(h==ARMACH)*96+(h==ARMACK)*6+(h==ARMACV)*96+(h==ARMAH)*96+(h==ARMAMPH)*6;\
w=w+(h==ARMANAC)*96+(h==ARMARSPD)*800+(h==ARMARTH)*4000+(h==ARMASER)*6+(h==ARMBATS)*8000+(h==ARMBH)*6;\
w=w+(h==ARMBOA)*96+(h==ARMBULL)*96+(h==ARMCARRY)*8000+(h==ARMCH)*6+(h==ARMCIPH)*6+(h==ARMCK)*6;\
w=w+(h==ARMCOM)*96+(h==ARMCROC)*6+(h==ARMCRUS)*4000+(h==ARMCS)*800+(h==ARMCV)*96+(h==ARMDH)*96;\
w=w+(h==ARMDUKE)*96+(h==ARMFARK)*6+(h==ARMFAST)*6+(h==ARMFAV)*6+(h==ARMFH)*96+(h==ARMFIDO)*6;\
w=w+(h==ARMFLASH)*6+(h==ARMFLEA)*6+(h==ARMG2)*4000+(h==ARMGS)*4000+(h==ARMHAM)*6+(h==ARMHH)*96;\
w=w+(h==ARMHRK)*6+(h==ARMIMPAL)*800+(h==ARMJACK)*800+(h==ARMJAM)*6+(h==ARMJETH)*6+(h==ARMLATNK)*6;\
w=w+(h==ARMLMART)*6+(h==ARMMANNI)*96+(h==ARMMARK)*6+(h==ARMMART)*96+(h==ARMMAV)*6+(h==ARMMERL)*96;\
w=w+(h==ARMMINE2)*96+(h==ARMMH)*96+(h==ARMMLS)*800+(h==ARMMLV)*6+(h==ARMMOOSE)*96+(h==ARMMSHIP)*4000;\
w=w+(h==ARMODIN)*6+(h==ARMORCA)*800+(h==ARMPHOVR)*800+(h==ARMPT)*800+(h==ARMPW)*6+(h==ARMRAZ)*800;\
w=w+(h==ARMROCK)*6+(h==ARMROY)*800+(h==ARMSAM)*96+(h==ARMSCAB)*800+(h==ARMSCORP)*96+(h==ARMSCUDD)*800;\
w=w+(h==ARMSEER)*96+(h==ARMSH)*6+(h==ARMSHOCK)*96+(h==ARMSJAM)*800+(h==ARMSNIPE)*96+(h==ARMSPDAA)*6;\
w=w+(h==ARMSPDJ)*6+(h==ARMSPDR)*6+(h==ARMSPID)*96+(h==ARMSPY)*6+(h==ARMSS)*800+(h==ARMSTUMP)*6;\
w=w+(h==ARMTARAN)*800+(h==ARMTEM)*800+(h==ARMTIGER)*800+(h==ARMTOM)*800+(h==ARMVADER)*6+(h==ARMVANG)*800;\
w=w+(h==ARMWAR)*6+(h==ARMWOLF)*800+(h==ARMXCH)*96+(h==ARMXCK)*96+(h==ARMXCV)*800+(h==ARMYORK)*96;\
w=w+(h==ARMZEPH)*4000+(h==ARMZEUS)*6;\
w=w+(h==CORACH)*96+(h==CORACK)*6+(h==CORACV)*96+(h==CORADON)*800+(h==CORADVRH)*800+(h==CORAH)*96;\
w=w+(h==CORAIRRT)*800+(h==CORAK)*6+(h==CORAMPH)*6+(h==CORARCH)*4000+(h==CORARTH)*800+(h==CORBATS)*8000;\
w=w+(h==CORBEETL)*6+(h==CORBH)*6+(h==CORBOSS)*96+(h==CORCAN)*6+(h==CORCARRY)*8000+(h==CORCH)*6;\
w=w+(h==CORCK)*6+(h==CORCOM)*96+(h==CORCRASH)*6+(h==CORCREM)*96+(h==CORCRUS)*4000+(h==CORCRUST)*800;\
w=w+(h==CORCS)*800+(h==CORCV)*96+(h==CORDH)*96+(h==CORETER)*6+(h==CORFAST)*6+(h==CORFAV)*6;\
w=w+(h==CORFDEV)*800+(h==CORFH)*96+(h==CORGATOR)*6+(h==CORGOL)*96+(h==CORHH)*96+(h==CORHRK)*6;\
w=w+(h==CORJUP)*800+(h==CORKETZ)*800+(h==CORLEVLR)*6+(h==CORLMART)*6+(h==CORMABM)*96+(h==CORMART)*96;\
w=w+(h==CORMDOOM)*800+(h==CORMH)*96+(h==CORMINE1)*96+(h==CORMIST)*96+(h==CORMLS)*800+(h==CORMLV)*6;\
w=w+(h==CORMMTH)*96+(h==CORMORT)*6+(h==CORMSHIP)*4000+(h==CORNECRO)*96+(h==COROMNI)*4000+(h==CORPHOVR)*800;\
w=w+(h==CORPREC)*800+(h==CORPROTEUS)*800+(h==CORPT)*800+(h==CORPYRO)*6+(h==CORRAID)*6+(h==CORRATTLE)*800;\
w=w+(h==CORREAP)*96+(h==CORREAVR)*96+(h==CORREX)*4000+(h==CORROACH)*6+(h==CORROY)*4000+(h==CORSAT)*96;\
w=w+(h==CORSCAN)*96+(h==CORSCORP)*96+(h==CORSEAL)*6+(h==CORSENT)*96+(h==CORSH)*6+(h==CORSJAM)*800;\
w=w+(h==CORSLING)*96+(h==CORSNAP)*96+(h==CORSNIPE)*96+(h==CORSPEC)*6+(h==CORSPY)*6+(h==CORSS)*96;\
w=w+(h==CORSTORM)*6+(h==CORSUMO)*96+(h==CORTHUD)*6+(h==CORTJAM)*96+(h==CORTRUCK)*96+(h==CORVICE)*800;\
w=w+(h==CORVIKNG)*800+(h==CORVOYR)*6+(h==CORVRAD)*96+(h==CORVROC)*96+(h==CORXCH)*800+(h==CORXCK)*96;\
w=w+(h==CORXCS)*4000+(h==CORXCV)*800;\
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