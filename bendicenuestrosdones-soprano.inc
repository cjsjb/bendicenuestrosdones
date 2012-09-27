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
		g' 8 ~ g' g' g' 4 e' 8  |
		fs' 2. ~  |
		fs' 4 r8 r4.  |
%% 35
		g' 4 d' d'  |
		g' 8 fs' 4 g' 8 a' 4  |
		fs' 4 d' 8 d' d' 4  |
		ef' 4 ef' 8 ef' ef' 4  |
		e' 4 e' 8 e' e' 4  |
%% 40
		e' 8 g' 4 fs' 8 e' 4  |
		d' 2.  |
		r4. r8 r g  |
		c' 8 c' c' d' d' e' ~  |
		e' 8 e' 4 g' fs' 8  |
%% 45
		g' 4 d' 8 g' 4 fs' 8  |
		g' 4 g' r8 g'  |
		f' 8 f' f' f' f' e' ~  |
		e' 8 e' e' e' 4 e' 8 ~  |
		e' 8 ~ e' e' e' 4 e' 8  |
%% 50
		d' 2. ~  |
		d' 4 r8 r4.  |
		\bar "|."
	}

	\lyricsto "soprano" \new Lyrics \lyricmode {
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
