\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 2.*17

	% Hoy que traemos...
	\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1

	% Hoy que traemos...
	%\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1

	% Te rogamos, padre...
	\mark \default
	\skip 2.*2
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4

	% Hoy que traemos...
	\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1

	% Hoy que traemos...
	%\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1

	% Te rogamos, padre...
	\mark \default
	\skip 2.*2
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4

	% Hoy que traemos...
	\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1

	% Hoy que traemos...
	%\mark \default
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*4
	\skip 2.*1
}
