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
	}

>>
