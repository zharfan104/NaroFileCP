const regex = /[A-F]\\t[^3]/g;
const str = `SKS\n1 AIK21345 Rekayasa Perangkat Lunak A 4 B 3\n2 AIK21342 Jaringan Komputer A 4 B 3\n3 AIK21346 Sistem Cerdas A 4 B 3\n4 AIK21343 Manajemen Basis Data A 4 B 3\n5 AIK21344 Grafika dan Komputasi Visual A 4 B 3\n6 AIK21341 Pemrograman Berorientasi Objek A 4 B 3\n7 AIK21364 Teori Bahasa dan Otomata B 6 B 3\n8 AIK21363 Keamanan dan Jaminan Informasi B 6 B 3\nJumlah seluruhnya 24 sks`;
let m;
let a = [];
function dptkelas(str) {
	let a = [];
	while ((m = regex.exec(str)) !== null) {
		// This is necessary to avoid infinite loops with zero-width matches
		if (m.index === regex.lastIndex) {
			regex.lastIndex++;
		}

		// The result can be accessed through the `m`-variable.
		m.forEach((match, groupIndex) => {
			console.log(`Found match, group ${groupIndex}: ${match}`);
			a.push(match[0]);
		});
	}
	return a;
}
var c = dptkelas(str);
console.log(c);
