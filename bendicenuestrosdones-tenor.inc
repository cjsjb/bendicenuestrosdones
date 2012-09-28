\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble_8"
		\key g \major

		R2.*17  |
		b 4 g a  |
		b 8 d' 4 c' 8 b 4  |
%% 20
		a 4 fs 8 fs g 4  |
		a 4 c' 8 b a 4  |
		g 4 e 8 e fs 4  |
		g 8 b 4 a 8 g 4  |
		fs 2.  |
%% 25
		r4. r8 r b,  |
		e 8 e e fs fs g ~  |
		g 8 g 4 c' a 8  |
		b 4 g 8 c' 4 a 8  |
		b 4 b r8 g  |
%% 30
		a 8 a a a a g ~  |
		g 8 g g g 4 g 8 ~  |
		g 8 g 4 g e 8  |
		fs 2. ~  |
		fs 4 r8 r4.  |
%% 35
		b 4 g a  |
		b 8 d' 4 c' 8 b 4  |
		a 4 fs 8 fs g 4  |
		a 4 c' 8 b a 4  |
		g 4 e 8 e fs 4  |
%% 40
		g 8 b 4 a 8 g 4  |
		fs 2.  |
		r4. r8 r c  |
		e 8 e e fs fs g ~  |
		g 8 g 4 c' a 8  |
%% 45
		b 4 g 8 c' 4 a 8  |
		b 4 b r8 g  |
		a 8 a a a a g ~  |
		g 8 g g g 4 g 8 ~  |
		g 8 g 4 g e 8  |
%% 50
		fs 2. ~  |
		fs 4 r8 r4.  |
		R2.*4  |
		b 2. ~  |
		b 2.  |
		a 2. ~  |
		a 2.  |
%% 60
		g 2. ~  |
		g 2.  |
		fs 2. ~  |
		fs 2.  |
		e 2. ~  |
%% 65
		e 2. ~  |
		e 2. ~  |
		e 4. r  |
		e 2. ~  |
		e 2.  |
%% 70
		ef 2. ~  |
		ef 4. r  |
		b 4 g a  |
		b 8 d' 4 c' 8 b 4  |
		a 4 fs 8 fs g 4  |
%% 75
		a 4 c' 8 b a 4  |
		g 4 e 8 e fs 4  |
		g 8 b 4 a 8 g 4  |
		fs 2.  |
		r4. r8 r b,  |
%% 80
		e 8 e e fs fs g ~  |
		g 8 g 4 c' a 8  |
		b 4 g 8 c' 4 a 8  |
		b 4 b r8 g  |
		a 8 a a a a g ~  |
%% 85
		g 8 g g g 4 g 8 ~  |
		g 8 g 4 g e 8  |
		fs 2. ~  |
		fs 4 r8 r4.  |
		b 4 g a  |
%% 90
		b 8 d' 4 c' 8 b 4  |
		a 4 fs 8 fs g 4  |
		a 4 c' 8 b a 4  |
		g 4 e 8 e fs 4  |
		g 8 b 4 a 8 g 4  |
%% 95
		fs 2.  |
		r4. r8 r c  |
		e 8 e e fs fs g ~  |
		g 8 g 4 c' a 8  |
		b 4 g 8 c' 4 a 8  |
%% 100
		b 4 b r8 g  |
		a 8 a a a a g ~  |
		g 8 g g g 4 g 8 ~  |
		g 8 g 4 g e 8  |
		fs 2. ~  |
%% 105
		fs 4 r8 r4.  |
		R2.*2  |
		\bar "|."
	}

	\lyricsto "tenor" \new Lyrics \lyricmode {
		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Ahh, __ ahh, __ ahh, __ ahh, __ ahh, __ ahh, __ ahh. __

		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __

		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor. __
	}

>>
