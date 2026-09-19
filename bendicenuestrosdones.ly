\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Bendice nuestros dones"
	composer = "Gerado Bermejo"
	tagline = "Coro Juvenil San Juan Bosco"
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
		\new StaffGroup <<
			\include "bendicenuestrosdones-soprano.inc"
			\include "bendicenuestrosdones-mezzo.inc"
			\include "bendicenuestrosdones-tenor.inc"
		>>
		\include "bendicenuestrosdones-violin.inc"
	>>

	\layout {
		\context {
			\RemoveEmptyStaffContext
		}
	}
}
