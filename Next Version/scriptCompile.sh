#!/bin/sh
#Usage: ./$0 <script.esp >scriptCode
sed -e 's;//.*$;;' -e 's;\([^ ]*(\);\L\1;g' -e 's;if[ \t];;' -e 's;[ \t]then[ \t];?;' -e 's;[ \t];;g' -e 's;+; ;g' -e 's;&&; ;g' -e 's;hostname(;H;' -e 's;setntp(;N;' -e 's;setgpio(;S;g' -e 's;clearvar(;$;g' -e 's;setvar(;$;g' -e 's;save(;B;' -e 's;incr(;I;g' -e 's;gpio(;G;g' -e 's;cleartimer(;T;g' -e 's;timer(;T;g' -e 's;mqttsend(;M;g' -e 's;);;g' -e 's;INPUT_PULLUP;3;g' -e 's;INPUT;2;g' -e 's;OUTPUT_TRUE;1;g' -e 's;OUTPUT_FALSE;0;g' -e 's/$/;/' -e 's/;;/;/' -e 's;";\\";g' -e 's;$;\\;' -e 's/^;\\$/\\/' |awk '!/^\\$/'
