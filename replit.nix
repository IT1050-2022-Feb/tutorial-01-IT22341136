{ pkgs }: {
	deps = [
		pkgs../Tute01
  pkgs.gcc Tute01.c -o Tute01
  pkgs../run.sh
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}