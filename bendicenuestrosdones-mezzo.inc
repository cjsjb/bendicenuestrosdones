\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzo" {
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
		g' 8 ~ g' g' g' 4 e' 8  |
		fs' 2. ~  |
		fs' 4 r8 r4.  |
%% 35
		d' 4 b b  |
		d' 8 d' 4 d' 8 d' 4  |
		d' 4 a 8 a a 4  |
		b 4 b 8 b b 4  |
		b 4 b 8 b b 4  |
%% 40
		b 8 e' 4 d' 8 c' 4  |
		b 2.  |
		r4. r8 r e  |
		a 8 a a b b c' ~  |
		c' 8 c' 4 d' d' 8  |
%% 45
		d' 4 b 8 d' 4 d' 8  |
		d' 4 d' r8 d'  |
		c' 8 c' c' c' c' c' ~  |
		c' 8 c' c' c' 4 c' 8 ~  |
		c' 8 ~ c' c' c' 4 c' 8  |
%% 50
		a 2. ~  |
		a 4 r8 r4.  |
		\bar "|."
	}

	\lyricsto "mezzo" \new Lyrics \lyricmode {
		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor.

		Hoy que tra -- e -- mos nues -- tros do -- nes a "tu al" -- tar,
		te su -- pli -- ca -- mos nos ben -- di -- gas, ¡oh, Se -- ñor!
		Ben -- di -- ce los co -- ra -- zo -- nes "que hoy" se u -- nen en tu nom -- bre,
		de -- rrá -- ma -- "te y" pu -- ri -- fi -- ca, con el fue -- go de "tu a" -- mor.
	}

>>