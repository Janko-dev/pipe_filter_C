# Pipe-Filter
Example programs for the Linux Pipe-and-Filter mechanism. 
There are 5 filter programs provided which make use of the standard in (stdin) and standard out (stdout) streams.

## Quick start
To grep lines from input file containing "xam" -> reverse input -> to upper case input
```
Console
$ make
$ ./bin/grep *xam* < input_file | ./bin/reverse | ./bin/toUpper
ELPMAXE RETLIF-DNA-EPIP A SI SIHT
SELPMAXE EHT FO EDOC EHT SNIATNOC OPER SIHT
```
