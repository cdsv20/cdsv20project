#include <iostream>
#include <vector>

using namespace std;

int primero()
{
    int suma = 0;
    for (int i = 999;i > 0;i--)
    {
        if (i % 3 == 0 || i % 5 == 0)
            suma += i;
    }
    return suma;
}

int segundo(int n)
{
    int a = 0,b = 1,suma,res = 0;
    for(res = 0;res < n;)
    {
        suma = a + b;
        if (suma % 2 == 0)
            res += suma;
        a = b;
        b = suma;
    }
    return res;
}

long tercero(long n)
{
    long i = 2,res = 0;
    int esPrimo;
    while (i <= n)
    {
        if (n % i == 0)
        {
            while(n % i == 0)
                n /= i;
            esPrimo = 1;
            for (long j = 2; j < i/2+1; j++) {
                if (i % j == 0) {
                    esPrimo = 0;
                    break;
                }
            }
            if (esPrimo) {
                res = i;
            }
        }
        i++;
    }
    return res;
}

long cuarto()
{
    long res = 0,p,p1,p2;
    for (long i = 100;i <= 999;i++)
    {
        for (long j = 100;j <= 999;j++)
        {
            p = j*i;
            p1 = p;
            p2 = 0;
            while(p1 > 0)
            {
                p2 = p2 * 10 + (p1 % 10);
                p1 /= 10;
            }
            if (p == p2)
            {
                //cout << i << "-" <<j << "--->" << p << " " << p2 <<endl;
                if ( p>res)
                    res = p;
            }

        }

    }
    return res;
}

long quinto() {
    long res = 20, w = 0;
    for (long num = res-1; num > 1;--num) {
        w = res;
        long b = num;
        while (b) {
            int prev = b;
            b = w % b;
            w = prev;
        }
        res = res * (num / w);
    }
    return res;
}

long sexto()
{
    long res = 0,s1 = 0,s2 = 0;
    for(long i = 1;i <= 100;i++)
    {
        s1 = s1 + (i*i);
        s2 = s2 + i;
    }
    s2 = s2 * s2;
    res = s2 - s1;
    return res;
}

long septimo()
{
    long cont = 1,p = 2;
    while(cont <= 10001)
    {
        int esPrimo = 1;
        for (long j = 2; j < p/2+1; j++)
        {
            if (p % j == 0)
            {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo) {
            cont++;
        }
        p++;
    }
    return p - 1;
}

long octavo()
{
    int digAdy = 13;
    int num = 0;
    unsigned long long res = 0;
    signed char n[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    while (num <= 1000 - digAdy)
    {
        unsigned long long x = 1;
        for (int i = num;i < num + digAdy;i++)
            x *= (n[i] - '0');
        if (x > res)
            res = x;
        num++;
    }
    return res;
}

int noveno()
{
    for (int a = 3; a < 1000; ++a) {
        for (int b = a + 1; a + b < 1000; ++b) {
            int c2 = a * a + b * b;
            int c3 = c2, c=0, i=1;
            while (c3 > 0)
            {
                c3 -= i;
                c++;
                i += 2;
            }
            if (c * c == c2)
                if (a + b + c == 1000)
                    return a*b*c;
        }
    }
    return -1;
}

unsigned long decimo()
{
    unsigned long res = 0;
    vector<int> primos;
    primos.push_back(2);
    for(unsigned long i=2;i<=2000000;i++)
    {
        int esprimo = 1;
        for(unsigned long j=0; j<primos.size() && primos[j]*primos[j] <= i; j++)
        {
            if(i%primos[j] == 0)
            {
                esprimo = 0;
                break;
            }
        }
        if (esprimo)
        {
            res += i;
            primos.push_back(i);
        }
    }
    return res;
}

int main()
{
    cout << primero() << endl;
    cout << segundo(4000000) << endl;
    cout << tercero(600851475143) << endl;
    cout << cuarto() << endl;
    cout << quinto() << endl;
    cout << sexto() << endl;
    cout << septimo() << endl;
    cout << octavo() << endl;
    cout << noveno() << endl;
    cout << decimo() << endl;
    return 0;
}
