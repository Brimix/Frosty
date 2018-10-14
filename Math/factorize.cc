// Stores in F the prime factorization of a number

map<ll, int> F; 

// this algorithm runs in sqrt(n)
void fact(ll n){
  F.clear();
  for(int p = 2; p*p <= n; p++){
    while(n%p == 0) F[p]++, n/=p;
  }
  if(n > 1) F[n]++;
}

// this algorithm runs in log(n)
// it requires n to be small and criba[] to be precalculated
void fact(ll n){ 
  F.clear();
  while(criba[n]){
    F[criba[n]])++; n /= criba[n]; }
   if(n > 1)F[n]++;
}
