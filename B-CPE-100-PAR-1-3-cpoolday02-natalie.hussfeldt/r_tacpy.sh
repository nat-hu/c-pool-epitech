#!/bin/bash
cut -d ":" -f 1 |sed -n '2~2p' | rev |sort -r | sed -n "${MY_LINE1},${MY_LINE2}p" | paste -sd "," | sed 's/$/./' | sed 's/, */, /g'
