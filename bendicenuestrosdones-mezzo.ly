% This LilyPond file was generated by Rosegarden 1.5.1
\include "english.ly"
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Bendice nuestros dones"
	composer = "Gerado Bermejo"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Mezzosoprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 6/8
	\skip 2.*156
}
globalTempo = {
	\tempo 4 = 116  \skip 2.*51
	\tempo 4 = 93   \skip 2.*18
	\tempo 4 = 100	\skip 2.*4
	\tempo 4 = 116	\skip 2.*30
	\tempo 4 = 93   \skip 2.*18
	\tempo 4 = 100	\skip 2.*4
	\tempo 4 = 116
}

\score {
	<<

		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "bendicenuestrosdones-acordes.inc"
		\include "bendicenuestrosdones-mezzo.inc"

	>> % notes

	\layout { }
} % score
