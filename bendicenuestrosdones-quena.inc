\context Staff = "Quena" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Quena"
	\set Staff.shortInstrumentName = "Q."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "quena" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key d \major
		d'' 2.  |
		fis'' 2 e'' 8 d''  |
		a'' 2.  |
		fis'' 2.  |
%% 5
		R2.*4  |
		g' 8 g' r g' g' r  |
%% 10
		g' 8 g' r g' g' r  |
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
		r8 b' b' b' b' r  |
%% 15
		b' 8 b' r b' b' r  |
		a' 2. ~  |
		a' 2.  |
		R2.*8  |
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
		R2.*2  |
%% 30
		r8 c'' c'' c'' c'' c''  |
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
		a' 2. ~  |
		a' 2.  |
%% 35
		R2.*8  |
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
%% 45
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
%% 50
		a' 2. ~  |
		a' 2.  |
		R2.*2  |
		fis' 2. ~  |
%% 55
		fis' 2.  |
		e' 2. ~  |
		e' 2.  |
		fis' 2. ~  |
		fis' 2.  |
%% 60
		e' 2. ~  |
		e' 2.  |
		d' 2. ~  |
		d' 2.  |
		d' 2. ~  |
%% 65
		d' 2.  |
		d' 2. ~  |
		d' 2.  |
		e' 2. ~  |
		e' 2.  |
%% 70
		fis' 2. ~  |
		fis' 2.  |
		R2.*6  |
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
%% 80
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
%% 85
		a' 2. ~  |
		a' 2.  |
		R2.*8  |
%% 95
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
%% 100
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
		a' 2. ~  |
		a' 2.  |
		R2.*2  |
		fis' 2. ~  |
		fis' 2.  |
		e' 2. ~  |
		e' 2.  |
%% 110
		fis' 2. ~  |
		fis' 2.  |
		e' 2. ~  |
		e' 2.  |
		d' 2. ~  |
%% 115
		d' 2.  |
		d' 2. ~  |
		d' 2.  |
		d' 2. ~  |
		d' 2.  |
%% 120
		e' 2. ~  |
		e' 2.  |
		fis' 2. ~  |
		fis' 2.  |
		R2.*6  |
%% 130
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
%% 135
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
		a' 2. ~  |
		a' 2.  |
		R2.*8  |
		g' 8 g' r g' g' r  |
		g' 8 g' r g' g' r  |
		R2.*2  |
		r8 c'' c'' c'' c'' c''  |
		r8 b' b' b' b' r  |
		b' 8 b' r b' b' r  |
		a' 2. ~  |
%% 155
		a' 2.  |
		R2.
	}
>>
