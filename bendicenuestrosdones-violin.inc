\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key g \major

		b' 4 g' d'' ~  |
		d'' 2 c'' 8 b'  |
		a' 4 fs' d'' ~  |
		d'' 2 b' 8 g'  |
%% 5
		e' 8 e'' 16 d'' e'' 8 r b' g'  |
		e' 8 e'' 4 -\staccato d'' 8 c'' 4 -\staccato  |
		d'' 2. ~  |
		d'' 4 r8 r4.  |
		< c'' e'' > 8 < e'' c'' > r < e'' c'' > < e'' c'' > r  |
%% 10
		< e'' c'' > 8 < e'' c'' > r < e'' c'' > < e'' c'' > r  |
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
%% 15
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
		< d'' fs'' > 2. ~  |
		< d'' fs'' > 2.  |
		R2.*2  |
%% 20
		r8 d'' e'' fs'' g'' a''  |
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
		R2.  |
		r4 g'' 8 fs'' e'' d''  |
%% 25
		c'' 8 b' c'' d'' c'' b'  |
		c'' 2.  |
		R2.  |
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
%% 30
		r8 < f'' c'' > < f'' c'' > < f'' c'' > < c'' f'' > r  |
		r8 < e'' c'' > < e'' c'' > < e'' c'' > < c'' e'' > r  |
		< e'' c'' > 8 < e'' c'' > r < e'' c'' > < e'' c'' > r  |
		d'' 2. ~  |
		d'' 4. r  |
%% 35
		R2.*2  |
		r8 d'' e'' fs'' g'' a''  |
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
%% 40
		R2.  |
		r8 r g'' fs'' e'' d''  |
		c'' 8 b' c'' d'' c'' b'  |
		c'' 2.  |
		R2.  |
%% 45
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
%% 50
		d'' 2. ~  |
		d'' 4. r  |
		R2.*2  |
		g'' 2. ~  |
%% 55
		g'' 2.  |
		fs'' 2. ~  |
		fs'' 2.  |
		e'' 2. ~  |
		e'' 2.  |
%% 60
		d'' 2. ~  |
		d'' 2.  |
		c'' 2. ~  |
		c'' 2.  |
		b' 2. ~  |
%% 65
		b' 2.  |
		bf' 2. ~  |
		bf' 2.  |
		b' 2. ~  |
		b' 2.  |
%% 70
		R2.*2  |
		r8 d'' e'' fs'' g'' a''  |
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
%% 75
		R2.  |
		r8 r g'' fs'' e'' d''  |
		c'' 8 b' c'' d'' c'' b'  |
		c'' 2.  |
		R2.  |
%% 80
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
%% 85
		d'' 2. ~  |
		d'' 4. r  |
		R2.*2  |
		r8 d'' e'' fs'' g'' a''  |
%% 90
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
		R2.  |
		r8 r g'' fs'' e'' d''  |
		c'' 8 b' c'' d'' c'' b'  |
%% 95
		c'' 2.  |
		R2.  |
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
%% 100
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
		d'' 2. ~  |
		d'' 4. r  |
		R2.*2  |
		g'' 2. ~  |
		g'' 2.  |
		fs'' 2. ~  |
		fs'' 2.  |
%% 110
		e'' 2. ~  |
		e'' 2.  |
		d'' 2. ~  |
		d'' 2.  |
		c'' 2. ~  |
%% 115
		c'' 2.  |
		b' 2. ~  |
		b' 2.  |
		bf' 2. ~  |
		bf' 2.  |
%% 120
		b' 2. ~  |
		b' 2.  |
		R2.*2  |
		r8 d'' e'' fs'' g'' a''  |
%% 125
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
		R2.  |
		r8 r g'' fs'' e'' d''  |
		c'' 8 b' c'' d'' c'' b'  |
%% 130
		c'' 2.  |
		R2.  |
		r8 b' d'' e'' g'' a''  |
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
%% 135
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
		d'' 2. ~  |
		d'' 4. r  |
		R2.*2  |
		r8 d'' e'' fs'' g'' a''  |
		b'' 8 a'' g'' a'' g'' fs''  |
		g'' 2.  |
		R2.  |
%% 145
		r8 r g'' fs'' e'' d''  |
		c'' 8 b' c'' d'' c'' b'  |
		c'' 2.  |
		R2.  |
		r8 b' d'' e'' g'' a''  |
%% 150
		g'' 2 r8 r  |
		r8 < c'' f'' > < c'' f'' > < c'' f'' > < f'' c'' > r  |
		r8 < c'' e'' > < c'' e'' > < c'' e'' > < e'' c'' > r  |
		< c'' e'' > 8 < c'' e'' > r < c'' e'' > < c'' e'' > r  |
		d'' 2. ~  |
%% 155
		d'' 4. r  |
		R2.  |
	}

>>
