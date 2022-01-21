#include<stdio.h>

int main(void){
	int ha, ma, sa, hb, mb, sb, h,m,s,c, d;
	int n, i, j, k,t,count=0;
	
	scanf("%d:%d:%d %d:%d:%d %d %d", &ha, &ma, &sa, &hb, &mb, &sb, &c, &d);
	t = (hb - ha) * 3600 + (mb - ma) * 60 + (sb - sa);

	while (t <= c) {
		t = t + d;
	}

	h = ha;
	m = ma;
	s = sa;
	
	s = s + t;
	
	while (s >= 60) {
		s = s - 60;
		m++;
	}
	while (m >= 60) {
		m = m - 60;
		h++;
	}
	
	printf("%02d:%02d:%02d", h, m, s);
	
	return 0;
}