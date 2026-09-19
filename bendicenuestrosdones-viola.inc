\context Staff = "viola" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Va."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 6/8
		\clef "alto"
		\key g \major
		b 4 b d' ~  |
		d' 2 c' 8 b  |
		a 4 a d' ~  |
		d' 2 b 8 g  |
%% 5
		e' 4. e'  |
		e' 4. d' 8 c' 4 -\staccato  |
		d' 2. ~  |
		d' 4 r8 r4.  |
		c' 8 c' r c' c' r  |
%% 10
		c' 8 c' r c' c' r  |
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
		r8 c' c' c' c' r  |
%% 15
		c' 8 c' r c' c' r  |
		d' 2. ~  |
		d' 2.  |
		R2.*2  |
%% 20
		r8 d' e' fis' g' a'  |
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
		R2.  |
		r8 r g' fis' e' d'  |
%% 25
		c' 8 b c' d' c' b  |
		c' 2.  |
		R2.  |
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
%% 30
		r8 c' c' c' c' c'  |
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
		d' 2. ~  |
		d' 4. r  |
%% 35
		R2.*2  |
		r8 d' e' fis' g' a'  |
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
%% 40
		R2.  |
		r8 r g' fis' e' d'  |
		c' 8 b c' d' c' b  |
		c' 2.  |
		R2.  |
%% 45
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
%% 50
		d' 2. ~  |
		d' 4. r  |
		R2.*2  |
		g' 2. ~  |
%% 55
		g' 2.  |
		fis' 2. ~  |
		fis' 2.  |
		e' 2. ~  |
		e' 2.  |
%% 60
		d' 2. ~  |
		d' 2.  |
		c' 2. ~  |
		c' 2.  |
		b 2. ~  |
%% 65
		b 2.  |
		g 2. ~  |
		g 2.  |
		b 2. ~  |
		b 2.  |
%% 70
		R2.*2  |
		r8 d' e' fis' g' a'  |
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
%% 75
		R2.  |
		r8 r g' fis' e' d'  |
		c' 8 b c' d' c' b  |
		c' 2.  |
		R2.  |
%% 80
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
%% 85
		d' 2. ~  |
		d' 4. r  |
		R2.*2  |
		r8 d' e' fis' g' a'  |
%% 90
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
		R2.  |
		r8 r g' fis' e' d'  |
		c' 8 b c' d' c' b  |
%% 95
		c' 2.  |
		R2.  |
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
%% 100
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
		d' 2. ~  |
		d' 4. r  |
		R2.*2  |
		g' 2. ~  |
		g' 2.  |
		fis' 2. ~  |
		fis' 2.  |
%% 110
		e' 2. ~  |
		e' 2.  |
		d' 2. ~  |
		d' 2.  |
		c' 2. ~  |
%% 115
		c' 2.  |
		b 2. ~  |
		b 2.  |
		g 2. ~  |
		g 2.  |
%% 120
		b 2. ~  |
		b 2.  |
		R2.*2  |
		r8 d' e' fis' g' a'  |
%% 125
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
		R2.  |
		r8 r g' fis' e' d'  |
		c' 8 b c' d' c' b  |
%% 130
		c' 2.  |
		R2.  |
		r8 b d' e' g' a'  |
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
%% 135
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
		d' 2. ~  |
		d' 4. r  |
		R2.*2  |
		r8 d' e' fis' g' a'  |
		b' 8 a' g' a' g' fis'  |
		g' 2.  |
		R2.  |
%% 145
		r8 r g' fis' e' d'  |
		c' 8 b c' d' c' b  |
		c' 2.  |
		R2.  |
		r8 b d' e' g' a'  |
%% 150
		g' 2 r8 r  |
		r8 c' c' c' c' c'  |
		r8 c' c' c' c' r  |
		c' 8 c' r c' c' r  |
		d' 2. ~  |
%% 155
		d' 4. r  |
		R2.
	}
>>
