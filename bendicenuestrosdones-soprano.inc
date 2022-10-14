\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key g \major

		R2.*17  |
		b' 4 g' a'  |
		b' 8 d'' 4 c'' 8 b' 4  |
%% 20
		a' 4 fs' 8 fs' g' 4  |
		a' 4 c'' 8 b' a' 4  |
		g' 4 e' 8 e' fs' 4  |
		g' 8 b' 4 a' 8 g' 4  |
		fs' 2.  |
%% 25
		r4. r8 r b  |
		e' 8 e' e' fs' fs' g' ~  |
		g' 8 g' 4 c'' a' 8  |
		b' 4 g' 8 c'' 4 a' 8  |
		b' 4 b' r8 g'  |
%% 30
		a' 8 a' a' a' a' g' ~  |
		g' 8 g' g' g' 4 g' 8 ~  |
		g' 8 g' 4 g' e' 8  |
		fs' 2. ~  |
		fs' 4 r8 r4.  |
%% 35
		g' 4 d' d'  |
		g' 8 fs' 4 g' 8 a' 4  |
		fs' 4 d' 8 d' d' 4  |
		ds' 4 ds' 8 ds' ds' 4  |
		e' 4 e' 8 e' e' 4  |
%% 40
		e' 8 g' 4 fs' 8 e' 4  |
		d' 2.  |
		r4. r8 r g  |
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
%% 45
		g' 4 d' 8 g' 4 g' 8  |
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 e' 4 e' e' 8  |
%% 50
		d' 2. ~  |
		d' 4 r8 r4.  |
		R2.*2  |
		d' 4 b' 8 b' b' 4  |
%% 55
		b' 4 b' b'  |
		a' 4 a' 8 c'' c'' 4  |
		c'' 4 c'' 8 r b' a'  |
		b' 4 g' a'  |
		b' 4 a' g'  |
%% 60
		a' 4 fs' 2 ~  |
		fs' 4 r8 r r b  |
		e' 8 e' e' fs' fs' g' ~  |
		g' 4 g' 8 b 4 b 8  |
		e' 8 e' e' fs' fs' g' ~  |
%% 65
		g' 4 g' 8 r r b  |
		e' 8 e' e' fs' fs' g' ~  |
		g' 8 g' 4 fs' e' 8  |
		fs' 4 ds' e'  |
		fs' 4 e' ds'  |
%% 70
		e' 2.  |
		R2.  |
		r4. d' 8 d' 4  |
		ds' 4 ds' 8 ds' ds' 4  |
		e' 4 e' 8 e' e' 4  |
%% 75
		e' 8 g' 4 fs' 8 e' 4  |
		d' 2.  |
		r4. r8 r g  |
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
%% 80
		g' 4 d' 8 g' 4 g' 8  |
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 e' 4 e' c' 8  |
%% 85
		d' 2. ~  |
		d' 4 r8 r4.  |
		g' 2.  |
		d' 4. g'  |
		fs' 4. fs'  |
%% 90
		ds' 4. ds'  |
		e' 4. e'  |
		e' 4. e'  |
		d' 2.  |
		r4. r8 r g  |
%% 95
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
		g' 4 d' 8 g' 4 g' 8  |
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
%% 100
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 e' 4 e' e' 8  |
		d' 2. ~  |
		d' 4 r8 r4.  |
		R2.*2  |
		d' 4 b' 8 b' b' 4  |
		b' 4 b' b'  |
		a' 4 a' 8 c'' c'' 4  |
		c'' 4 c'' 8 r b' a'  |
%% 110
		b' 4 g' a'  |
		b' 4 a' g'  |
		a' 4 fs' 2 ~  |
		fs' 4 r8 r r b  |
		e' 8 e' e' fs' fs' g' ~  |
%% 115
		g' 4 g' 8 b 4 b 8  |
		e' 8 e' e' fs' fs' g' ~  |
		g' 4 g' 8 r r b  |
		e' 8 e' e' fs' fs' g' ~  |
		g' 8 g' 4 fs' e' 8  |
%% 120
		fs' 4 ds' e'  |
		fs' 4 e' ds'  |
		e' 2.  |
		R2.  |
		r4. d' 8 d' 4  |
%% 125
		ds' 4 ds' 8 ds' ds' 4  |
		e' 4 e' 8 e' e' 4  |
		e' 8 g' 4 fs' 8 e' 4  |
		d' 2.  |
		r4. r8 r g  |
%% 130
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
		g' 4 d' 8 g' 4 g' 8  |
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
%% 135
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 e' 4 e' c' 8  |
		d' 2. ~  |
		d' 4 r8 r4.  |
		g' 2.  |
%% 140
		d' 4. g'  |
		fs' 4. fs'  |
		ds' 4. ds'  |
		e' 4. e'  |
		e' 4. e'  |
%% 145
		d' 2.  |
		r4. r8 r g  |
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
		g' 4 d' 8 g' 4 g' 8  |
%% 150
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 e' 4 e' e' 8  |
		d' 2. ~  |
%% 155
		d' 4 r8 r4.  |
		R2.  |
		\bar "|."
	}

	\new Lyrics \lyricsto "soprano" {
		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Te ro -- ga -- mos, Pa -- dre, que ven -- "ga en" nues -- "tra a" -- yu -- da
		Je -- su -- cris -- to tu Hi -- "jo he" -- cho hom -- bre, __
		y ya que su na -- ci -- mien -- to con -- sa -- gró Vir -- gen a Ma -- rí -- a,
		con -- ce -- de nos pu -- ri -- fi -- que pa -- ra ser a -- gra -- da -- bles a ti.

		"...a" "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Hoy que tra -- e -- mos nues -- tros do -- nes, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Te ro -- ga -- mos, Pa -- dre, ben -- di -- gas la o -- fren -- da
		que tra -- e -- mos de pan y de vi -- no. __
		Y jun -- to con es -- tos  do __ nes o -- fre -- ce -- mos hoy nues -- tra vi __ da
		pa -- ra que nos san -- ti -- fi __ ques y po -- der trans -- for -- mar -- nos en ti.

		"...a" "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Hoy que tra -- e -- mos nues -- tros do -- nes, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __
	}
>>
