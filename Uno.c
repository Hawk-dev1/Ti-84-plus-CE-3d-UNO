#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <ti/vars.h>
#include <ti/screen.h>
#ifndef na
#define na
#define at 320
#define bh 240
enum {
    fa = 1 << 0, fb = 1 << 1, dM = 1 << 2, dN = 1 << 3,
    nb = 1 << 4, ne = 1 << 5, nf = 1 << 6, en = 1 << 7,
    ng = 1 << 8, p5 = 1 << 9, p6 = 1 << 10, p7 = 1 << 11,
    p8 = 1 << 12, p9 = 1 << 13, p_ = 1 << 14,
};
#define bm (nb | ne)
#define j5 (fa | fb | dM | dN)
extern uint8_t *bN;
extern uint16_t hI;
extern uint16_t bn;
typedef unsigned int av;
extern av eo;
void j6(void);
void hJ(void);
void hK(void);
void j7(void);
void hL(const uint16_t *j8, unsigned aQ, unsigned n);
void dO(uint8_t bc, uint8_t E, uint8_t bo, uint8_t K);
av fc(void);
uint32_t nh(void);
#define aK(x) ((av)(x) * 4194u >> 7)
#endif
#ifndef ni
#define ni
typedef struct {
    uint8_t *buf;
    int a7;
    int aL, aW, aX, aY;
} j9;
typedef struct { int x0, M, x1, Q; } Z;
typedef struct { int x, y; int u, O; } ar;
typedef struct {
    const uint8_t *aw;
    uint8_t aZ, bi;
    const uint8_t *ab;
} c2;
enum { qa, j_, ka };
extern j9 W;
void kb(uint8_t *hM);
bool kc(const Z *K);
void ep(uint8_t *buf, int a7, int x0, int M, int x1, int Q);
void hN(int bU, int bV, int aR);
extern int cH;
void nj(int x0, int M, int x1, int Q);
void hO(int x, int y, int J, int h, uint8_t c);
void nk(int x, int y, int J, int h, const uint8_t *c4);
void fd(int x, int y, int J, int h, int E, const uint8_t *c4);
void cI(int x, int y, int J, int h, int E, uint8_t c);
void b8(int x, int y, int J, int h, int E, int V, uint8_t c);
void dP(int x, int y, const uint8_t *aw, int aZ, int bi, const uint8_t *ab);
void kd(int x, int y, const uint8_t *src, int J, int h, int hP);
void dQ(const ar *O, int n, const c2 *V);
void f_(const ar *O, int n, int mode, uint8_t color, const uint8_t *c4);
void qb(const int *af, const int *ag, const c2 *V, int qc);
typedef struct {
    uint8_t h, base, aQ, n;
    const uint8_t *J, *dR, *c5;
    const uint8_t *ga;
    const uint8_t *data;
    uint8_t hQ, gb;
} au;
void gc(au *I, const uint8_t *qd);
int b9(const au *I, const char *s);
int fe(const au *I, int x, int y, const char *s, const uint8_t *ab);
int nl(const au *I, const char *s, uint8_t *bD, int c6, int dS);
void ke(int x, int y, const uint8_t *src, int J, int h, int aR, const uint8_t *ab);
void ff(const au *I, int aF, int aS, const char *s, int aR, const uint8_t *ab);
void nm(const au *I, int aF, int aS, const char *s, const uint8_t *ab);
void np(const au *I, int aF, int y, const char *s, const uint8_t *ab);
int co(const au *I, int x, int y, int h, const char *s, const uint8_t *ab);
void bA(const au *I, int aF, int y, int h, const char *s, const uint8_t *ab);
#endif
#ifndef nq
#define nq
#define fg 4
#define nr {"UNOA", "UNOB", "UNOC", "UNOD"}
#define ns {62912, 64000, 58320, 37227}
#define nt 0, 0u
#define nu 0, 62400u
#define nv 1, 0u
#define nw 2, 0u
#define ny 2, 12800u
#define nz 2, 28400u
#define nA 2, 31200u
#define nB 2, 33248u
#define nC 2, 34272u
#define nD 2, 38368u
#define nE 3, 0u
#define nF 3, 6450u
#define nG 2, 39392u
#define nH 3, 18178u
#define nI 2, 55847u
#define qe 2, 58151u
#define nJ 3, 36482u
#define a8 50
#define bj 78
#define hR 25
#define hS 39
#define kf 70
#define fh 8
#define gd 5
#define eq 4
#define cJ 240
#define qf 0
#define qg 1
#define qh 2
#define qi 3
#define qj 4
#define qk 5
#define ql 6
#define qm 7
#define qn 8
#define qo 9
#define qp 10
#define qq 11
#define qr 12
#define nK 13
#define nL 14
#define bW 15
#define qs 16
#define nM 13
#define ge 176
#define kg 104
#define cp 48
#define qt 13
#define kh 50203
#define ki 42126
#define kj 1300
#define kk 330
#define nN 160
#define nO 104
#endif
#ifndef nP
#define nP
enum {
    er = cJ,
    hT = cJ + 4,
    dT = cJ + 8,
    kl = cJ + 9,
    nQ = cJ + 10,
    qu = cJ + 11,
    qv = cJ + 12,
};
enum { cK, be, gf, hU, aH };
extern const uint8_t *hV[fg];
#define nR(O, o) (hV[O] + (o))
#define bp(x) nR(x)
extern uint8_t *ao[gd][fh];
extern uint8_t *es[fh];
extern uint8_t *cL[eq];
extern uint8_t *hW[4];
extern uint16_t gg[256];
extern au aD, b_, c7;
extern const uint8_t *gh;
#define km 160
#define kn 120
extern uint8_t cM[256], cN[256], cO[256];
extern uint8_t *dU;
const char *ko(void);
const uint8_t *fi(int y);
const uint8_t *c8(int fj);
const uint8_t *hY(int fj);
#endif
#ifndef nS
#define nS
#define nT 95
#define nU 148
void kp(void);
int bE(int P);
int cq(int P);
void c9(int x, int y, int z, int *kq, int *kr);
void cb(int x, int y, int z, int fk, int c_, int *af, int *ag);
#endif
#ifndef nV
#define nV
enum { dV, ks, gi, nW, kt, nX, bF };
enum { et = 1, qw = 2, eu = 4, nY = 8, ku = 16, kv = 32, gj = 64 };
typedef struct nZ Y;
typedef void (*kw)(Y *);
struct nZ {
    uint8_t cP, aI;
    int8_t z;
    uint8_t cr;
    Z bq, bB;
    int af[4], ag[4];
    int x, y, J, h, E;
    uint8_t aw, as, cc, gk;
    uint8_t color;
    const uint8_t *n0;
    const au *font;
    char hZ[20];
    kw bk;
    bool (*h0)(Y *, const Z *);
    void *qz;
    int da;
};
extern uint8_t *bX;
extern av aq;
void h1(void);
Y *a9(bool cr, int z, int cP);
void a0(Y *A);
void am(Y *A);
void gl(Y *A, bool fm);
void n5(Y *A, int z);
void n6(Y *A, int x, int y, int J, int h);
void gm(Y *A);
bool kx(Z E);
bool ky(Z E);
void gn(Y *A);
void bG(Z E);
void dW(Z E);
void kz(void);
void aJ(void);
const uint8_t *ev(int aw, int as, int cc);
typedef void (*kA)(void);
extern kA fo;
extern void (*fp)(void);
void kB(Y *A);
void kC(Y *A, int z);
bool kD(void);
#endif
#ifndef n7
#define n7
enum { go = 10, gp = 11, cQ = 12, fq = 13, cs = 14 };
enum { n8, n9, n_, oa, cR };
#define dX(c, O) ((uint8_t)((c) << 4 | (O)))
#define bf(D) ((D) >> 4)
#define a1(D) ((D) & 15)
#define bY 4
#define cS 60
#define h2 108
typedef struct {
    char name[8];
    uint8_t ad[cS];
    uint8_t n;
    bool cd;
    uint8_t ew;
    uint16_t dY;
    uint8_t kE;
} bZ;
typedef struct {
    uint8_t ex;
    uint8_t bO;
    uint8_t gq;
    uint8_t gr;
    uint8_t h3;
    uint8_t bH;
    uint8_t h4;
} h5;
typedef struct {
    bZ l[bY];
    uint8_t bP[h2];
    int br;
    uint8_t ey[h2];
    int ct;
    uint8_t color;
    int8_t cu;
    uint8_t an;
    uint8_t dc;
    int bl;
    uint8_t bQ;
    uint8_t kF;
} kG;
extern kG H;
#define aA (ak.ex)
extern h5 ak;
uint32_t h6(void);
void kH(uint32_t s);
int aG(int n);
bool cv(uint8_t az);
int gs(uint8_t az);
void kI(void);
void kJ(void);
extern bool dZ;
#endif
#ifndef ob
#define ob
typedef struct { int x[4], y[4]; } ap;
void kK(void);
void h7(void);
void fr(int color);
void gt(int cu);
void h8(int n);
void ft(ap *N);
void h9(ap *N);
void h_(uint8_t az);
void kL(int color);
void d0(int l, int n);
void kM(int l, int n);
void ia(int l, int D, ap *N);
void kN(int l, int D);
void ib(int l);
void ic(int l, int i, ap *N);
void ce(void);
void kO(int l, int *x, int *y);
extern int ah;
extern bool a_;
extern int fu;
void ba(bool kP);
void ie(int i, ap *N);
void kQ(int i, ap *N);
extern bool gu;
void gv(int i, bool fm);
void kR(int i);
typedef struct {
    Y *A, *cg;
    int ig, ih, kS, kT, ii, kU;
    int ij[4], ik[4], kV[4], kW[4];
    av cT, cU;
    int ez;
    uint8_t eA, eB, as, fv, gw, qA;
} bI;
extern int gy;
bI *d1(uint8_t eA, uint8_t eB, uint8_t as, const ap *aB, const ap *aM, int aT, int ez, bool fv);
bool eC(const bI *I);
void eD(bI *I);
int dd(int aT);
void aN(int aT);
void gz(void);
extern void (*fw)(void);
int b0(uint8_t az);
uint8_t bC(int E, int bo, int K);
int cV(uint8_t az);
#endif
#ifndef oc
#define oc
enum { eE, kX };
void ci(const char *s, int as, int x, int y, int aT, int c_);
void de(int mode);
void eF(const char *s);
void kY(void);
int kZ(void);
int k1(const char *cw);
bool gA(const char *cw, const char *il, const char *im, int k2);
bool k3(void);
void k4(int bQ, int cj);
void k5(int bQ);
int k6(void);
void io(void);
typedef struct { uint16_t ip, k7; } iq;
extern iq df;
void b1(int O, char *K);
#endif
#define gB (*(volatile uint24_t *)0xE30010)
#define ir   (*(volatile uint24_t *)0xE30018)
#define k8    (*(volatile uint8_t *)0xE30020)
#define k9    (*(volatile uint8_t *)0xE30028)
#define k_    ((volatile uint16_t *)0xE30200)
#define fz       ((uint8_t *)0xD40000)
#define lc    (*(volatile uint8_t *)0xF50000)
#define od(bo) (*(volatile uint8_t *)(0xF50010 + 2 * (bo)))
#define fA   (*(volatile uint32_t *)0xF20030)
#define is   (*(volatile uint32_t *)0xF20000)
#define oe   (*(volatile uint32_t *)0xF20004)
#define le   (*(volatile uint32_t *)0xF20010)
#define of   (*(volatile uint32_t *)0xF20014)
uint8_t *bN;
uint16_t hI, bn;
av eo;
static uint24_t iu;
static uint32_t lf;
static uint16_t fB;
static av iv;
void j6(void) {
    __asm__ volatile("di");
    iu = ir;
    lf = fA;
    fA &= ~(uint32_t)0x3F;
    is = 0; oe = 0;
    le = 0; of = 0;
    fA = (fA & ~(uint32_t)0x0600) | 0x0003 | (0x0001 << 3) | 0x0200 | 0x0400;
    memset(fz, 0, at * bh * 2);
    gB = (uint24_t)fz;
    ir = (iu & ~(uint24_t)0x0E) | 0x06;
    bN = fz + at * bh;
    k9 = 4;
}
void hJ(void) {
    while (!(k8 & 4)) {}
    gB = (uint24_t)fz;
    ir = iu;
    memset(fz, 0xFF, at * bh * 2);
    fA = lf;
    __asm__ volatile("ei");
}
void hK(void) {
    uint8_t *gC = bN;
    bN = (uint8_t *)gB;
    gB = (uint24_t)gC;
    k9 = 4;
    while (!(k8 & 4)) {}
}
void hL(const uint16_t *j8, unsigned aQ, unsigned n) {
    for (unsigned i = 0; i < n; i++) k_[aQ + i] = j8[i];
}
void dO(uint8_t bc, uint8_t E, uint8_t bo, uint8_t K) {
    uint16_t lg = bo >> 2;
    k_[bc] = (uint16_t)((E >> 3) << 10 | (lg >> 1) << 5 | (K >> 3) | (lg & 1) << 15);
}
av fc(void) { return (av)is; }
uint32_t nh(void) { return le; }
void j7(void) {
    static const uint8_t lh[15][2] = {
        { 7, 8 }, { 7, 1 }, { 7, 2 }, { 7, 4 }, { 1, 0x20 }, { 6, 1 }, { 2, 0x80 }, { 6, 0x40 },
        { 1, 0x40 }, { 1, 0x80 }, { 1, 1 }, { 1, 0x10 }, { 1, 2 }, { 1, 4 }, { 1, 8 },
    };
    uint16_t D = 0;
    lc = 2;
    while (lc) {}
    for (int i = 0; i < 15; i++) if (od(lh[i][0]) & lh[i][1]) D |= (uint16_t)(1 << i);
    eo = (av)is;
    bn = D & ~hI;
    if (bn & j5) {
        fB = bn & j5;
        iv = eo + aK(260);
    } else if (fB && (D & fB)) {
        if ((int)(eo - iv) >= 0) {
            bn |= fB;
            iv = eo + aK(75);
        }
    } else {
        fB = 0;
    }
    hI = D;
}
j9 W;
int fC, fD, cH = 1;
void hN(int bU, int bV, int aR) { fC = bU * 16; fD = bV * 16; cH = aR; }
static const ar *lj(const ar *O, int n, ar *di) {
    if (cH == 1 && !fC && !fD) return O;
    for (int i = 0; i < n; i++) {
        di[i].x = (O[i].x - fC) * cH; di[i].y = (O[i].y - fD) * cH;
        di[i].u = O[i].u; di[i].O = O[i].O;
    }
    return di;
}
void ep(uint8_t *buf, int a7, int x0, int M, int x1, int Q) {
    W.buf = buf; W.a7 = a7;
    W.aL = x0; W.aW = M; W.aX = x1; W.aY = Q;
}
bool kc(const Z *K) {
    int x0 = (K->x0 * 16 - fC) * cH >> 4, x1 = (K->x1 * 16 - fC) * cH >> 4;
    int M = (K->M * 16 - fD) * cH >> 4, Q = (K->Q * 16 - fD) * cH >> 4;
    return x0 < W.aX && W.aL < x1 && M < W.aY && W.aW < Q;
}
void nj(int x0, int M, int x1, int Q) {
    if (x0 > W.aL) W.aL = x0;
    if (M > W.aW) W.aW = M;
    if (x1 < W.aX) W.aX = x1;
    if (Q < W.aY) W.aY = Q;
}
static bool gD(int *x, int *y, int *J, int *h) {
    int x0 = *x, M = *y, x1 = x0 + *J, Q = M + *h;
    if (x0 < W.aL) x0 = W.aL;
    if (M < W.aW) M = W.aW;
    if (x1 > W.aX) x1 = W.aX;
    if (Q > W.aY) Q = W.aY;
    if (x0 >= x1 || M >= Q) return false;
    *x = x0; *y = M; *J = x1 - x0; *h = Q - M;
    return true;
}
void gE(uint8_t *bD, const uint8_t *src, int n, const uint8_t *ab);
void gF(uint8_t *bD, int n, const uint8_t *ab);
void iw(uint8_t *bD, int n, int u, int O, int og, int oh);
uint8_t *eG;
const uint8_t *fE;
int gG, gH;
uint8_t iy, lk;
void ll(uint8_t *bD, int n, int u, int O, int og, int oh);
#define lm 80
#define fF 5
static const uint8_t *iz[fF], *ln[fF];
static uint8_t gI[fF], fG;
void kb(uint8_t *hM) {
    eG = hM;
    memset(hM, 0, 256 * lm);
    for (int i = 0; i < fF; i++) iz[i] = 0;
}
static int oi(const uint8_t *src, int aZ, int bi, const uint8_t *ab) {
    int ai = 0;
    fG++;
    for (int i = 0; i < fF; i++) {
        if (iz[i] == src && ln[i] == ab) { gI[i] = fG; return i; }
        if ((uint8_t)(fG - gI[i]) > (uint8_t)(fG - gI[ai])) ai = i;
    }
    uint8_t *d = eG + ai * 50;
    for (int y = 0; y < lm; y++, d += 256) {
        memset(d, 0, 50);
        if (y < bi) gE(d, src + y * aZ, aZ, ab);
    }
    iz[ai] = src;
    ln[ai] = ab;
    gI[ai] = fG;
    return ai;
}
void hO(int x, int y, int J, int h, uint8_t c) {
    if (!gD(&x, &y, &J, &h)) return;
    uint8_t *l = W.buf + y * W.a7 + x;
    while (h--) { memset(l, c, J); l += W.a7; }
}
void nk(int x, int y, int J, int h, const uint8_t *c4) {
    if (!gD(&x, &y, &J, &h)) return;
    uint8_t *l = W.buf + y * W.a7 + x;
    while (h--) { gF(l, J, c4); l += W.a7; }
}
static int iA(int E, int aO) {
    int V = E - aO;
    if (V <= 0) return 0;
    int oj = 4 * E * E, a2 = 2 * V - 1;
    int i = 0;
    while (i < E) {
        int aC = 2 * (E - i) - 1;
        if (aC * aC + a2 * a2 <= oj) break;
        i++;
    }
    return i;
}
typedef void (*ok)(int y, int b2, int cz, uint8_t c, const uint8_t *ab);
static void gJ(int y, int b2, int cz, uint8_t c, const uint8_t *ab) {
    (void)ab;
    if (b2 < W.aL) b2 = W.aL;
    if (cz > W.aX) cz = W.aX;
    if (b2 < cz) memset(W.buf + y * W.a7 + b2, c, cz - b2);
}
static void ol(int y, int b2, int cz, uint8_t c, const uint8_t *ab) {
    (void)c;
    if (b2 < W.aL) b2 = W.aL;
    if (cz > W.aX) cz = W.aX;
    if (b2 < cz) gF(W.buf + y * W.a7 + b2, cz - b2, ab);
}
static void lp(int x, int y, int J, int h, int E, ok iB, uint8_t c, const uint8_t *ab) {
    if (E * 2 > h) E = h / 2;
    if (E * 2 > J) E = J / 2;
    int dj = y < W.aW ? W.aW : y, dk = y + h > W.aY ? W.aY : y + h;
    for (int aP = dj; aP < dk; aP++) {
        int aO = aP - y, e = h - 1 - aO;
        int in = iA(E, aO < e ? aO : e);
        iB(aP, x + in, x + J - in, c, ab);
    }
}
void fd(int x, int y, int J, int h, int E, const uint8_t *c4) { lp(x, y, J, h, E, ol, 0, c4); }
void cI(int x, int y, int J, int h, int E, uint8_t c) { lp(x, y, J, h, E, gJ, c, 0); }
void b8(int x, int y, int J, int h, int E, int V, uint8_t c) {
    int dj = y < W.aW ? W.aW : y, dk = y + h > W.aY ? W.aY : y + h;
    int om = E - V < 0 ? 0 : E - V;
    for (int aP = dj; aP < dk; aP++) {
        int aO = aP - y, e = h - 1 - aO, aa = aO < e ? aO : e;
        int o = iA(E, aa);
        if (aa < V) { gJ(aP, x + o, x + J - o, c, 0); continue; }
        int i = V + iA(om, aa - V);
        gJ(aP, x + o, x + i, c, 0);
        gJ(aP, x + J - i, x + J - o, c, 0);
    }
}
void iC(uint8_t *bD, const uint8_t *src, int n, const uint8_t *ab);
int fH = 0x7FFF, gK;
void dP(int x, int y, const uint8_t *aw, int aZ, int bi, const uint8_t *ab) {
    int J = aZ, h = bi, x0 = x, M = y;
    if (!gD(&x, &y, &J, &h)) return;
    const uint8_t *s = aw + (y - M) * aZ + (x - x0);
    uint8_t *d = W.buf + y * W.a7 + x;
    int E = y - M, az = aZ == 50 && bi == 78;
    while (h--) {
        if (az && E >= fH && E < gK) iC(d, s, J, ab);
        else gE(d, s, J, ab);
        d += W.a7; s += aZ; E++;
    }
}
void kd(int x, int y, const uint8_t *src, int J, int h, int hP) {
    int x0 = x, M = y;
    if (!gD(&x, &y, &J, &h)) return;
    const uint8_t *s = src + (y - M) * hP + (x - x0);
    uint8_t *d = W.buf + y * W.a7 + x;
    while (h--) {
        for (int i = 0; i < J; i++) if (s[i]) d[i] = s[i];
        d += W.a7; s += hP;
    }
}
static int iD(int O) { return (O - 8 + 15) >> 4; }
int32_t ae(int P, int K);
int d2(int32_t n, int d);
static int fI, gL, fJ, gM, fK, fL;
static int iE, iF;
static int gN(int32_t num, int s, int d) {
    num >>= s;
    if (num > 0x7FFFFF) num = 0x7FFFFF;
    if (num < -0x7FFFFF) num = -0x7FFFFF;
    return d2(num << 8, d);
}
static bool lq(const ar *O) {
    int x1 = O[1].x - O[0].x, Q = O[1].y - O[0].y;
    int x2 = O[2].x - O[0].x, iG = O[2].y - O[0].y;
    int32_t d3 = ae(x1, iG) - ae(x2, Q);
    if (d3 > -4 && d3 < 4) return false;
    int bJ = O[1].u - O[0].u, lr = O[2].u - O[0].u;
    int ls = O[1].O - O[0].O, lt = O[2].O - O[0].O;
    int32_t iH = ae(bJ, iG) - ae(lr, Q), iI = ae(lr, x1) - ae(bJ, x2);
    int32_t iJ = ae(ls, iG) - ae(lt, Q), iK = ae(lt, x1) - ae(ls, x2);
    if (d3 < 0) { d3 = -d3; iH = -iH; iI = -iI; iJ = -iJ; iK = -iK; }
    int s = 0;
    while ((d3 >> s) >= 8192) s++;
    int d = (int)(d3 >> s);
    int gO = gN(iH, s, d), gP = gN(iI, s, d), gQ = gN(iJ, s, d), gR = gN(iK, s, d);
    fI = gO; gL = gP; fJ = gQ; gM = gR;
    fK = O[0].x >> 4; fL = O[0].y >> 4;
    int bU = fK * 16 + 8 - O[0].x, bV = fL * 16 + 8 - O[0].y;
    iE = (O[0].u << 4) + ((gO * bU + gP * bV) >> 4);
    iF = (O[0].O << 4) + ((gQ * bU + gR * bV) >> 4);
    return true;
}
typedef struct { int32_t x, bR; } lv;
static int lw(lv *e, const ar *P, const ar *K, int oo) {
    int aO = K->y - P->y, bR = K->x - P->x;
    if (!aO) { e->x = 0; e->bR = 0; return 0; }
    if (bR > aO * 127) bR = aO * 127;
    if (bR < -aO * 127) bR = -aO * 127;
    int32_t lz = d2((int32_t)bR << 16, aO);
    e->bR = lz;
    e->x = ((int32_t)P->x << 12) + ((int32_t)(oo * 16 + 8 - P->y) * lz >> 4) - 32768 + 65535;
    return 1;
}
typedef struct {
    uint8_t *row; int a7, op;
    int32_t lx; uint8_t oq; int32_t or;
    int32_t fM; uint8_t os; int32_t ot;
    int u, O, d4, gP, gR, gO, gQ, aL, aX, ou, ov;
} lA;
void iL(lA *ac);
#define eH 4096
static int ow(int32_t x) { return *(const int16_t *)((const uint8_t *)&x + 2); }
static void gS(const ar *oz, const ar *oA, const ar *oB, const ar *dl, int M, int Q) {
    if (M < W.aW) M = W.aW;
    if (Q > W.aY) Q = W.aY;
    if (M >= Q) return;
    static lA ac;
    lv L, eI;
    lw(&L, oz, oA, M);
    lw(&eI, oB, dl, M);
    int d4 = ow(L.x);
    if (d4 < W.aL) d4 = W.aL;
    ac.row = W.buf + M * W.a7 - eH;
    ac.a7 = W.a7; ac.op = Q - M;
    ac.lx = L.x + ((int32_t)eH << 16); ac.or = L.bR; ac.fM = eI.x + ((int32_t)eH << 16); ac.ot = eI.bR;
    ac.oq = ac.os = 0;
    ac.d4 = d4 + eH;
    int32_t u = iE + ae(fI, d4 - fK) + ae(gL, M - fL);
    int32_t O = iF + ae(fJ, d4 - fK) + ae(gM, M - fL);
    ac.u = (int)(u * 16) + (gG << 8);
    ac.O = (int)(O * 16) + (gH << 8);
    ac.gP = gL * 16; ac.gR = gM * 16; ac.gO = fI * 16; ac.gQ = fJ * 16;
    ac.aL = W.aL + eH; ac.aX = W.aX + eH;
    ac.ou = (fI + 8) >> 4; ac.ov = (fJ + 8) >> 4;
    iL(&ac);
}
static void lB(const ar *O);
static void iM(const ar *O) {
    lB(O);
}
static void lB(const ar *O) {
    const ar *P = &O[0], *K = &O[1], *c = &O[2], *V;
    if (K->y < P->y) { V = P; P = K; K = V; }
    if (c->y < P->y) { V = P; P = c; c = V; }
    if (c->y < K->y) { V = K; K = c; c = V; }
    int dj = iD(P->y), dk = iD(K->y), gT = iD(c->y);
    if (dj >= gT || dj >= W.aY || gT <= W.aW) return;
    int32_t oC = ae(c->x - P->x, K->y - P->y) - ae(K->x - P->x, c->y - P->y);
    if (oC > 0) {
        gS(P, K, P, c, dj, dk);
        gS(K, c, P, c, dk, gT);
    } else {
        gS(P, c, P, K, dj, dk);
        gS(P, c, K, c, dk, gT);
    }
}
void dQ(const ar *d5, int n, const c2 *V) {
    static ar iN[8];
    const ar *O = lj(d5, n, iN);
    if (!lq(O)) return;
    int oD = oi(V->aw, V->aZ, V->bi, V->ab);
    fE = V->ab;
    gG = oD * 50 * 256;
    gH = (int)(((uint24_t)eG >> 8) & 0xFF) << 8;
    if (n == 3) { iM(O); return; }
    static ar cA[3];
    for (int i = 1; i + 1 < n; i++) { cA[0] = O[0]; cA[1] = O[i]; cA[2] = O[i + 1]; if (lq(cA)) iM(cA); }
}
void f_(const ar *d5, int n, int mode, uint8_t color, const uint8_t *c4) {
    static ar iN[8];
    const ar *O = lj(d5, n, iN);
    iy = mode == j_ ? 2 : 1;
    lk = color;
    fE = c4;
    fI = gL = fJ = gM = fK = fL = 0;
    iE = iF = 0;
    static ar cA[3];
    for (int i = 1; i + 1 < n; i++) { cA[0] = O[0]; cA[1] = O[i]; cA[2] = O[i + 1]; iM(cA); }
    iy = 0;
}
void gc(au *I, const uint8_t *K) {
    I->h = K[0]; I->base = K[1]; I->aQ = K[2]; I->n = K[3];
    I->J = K + 4; I->dR = I->J + I->n; I->c5 = I->dR + I->n;
    I->ga = I->c5 + I->n;
    I->data = I->ga + 2 * I->n;
}
int b9(const au *I, const char *s) {
    int J = 0;
    for (; *s; s++) {
        unsigned c = (uint8_t)*s - I->aQ;
        if (c < I->n) J += I->c5[c];
    }
    return J;
}
static uint8_t eJ[2048];
static int gU(const au *I, unsigned c) {
    int J = I->J[c], total = J * I->h, i = 0;
    const uint8_t *l = I->data + (I->ga[2 * c] | I->ga[2 * c + 1] << 8);
    while (i < total) {
        uint8_t n = *l++;
        if (n < 128) { memset(eJ + i, *l++, n + 1); i += n + 1; }
        else { n -= 127; memcpy(eJ + i, l, n); l += n; i += n; }
    }
    return J;
}
static void oE(const au *I, unsigned c, int x, int y, const uint8_t *ab) {
    int J = I->J[c], h = I->h;
    if (!J) return;
    if (x >= W.aX || y >= W.aY || x + J <= W.aL || y + h <= W.aW) return;
    gU(I, c);
    dP(x, y, eJ, J, h, ab);
}
int nl(const au *I, const char *s, uint8_t *bD, int c6, int dS) {
    int x = 0;
    memset(bD, 0, c6 * dS);
    for (; *s; s++) {
        unsigned c = (uint8_t)*s - I->aQ;
        if (c >= I->n) continue;
        int J = I->J[c], oF = x + (int8_t)I->dR[c];
        if (J) {
            gU(I, c);
            for (int aP = 0; aP < I->h && aP < dS; aP++)
                for (int dm = 0; dm < J; dm++) {
                    uint8_t V = eJ[aP * J + dm];
                    int ck = oF + dm;
                    if (V && ck >= 0 && ck < c6) bD[aP * c6 + ck] = V;
                }
        }
        x += I->c5[c];
    }
    return x;
}
void ke(int x, int y, const uint8_t *src, int J, int h, int aR, const uint8_t *ab) {
    if (aR <= 0) return;
    int c6 = J * aR >> 8, dS = h * aR >> 8;
    if (c6 <= 0 || dS <= 0) return;
    int iO = (256 * 256) / aR;
    int x0 = x < W.aL ? W.aL : x, x1 = x + c6 > W.aX ? W.aX : x + c6;
    int M = y < W.aW ? W.aW : y, Q = y + dS > W.aY ? W.aY : y + dS;
    for (int aP = M; aP < Q; aP++) {
        const uint8_t *oG = src + ((aP - y) * iO >> 8) * J;
        uint8_t *d = W.buf + aP * W.a7;
        int u = (x0 - x) * iO;
        for (int dm = x0; dm < x1; dm++, u += iO) {
            uint8_t V = oG[u >> 8];
            if (V) d[dm] = ab[V];
        }
    }
}
void ff(const au *I, int aF, int aS, const char *s, int aR, const uint8_t *ab) {
    int aZ = b9(I, s);
    int x = aF - (aZ * aR >> 9), y = aS - (I->h * aR >> 9);
    int dn = 0;
    for (; *s; s++) {
        unsigned c = (uint8_t)*s - I->aQ;
        if (c >= I->n) continue;
        int J = I->J[c];
        if (J) {
            int iP = x + ((dn + (int8_t)I->dR[c]) * aR >> 8);
            if (iP < W.aX && iP + (J * aR >> 8) > W.aL && y < W.aY && y + (I->h * aR >> 8) > W.aW) {
                gU(I, c);
                ke(iP, y, eJ, J, I->h, aR, ab);
            }
        }
        dn += I->c5[c];
    }
}
int fe(const au *I, int x, int y, const char *s, const uint8_t *ab) {
    for (; *s; s++) {
        unsigned c = (uint8_t)*s - I->aQ;
        if (c >= I->n) continue;
        oE(I, c, x + (int8_t)I->dR[c], y, ab);
        x += I->c5[c];
    }
    return x;
}
extern uint8_t cM[256], cN[256], cO[256];
extern uint8_t *ao[5][8];
static void lC(au *I) {
    if (I->gb) return;
    const uint8_t *ab = ao[4][0];
    int M = I->h, Q = 0;
    for (char bt = '0'; bt <= '9'; bt++) {
        unsigned c = (uint8_t)bt - I->aQ;
        if (c >= I->n || !I->J[c]) continue;
        int J = gU(I, c);
        for (int y = 0; y < I->h; y++)
            for (int x = 0; x < J; x++) {
                uint8_t V = eJ[y * J + x];
                if (V && cM[ab[V]] + cN[ab[V]] + cO[ab[V]] > 360) { if (y < M) M = y; if (y + 1 > Q) Q = y + 1; break; }
            }
    }
    I->hQ = (uint8_t)M; I->gb = (uint8_t)Q;
}
int co(const au *bu, int x, int y, int h, const char *s, const uint8_t *ab) {
    au *I = (au *)bu;
    lC(I);
    return fe(I, x, y + (h - I->hQ - I->gb) / 2, s, ab);
}
void bA(const au *bu, int aF, int y, int h, const char *s, const uint8_t *ab) {
    au *I = (au *)bu;
    int dn = 0, x0 = 0x7FFF, x1 = -0x7FFF;
    for (const char *l = s; *l; l++) {
        unsigned c = (uint8_t)*l - I->aQ;
        if (c >= I->n) continue;
        if (I->J[c]) {
            int P = dn + (int8_t)I->dR[c], K = P + I->J[c];
            if (P < x0) x0 = P;
            if (K > x1) x1 = K;
        }
        dn += I->c5[c];
    }
    if (x1 < x0) return;
    co(I, aF - (x0 + x1 + 1) / 2, y, h, s, ab);
}
void nm(const au *bu, int aF, int aS, const char *s, const uint8_t *ab) {
    au *I = (au *)bu;
    lC(I);
    int dn = 0, x0 = 0x7FFF, x1 = -0x7FFF;
    for (const char *l = s; *l; l++) {
        unsigned c = (uint8_t)*l - I->aQ;
        if (c >= I->n) continue;
        if (I->J[c]) {
            int P = dn + (int8_t)I->dR[c], K = P + I->J[c];
            if (P < x0) x0 = P;
            if (K > x1) x1 = K;
        }
        dn += I->c5[c];
    }
    if (x1 < x0) return;
    fe(I, aF - (x0 + x1 + 1) / 2, aS - (I->hQ + I->gb + 1) / 2, s, ab);
}
void np(const au *I, int aF, int y, const char *s, const uint8_t *ab) {
    fe(I, aF - b9(I, s) / 2, y, s, ab);
}
const uint8_t *hV[fg];
uint8_t *ao[gd][fh];
uint8_t *es[fh];
uint8_t *cL[eq];
uint8_t *hW[4];
uint16_t gg[256];
au aD, b_, c7;
const uint8_t *gh;
#define gV 4
#define iQ (gd * gV + gV + eq + 4)
#define lD (20480 + iQ * 256 + 768 + 768)
static uint8_t iR[lD];
static uint24_t lE;
uint8_t cM[256], cN[256], cO[256];
uint8_t *dU;
static uint8_t *iS(uint24_t size, bool oH) {
    uint24_t P = ((uint24_t)iR + lE + 255) & ~(uint24_t)255;
    if (oH && (P >> 16) != ((P + size - 1) >> 16)) P = (P + 0x10000) & ~(uint24_t)0xFFFF;
    if (P + size > (uint24_t)iR + lD) return NULL;
    lE = P + size - (uint24_t)iR;
    return (uint8_t *)P;
}
static uint8_t *gW(uint8_t *aa, uint8_t **bD, const uint8_t *src, int n, int len) {
    for (int i = 0; i < n; i++, aa += 256) {
        memset(aa, 0, 256);
        memcpy(aa, src + i * len, len);
        bD[i] = aa;
    }
    return aa;
}
const char *ko(void) {
    static const char *const fN[fg] = nr;
    static const uint24_t oI[fg] = ns;
    for (int i = 0; i < fg; i++) {
        var_t *O = os_GetAppVarData(fN[i], NULL);
        if (!O || O->size != oI[i]) return fN[i];
        hV[i] = O->data;
    }
    (void)fN;
    uint8_t *lF = iS(20480, true);
    uint8_t *aa = iS(iQ * 256, false);
    dU = iS(768, true);
    if (!lF || !aa || !dU) return "memory";
    kb(lF);
    for (int c = 0; c < gd; c++) aa = gW(aa, ao[c], bp(nz) + c * fh * kf, gV, kf);
    aa = gW(aa, es, bp(nA), gV, 256);
    aa = gW(aa, cL, bp(nB), eq, 256);
    gW(aa, hW, bp(nD), 4, 256);
    memcpy(gg, bp(nu), 512);
    for (int i = 0; i < 256; i++) {
        uint16_t c = gg[i];
        uint8_t E = (c >> 10) & 31, bo = (uint8_t)(((c >> 5) & 31) << 1 | c >> 15), K = c & 31;
        cM[i] = (uint8_t)(E << 3 | E >> 2);
        cN[i] = (uint8_t)(bo << 2 | bo >> 4);
        cO[i] = (uint8_t)(K << 3 | K >> 2);
        dU[i] = cM[i] >> 2; dU[256 + i] = cN[i] >> 2; dU[512 + i] = cO[i] >> 2;
    }
    hL(gg, 0, 256);
    {
        int ai = 1, dp = 0x7FFF;
        for (int i = 1; i < cJ; i++) {
            int d = cM[i] + cN[i] + cO[i];
            if (d < dp) { dp = d; ai = i; }
        }
        uint8_t *l = ao[0][0];
        for (int i = 0; i < iQ * 256; i++)
            if (!l[i] && (i & 255)) l[i] = (uint8_t)ai;
    }
    gc(&aD, bp(nE));
    gc(&b_, bp(nF));
    gc(&c7, bp(nG));
    gh = bp(nC);
    {
        extern int fH, gK;
        const uint8_t *V = c8(bW);
        fH = bj; gK = 0;
        for (int y = 0; y < bj; y++) {
            bool cB = true;
            for (int x = 0; x < a8; x++) if (!V[y * a8 + x]) { cB = false; break; }
            if (cB) { if (y < fH) fH = y; gK = y + 1; }
        }
    }
    return NULL;
}
const uint8_t *fi(int y) {
    return y < 200 ? bp(nv) + y * 320 : bp(nw) + (y - 200) * 320;
}
const uint8_t *c8(int fj) { return bp(nt) + fj * (a8 * bj); }
const uint8_t *hY(int fj) { return bp(ny) + fj * (hR * hS); }
static int16_t eK[256];
int32_t ae(int P, int K);
static int gX(int P, int K) { return (int)(ae(P, K) >> 13); }
void kp(void) {
    for (int D = 0; D <= 64; D++) {
        int x = (D * 12868 + 32) / 64;
        int V = gX(x, x);
        int c = 8192 - V / 42;
        c = 8192 - gX(V / 20, c);
        c = 8192 - gX(V / 6, c);
        int s = gX(x, c) * 2;
        if (s > 16384) s = 16384;
        eK[D] = (int16_t)s; eK[128 - D] = (int16_t)s;
        eK[128 + D] = (int16_t)-s; eK[(256 - D) & 255] = (int16_t)-s;
    }
}
int bE(int P) { return eK[P & 255]; }
int cq(int P) { return eK[(P + 64) & 255]; }
int d2(int32_t n, int d);
#define lG ((ki + 2) >> 2)
#define lH ((kh + 2) >> 2)
void c9(int x, int y, int z, int *kq, int *kr) {
    int eL = y + (int)((int32_t)kj * ki >> 16);
    int lI = z - (int)((int32_t)kj * kh >> 16);
    int gY = (int)((ae(eL, lG) - ae(lI, lH)) >> 10);
    int oJ = (int)((ae(eL, lH) + ae(lI, lG)) >> 10);
    if (gY < 64) gY = 64;
    *kq = nN * 16 + d2(ae(kk, x) << 8, gY);
    *kr = nO * 16 - d2(ae(kk, oJ) << 4, gY);
}
static int gZ(int P, int K) { return (int)(ae(P, K) >> 14); }
void cb(int x, int y, int z, int fk, int c_, int *af, int *ag) {
    int c = cq(fk), s = bE(fk);
    int lJ = nT * c_ >> 8, lK = nU * c_ >> 8;
    int g0 = gZ(c, lJ), g1 = gZ(s, lJ);
    int a4 = gZ(s, lK), g2 = -gZ(c, lK);
    c9(x - g0 - a4, y - g1 - g2, z, &af[0], &ag[0]);
    c9(x + g0 - a4, y + g1 - g2, z, &af[1], &ag[1]);
    c9(x + g0 + a4, y + g1 + g2, z, &af[2], &ag[2]);
    c9(x - g0 + a4, y - g1 + g2, z, &af[3], &ag[3]);
}
#define iT 72
static Y items[iT];
static Y *bK[iT];
static int cl;
uint8_t *bX;
#define cC 160
av aq;
kA fo;
void (*fp)(void);
#define eM 20
static Z lL[eM], lM[eM], iU[eM];
static int fO, fP, eN;
static bool lN(const Z *E) { return E->x0 >= E->x1 || E->M >= E->Q; }
static bool oK(const Z *P, const Z *K) {
    return P->x0 <= K->x1 && K->x0 <= P->x1 && P->M <= K->Q && K->M <= P->Q;
}
static Z iV(Z P, Z K) {
    if (K.x0 < P.x0) P.x0 = K.x0;
    if (K.M < P.M) P.M = K.M;
    if (K.x1 > P.x1) P.x1 = K.x1;
    if (K.Q > P.Q) P.Q = K.Q;
    return P;
}
static int24_t fQ(const Z *E) { return (int24_t)(E->x1 - E->x0) * (E->Q - E->M); }
static bool g3(Z *E) {
    if (E->x0 < 0) E->x0 = 0;
    if (E->M < 0) E->M = 0;
    if (E->x1 > at) E->x1 = at;
    if (E->Q > bh) E->Q = bh;
    return !lN(E);
}
static void lO(uint8_t *bD, const uint8_t *src, Z E) {
    int J = E.x1 - E.x0, o = E.M * at + E.x0;
    for (int y = E.M; y < E.Q; y++, o += at) memcpy(bD + o, src + o, J);
}
static void iW(Z *cD, int *n, Z E) {
    if (!g3(&E)) return;
    for (;;) {
        bool lP = false;
        for (int i = 0; i < *n; i++) {
            Z u = iV(cD[i], E);
            if (oK(&cD[i], &E) || fQ(&u) <= fQ(&cD[i]) + fQ(&E) + 400) {
                E = u;
                cD[i] = cD[--*n];
                lP = true;
                break;
            }
        }
        if (!lP) break;
    }
    if (*n < eM) { cD[(*n)++] = E; return; }
    int ai = 0;
    int24_t lQ = 0x7FFFFF;
    for (int i = 0; i < *n; i++) {
        Z u = iV(cD[i], E);
        int24_t bo = fQ(&u) - fQ(&cD[i]);
        if (bo < lQ) { lQ = bo; ai = i; }
    }
    cD[ai] = iV(cD[ai], E);
}
void bG(Z E) { iW(lL, &fO, E); }
static uint8_t *d6;
static int eO = at;
#define lR(x, y) (d6 + (y) * eO + (x))
static Z d7;
static bool cW;
static uint8_t iX[4608];
static bool lS(const Z *P, const Z *K) { return P->x0 < K->x1 && K->x0 < P->x1 && P->M < K->Q && K->M < P->Q; }
void dW(Z E) {
    if (cW && lS(&E, &d7)) cW = false;
    iW(iU, &eN, E);
}
void kz(void) { Z E = { 0, 0, at, bh }; bG(E); fP = 0; }
void h1(void) {
    memset(items, 0, sizeof items);
    cl = 0;
    fO = fP = eN = 0;
    void *lT;
    size_t oL = os_MemChk(&lT);
    bX = oL >= at * cC + 2048 ? (uint8_t *)lT : NULL;
    d6 = bX;
    cW = false;
    Z iY = { 0, 0, at, bh };
    dW(iY);
    kz();
}
static void iZ(Y *A) {
    int i = cl++;
    while (i > 0 && bK[i - 1]->z > A->z) { bK[i] = bK[i - 1]; i--; }
    bK[i] = A;
}
static void g4(Y *A) {
    int i = 0;
    while (i < cl && bK[i] != A) i++;
    if (i == cl) return;
    for (; i < cl - 1; i++) bK[i] = bK[i + 1];
    cl--;
}
Y *a9(bool cr, int z, int cP) {
    for (int i = 0; i < iT; i++) {
        Y *A = &items[i];
        if (A->aI & et) continue;
        memset(A, 0, sizeof *A);
        A->aI = et;
        A->cr = cr;
        A->z = (int8_t)z;
        A->cP = (uint8_t)cP;
        A->bB.x0 = A->bB.x1 = 0;
        iZ(A);
        return A;
    }
    return NULL;
}
static void i0(Y *A) {
    Z K;
    switch (A->cP) {
    case dV:
    case gi: {
        int x0 = A->af[0], x1 = x0, M = A->ag[0], Q = M;
        for (int i = 1; i < 4; i++) {
            if (A->af[i] < x0) x0 = A->af[i];
            if (A->af[i] > x1) x1 = A->af[i];
            if (A->ag[i] < M) M = A->ag[i];
            if (A->ag[i] > Q) Q = A->ag[i];
        }
        K.x0 = (x0 >> 4) - 1; K.M = (M >> 4) - 1; K.x1 = (x1 >> 4) + 2; K.Q = (Q >> 4) + 2;
        break;
    }
    case ks:
        K.x0 = A->x; K.M = A->y; K.x1 = A->x + a8; K.Q = A->y + bj;
        if (A->aI & ku) { K.x0 -= 3; K.M -= 3; K.x1 += 3; K.Q += 3; }
        break;
    default:
        K.x0 = A->x; K.M = A->y; K.x1 = A->x + A->J; K.Q = A->y + A->h;
        break;
    }
    if (A->aI & eu) K.x0 = K.x1 = K.M = K.Q = 0;
    A->bq = K;
}
static void i1(Y *A, Z E) {
    if (lN(&E)) return;
    if (A->cr) dW(E); else bG(E);
}
void am(Y *A) {
    Z bB = A->bq;
    i0(A);
    i1(A, bB);
    i1(A, A->bq);
}
void a0(Y *A) {
    if (!A || !(A->aI & et)) return;
    i1(A, A->bq);
    g4(A);
    A->aI = 0;
}
void kB(Y *A) {
    if (!A || !(A->aI & et)) return;
    g4(A);
    A->aI = 0;
}
void kC(Y *A, int z) {
    g4(A);
    A->z = (int8_t)z;
    iZ(A);
}
void gl(Y *A, bool fm) {
    if (fm) A->aI |= eu; else A->aI &= ~eu;
    am(A);
}
void n5(Y *A, int z) {
    g4(A);
    A->z = (int8_t)z;
    iZ(A);
    am(A);
}
void n6(Y *A, int x, int y, int J, int h) {
    A->af[0] = A->af[3] = x * 16; A->af[1] = A->af[2] = (x + J) * 16;
    A->ag[0] = A->ag[1] = y * 16; A->ag[2] = A->ag[3] = (y + h) * 16;
}
const uint8_t *ev(int aw, int as, int cc) {
    if (as & 8) return hW[as & 3];
    return aw < nM ? ao[as & 7][cc] : es[cc];
}
static void oM(Y *A) {
    bool i2 = A->aI & nY;
    int aZ = i2 ? hR : a8, bi = i2 ? hS : bj;
    c2 V = { i2 ? hY(A->aw) : c8(A->aw), (uint8_t)aZ, (uint8_t)bi,
                   ev(A->aw, A->as, A->cc) };
    int bJ = aZ * 256 - 48, cm = bi * 256 - 48;
    ar P[3] = { { A->af[0], A->ag[0], 48, 48 }, { A->af[1], A->ag[1], bJ, 48 }, { A->af[2], A->ag[2], bJ, cm } };
    ar K[3] = { { A->af[0], A->ag[0], 48, 48 }, { A->af[2], A->ag[2], bJ, cm }, { A->af[3], A->ag[3], 48, cm } };
    dQ(P, 3, &V);
    dQ(K, 3, &V);
}
static void eP(Y *A) {
    switch (A->cP) {
    case dV: oM(A); break;
    case ks:
        if (A->aI & ku) b8(A->x - 3, A->y - 3, a8 + 6, bj + 6, 7, 2, dT);
        dP(A->x, A->y, c8(A->aw), a8, bj, ev(A->aw, A->as, A->cc));
        break;
    case gi: {
        ar O[4];
        for (int i = 0; i < 4; i++) { O[i].x = A->af[i]; O[i].y = A->ag[i]; O[i].u = O[i].O = 0; }
        f_(O, 4, j_, 0, cL[A->gk]);
        break;
    }
    case nW: dP(A->x, A->y, A->n0, A->J, A->h, ao[A->as][A->cc]); break;
    case kt: fe(A->font, A->x, A->y, A->hZ, ao[A->as][A->cc]); break;
    case nX:
        if (A->gk != 0xFF) fd(A->x, A->y, A->J, A->h, A->E, cL[A->gk]);
        else cI(A->x, A->y, A->J, A->h, A->E, A->color);
        if (A->da) b8(A->x, A->y, A->J, A->h, A->E, 1, (uint8_t)A->da);
        break;
    case bF: A->bk(A); break;
    }
}
static bool g5(const Y *A) {
    return !(A->aI & kv) && (A->cP == dV || A->cP == gi || (A->cP == bF && (A->aI & gj)));
}
static bool fR(const Y *A, const Z *E) {
    if ((A->aI & eu) || !(A->bq.x0 < E->x1 && E->x0 < A->bq.x1 && A->bq.M < E->Q && E->M < A->bq.Q)) return false;
    return !A->h0 || A->h0((Y *)A, E);
}
void i3(const uint8_t *src, uint8_t *bD, int J, int qB);
void i4(const uint8_t *P, const uint8_t *K, uint8_t *bD, int J);
uint8_t oN(uint8_t l, uint8_t N, uint8_t E, uint8_t s) {
    uint8_t O[4] = { l, N, E, s };
    int i5 = 0, eQ = 0, eI = 0, H = 0, lU = 0, n = 0;
    for (int i = 0; i < 4; i++) {
        uint8_t c = O[i];
        if (c >= er && c < er + 8) { eQ = c & 3; i5++; }
        else { eI += cM[c]; H += cN[c]; lU += cO[c]; n++; }
    }
    if (i5 == 4) return (uint8_t)(er + eQ);
    if (i5 >= 2) return (uint8_t)(hT + eQ);
    return gh[((eI / n) >> 4) << 8 | ((H / n) >> 4) << 4 | ((lU / n) >> 4)];
}
static int fS;
static void i6(Z E, Y *bS);
static void lV(Z E, Y *bS) {
    if (E.Q > cC) {
        Z lW = E;
        lW.M = E.M > cC ? E.M : cC;
        bG(lW);
        E.Q = cC;
        if (E.M >= E.Q) return;
    }
    i6(E, bS);
}
static void i6(Z E, Y *bS) {
    if (bS && !g5(bS)) {
        ep(d6, eO, E.x0, E.M, E.x1, E.Q);
        eP(bS);
        bG(E);
        return;
    }
    uint8_t *g7 = bN;
    for (int a2 = E.M; a2 < E.Q; a2 += kn) {
        for (int aC = E.x0; aC < E.x1; aC += km) {
            Z V = { aC, a2, aC + km, a2 + kn };
            if (V.x1 > E.x1) V.x1 = E.x1;
            if (V.Q > E.Q) V.Q = E.Q;
            int J = V.x1 - V.x0, h = V.Q - V.M, eR = 2 * J;
            bool i7 = bS != NULL;
            for (int i = 0; !i7 && i < cl; i++)
                if (bK[i]->cr && g5(bK[i]) && fR(bK[i], &V)) i7 = true;
            if (!i7) {
                for (int y = V.M; y < V.Q; y++) memcpy(lR(V.x0, y), fi(y) + V.x0, J);
                continue;
            }
            for (int y = 0; y < h; y++)
                i3((bS ? bX + (V.M + y) * at : fi(V.M + y)) + V.x0, g7 + 2 * y * eR, J, eR);
            ep(g7, eR, 0, 0, eR, 2 * h);
            hN(V.x0, V.M, 2);
            if (bS) eP(bS);
            else for (int i = 0; i < cl; i++) {
                Y *A = bK[i];
                if (A->cr && g5(A) && fR(A, &V)) eP(A);
            }
            hN(0, 0, 1);
            for (int y = 0; y < h; y++)
                i4(g7 + 2 * y * eR, g7 + (2 * y + 1) * eR, lR(V.x0, V.M + y), J);
            { int rows = (4 * J * h + at - 1) / at; if (rows > fS) fS = rows; }
        }
    }
    if (!bS) {
        ep(d6, eO, E.x0, E.M, E.x1, E.Q);
        for (int i = 0; i < cl; i++) {
            Y *A = bK[i];
            if (A->cr && !g5(A) && fR(A, &E)) eP(A);
        }
    }
    if (d6 == bX) bG(E);
}
#define lY 4
static Y *dq[lY];
static int eS;
void gm(Y *A) {
    i0(A);
    if (cW && lS(&A->bq, &d7)) cW = false;
    if (!bX || eS == lY) { dW(A->bq); return; }
    dq[eS++] = A;
}
bool kx(Z E) {
    cW = false;
    if (!bX || !g3(&E) || E.Q > cC || (E.x1 - E.x0) * (E.Q - E.M) > (int)sizeof iX) return false;
    eO = E.x1 - E.x0;
    d6 = iX - E.M * eO - E.x0;
    i6(E, NULL);
    d6 = bX; eO = at;
    d7 = E;
    cW = true;
    return true;
}
bool ky(Z E) {
    if (!cW || !g3(&E) || E.x0 != d7.x0 || E.M != d7.M || E.x1 != d7.x1 || E.Q != d7.Q) return false;
    int J = E.x1 - E.x0;
    for (int y = E.M; y < E.Q; y++) memcpy(bX + y * at + E.x0, iX + (y - E.M) * J, J);
    bG(E);
    cW = false;
    return true;
}
void gn(Y *A) { i0(A); }
static void lZ(Z E) {
    for (int y = E.M; y < E.Q; y++) memcpy(bN + y * at + E.x0, fi(y) + E.x0, E.x1 - E.x0);
    ep(bN, at, E.x0, E.M, E.x1, E.Q);
    for (int i = 0; i < cl; i++) {
        Y *A = bK[i];
        if (A->cr && fR(A, &E)) eP(A);
    }
}
static av i8;
void aJ(void) {
    j7();
    aq = eo;
    if (fp) fp();
    if (fo) fo();
    if (bX) {
        int n = eN;
        static Z cE[eM];
        memcpy(cE, iU, n * sizeof(Z));
        eN = 0;
        for (int i = 0; i < n; i++) lV(cE[i], NULL);
        for (int i = 0; i < eS; i++) {
            bool l0 = false;
            for (int D = 0; D < n; D++)
                if (dq[i]->bq.x0 >= cE[D].x0 && dq[i]->bq.x1 <= cE[D].x1 && dq[i]->bq.M >= cE[D].M && dq[i]->bq.Q <= cE[D].Q) l0 = true;
            if (!l0) { Z K = dq[i]->bq; g3(&K); lV(K, dq[i]); }
        }
        eS = 0;
    } else {
        for (int i = 0; i < eS; i++) bG(dq[i]->bq);
        eS = 0;
        for (int i = 0; i < eN; i++) bG(iU[i]);
        eN = 0;
    }
    if (!fO) {
        while ((av)(fc() - i8) < aK(16)) {}
        i8 = fc();
        return;
    }
    {
        const uint8_t *gC = (const uint8_t *)(bN == (uint8_t *)0xD40000 ? 0xD52C00 : 0xD40000);
        if (fS) { memcpy(bN, gC, at * fS); fS = 0; }
        for (int i = 0; i < fP; i++) lO(bN, gC, lM[i]);
        fP = 0;
    }
    static Z bk[eM];
    int g8 = 0;
    for (int i = 0; i < fO; i++) iW(bk, &g8, lL[i]);
    for (int D = 0; D < g8; D++) {
        Z E = bk[D];
        if (bX) {
            Z hi = E, lo = E;
            if (hi.Q > cC) hi.Q = cC;
            if (lo.M < cC) lo.M = cC;
            lO(bN, bX, hi);
            if (lo.M < lo.Q) lZ(lo);
        } else {
            lZ(E);
        }
        ep(bN, at, E.x0, E.M, E.x1, E.Q);
        for (int i = 0; i < cl; i++) {
            Y *A = bK[i];
            if (!A->cr && fR(A, &E)) eP(A);
        }
    }
    memcpy(lM, bk, g8 * sizeof(Z));
    fP = g8;
    fO = 0;
    hK();
    i8 = fc();
}
int32_t ae(int P, int K);
static int bv(int P, int K) { return (int)(ae(P, K) >> 14); }
void (*fw)(void);
int b0(uint8_t az) { return a1(az); }
int cV(uint8_t az) { return bf(az) < 4 ? bf(az) : 0; }
static const uint8_t l1[4][3] = { { 237, 28, 36 }, { 255, 214, 0 }, { 0, 163, 78 }, { 0, 110, 190 } };
uint8_t bC(int E, int bo, int K) {
    int ai = 0;
    int24_t dp = 0x7FFFFF;
    for (int i = 0; i < cJ; i++) {
        int l2 = E - cM[i], l3 = bo - cN[i], l4 = K - cO[i];
        int24_t d = l2 * l2 * 3 + l3 * l3 * 4 + l4 * l4 * 2;
        if (d < dp) { dp = d; ai = i; }
    }
    return (uint8_t)ai;
}
static void i9(const ap *N, Z *E) {
    int x0 = N->x[0], x1 = x0, M = N->y[0], Q = M;
    for (int i = 1; i < 4; i++) {
        if (N->x[i] < x0) x0 = N->x[i];
        if (N->x[i] > x1) x1 = N->x[i];
        if (N->y[i] < M) M = N->y[i];
        if (N->y[i] > Q) Q = N->y[i];
    }
    E->x0 = (x0 >> 4) - 1; E->M = (M >> 4) - 1; E->x1 = (x1 >> 4) + 2; E->Q = (Q >> 4) + 2;
}
static void l5(const ap *N, const c2 *V) {
    int bJ = V->aZ * 256 - 48, cm = V->bi * 256 - 48;
    ar P[3] = { { N->x[0], N->y[0], 48, 48 }, { N->x[1], N->y[1], bJ, 48 }, { N->x[2], N->y[2], bJ, cm } };
    ar K[3] = { { N->x[0], N->y[0], 48, 48 }, { N->x[2], N->y[2], bJ, cm }, { N->x[3], N->y[3], 48, cm } };
    dQ(P, 3, V);
    dQ(K, 3, V);
}
static void l6(const ap *N, uint8_t c) {
    ar O[4];
    for (int i = 0; i < 4; i++) { O[i].x = N->x[i]; O[i].y = N->y[i]; O[i].u = O[i].O = 0; }
    f_(O, 4, ka, c, 0);
}
int dd(int aT) { return ak.h4 ? aT * 3 / 4 : aT * 5 / 4; }
void aN(int aT) {
    av end = aq + aK(aT);
    do aJ(); while ((int)(aq - end) < 0);
}
typedef struct { int i_, eT, l7; } ja;
static const ja g9[3] = {
    { 0, 330, 192 },
    { -490, 95, 247 },
    { 490, 95, 137 },
};
#define oO 59
#define oP 92
#define oQ 40
#define jb 62
#define l8 13
static Y *cn[bY], *g_[bY];
static int ds[bY];
static int l9[3][7];
static void oR(void) {
    for (int D = 0; D < 3; D++) {
        int *K = l9[D], jc = cq(g9[D].l7), jd = bE(g9[D].l7), dz = bE(l8);
        K[0] = jc; K[1] = jd; K[2] = -bv(jc, dz); K[3] = -bv(jd, dz); K[4] = cq(l8); K[5] = -jd; K[6] = jc;
    }
}
static void je(int l, int i, int n, ap *N) {
    const ja *s = &g9[H.l[l].ew];
    const int *K = l9[H.l[l].ew];
    int jf = n > 1 ? 70 / (n - 1) : 0;
    if (jf > 9) jf = 9;
    int l_ = (2 * i - (n - 1)) * jf / 2;
    int ma = cq(l_), mb = bE(l_);
    int fT[3], mc[3];
    for (int D = 0; D < 3; D++) {
        int u = K[2 + D], E = D < 2 ? K[5 + D] : 0;
        fT[D] = bv(u, ma) + bv(E, mb);
        mc[D] = bv(E, ma) - bv(u, mb);
    }
    int c[3] = { s->i_ + bv(fT[0], jb) + bv(K[0], i * 3), s->eT + bv(fT[1], jb) + bv(K[1], i * 3), oQ + bv(fT[2], jb) };
    int ha[3], hb[3];
    for (int D = 0; D < 3; D++) { ha[D] = bv(mc[D], oO); hb[D] = bv(fT[D], oP); }
    for (int D = 0; D < 4; D++) {
        int jg = D == 1 || D == 2 ? 1 : -1, jh = D < 2 ? 1 : -1;
        c9(c[0] + jg * ha[0] + jh * hb[0], c[1] + jg * ha[1] + jh * hb[1], c[2] + jg * ha[2] + jh * hb[2], &N->x[D], &N->y[D]);
    }
}
static int ji(int l) { return ds[l] > 16 ? 16 : ds[l]; }
static void oS(Y *A) {
    int l = A->da;
    int n = ji(l);
    c2 V = { c8(bW), a8, bj, es[1] };
    for (int i = 0; i < n; i++) {
        ap N;
        je(l, i, n, &N);
        V.ab = es[i == n - 1 ? 0 : 1];
        l5(&N, &V);
    }
}
static void he(int l) {
    int n = ji(l);
    Y *A = cn[l];
    if (!n) { A->x = A->y = A->J = A->h = 0; return; }
    int x0 = 0x7FFF, x1 = -0x7FFF, M = 0x7FFF, Q = -0x7FFF;
    for (int i = 0; i < n; i++) {
        ap N;
        Z E;
        je(l, i, n, &N);
        i9(&N, &E);
        if (E.x0 < x0) x0 = E.x0;
        if (E.x1 > x1) x1 = E.x1;
        if (E.M < M) M = E.M;
        if (E.Q > Q) Q = E.Q;
    }
    A->x = x0; A->y = M; A->J = x1 - x0; A->h = Q - M;
}
#define jj 7
static Y *fU[bY][jj];
static const int16_t oT[3][3] = { { 0, 160, 128 }, { -150, 0, 192 }, { 150, 0, 64 } };
void ia(int l, int D, ap *N) {
    const int16_t *jk = oT[H.l[l].ew];
    int ac = D * 37;
    cb(jk[0] + ac % 13 - 6, jk[1] + ac % 11 - 5, D, jk[2] + ac % 9 - 4, 132, N->x, N->y);
}
void kN(int l, int D) {
    if (D >= jj) return;
    Y *A = a9(true, 30 + D, dV);
    A->aw = bW;
    A->aI |= kv;
    ap N;
    ia(l, D, &N);
    memcpy(A->af, N.x, sizeof N.x); memcpy(A->ag, N.y, sizeof N.y);
    gm(A);
    fU[l][D] = A;
}
void ib(int l) {
    for (int D = 0; D < jj; D++) { a0(fU[l][D]); fU[l][D] = NULL; }
}
static int jl = -1, md;
static Z mf;
static void mg(int l, Z *E) {
    Y *A = cn[l];
    E->x0 = A->x; E->M = A->y; E->x1 = A->x + A->J; E->Q = A->y + A->h;
}
void kM(int l, int n) {
    if (n > 16) n = 16;
    Z P, K;
    int dA = ds[l];
    mg(l, &P);
    ds[l] = n;
    he(l);
    mg(l, &K);
    gn(cn[l]);
    if (K.x0 > P.x0) K.x0 = P.x0;
    if (K.M > P.M) K.M = P.M;
    if (K.x1 < P.x1) K.x1 = P.x1;
    if (K.Q < P.Q) K.Q = P.Q;
    jl = kx(K) ? l : -1;
    md = n; mf = K;
    ds[l] = dA;
    he(l);
    gn(cn[l]);
}
void d0(int l, int n) {
    if (n == ds[l]) return;
    ds[l] = n;
    he(l);
    if (jl == l && md == n) {
        jl = -1;
        gn(cn[l]);
        if (ky(mf)) return;
    }
    am(cn[l]);
}
void ic(int l, int i, ap *N) {
    int n = ji(l);
    if (i >= n) n = i + 1;
    if (n > 16) { n = 16; i = 15; }
    je(l, i, n, N);
}
typedef struct { uint8_t n, an, jm; } mh;
static mh eU[bY];
static uint8_t mi, mj, mk, ml, jn;
#define jo 17
static int mm(int l) {
    char num[4];
    b1(H.l[l].n, num);
    return 7 + b9(&aD, H.l[l].name) + 6 + 8 + 3 + b9(&aD, num) + 7;
}
static void oU(Y *A) {
    int l = A->da;
    bZ *aE = &H.l[l];
    char num[4];
    b1(aE->n, num);
    int J = mm(l), h = jo, x = A->x + 3, y = A->y + 3;
    const uint8_t *mn = ao[aH][0];
    if (H.an == l) b8(x - 3, y - 3, J + 6, h + 6, 11, 2, kl);
    cI(x, y, J, h, 8, mi);
    b8(x, y, J, h, 8, 1, mj);
    int hf = co(&aD, x + 7, y, h, aE->name, mn) + 6;
    int aS = y + (h - 10) / 2;
    cI(hf - 2, aS - 1, 7, 10, 2, ml);
    cI(hf, aS + 1, 7, 10, 2, mk);
    hO(hf + 1, aS + 2, 5, 8, jn);
    co(&aD, hf + 11, y, h, num, mn);
    if (aE->n == 1 && aE->cd) {
        int a4 = x + J + 4;
        cI(a4, y, 36, h, 8, jn);
        bA(&aD, a4 + 18, y, h, "UNO!", ao[be][0]);
    }
}
static int jp[bY], jq[bY];
void kO(int l, int *x, int *y) {
    if (l == 0) { *x = 160; *y = 146; return; }
    *x = jp[l]; *y = jq[l] + jo / 2;
}
void ce(void) {
    for (int l = 1; l < aA; l++) {
        mh s = { H.l[l].n, H.an == l, H.l[l].n == 1 && H.l[l].cd };
        if (s.n != eU[l].n || s.an != eU[l].an || s.jm != eU[l].jm) {
            eU[l] = s;
            Y *A = g_[l];
            int J = mm(l);
            A->x = jp[l] - J / 2 - 3; A->y = jq[l] - 3;
            A->J = J + 6 + (s.jm ? 40 : 0); A->h = jo + 6;
            am(A);
        }
    }
}
#define b4 16
#define mo 0
#define mp 20
static int mq[b4][2][4], mr[b4][2][4];
static Z b5[b4];
static int8_t hg[b4];
static Y *cX;
static uint8_t fV[3], jr[3];
static uint8_t cF[3];
static int dB = -1, dC = -1;
static av js;
static bool oV(Y *A, const Z *E) {
    (void)A;
    for (int D = 0; D < b4; D++)
        if (b5[D].x0 < E->x1 && E->x0 < b5[D].x1 && b5[D].M < E->Q && E->M < b5[D].Q) return true;
    return false;
}
static void oW(Y *A) {
    (void)A;
    for (int D = 0; D < b4; D++) {
        if (!kc(&b5[D])) continue;
        for (int aa = 0; aa < 2; aa++) {
            ar O[4];
            for (int i = 0; i < 4; i++) { O[i].x = mq[D][aa][i]; O[i].y = mr[D][aa][i]; O[i].u = O[i].O = 0; }
            f_(O, 4, ka, (uint8_t)(er + (D & 3)), 0);
        }
    }
}
static void hj(int P, int s, int *x, int *y) {
    c9(mo + bv(cq(P), 236 + s), mp + bv(bE(P), 176 + s * 3 / 4), 0, x, y);
}
static void jt(int D) {
    int P = (D * 256 + 128) / b4, s = hg[D];
    int x0 = 0x7FFF, x1 = -0x7FFF, M = 0x7FFF, Q = -0x7FFF;
    for (int aa = 0; aa < 2; aa++) {
        int E = aa ? -24 : 24;
        int *af = mq[D][aa], *ag = mr[D][aa];
        hj(P - 6 * s, E, &af[0], &ag[0]);
        hj(P - s, E, &af[1], &ag[1]);
        hj(P + 6 * s, 0, &af[2], &ag[2]);
        hj(P + s, 0, &af[3], &ag[3]);
        for (int i = 0; i < 4; i++) {
            if (af[i] < x0) x0 = af[i];
            if (af[i] > x1) x1 = af[i];
            if (ag[i] < M) M = ag[i];
            if (ag[i] > Q) Q = ag[i];
        }
    }
    b5[D].x0 = (x0 >> 4) - 1; b5[D].x1 = (x1 >> 4) + 2;
    b5[D].M = (M >> 4) - 1; b5[D].Q = (Q >> 4) + 2;
}
static void oX(void) {
    int x0 = 0x7FFF, x1 = -0x7FFF, M = 0x7FFF, Q = -0x7FFF;
    int E = 0, bo = 0, K = 0, n = 0;
    for (int D = 0; D < b4; D++) {
        hg[D] = (int8_t)dB;
        jt(D);
        Z *a4 = &b5[D];
        if (a4->x0 < x0) x0 = a4->x0;
        if (a4->x1 > x1) x1 = a4->x1;
        if (a4->M < M) M = a4->M;
        if (a4->Q > Q) Q = a4->Q;
        int ck = (a4->x0 + a4->x1) / 2, d8 = (a4->M + a4->Q) / 2;
        uint8_t c = fi(d8)[ck];
        E += cM[c]; bo += cN[c]; K += cO[c]; n++;
    }
    cX->x = x0; cX->y = M; cX->J = x1 - x0; cX->h = Q - M;
    cF[0] = (uint8_t)(E / n); cF[1] = (uint8_t)(bo / n); cF[2] = (uint8_t)(K / n);
}
void fr(int color) {
    memcpy(jr, l1[color & 3], 3);
    static const uint8_t hk[eq] = { 187, 212, 231, 148 };
    for (int s = 0; s < eq; s++) {
        int d9[3];
        for (int c = 0; c < 3; c++) d9[c] = ((jr[c] * 150 + cF[c] * 106) >> 8) * hk[s] >> 8;
        uint8_t cB = bC(d9[0], d9[1], d9[2]);
        uint8_t eV = bC((d9[0] + (cF[0] * hk[s] >> 8)) >> 1, (d9[1] + (cF[1] * hk[s] >> 8)) >> 1, (d9[2] + (cF[2] * hk[s] >> 8)) >> 1);
        for (int D = 0; D < 4; D++) { cL[s][er + D] = cB; cL[s][hT + D] = eV; }
    }
}
void gt(int cu) {
    int s = cu > 0 ? -1 : 1;
    if (s == dB) return;
    dB = s;
    dC = 0;
    js = aq;
}
static void oY(void) {
    if (dC < 0 || (int)(aq - js) < 0) return;
    int D = ((dB < 0 ? b4 - dC : dC) + 5) % b4;
    Z bB = b5[D];
    hg[D] = (int8_t)dB;
    jt(D);
    dW(bB);
    dW(b5[D]);
    js = aq + aK(34);
    if (++dC == b4) dC = -1;
}
static void oZ(void) {
    for (int c = 0; c < 3; c++) {
        int d = jr[c] - fV[c];
        fV[c] = (uint8_t)(fV[c] + (d > 0 ? (d + 5) / 6 : -((-d + 5) / 6)));
    }
    int eQ = (int)((((aq >> 4) * 25) >> 5) & 1023);
    for (int D = 0; D < 4; D++) {
        int ju = (dB > 0 ? eQ - D * 256 : eQ + D * 256) & 1023;
        int J = ju < 512 ? (512 - ju) * (512 - ju) >> 10 : 0;
        int o0 = 96 + (J * 160 >> 8);
        uint8_t cB[3], eV[3];
        for (int c = 0; c < 3; c++) {
            cB[c] = (uint8_t)(cF[c] + ((fV[c] - cF[c]) * o0 >> 8));
            eV[c] = (uint8_t)((cB[c] + cF[c]) >> 1);
        }
        dO((uint8_t)(er + D), cB[0], cB[1], cB[2]);
        dO((uint8_t)(hT + D), eV[0], eV[1], eV[2]);
    }
    int cG = (bE((int)(aq >> 8) * 3) + 16384) * 100 >> 15;
    dO(dT, 255, (uint8_t)(190 + cG / 2), (uint8_t)(30 + cG));
    dO(kl, 255, (uint8_t)(170 + cG * 3 / 4), (uint8_t)(cG / 2));
    dO(nQ, (uint8_t)(140 + cG), (uint8_t)(140 + cG), (uint8_t)(150 + cG));
}
#define eW (-330)
#define eX 212
#define eY 9
#define eZ 180
static Y *bL;
static int fW;
static uint8_t mt, mu, jv;
static int mv(void) { return fW ? 2 + fW * 3 / 10 : 0; }
void ft(ap *N) { cb(eW, eX, mv(), eY, eZ, N->x, N->y); }
static ap fX, e0, hl;
static void hm(const ap *l, const ap *N, int i, int ac, int aO, uint8_t c) {
    static ap I;
    I.x[0] = l->x[i]; I.x[1] = l->x[ac]; I.x[2] = N->x[ac]; I.x[3] = N->x[i];
    I.y[0] = l->y[i]; I.y[1] = l->y[ac]; I.y[2] = N->y[ac] + aO; I.y[3] = N->y[i] + aO;
    l6(&I, c);
}
static void o1(Y *A) {
    (void)A;
    if (!fW) return;
    int h = mv();
    cb(eW, eX, 0, eY, eZ, fX.x, fX.y);
    cb(eW, eX, h, eY, eZ, e0.x, e0.y);
    hm(&e0, &fX, 0, 3, 0, jv);
    hm(&e0, &fX, 2, 1, 0, jv);
    hm(&e0, &fX, 3, 2, 0, mt);
    for (int z = 4; z < h; z += 5) {
        cb(eW, eX, z, eY, eZ, hl.x, hl.y);
        hm(&hl, &hl, 3, 2, 9, mu);
    }
    static c2 aC;
    aC.aw = c8(bW); aC.aZ = a8; aC.bi = bj; aC.ab = es[0];
    l5(&e0, &aC);
}
void h8(int n) {
    fW = n;
    am(bL);
}
static void o2(void) {
    ap K, V;
    cb(eW, eX, 0, eY, eZ, K.x, K.y);
    cb(eW, eX, 2 + h2 * 3 / 10, eY, eZ, V.x, V.y);
    Z dl, d_;
    i9(&K, &dl); i9(&V, &d_);
    bL->x = d_.x0 < dl.x0 ? d_.x0 : dl.x0;
    bL->y = d_.M;
    bL->J = (d_.x1 > dl.x1 ? d_.x1 : dl.x1) - bL->x;
    bL->h = dl.Q - d_.M;
}
#define o3 mo
#define o4 mp
#define ea 10
static Y *cY[ea];
static int dD, e1;
static int jw, jx, jy;
void h9(ap *N) {
    jw = o3 + aG(29) - 14;
    jx = o4 + aG(25) - 12;
    jy = aG(41) - 20;
    cb(jw, jx, 0, jy, 256, N->x, N->y);
}
void kL(int color) {
    Y *A = cY[(dD + ea - 1) % ea];
    if (!A || !(A->aI & et)) return;
    A->as = (uint8_t)(8 | color);
    gm(A);
}
void h_(uint8_t az) {
    Y *bB = cY[dD];
    if (bB) kB(bB);
    if (e1 > 110) {
        e1 = 40;
        for (int D = 1; D <= ea; D++) {
            Y *A = cY[(dD + D) % ea];
            if (A && (A->aI & et)) kC(A, e1++);
        }
    }
    Y *A = a9(true, e1++, dV);
    A->aw = (uint8_t)b0(az);
    A->as = (uint8_t)cV(az);
    cb(jw, jx, 0, jy, 256, A->af, A->ag);
    gm(A);
    cY[dD] = A;
    dD = (dD + 1) % ea;
}
typedef struct { int x, y, aC, a2; uint8_t az, dE, dim, o5; } cZ;
static cZ bb[cS];
static int bw;
int ah;
bool a_;
static Y *eb, *c0;
static int fY = -1;
static av mw;
#define o6 172
int fu;
static void jz(int i, int n, int *x, int *y) {
    if (n < fu) n = fu;
    int hp = n > 1 ? (300 - a8) / (n - 1) : 0;
    if (hp > 40) hp = 40;
    int x0 = 160 - ((n - 1) * hp + a8) / 2;
    int d = 2 * i - (n - 1);
    int o7 = n > 1 ? d * d * 7 / ((n - 1) * (n - 1)) : 0;
    *x = x0 + i * hp;
    *y = o6 + o7;
    if (a_ && i == ah) *y -= 14;
    else if (a_ && i < H.l[0].n && !cv(H.l[0].ad[i])) *y += 6;
}
static void fZ(const cZ *h, Z *E) {
    E->x0 = (h->x >> 4) - 4; E->M = (h->y >> 4) - 4;
    E->x1 = (h->x >> 4) + a8 + 5; E->Q = (h->y >> 4) + bj + 5;
}
bool gu;
void kQ(int i, ap *N) {
    int x = bb[i].x >> 4, y = bb[i].y >> 4;
    N->x[0] = N->x[3] = x * 16; N->x[1] = N->x[2] = (x + a8) * 16;
    N->y[0] = N->y[1] = y * 16; N->y[2] = N->y[3] = (y + bj) * 16;
}
void ie(int i, ap *N) {
    int x, y;
    jz(i, H.l[0].n, &x, &y);
    N->x[0] = N->x[3] = x * 16; N->x[1] = N->x[2] = (x + a8) * 16;
    N->y[0] = N->y[1] = y * 16; N->y[2] = N->y[3] = (y + bj) * 16;
}
void ba(bool kP) {
    bZ *aj = &H.l[0];
    static cZ bB[cS];
    static bool b6[cS];
    int dA = bw;
    memset(b6, 0, sizeof b6);
    memcpy(bB, bb, sizeof(cZ) * bw);
    for (int i = 0; i < bw; i++) { Z E; fZ(&bb[i], &E); bG(E); }
    bw = aj->n;
    for (int i = 0; i < bw; i++) {
        cZ *h = &bb[i];
        int aC, a2;
        jz(i, bw, &aC, &a2);
        h->az = aj->ad[i];
        h->aC = aC * 16; h->a2 = a2 * 16;
        h->dim = a_ && !cv(h->az);
        h->o5 = 0;
        int D;
        for (D = 0; D < dA; D++) if (!b6[D] && bB[D].az == h->az) break;
        if (D < dA && kP) {
            b6[D] = true;
            h->x = bB[D].x; h->y = bB[D].y; h->dE = bB[D].dE;
        } else {
            h->x = h->aC; h->y = h->a2; h->dE = 0;
        }
        Z E; fZ(h, &E); bG(E);
    }
    if (fY >= bw) fY = -1;
}
void gv(int i, bool fm) {
    if (i < 0 || i >= bw) return;
    bb[i].dE = fm;
    Z E; fZ(&bb[i], &E); bG(E);
}
void kR(int i) { fY = i; mw = aq; }
static av mx;
static int my(int an, int mz, int D) {
    int d = mz - an;
    if (d > -16 && d < 16) return mz;
    int aa = d * D >> 8;
    if (aa > -16 && aa < 16) aa = d > 0 ? 16 : -16;
    return an + aa;
}
static void o8(void) {
    av d = aq - mx;
    int hq = d > 6553 ? 200 : (int)(d * 1000 >> 15);
    mx = aq;
    if (gu) return;
    if (hq > 200) hq = 200;
    int D = hq * 256 / (hq + 38);
    for (int i = 0; i < bw; i++) {
        cZ *h = &bb[i];
        int aC, a2;
        jz(i, bw, &aC, &a2);
        h->aC = aC * 16; h->a2 = a2 * 16;
        if (i == fY) {
            int bM = (int)(aq - mw);
            if (bM < (int)aK(300)) h->aC += (bE(bM >> 5) * 64 >> 14) * ((int)aK(300) - bM) / (int)aK(300);
            else fY = -1;
        }
        uint8_t dim = a_ && !cv(h->az);
        if (h->x != h->aC || h->y != h->a2 || dim != h->dim) {
            Z P, K;
            fZ(h, &P);
            int bU = h->x >> 4, bV = h->y >> 4;
            h->x = my(h->x, h->aC, D);
            h->y = my(h->y, h->a2, D);
            if (bU == h->x >> 4 && bV == h->y >> 4 && dim == h->dim) continue;
            h->dim = dim;
            fZ(h, &K);
            bG(P); bG(K);
        }
    }
}
bool kD(void) {
    for (int i = 0; i < bw; i++) if (bb[i].x != bb[i].aC || bb[i].y != bb[i].a2) return false;
    return true;
}
static void jA(int x, int y, const uint8_t *aw, const uint8_t *ab, const Z *ec, int ed) {
    int x0 = W.aL, M = W.aW, x1 = W.aX, Q = W.aY;
    if (!ed) { dP(x, y, aw, a8, bj, ab); return; }
    const Z *c = ec;
    if (c->x0 >= x1 || c->x1 <= x0 || c->M >= Q || c->Q <= M) { jA(x, y, aw, ab, ec + 1, ed - 1); return; }
    int mA = c->M > M ? c->M : M, mB = c->Q < Q ? c->Q : Q;
    Z l[4] = { { x0, M, x1, c->M }, { x0, c->Q, x1, Q }, { x0, mA, c->x0, mB }, { c->x1, mA, x1, mB } };
    for (int D = 0; D < 4; D++) {
        if (l[D].x0 < x0) l[D].x0 = x0;
        if (l[D].x1 > x1) l[D].x1 = x1;
        if (l[D].M < M) l[D].M = M;
        if (l[D].Q > Q) l[D].Q = Q;
        if (l[D].x0 >= l[D].x1 || l[D].M >= l[D].Q) continue;
        W.aL = l[D].x0; W.aW = l[D].M; W.aX = l[D].x1; W.aY = l[D].Q;
        jA(x, y, aw, ab, ec + 1, ed - 1);
    }
    W.aL = x0; W.aW = M; W.aX = x1; W.aY = Q;
}
static void mC(const cZ *h, Z *E) {
    int x = h->x >> 4, y = h->y >> 4;
    E->x0 = x + 5; E->M = y + 5; E->x1 = x + a8 - 5; E->Q = y + bj - 5;
}
static void o9(Y *A) {
    (void)A;
    int aU = a_ ? ah : -1;
    for (int i = 0; i < bw; i++) {
        const cZ *h = &bb[i];
        if (h->dE || i == aU) continue;
        Z ec[2];
        int ed = 0;
        if (i + 1 < bw && !bb[i + 1].dE) mC(&bb[i + 1], &ec[ed++]);
        if (aU >= 0 && aU == i - 1 && !bb[aU].dE) mC(&bb[aU], &ec[ed++]);
        int V = b0(h->az);
        jA(h->x >> 4, h->y >> 4, c8(V), ev(V, cV(h->az), h->dim ? 2 : 0), ec, ed);
    }
    if (aU >= 0 && aU < bw && !bb[aU].dE) {
        const cZ *h = &bb[aU];
        int x = h->x >> 4, y = h->y >> 4;
        fd(x + 3, y + 5, a8, bj, 5, cL[1]);
        b8(x - 3, y - 3, a8 + 6, bj + 6, 7, 2, dT);
        dP(x, y, c8(b0(h->az)), a8, bj, ev(b0(h->az), cV(h->az), h->dim ? 2 : 0));
    }
}
static void o_(Y *A) {
    (void)A;
    ap N;
    ft(&N);
    static const int bU[4] = { -40, 40, 40, -40 }, bV[4] = { -40, -40, 40, 40 };
    for (int e = 0; e < 4; e++) {
        int P = e, K = (e + 1) & 3;
        ap s = { { N.x[P] + bU[P], N.x[K] + bU[K], N.x[K], N.x[P] }, { N.y[P] + bV[P], N.y[K] + bV[K], N.y[K], N.y[P] } };
        l6(&s, dT);
    }
}
static bool jB;
static void pa(void) {
    bool dA = a_ && ah < 0;
    if (dA != jB) { jB = dA; gl(c0, !dA); }
}
#define jC 4
static bI e2[jC];
int gy;
static int pb(int y, int x) {
    while (x > 127 || x < -127 || y > 127 || y < -127) { x >>= 1; y >>= 1; }
    int ai = 0, dp = -0x7FFFFF;
    for (int D = 0; D < 2; D++)
        for (int P = D ? ai - 7 : 0; P < (D ? ai + 8 : 256); P += D ? 1 : 8) {
            int d = x * cq(P) + y * bE(P);
            if (d > dp) { dp = d; ai = P; }
        }
    return ai & 255;
}
static void mD(const ap *N, int *aF, int *aS, int *bi, int *lx, int *e3) {
    int x = 0, y = 0;
    for (int i = 0; i < 4; i++) { x += N->x[i]; y += N->y[i]; }
    *aF = x >> 2; *aS = y >> 2;
    int P = pb(N->y[1] - N->y[0], N->x[1] - N->x[0]);
    *bi = P;
    int c = cq(P), s = bE(P);
    for (int i = 0; i < 4; i++) {
        int bR = N->x[i] - *aF, aO = N->y[i] - *aS;
        lx[i] = (int)((ae(bR, c) + ae(aO, s)) >> 14);
        e3[i] = (int)((ae(aO, c) - ae(bR, s)) >> 14);
    }
}
bI *d1(uint8_t eA, uint8_t eB, uint8_t as, const ap *aB, const ap *aM, int aT, int ez, bool fv) {
    bI *I = NULL;
    for (int i = 0; i < jC; i++) if (!e2[i].gw) { I = &e2[i]; break; }
    if (!I) I = &e2[0];
    memset(I, 0, sizeof *I);
    I->gw = 1;
    int mE;
    mD(aB, &I->ig, &I->ih, &I->ii, I->ij, I->ik);
    mD(aM, &I->kS, &I->kT, &mE, I->kV, I->kW);
    I->kU = ((mE - I->ii + 128) & 255) - 128 + gy;
    gy = 0;
    I->cT = aq; I->cU = aK(dd(aT));
    I->ez = ez; I->fv = fv; I->eA = eA; I->eB = eB; I->as = as;
    I->cg = a9(false, 98, gi);
    I->cg->gk = 1;
    I->A = a9(false, 100, dV);
    I->A->aw = eA; I->A->as = as;
    memcpy(I->A->af, aB->x, sizeof aB->x); memcpy(I->A->ag, aB->y, sizeof aB->y);
    memcpy(I->cg->af, aB->x, sizeof aB->x); memcpy(I->cg->ag, aB->y, sizeof aB->y);
    gl(I->cg, true);
    am(I->A);
    return I;
}
bool eC(const bI *I) { return (av)(aq - I->cT) >= I->cU; }
void eD(bI *I) {
    a0(I->A);
    a0(I->cg);
    I->gw = 0;
}
static void pc(void) {
    for (int D = 0; D < jC; D++) {
        bI *I = &e2[D];
        if (!I->gw) continue;
        av bM = aq - I->cT;
        int V = bM >= I->cU ? 256 : (int)((bM << 8) / I->cU);
        int u = 256 - V;
        int e = 256 - (u * u >> 8) * u / 256;
        int s = bE(V / 2);
        int jD = bv(s, I->ez * 16);
        int ee = 256 + (s * 7 >> 12);
        int aF = I->ig + ((I->kS - I->ig) * e >> 8);
        int aS = I->ih + ((I->kT - I->ih) * e >> 8);
        int bi = I->ii + (I->kU * e >> 8);
        uint8_t aw = I->eA;
        int mF = 256;
        if (I->fv) {
            int c = cq(V / 2);
            mF = (c < 0 ? -c : c) >> 6;
            if (V >= 128) aw = I->eB;
        } else if (V >= 256) aw = I->eB;
        int c = cq(bi), hr = bE(bi);
        for (int i = 0; i < 4; i++) {
            int lx = I->ij[i] + ((I->kV[i] - I->ij[i]) * e >> 8);
            int e3 = I->ik[i] + ((I->kW[i] - I->ik[i]) * e >> 8);
            int fM = (int)((ae(lx, c) - ae(e3, hr)) >> 14), eL = (int)((ae(lx, hr) + ae(e3, c)) >> 14);
            I->cg->af[i] = aF + fM + jD / 5 + 24;
            I->cg->ag[i] = aS + eL + jD / 4 + 32;
            lx = lx * mF >> 8;
            fM = (int)((ae(lx, c) - ae(e3, hr)) >> 14); eL = (int)((ae(lx, hr) + ae(e3, c)) >> 14);
            I->A->af[i] = aF + (fM * ee >> 8);
            I->A->ag[i] = aS + (eL * ee >> 8) - jD;
        }
        I->A->aw = aw;
        am(I->A);
        bool mG = I->ez >= 24 && V > 8 && V < 248;
        if (mG != !(I->cg->aI & eu)) gl(I->cg, !mG);
        else am(I->cg);
    }
}
static void pd(void) {
    oY();
    o8();
    pa();
    pc();
    if (fw) fw();
}
void gz(void) {
    do aJ(); while (!kD());
}
static const uint8_t pe[3][3] = { { 0, 0, 0 }, { 1, 2, 0 }, { 1, 0, 2 } };
void kK(void) {
    h1();
    oR();
    fo = oZ;
    fp = pd;
    mt = bC(236, 234, 226);
    jv = bC(200, 198, 190);
    mu = bC(150, 148, 142);
    memset(e2, 0, sizeof e2);
    memset(cY, 0, sizeof cY);
    memset(fU, 0, sizeof fU);
    dD = 0; e1 = 40;
    bw = 0; ah = 0; a_ = false;
    jB = false;
    dB = -1; dC = -1;
    cX = a9(true, 2, bF);
    cX->bk = oW; cX->h0 = oV; cX->aI |= gj;
    oX();
    am(cX);
    bL = a9(true, 5, bF);
    bL->bk = o1; bL->aI |= gj;
    o2();
    fW = 0;
    am(bL);
    mi = bC(22, 24, 30); mj = bC(78, 82, 96);
    mk = bC(250, 250, 248); ml = bC(150, 150, 150); jn = bC(237, 28, 36);
    for (int l = 1; l < aA; l++) {
        H.l[l].ew = pe[aA - 2][l - 1];
        const ja *s = &g9[H.l[l].ew];
        cn[l] = a9(true, 20, bF);
        cn[l]->bk = oS; cn[l]->da = l; cn[l]->aI |= gj;
        ds[l] = 0;
        he(l);
        am(cn[l]);
        int ck, d8;
        c9(s->i_, s->eT, 0, &ck, &d8);
        ck >>= 4; d8 >>= 4;
        if (H.l[l].ew == 0) { ck += 92; d8 -= 20; }
        else { d8 += 20; ck += s->i_ < 0 ? 16 : -16; }
        jp[l] = ck; jq[l] = d8;
        g_[l] = a9(true, 45, bF);
        g_[l]->bk = oU; g_[l]->da = l;
        memset(&eU[l], 0xFF, sizeof eU[l]);
    }
    eb = a9(false, 60, bF);
    eb->bk = o9;
    eb->x = 0; eb->y = 150; eb->J = at; eb->h = bh - 150;
    am(eb);
    c0 = a9(false, 55, bF);
    c0->bk = o_;
    c0->x = bL->x - 4; c0->y = bL->y - 4;
    c0->J = bL->J + 8; c0->h = bL->h + 8;
    c0->aI |= eu;
    am(c0);
    memcpy(fV, l1[3], 3);
    fr(3);
}
void h7(void) {
    for (int D = 0; D < ea; D++) if (cY[D]) { a0(cY[D]); cY[D] = NULL; }
    Z iY = { 0, 0, at, bh };
    dW(iY);
    dD = 0; e1 = 40;
    for (int l = 1; l < aA; l++) { d0(l, 0); ib(l); }
    dB = -1; dC = -1;
    for (int D = 0; D < b4; D++) { hg[D] = -1; jt(D); }
    bw = 0;
    ba(false);
}
kG H;
h5 ak = { 4, 1, 0, 0, 0, 0, 0 };
bool dZ;
static uint32_t dF = 0x2545F491u;
uint32_t h6(void) { dF ^= dF << 13; dF ^= dF >> 17; dF ^= dF << 5; return dF; }
void kH(uint32_t s) { dF = s ? s : 1; }
int aG(int n) { return n > 0 ? (int)(h6() % (uint32_t)n) : 0; }
static const char *const pf[] = { "Maya", "Leo", "Ava", "Kai", "Zoe", "Max", "Ivy", "Sam", "Nia", "Eli", "Rio", "Jax" };
static uint8_t jE(void) { return H.ey[H.ct - 1]; }
bool cv(uint8_t D) {
    if (!H.ct) return false;
    uint8_t V = jE();
    if (H.bl) {
        if (a1(D) == cs) return true;
        return a1(D) == cQ && a1(V) == cQ;
    }
    if (bf(D) == cR) return true;
    if (bf(D) == H.color) return true;
    return bf(V) != cR && a1(D) == a1(V);
}
int gs(uint8_t D) {
    int O = a1(D);
    return O <= 9 ? O : O <= cQ ? 20 : 50;
}
static int aV(int aB, int pg) {
    int n = aA;
    return ((aB + pg * H.cu) % n + n) % n;
}
static bool mH(int l, int c) {
    for (int i = 0; i < H.l[l].n; i++) if (bf(H.l[l].ad[i]) == c) return true;
    return false;
}
static int hs(uint8_t D) { return bf(D) * 16 + a1(D); }
static void jF(int l, uint8_t D) {
    bZ *aE = &H.l[l];
    if (aE->n >= cS) return;
    int i = aE->n;
    if (l == 0) while (i > 0 && hs(aE->ad[i - 1]) > hs(D)) { aE->ad[i] = aE->ad[i - 1]; i--; }
    aE->ad[i] = D;
    aE->n++;
    aE->cd = false;
}
static uint8_t mI(int l, int i) {
    bZ *aE = &H.l[l];
    uint8_t D = aE->ad[i];
    memmove(aE->ad + i, aE->ad + i + 1, aE->n - i - 1);
    aE->n--;
    return D;
}
static uint8_t dG[bY][4];
static void jG(uint8_t *P, int n) {
    for (int i = n - 1; i > 0; i--) { int ac = aG(i + 1); uint8_t V = P[i]; P[i] = P[ac]; P[ac] = V; }
}
static void pi(void) {
    int n = 0;
    for (int c = 0; c < 4; c++) {
        H.bP[n++] = dX(c, 0);
        for (int O = 1; O <= cQ; O++) { H.bP[n++] = dX(c, O); H.bP[n++] = dX(c, O); }
    }
    for (int i = 0; i < 4; i++) { H.bP[n++] = dX(cR, fq); H.bP[n++] = dX(cR, cs); }
    H.br = n;
    jG(H.bP, n);
}
static void pj(void) {
    if (H.ct <= 1) return;
    uint8_t bS = jE();
    ci("Shuffling", aH, 160, 104, 900, 150);
    int n = 0;
    for (int i = 0; i < H.ct - 1; i++) {
        uint8_t D = H.ey[i];
        if (a1(D) >= fq) D = dX(cR, a1(D));
        H.bP[n++] = D;
    }
    jG(H.bP, n);
    H.br = n;
    H.ey[0] = bS; H.ct = 1;
    h8(H.br);
    aN(500);
}
static int jH;
static uint8_t mJ;
static void f0(void) {
    int h = H.br ? (2 + H.br * 3 / 10) / 4 : -1;
    if (h != jH || !H.br) { jH = h; h8(H.br); }
}
static void jI(int l, int aT) {
    if (!H.br) pj();
    if (!H.br) return;
    uint8_t D = H.bP[--H.br];
    mJ = D;
    ap aB, aM;
    ft(&aB);
    if (l == 0) {
        jF(0, D);
        int bc = 0;
        while (H.l[0].ad[bc] != D) bc++;
        ba(true);
        gv(bc, true);
        ie(bc, &aM);
        bI *I = d1(bW, (uint8_t)b0(D), (uint8_t)cV(D), &aB, &aM, aT, 26, true);
        while (!eC(I)) aJ();
        for (bc = 0; bc < H.l[0].n; bc++) if (H.l[0].ad[bc] == D) gv(bc, false);
        aJ();
        eD(I);
    } else {
        ic(l, H.l[l].n, &aM);
        bI *I = d1(bW, bW, 0, &aB, &aM, aT, 20, false);
        while (!eC(I)) aJ();
        jF(l, D);
        d0(l, H.l[l].n);
        aJ();
        eD(I);
    }
    f0();
    ce();
}
static void ef(int l, int n) {
    for (int i = 0; i < n; i++) jI(l, n > 2 ? 260 : 340);
    gz();
}
static uint8_t pk(int l, int i) {
    ap aB, aM;
    uint8_t D = H.l[l].ad[i];
    if (l == 0) {
        kQ(i, &aB);
        gv(i, true);
        gu = true;
    } else {
        ic(l, H.l[l].n - 1, &aB);
        mI(l, i);
        d0(l, H.l[l].n);
        ce();
    }
    h9(&aM);
    gy = l ? (aG(2) ? 26 : -26) : 10;
    bI *I = d1(l ? bW : (uint8_t)b0(D), (uint8_t)b0(D), (uint8_t)cV(D), &aB, &aM, l ? 480 : 380, 30, l != 0);
    while (!eC(I)) aJ();
    H.ey[H.ct++] = D;
    h_(D);
    aJ();
    eD(I);
    if (l == 0) {
        gu = false;
        mI(0, i);
        ba(true);
    }
    ce();
    return D;
}
static uint8_t dH[bY];
static av eg;
static av e4;
static int mK;
static av dI[bY];
static bool f1;
static void bT(int l, const char *s, int as, int aT, int aR) {
    int x, y;
    kO(l, &x, &y);
    ci(s, as, x, l ? y + 22 : y - 22, aT, aR);
}
static void jJ(int l) {
    H.l[l].cd = true;
    bT(l, "UNO!", be, 1200, l ? 150 : 220);
    ce();
}
static void pm(void) {
    bZ *aj = &H.l[0];
    if (bn & nf) {
        bool b6 = false;
        if (aj->n == 1 && !aj->cd && eg) { jJ(0); eg = 0; e4 = 0; b6 = true; }
        else if (aj->n == 2 && H.an == 0 && !f1 && a_) {
            f1 = true;
            ci("UNO!", be, 160, 140, 900, 200);
            b6 = true;
        }
        for (int l = 1; l < aA; l++) {
            if (dI[l] && H.l[l].n == 1 && !H.l[l].cd) {
                bT(l, "CAUGHT!", cK, 1300, 130);
                dH[l] += 2;
                dI[l] = 0;
                b6 = true;
            }
        }
        if (!b6) eF("No one to catch right now");
    }
    for (int l = 1; l < aA; l++)
        if (dI[l] && (int)(aq - dI[l]) > 0) dI[l] = 0;
    if (eg && (int)(aq - eg) > 0) {
        eg = 0;
        static const uint8_t pn[3] = { 55, 85, 100 };
        if (aG(100) < pn[ak.bO]) {
            mK = 1 + aG(aA - 1);
            e4 = aq + aK(150 + aG(500));
        }
    }
    if (e4 && (int)(aq - e4) > 0) {
        e4 = 0;
        if (aj->n == 1 && !aj->cd) {
            bT(mK, "Caught you!", cK, 1400, 110);
            dH[0] += 2;
        }
    }
}
static void po(void) {
    pm();
    kY();
}
static void jK(void) {
    for (int l = 0; l < aA; l++) {
        if (!dH[l]) continue;
        int n = dH[l];
        dH[l] = 0;
        aN(300);
        ef(l, n);
    }
}
static void pp(int l) {
    bZ *aE = &H.l[l];
    if (aE->n != 1) return;
    if (l == 0) {
        if (f1) jJ(0);
        else { eg = aq + aK(2200); eF("Press alpha to call UNO!"); }
    } else {
        static const uint8_t pq[3] = { 70, 88, 97 };
        if (aG(100) < pq[ak.bO]) jJ(l);
        else { dI[l] = aq + aK(2600); eF("They forgot UNO! Press alpha"); }
    }
    f1 = false;
}
static int pr(int l, int c) {
    int n = 0;
    for (int i = 0; i < H.l[l].n; i++) if (bf(H.l[l].ad[i]) == c) n++;
    return n;
}
static int pt(int l) {
    int ai = aG(4), f2 = -1000;
    int a5 = aV(l, 1);
    for (int c = 0; c < 4; c++) {
        int s = 0;
        for (int i = 0; i < H.l[l].n; i++) {
            uint8_t D = H.l[l].ad[i];
            if (bf(D) == c) s += 10 + gs(D) / 5;
        }
        if (ak.bO == 2 && dG[a5][c]) s += 12;
        if (ak.bO == 0) s += aG(15);
        if (s > f2) { f2 = s; ai = c; }
    }
    return ai;
}
static int pu(int l) {
    bZ *aE = &H.l[l];
    int a5 = aV(l, 1), mL = H.l[a5].n;
    int ai = -1;
    int f2 = -10000;
    static const uint8_t pv[3] = { 45, 14, 4 };
    for (int i = 0; i < aE->n; i++) {
        uint8_t D = aE->ad[i];
        if (!cv(D)) continue;
        int c = bf(D), O = a1(D), s = 0;
        if (c == cR) {
            s = O == cs ? -35 : -22;
            if (aE->n <= 3) s += 45;
            if (O == cs && mL <= 2) s += 70;
            if (O == cs && mH(l, H.color) && ak.bO > 0) s -= 60;
        } else {
            int e5 = pr(l, c);
            s = e5 * 6;
            if (c != H.color) s += e5 * 3 - 4;
            if (O >= go) {
                s += 6;
                if (mL <= 2) s += 45;
                if (O == cQ) s += 6;
                if (O == gp && aA > 2 && H.l[aV(l, -1)].n <= 2) s -= 30;
            }
            s += gs(D) / 4;
            if (ak.bO == 2 && dG[a5][c]) s += 14;
        }
        s += aG(pv[ak.bO]);
        if (s > f2) { f2 = s; ai = i; }
    }
    return ai;
}
static bool jL;
static bool mM;
static void ht(int l, uint8_t D) {
    int c = l == 0 ? kZ() : pt(l);
    H.color = (uint8_t)c;
    H.ey[H.ct - 1] = dX(c, a1(D));
    fr(c);
    kL(c);
    static const char *const fN[4] = { "RED", "YELLOW", "GREEN", "BLUE" };
    ci(fN[c], (uint8_t)c, 160, 104, 1000, 220);
    aN(dd(500));
}
static void pw(int P, int K) {
    bZ V;
    memcpy(V.ad, H.l[P].ad, cS); V.n = H.l[P].n;
    memcpy(H.l[P].ad, H.l[K].ad, cS); H.l[P].n = H.l[K].n;
    memcpy(H.l[K].ad, V.ad, cS); H.l[K].n = V.n;
    H.l[P].cd = H.l[K].cd = false;
}
static void mN(void) {
    bZ *aj = &H.l[0];
    for (int i = 1; i < aj->n; i++)
        for (int ac = i; ac > 0 && hs(aj->ad[ac - 1]) > hs(aj->ad[ac]); ac--) {
            uint8_t V = aj->ad[ac]; aj->ad[ac] = aj->ad[ac - 1]; aj->ad[ac - 1] = V;
        }
}
static void mO(void) {
    mN();
    ba(true);
    for (int l = 1; l < aA; l++) d0(l, H.l[l].n);
    ce();
}
static void pz(int l, uint8_t D) {
    if (!ak.h3 || H.l[l].n == 0) return;
    if (a1(D) == 7) {
        int bH;
        if (l == 0) bH = k1("Swap hands with?");
        else
        {
            bH = aV(l, 1);
            for (int N = 0; N < aA; N++) if (N != l && H.l[N].n < H.l[bH].n) bH = N;
        }
        bT(bH, "SWAP!", hU, 1000, 140);
        pw(l, bH);
        mO();
        aN(700);
    } else if (a1(D) == 0) {
        ci("PASS HANDS!", gf, 160, 104, 1100, 170);
        int n = aA;
        static bZ cE[bY];
        for (int N = 0; N < n; N++) cE[N] = H.l[N];
        for (int N = 0; N < n; N++) {
            int aM = aV(N, 1);
            memcpy(H.l[aM].ad, cE[N].ad, cS);
            H.l[aM].n = cE[N].n;
            H.l[aM].cd = false;
        }
        mO();
        aN(700);
    }
}
static void pA(int l, uint8_t D) {
    int O = a1(D);
    if (bf(D) != cR) { H.color = (uint8_t)bf(D); fr(H.color); dG[l][H.color] = 0; }
    pp(l);
    if (H.l[l].n == 0) { jL = true; H.bQ = (uint8_t)l; if (O == fq || O == cs) ht(l, D); return; }
    int a5 = aV(l, 1);
    switch (O) {
    case go:
        bT(a5, "SKIP", cK, 1000, 170);
        H.an = (uint8_t)aV(l, 2);
        break;
    case gp:
        H.cu = (int8_t)-H.cu;
        gt(H.cu);
        ci("REVERSE", gf, 160, 104, 1000, 170);
        H.an = (uint8_t)(aA == 2 ? l : aV(l, 1));
        break;
    case cQ:
        if (ak.gq) {
            H.bl += 2;
            bT(a5, H.bl == 2 ? "+2" : H.bl == 4 ? "+4" : H.bl == 6 ? "+6" : "+8", be, 900, 190);
            H.an = (uint8_t)a5;
        } else {
            bT(a5, "+2", be, 900, 200);
            aN(dd(350));
            ef(a5, 2);
            H.an = (uint8_t)aV(l, 2);
        }
        break;
    case fq:
        ht(l, D);
        H.an = (uint8_t)a5;
        break;
    case cs:
        ht(l, D);
        bT(a5, "+4", cK, 900, 200);
        if (ak.gq) { H.bl += 4; H.an = (uint8_t)a5; break; }
        aN(dd(350));
        {
            bool hv;
            if (a5 == 0) hv = gA("Challenge the Draw Four?", "Challenge", "Accept", 0);
            else
            {
                static const uint8_t pB[3] = { 15, 25, 40 };
                hv = aG(100) < pB[ak.bO] + (H.l[l].n > 6 ? 15 : 0);
                if (hv) { bT(a5, "Challenge!", aH, 900, 120); aN(700); }
            }
            if (hv) {
                if (mM) {
                    bT(l, "Guilty! +4", cK, 1300, 140);
                    aN(500);
                    ef(l, 4);
                    H.an = (uint8_t)a5;
                } else {
                    bT(a5, "Innocent! +6", cK, 1300, 140);
                    aN(500);
                    ef(a5, 6);
                    H.an = (uint8_t)aV(l, 2);
                }
            } else {
                ef(a5, 4);
                H.an = (uint8_t)aV(l, 2);
            }
        }
        break;
    default:
        H.an = (uint8_t)a5;
        break;
    }
    pz(l, D);
}
static void hy(int l, int i) {
    uint8_t D = H.l[l].ad[i];
    if (a1(D) == cs) mM = mH(l, H.color);
    if (bf(D) != cR) dG[l][bf(D)] = 0;
    pk(l, i);
    if (H.bl && a1(D) != cQ && a1(D) != cs) H.bl = 0;
    pA(l, D);
}
static void mP(int l) {
    int n = H.bl;
    H.bl = 0;
    ef(l, n);
    H.an = (uint8_t)aV(l, 1);
}
static void mQ(int l) {
    static const int pC[3] = { 1150, 1000, 900 };
    int i = pu(l);
    int aT = dd(pC[ak.bO] + aG(400));
    aN(aT / 3);
    if (l && (i >= 0 || !H.bl)) kM(l, H.l[l].n + (i >= 0 ? -1 : 1));
    aN(aT - aT / 3);
    if (dZ) return;
    if (i >= 0) { hy(l, i); return; }
    if (H.bl) { mP(l); return; }
    dG[l][H.color] = 1;
    for (;;) {
        jI(l, 360);
        uint8_t D = H.l[l].ad[H.l[l].n - 1];
        if (cv(D)) {
            aN(dd(350));
            hy(l, H.l[l].n - 1);
            return;
        }
        if (!ak.gr || !H.br) break;
    }
    H.an = (uint8_t)aV(l, 1);
}
static void mQ(int l);
static void pD(void) {
    bZ *aj = &H.l[0];
    a_ = true;
    if (ah >= aj->n) ah = aj->n - 1;
    if (ah < -1) ah = 0;
    if (ah >= 0 && !cv(aj->ad[ah]))
        for (int i = 0; i < aj->n; i++) if (cv(aj->ad[i])) { ah = i; break; }
    ba(true);
    de(kX);
    if (aj->n == 2) eF("2 cards left: press alpha for UNO!");
    int f3 = ah < 0 ? 0 : ah;
    if (H.bl) {
        char K[24] = "Stack or draw ";
        b1(H.bl, K + 14);
        ci(K, aH, 160, 104, 1300, 120);
    }
    for (;;) {
        aJ();
        if (dH[0]) { jK(); ba(true); }
        uint16_t D = bn;
        if (D & (en | ng)) {
            a_ = false; ba(true);
            if (k3()) { dZ = true; return; }
            a_ = true; ba(true);
            continue;
        }
        if (D & dM) { if (ah > 0) ah--; else if (ah == 0) ah = -1; ba(true); }
        if (D & dN) { if (ah < aj->n - 1) ah++; ba(true); }
        if (D & fa) { if (ah >= 0) { f3 = ah; ah = -1; ba(true); } }
        if (D & fb) { if (ah < 0) { ah = f3 < aj->n ? f3 : aj->n - 1; ba(true); } }
        if (!(D & bm)) continue;
        if (ah < 0) {
            a_ = false;
            if (H.bl) { ba(true); de(eE); mP(0); ah = f3 < aj->n ? f3 : aj->n - 1; return; }
            dG[0][H.color] = 1;
            for (;;) {
                jI(0, 380);
                gz();
                int bc = -1;
                for (int i = 0; i < aj->n; i++) if (aj->ad[i] == mJ) bc = i;
                if (bc >= 0 && cv(aj->ad[bc])) {
                    a_ = true; ah = bc; ba(true);
                    if (gA("You drew a playable card", "Play it", "Keep it", 1)) {
                        a_ = false;
                        de(eE);
                        hy(0, bc);
                        if (ah >= aj->n) ah = aj->n - 1;
                        return;
                    }
                    break;
                }
                if (!ak.gr || !H.br) break;
            }
            a_ = false;
            ba(true);
            de(eE);
            H.an = (uint8_t)aV(0, 1);
            if (ah >= aj->n || ah < 0) ah = aj->n - 1;
            return;
        }
        uint8_t c = aj->ad[ah];
        if (!cv(c)) { kR(ah); eF(H.bl ? "Stack a draw card, or draw" : "That card can't be played"); continue; }
        a_ = false;
        de(eE);
        hy(0, ah);
        if (ah >= aj->n) ah = aj->n - 1;
        return;
    }
}
static void pE(void) {
    int n = aA, total = 7 * n, mR = 0, mS = 0;
    bI *dJ[2] = { 0 };
    uint8_t jM[2], az[2];
    av mT = aq;
    int l = aV(H.dc, 1);
    fu = 7;
    while (mS < total) {
        aJ();
        for (int s = 0; s < 2; s++) {
            if (dJ[s] && eC(dJ[s])) {
                int J = jM[s];
                if (J == 0) {
                    H.l[0].ad[H.l[0].n++] = az[s];
                    ba(true);
                } else {
                    kN(J, H.l[J].n);
                    jF(J, az[s]);
                }
                eD(dJ[s]);
                dJ[s] = NULL;
                mS++;
                ce();
            }
        }
        if (mR < total && (int)(aq - mT) >= 0) {
            int s = 0;
            while (s < 2 && dJ[s]) s++;
            if (s == 2) continue;
            uint8_t D = H.bP[--H.br];
            ap aB, aM;
            ft(&aB);
            int jN = 0;
            for (int N = 0; N < 2; N++) if (dJ[N] && jM[N] == l) jN++;
            if (l == 0) {
                ie(H.l[0].n + jN, &aM);
                dJ[s] = d1(bW, (uint8_t)b0(D), (uint8_t)cV(D), &aB, &aM, 300, 22, true);
            } else {
                ia(l, H.l[l].n + jN, &aM);
                dJ[s] = d1(bW, bW, 0, &aB, &aM, 280, 16, false);
            }
            jM[s] = (uint8_t)l; az[s] = D;
            mR++;
            l = aV(l, 1);
            mT = aq + aK(dd(120));
        }
    }
    f0();
    aN(150);
    for (int N = 1; N <= n; N++) {
        int o = aV(H.dc, N);
        if (o == 0) continue;
        ib(o);
        d0(o, H.l[o].n);
        aN(90);
    }
    mN();
    fu = 0;
    ba(true);
    gz();
}
static void pF(void) {
    for (;;) {
        uint8_t D = H.bP[--H.br];
        ap aB, aM;
        ft(&aB);
        h9(&aM);
        bI *I = d1(bW, (uint8_t)b0(D), (uint8_t)cV(D), &aB, &aM, 520, 40, true);
        while (!eC(I)) aJ();
        H.ey[H.ct++] = D;
        h_(D);
        f0();
        aJ();
        eD(I);
        if (a1(D) != cs) break;
        ci("Reshuffling", aH, 160, 104, 1200, 120);
        aN(1000);
        H.ct--;
        H.bP[H.br++] = D;
        jG(H.bP, H.br);
        h7();
        for (int l = 1; l < aA; l++) d0(l, H.l[l].n);
        ba(false);
        f0();
    }
    uint8_t D = jE();
    int aQ = aV(H.dc, 1);
    H.an = (uint8_t)aQ;
    if (bf(D) != cR) { H.color = (uint8_t)bf(D); fr(H.color); }
    switch (a1(D)) {
    case go:
        bT(aQ, "SKIP", cK, 1000, 170);
        H.an = (uint8_t)aV(aQ, 1);
        aN(800);
        break;
    case gp:
        H.cu = -1;
        gt(-1);
        ci("REVERSE", gf, 160, 104, 1000, 170);
        H.an = (uint8_t)(aA == 2 ? aQ : H.dc);
        aN(800);
        break;
    case cQ:
        bT(aQ, "+2", be, 900, 200);
        aN(400);
        ef(aQ, 2);
        H.an = (uint8_t)aV(aQ, 1);
        break;
    case fq:
        H.an = (uint8_t)aQ;
        ce();
        ht(aQ, D);
        break;
    }
    ce();
}
static int mU(int l) {
    int s = 0;
    for (int i = 0; i < H.l[l].n; i++) s += gs(H.l[l].ad[i]);
    return s;
}
static void pG(void) {
    H.kF++;
    jL = false;
    H.cu = 1;
    H.bl = 0;
    H.ct = 0;
    memset(dH, 0, sizeof dH);
    memset(dI, 0, sizeof dI);
    memset(dG, 0, sizeof dG);
    eg = e4 = 0;
    f1 = false;
    for (int l = 0; l < aA; l++) { H.l[l].n = 0; H.l[l].cd = false; }
    gt(1);
    a_ = false;
    ah = 0;
    h7();
    pi();
    jH = -2;
    f0();
    H.an = H.dc;
    ce();
    de(eE);
    aJ();
    aJ();
    {
        char K[12] = "Round ";
        b1(H.kF, K + 6);
        ci(K, aH, 160, 104, 1300, 200);
    }
    aN(900);
    pE();
    pF();
    while (!jL && !dZ) {
        jK();
        ce();
        if (H.an == 0) pD(); else mQ(H.an);
        jK();
    }
    a_ = false;
    de(eE);
    if (dZ) return;
    int cj = 0;
    for (int l = 0; l < aA; l++) if (l != H.bQ) cj += mU(l);
    aN(700);
    k4(H.bQ, cj);
    H.l[H.bQ].dY = (uint16_t)(H.l[H.bQ].dY + cj);
    H.dc = (uint8_t)aV(H.dc, 1);
}
void kI(void) {
    memset(&H, 0, sizeof H);
    H.cu = 1;
    strcpy(H.l[0].name, "You");
    H.l[0].kE = hU;
    int b6 = 0;
    for (int l = 1; l < aA; l++) {
        int D;
        do D = aG(12); while (b6 & (1 << D));
        b6 |= 1 << D;
        strcpy(H.l[l].name, pf[D]);
        H.l[l].kE = (uint8_t)((l + 1) & 3);
    }
    H.dc = (uint8_t)aG(aA);
}
void kJ(void) {
    static const int pH[3] = { 500, 250, 1 };
    int bH = pH[ak.bH];
    dZ = false;
    fw = po;
    kK();
    for (;;) {
        pG();
        if (dZ) break;
        int ai = -1;
        for (int l = 0; l < aA; l++) if (H.l[l].dY >= bH && (ai < 0 || H.l[l].dY > H.l[ai].dY)) ai = l;
        if (ai >= 0) { k5(ai); break; }
    }
    fw = NULL;
}
int mV(int l) { return mU(l); }
iq df;
static uint8_t f4(void);
static uint8_t jO(void);
int mV(int l);
static void mW(char *d, const char *s, int max) {
    int i = 0;
    for (; s[i] && i < max - 1; i++) d[i] = (char)(s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i]);
    d[i] = 0;
}
void b1(int O, char *K) {
    char V[8];
    int n = 0;
    if (O < 0) { *K++ = '-'; O = -O; }
    do { V[n++] = (char)('0' + O % 10); O /= 10; } while (O);
    while (n) *K++ = V[--n];
    *K = 0;
}
#define jP 4
typedef struct {
    Y *A;
    char s[20];
    uint8_t as;
    int aF, aS, aR, an;
    av cT, cU;
} f5;
static f5 e6[jP];
static int pI(f5 *l) {
    av bM = aq - l->cT, ee = aK(110), mX = aK(210), di = aK(170);
    int s;
    if (bM < ee) s = (int)(bM * 294 / ee);
    else if (bM < mX) s = 294 - (int)((bM - ee) * 38 / (mX - ee));
    else if (bM + di < l->cU) s = 256;
    else if (bM < l->cU) s = (int)((l->cU - bM) * 256 / di);
    else s = -1;
    return s < 0 ? s : s * l->aR >> 8;
}
static void pJ(Y *A) {
    f5 *l = &e6[A->da];
    if (l->an > 8) ff(&c7, l->aF, l->aS, l->s, l->an, ao[l->as][0]);
}
void ci(const char *s, int as, int x, int y, int aT, int c_) {
    f5 *l = NULL;
    for (int i = 0; i < jP; i++) if (!e6[i].A) { l = &e6[i]; break; }
    if (!l) { l = &e6[0]; a0(l->A); l->A = NULL; }
    mW(l->s, s, sizeof l->s);
    l->as = (uint8_t)as;
    l->aR = c_;
    l->cT = aq;
    l->cU = aK(aT);
    int J = b9(&c7, l->s) * c_ * 294 / 65536 + 10;
    int h = c7.h * c_ * 294 / 65536 + 6;
    if (y - h / 2 < 0) y = h / 2;
    if (y + h / 2 > bh) y = bh - h / 2;
    if (x - J / 2 < 0) x = J / 2;
    if (x + J / 2 > at) x = at - J / 2;
    l->aF = x; l->aS = y; l->an = 0;
    l->A = a9(false, 120, bF);
    l->A->bk = pJ;
    l->A->da = (int)(l - e6);
    l->A->x = x - J / 2; l->A->y = y - h / 2; l->A->J = J; l->A->h = h;
    am(l->A);
}
static Y *hz, *eh, *b7;
static av mY;
static char hA[40];
static void pK(Y *A) {
    cI(A->x, A->y, A->J, A->h, 8, f4());
    b8(A->x, A->y, A->J, A->h, 8, 1, jO());
    bA(&aD, A->x + A->J / 2, A->y, A->h, hA, ao[be][0]);
}
void eF(const char *s) {
    strncpy(hA, s, sizeof hA - 1);
    int J = b9(&aD, hA) + 20;
    if (!b7) { b7 = a9(false, 115, bF); b7->bk = pK; }
    else am(b7);
    b7->x = 160 - J / 2; b7->y = 136; b7->J = J; b7->h = 17;
    am(b7);
    mY = aq + aK(2000);
}
static Y *jQ(int x, int y, const char *s, int as, int cc) {
    Y *A = a9(false, 112, kt);
    A->font = &aD;
    strncpy(A->hZ, s, sizeof A->hZ - 1);
    A->x = x; A->y = y; A->J = b9(&aD, s) + 2; A->h = aD.h;
    A->as = (uint8_t)as; A->cc = (uint8_t)cc;
    am(A);
    return A;
}
void de(int mode) {
    if (hz) { a0(hz); hz = NULL; }
    if (eh) { a0(eh); eh = NULL; }
    if (mode == kX) {
        hz = jQ(3, 1, "2nd Play  Up Draw", aH, 2);
        eh = jQ(0, 1, "alpha UNO!", be, 1);
        eh->x = at - eh->J - 3;
        am(eh);
    }
}
void kY(void) {
    for (int i = 0; i < jP; i++) {
        f5 *l = &e6[i];
        if (!l->A) continue;
        int s = pI(l);
        if (s < 0) { a0(l->A); l->A = NULL; continue; }
        if (s != l->an) { l->an = s; am(l->A); }
    }
    if (b7 && (int)(aq - mY) > 0) { a0(b7); b7 = NULL; }
}
static uint8_t jR, jS, mZ, m0;
static uint8_t f4(void) {
    if (!jR) {
        jR = bC(20, 22, 28); jS = bC(92, 96, 112);
        mZ = bC(44, 48, 60); m0 = bC(70, 58, 20);
    }
    return jR;
}
static uint8_t jO(void) { f4(); return jS; }
static void ei(int x, int y, int J, int h) {
    cI(x, y, J, h, 10, f4());
    b8(x, y, J, h, 10, 1, jS);
}
#define f6 22
static int hB(const char *s) {
    int J = b9(&b_, s) + 28;
    return J < 84 ? 84 : J;
}
static void hC(int x, int y, int J, const char *s, bool aU) {
    f4();
    cI(x, y, J, f6, f6 / 2, aU ? m0 : mZ);
    if (aU) b8(x - 2, y - 2, J + 4, f6 + 4, f6 / 2 + 2, 2, dT);
    bA(&b_, x + J / 2, y, f6, s, ao[aU ? be : aH][0]);
}
static Y *ej(int x, int y, int J, int h, kw iB) {
    Y *A = a9(false, 118, bF);
    A->bk = iB;
    A->x = x - 4; A->y = y - 4; A->J = J + 8; A->h = h + 8;
    am(A);
    return A;
}
static int e7;
static const uint8_t jT[4] = { n8, oa, n9, n_ };
static void pL(Y *A) {
    int aF = 160, aS = 110;
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    bA(&b_, aF, A->y + 8, 22, "Pick a color", ao[aH][0]);
    for (int N = 0; N < 4; N++) {
        bool s = N == e7;
        int bU = s ? (N & 1 ? 5 : -5) : 0, bV = s ? (N & 2 ? 5 : -5) : 0;
        int x0 = (N & 1 ? aF : aF - cp) + bU, M = (N & 2 ? aS : aS - cp) + bV;
        int jU = N & 1 ? cp * 256 - 32 : 32, bJ = N & 1 ? 32 : cp * 256 - 32;
        int d5 = N & 2 ? cp * 256 - 32 : 32, cm = N & 2 ? 32 : cp * 256 - 32;
        c2 V = { bp(nI), cp, cp, ao[jT[N]][s ? 0 : 3] };
        int jV = x0 * 16, jW = M * 16, jX = (x0 + cp) * 16, jY = (M + cp) * 16;
        ar P[3] = { { jV, jW, jU, d5 }, { jX, jW, bJ, d5 }, { jX, jY, bJ, cm } };
        ar K[3] = { { jV, jW, jU, d5 }, { jX, jY, bJ, cm }, { jV, jY, jU, cm } };
        dQ(P, 3, &V);
        dQ(K, 3, &V);
    }
}
int kZ(void) {
    int e5[4] = { 0 };
    for (int i = 0; i < H.l[0].n; i++) if (bf(H.l[0].ad[i]) < 4) e5[bf(H.l[0].ad[i])]++;
    int ai = 0;
    for (int c = 1; c < 4; c++) if (e5[c] > e5[ai]) ai = c;
    for (int N = 0; N < 4; N++) if (jT[N] == ai) e7 = N;
    Y *A = ej(160 - 64, 110 - 76, 128, 140, pL);
    for (;;) {
        aJ();
        uint16_t D = bn;
        int s = e7;
        if (D & dM) s &= ~1;
        if (D & dN) s |= 1;
        if (D & fa) s &= ~2;
        if (D & fb) s |= 2;
        if (s != e7) { e7 = s; am(A); }
        if (D & bm) break;
    }
    a0(A);
    return jT[e7];
}
static const char *m1, *jZ, *j0;
static bool e8;
static void pM(Y *A) {
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    bA(&b_, 160, A->y + 10, 24, m1, ao[aH][0]);
    int eT = hB(jZ), m2 = hB(j0), x0 = 160 - (eT + m2 + 12) / 2;
    hC(x0, A->y + 44, eT, jZ, e8);
    hC(x0 + eT + 12, A->y + 44, m2, j0, !e8);
}
bool gA(const char *cw, const char *il, const char *im, int k2) {
    m1 = cw; jZ = il; j0 = im; e8 = k2 != 0;
    int J = hB(il) + hB(im) + 12 + 40, aZ = b9(&b_, cw) + 40;
    if (aZ > J) J = aZ;
    if (J > 312) J = 312;
    Y *A = ej(160 - J / 2, 60, J, 80, pM);
    bool E;
    for (;;) {
        aJ();
        uint16_t D = bn;
        if (D & (dM | dN)) { e8 = !e8; am(A); }
        if (D & bm) { E = e8; break; }
        if (D & en) { E = false; break; }
    }
    a0(A);
    return E;
}
static int ek;
static const char *m3;
static void pN(Y *A) {
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    bA(&b_, 160, A->y + 10, 24, m3, ao[aH][0]);
    int n = aA - 1, J = 84, x0 = 160 - (n * (J + 8) - 8) / 2;
    for (int i = 0; i < n; i++) hC(x0 + i * (J + 8), A->y + 44, J, H.l[i + 1].name, ek == i + 1);
}
int k1(const char *cw) {
    m3 = cw; ek = 1;
    Y *A = ej(160 - 146, 60, 292, 80, pN);
    for (;;) {
        aJ();
        uint16_t D = bn;
        if ((D & dM) && ek > 1) { ek--; am(A); }
        if ((D & dN) && ek < aA - 1) { ek++; am(A); }
        if (D & bm) break;
    }
    a0(A);
    return ek;
}
typedef struct { const char *cw; const char *items[8]; int n, aU, J; } hD;
static hD *m4;
static void pO(Y *A) {
    hD *aa = m4;
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    int y = A->y + 10;
    if (aa->cw) { bA(&b_, 160, y, 22, aa->cw, ao[be][0]); y += 28; }
    for (int i = 0; i < aa->n; i++, y += 28) hC(160 - aa->J / 2, y + 2, aa->J, aa->items[i], i == aa->aU);
}
static int pP(hD *aa, int y) {
    m4 = aa;
    int h = (aa->cw ? 28 : 0) + aa->n * 28 + 18;
    Y *A = ej(160 - aa->J / 2 - 14, y, aa->J + 28, h, pO);
    int E;
    for (;;) {
        aJ();
        uint16_t D = bn;
        if ((D & fa) && aa->aU > 0) { aa->aU--; am(A); }
        if ((D & fb) && aa->aU < aa->n - 1) { aa->aU++; am(A); }
        if (D & bm) { E = aa->aU; break; }
        if (D & en) { E = -1; break; }
    }
    a0(A);
    return E;
}
static int dK;
static void pQ(Y *A) {
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    const char *l = (const char *)bp(nJ);
    for (int D = 0; D < dK; D++) l += strlen(l) + 1;
    for (int i = 0; *l; i++) {
        char line[40];
        int n = 0;
        while (*l && *l != '\n' && n < 39) line[n++] = *l++;
        line[n] = 0;
        if (*l == '\n') l++;
        if (!i) bA(&b_, 160, A->y + 10, 24, line, ao[be][0]);
        else bA(&aD, 160, A->y + 24 + i * 17, 17, line, ao[aH][0]);
    }
    char K[8];
    K[0] = (char)('1' + dK); K[1] = '/'; K[2] = '5'; K[3] = 0;
    co(&aD, A->x + 16, A->y + A->h - 26, 17, K, ao[aH][2]);
    co(&aD, A->x + A->J - 16 - b9(&aD, "< > pages"), A->y + A->h - 26, 17, "< > pages", ao[aH][2]);
}
void io(void) {
    dK = 0;
    Y *A = ej(24, 18, 272, 190, pQ);
    for (;;) {
        aJ();
        uint16_t D = bn;
        if ((D & dM) && dK > 0) { dK--; am(A); }
        if ((D & (dN | bm)) && dK < 4) { dK++; am(A); continue; }
        if ((D & bm) && dK == 4) break;
        if (D & en) break;
    }
    a0(A);
}
bool k3(void) {
    static hD aa = { "Paused", { "Resume", "How to play", "Quit match" }, 3, 0, 150 };
    for (;;) {
        aa.aU = 0;
        int E = pP(&aa, 40);
        if (E == 1) { io(); continue; }
        if (E == 2) return gA("Quit this match?", "Quit", "Keep playing", 0);
        return false;
    }
}
static int hE, pR, em;
static void pS(Y *A) {
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    char V[32];
    if (hE == 0) strcpy(V, "You win the round!");
    else { strcpy(V, H.l[hE].name); strcat(V, " wins the round"); }
    bA(&b_, 160, A->y + 8, 24, V, ao[be][0]);
    int y = A->y + 34;
    for (int l = 0; l < aA; l++, y += 44) {
        bool J = l == hE;
        co(&aD, A->x + 14, y, 39, H.l[l].name, ao[J ? be : aH][0]);
        if (J) {
            char K[12] = "+";
            b1(em, K + 1);
            ff(&c7, 160, y + 18, K, 150, ao[be][0]);
        } else {
            int n = H.l[l].n > 13 ? 13 : H.l[l].n;
            for (int i = 0; i < n; i++) {
                uint8_t D = H.l[l].ad[i];
                dP(A->x + 62 + i * 12, y, hY(b0(D)), hR, hS, ev(b0(D), cV(D), 0));
            }
            char K[8];
            b1(mV(l), K);
            co(&aD, A->x + A->J - 46, y, 39, K, ao[aH][1]);
        }
        char f7[8];
        b1(H.l[l].dY + (J ? em : 0), f7);
        bA(&aD, A->x + A->J - 22, y, 39, f7, ao[aH][0]);
    }
    bA(&aD, 160, A->y + A->h - 24, 17, "Press 2nd", ao[aH][2]);
}
void k4(int bQ, int cj) {
    hE = bQ; pR = cj; em = 0;
    int h = 56 + aA * 44;
    Y *A = ej(12, (bh - h) / 2, 296, h, pS);
    av cT = aq;
    for (;;) {
        aJ();
        av d = aq - cT;
        if (d > aK(1200)) d = aK(1200);
        int s = (int)((d >> 4) * cj / (aK(1200) >> 4));
        if (s > cj) s = cj;
        if (s != em) { em = s; am(A); }
        if ((bn & bm) && em == cj) break;
        if (bn & bm) { em = cj; am(A); cT = aq - aK(1200); }
    }
    a0(A);
}
#define hF 36
typedef struct { int x, y, m5, m6, c, s; } j1;
static j1 dL[hF];
static int hG;
static void pT(Y *A) {
    (void)A;
    for (int i = 0; i < hF; i++) {
        j1 *c = &dL[i];
        int J = 3 + (c->s & 3), h = 5 - (c->s & 3);
        hO(c->x >> 4, c->y >> 4, J, h, ao[c->c][0][1]);
    }
}
static void pU(Y *A) {
    ei(A->x + 4, A->y + 4, A->J - 8, A->h - 8);
    if (hG == 0) ff(&c7, 160, A->y + 34, "YOU WIN!", 240, ao[be][0]);
    else {
        char K[20];
        mW(K, H.l[hG].name, 12);
        strcat(K, " WINS");
        ff(&c7, 160, A->y + 34, K, 200, ao[cK][0]);
    }
    int y = A->y + 66;
    for (int l = 0; l < aA; l++, y += 18) {
        char f7[8];
        b1(H.l[l].dY, f7);
        co(&aD, 110, y, 18, H.l[l].name, ao[l == hG ? be : aH][0]);
        co(&aD, 200, y, 18, f7, ao[aH][0]);
    }
    bA(&aD, 160, A->y + A->h - 24, 17, "Press 2nd", ao[aH][2]);
}
void k5(int bQ) {
    hG = bQ;
    df.ip++;
    if (bQ == 0) df.k7++;
    int h = 96 + aA * 18;
    Y *A = ej(40, (bh - h) / 2, 240, h, pU);
    Y *bu = NULL;
    if (bQ == 0) {
        for (int i = 0; i < hF; i++) {
            dL[i].x = aG(at) * 16; dL[i].y = -aG(200) * 16;
            dL[i].m5 = aG(17) - 8; dL[i].m6 = 20 + aG(30);
            dL[i].c = aG(4); dL[i].s = aG(4);
        }
        bu = a9(false, 125, bF);
        bu->bk = pT;
        bu->x = 0; bu->y = 0; bu->J = at; bu->h = bh;
    }
    for (;;) {
        if (bu) {
            for (int i = 0; i < hF; i++) {
                j1 *c = &dL[i];
                c->x += c->m5 + (bE((int)(aq >> 9) + i * 40) >> 12);
                c->y += c->m6;
                if (c->y > bh * 16) { c->y = -80; c->x = aG(at) * 16; }
            }
            am(bu);
        }
        aJ();
        if (bn & bm) break;
    }
    if (bu) a0(bu);
    a0(A);
}
static int a6, e9;
static const char *const pV[3] = { "Easy", "Normal", "Hard" };
static const char *const pW[3] = { "500 points", "250 points", "One round" };
static void pX(Y *A) {
    kd(A->x, A->y, bp(nH), ge, kg, ge);
}
static char bz[8][28];
static void m7(void) {
    if (e9 == 0) {
        strcpy(bz[0], "Play");
        strcpy(bz[1], "Opponents: "); b1(ak.ex - 1, bz[1] + 11);
        strcpy(bz[2], "Bots: "); strcat(bz[2], pV[ak.bO]);
        strcpy(bz[3], "Match: "); strcat(bz[3], pW[ak.bH]);
        strcpy(bz[4], "House rules");
        strcpy(bz[5], "How to play");
        strcpy(bz[6], "Quit");
    } else {
        strcpy(bz[0], ak.gq ? "Stack +2/+4: On" : "Stack +2/+4: Off");
        strcpy(bz[1], ak.gr ? "Draw till playable: On" : "Draw till playable: Off");
        strcpy(bz[2], ak.h3 ? "7-0 swap: On" : "7-0 swap: Off");
        strcpy(bz[3], ak.h4 ? "Speed: Fast" : "Speed: Normal");
        strcpy(bz[4], "Back");
    }
}
static int j2(void) { return e9 ? 5 : 7; }
static void pY(Y *A) {
    int n = j2();
    fd(A->x, A->y, A->J, A->h, 10, cL[3]);
    fd(A->x, A->y, A->J, A->h, 10, cL[1]);
    b8(A->x, A->y, A->J, A->h, 10, 1, jO());
    for (int i = 0; i < n; i++) {
        bool s = i == a6;
        int y = A->y + 4 + i * 16;
        if (s) b8(A->x + 4, y, A->J - 8, 16, 8, 1, dT);
        bA(&aD, A->x + A->J / 2, y, 16, bz[i], ao[s ? be : aH][0]);
    }
}
static void pZ(void) {
    int cG = (bE((int)(aq >> 8) * 3) + 16384) * 100 >> 15;
    dO(dT, 255, (uint8_t)(190 + cG / 2), (uint8_t)(30 + cG));
}
static void p0(void) {
    h1();
    fo = pZ;
    fp = NULL;
    static const struct { uint8_t aw, as; int x, y, fk; } f8[6] = {
        { 7, cK, -330, -40, 22 }, { go, be, -250, -10, 12 }, { nK, 0, -170, 5, 4 },
        { gp, gf, 170, 5, -4 }, { cQ, hU, 250, -10, -12 }, { nL, 0, 330, -40, -22 },
    };
    for (int i = 0; i < 6; i++) {
        Y *c = a9(true, 10 + i, dV);
        c->aw = f8[i].aw; c->as = f8[i].as;
        cb(f8[i].x, f8[i].y, 0, f8[i].fk, 256, c->af, c->ag);
        am(c);
    }
    Y *e_ = a9(true, 30, bF);
    e_->bk = pX;
    e_->x = (at - ge) / 2; e_->y = 4; e_->J = ge; e_->h = kg;
    am(e_);
}
int k6(void) {
    p0();
    a6 = 0; e9 = 0;
    m7();
    Y *c1 = a9(false, 100, bF);
    c1->bk = pY;
    c1->J = 150; c1->x = 85; c1->y = 116; c1->h = 7 * 16 + 8;
    am(c1);
    char dz[24] = "Wins ";
    b1(df.k7, dz + 5);
    strcat(dz, " / ");
    b1(df.ip, dz + strlen(dz));
    Y *j3 = jQ(4, bh - aD.h - 2, df.ip ? dz : "", aH, 3);
    int E = -1;
    while (E < 0) {
        aJ();
        h6();
        uint16_t D = bn;
        int n = j2();
        bool bt = false;
        if ((D & fa) && a6 > 0) { a6--; bt = true; }
        if ((D & fb) && a6 < n - 1) { a6++; bt = true; }
        int d = (D & dN) ? 1 : (D & dM) ? -1 : (D & bm) ? 1 : 0;
        if (e9 == 0) {
            if (d && a6 == 1) { ak.ex = (uint8_t)(2 + (ak.ex - 2 + d + 3) % 3); bt = true; }
            else if (d && a6 == 2) { ak.bO = (uint8_t)((ak.bO + d + 3) % 3); bt = true; }
            else if (d && a6 == 3) { ak.bH = (uint8_t)((ak.bH + d + 3) % 3); bt = true; }
            else if ((D & bm) && a6 == 0) E = 0;
            else if ((D & bm) && a6 == 4) { e9 = 1; a6 = 0; bt = true; }
            else if ((D & bm) && a6 == 5) { io(); }
            else if ((D & bm) && a6 == 6) E = 1;
            else if (D & en) E = 1;
        } else {
            if (d && a6 == 0) { ak.gq ^= 1; bt = true; }
            else if (d && a6 == 1) { ak.gr ^= 1; bt = true; }
            else if (d && a6 == 2) { ak.h3 ^= 1; bt = true; }
            else if (d && a6 == 3) { ak.h4 ^= 1; bt = true; }
            else if (((D & bm) && a6 == 4) || (D & en)) { e9 = 0; a6 = 4; bt = true; }
        }
        if (bt) {
            m7();
            c1->h = j2() * 16 + 8;
            am(c1);
        }
    }
    a0(c1);
    a0(j3);
    return E;
}
#define hH "UNOSAVE"
#define m8 0x55
typedef struct { uint8_t qC; h5 f9; iq j3; } j4;
static void p1(void) {
    var_t *O = os_GetAppVarData(hH, NULL);
    if (O && O->size == sizeof(j4) && O->data[0] == m8) {
        j4 s;
        memcpy(&s, O->data, sizeof s);
        if (s.f9.ex >= 2 && s.f9.ex <= 4 && s.f9.bO < 3 && s.f9.bH < 3) ak = s.f9;
        df = s.j3;
    }
}
static void p2(void) {
    j4 s = { m8, ak, df };
    int archived = 0;
    var_t *O = os_GetAppVarData(hH, &archived);
    if (O && archived) return;
    if (O) os_DelAppVar(hH);
    O = os_CreateAppVar(hH, sizeof s);
    if (O) memcpy(O->data, &s, sizeof s);
}
static void p3(const char *m9) {
    static const uint16_t p4[2] = { 0x0000, 0x7FFF };
    hL(p4, 0, 2);
    memset(bN, 0, at * bh);
    hK();
    (void)m9;
    hJ();
    os_ClrHome();
    os_PutStrFull("UNO needs its data files:");
    os_NewLine();
    os_PutStrFull("UNOA UNOB UNOC UNOD (.8xv)");
    os_NewLine();
    os_PutStrFull("Missing: ");
    os_PutStrFull(m9);
    os_NewLine();
}
int main(void) {
    j6();
    kp();
    const char *m_ = ko();
    if (m_) {
        p3(m_);
        return 1;
    }
    p1();
    kH(fc() * 2654435761u + 1);
    for (;;) {
        if (k6()) break;
        kI();
        kJ();
    }
    hJ();
    p2();
    return 0;
}
__asm__(
"	.assume	adl=1\n"
"	.section .text.gE,\"ax\",@progbits\n"
"	.global	_gE\n"
"_gE:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	a, (iy + 9)\n"
"	and	a, 3\n"
"	ld	hl, (iy + 9)\n"
"	srl	h\n"
"	rr	l\n"
"	srl	h\n"
"	rr	l\n"
"	ld	h, a\n"
"	push	hl\n"
"	ld	bc, (iy + 3)\n"
"	ld	hl, (iy + 6)\n"
"	ld	de, (iy + 12)\n"
"	pop	iy\n"
"	ld	a, iyh\n"
"	or	a, a\n"
"	jr	z, .Ll_q\n"
".Ll_s:\n"
"	ld	a, (hl)\n"
"	inc	hl\n"
"	or	a, a\n"
"	jr	z, 1f\n"
"	ld	e, a\n"
"	ld	a, (de)\n"
"	ld	(bc), a\n"
"1:\n"
"	inc	bc\n"
"	dec	iyh\n"
"	jr	nz, .Ll_s\n"
".Ll_q:\n"
"	ld	a, iyl\n"
"	or	a, a\n"
"	ret	z\n"
".Ll_4:\n"
"	.rept	4\n"
"	ld	a, (hl)\n"
"	inc	hl\n"
"	or	a, a\n"
"	jr	z, 1f\n"
"	ld	e, a\n"
"	ld	a, (de)\n"
"	ld	(bc), a\n"
"1:\n"
"	inc	bc\n"
"	.endr\n"
"	dec	iyl\n"
"	jr	nz, .Ll_4\n"
"	ret\n"
"	.section .text.gF,\"ax\",@progbits\n"
"	.global	_gF\n"
"_gF:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 6)\n"
"	ld	de, 255\n"
"	add	hl, de\n"
"	ld	c, h\n"
"	ld	a, c\n"
"	or	a, a\n"
"	ret	z\n"
"	ld	b, (iy + 6)\n"
"	ld	hl, (iy + 3)\n"
"	ld	de, (iy + 9)\n"
".Lq_loop:\n"
"	ld	e, (hl)\n"
"	ld	a, (de)\n"
"	ld	(hl), a\n"
"	inc	hl\n"
"	djnz	.Lq_loop\n"
"	dec	c\n"
"	jr	nz, .Lq_loop\n"
"	ret\n"
"	.section .text.iw,\"ax\",@progbits\n"
"	.global	_iw\n"
"_iw:\n"
"	push	ix\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 9)\n"
"	ld	de, 255\n"
"	add	hl, de\n"
"	ld	a, h\n"
"	or	a, a\n"
"	jr	z, .Lt_done\n"
"	exx\n"
"	ld	c, a\n"
"	ld	b, (iy + 9)\n"
"	ld	de, (iy + 6)\n"
"	ld	hl, (_fE)\n"
"	exx\n"
"	ld	bc, (iy + 18)\n"
"	ld	de, (iy + 21)\n"
"	ld	ix, (iy + 12)\n"
"	ld	hl, (_eG)\n"
"	ld	iy, (iy + 15)\n"
"	exx\n"
".Lt_loop:\n"
"	exx\n"
"	ld	a, iyh\n"
"	ld	h, a\n"
"	ld	a, ixh\n"
"	ld	l, a\n"
"	ld	a, (hl)\n"
"	add	ix, bc\n"
"	add	iy, de\n"
"	exx\n"
"	or	a, a\n"
"	jr	z, .Lt_skip\n"
"	ld	l, a\n"
"	ld	a, (hl)\n"
"	ld	(de), a\n"
".Lt_skip:\n"
"	inc	de\n"
"	djnz	.Lt_loop\n"
"	dec	c\n"
"	jr	nz, .Lt_loop\n"
".Lt_done:\n"
"	pop	ix\n"
"	ret\n"
"	.section .text.ll,\"ax\",@progbits\n"
"	.global	_ll\n"
"_ll:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	xor	a, a\n"
"	ld	(.Lq_scr + 3), a\n"
"	ld	hl, (iy + 9)\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	ld	(.Lq_scr), hl\n"
"	ld	hl, (.Lq_scr + 1)\n"
"	ld	de, (_gG)\n"
"	add	hl, de\n"
"	ld	(iy + 9), hl\n"
"	ld	hl, (iy + 12)\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	ld	(.Lq_scr), hl\n"
"	ld	hl, (.Lq_scr + 1)\n"
"	ld	de, (_gH)\n"
"	add	hl, de\n"
"	ld	(iy + 12), hl\n"
"	jp	_iw\n"
"	.section .bss.q12,\"aw\",@nobits\n"
".Lq_scr:\n"
"	.skip	4\n"
"J_ROW	= 0\n"
"J_PITCH	= 3\n"
"J_LINES	= 6\n"
"J_LX	= 9\n"
"J_LDX	= 13\n"
"J_RX	= 17\n"
"J_RDX	= 21\n"
"J_UROW	= 25\n"
"J_VROW	= 28\n"
"J_DUY	= 31\n"
"J_DVY	= 34\n"
"J_DUX	= 37\n"
"J_DVX	= 40\n"
"J_X0	= 43\n"
"J_CX0	= 46\n"
"J_CX1	= 49\n"
"J_DU8	= 52\n"
"J_DV8	= 55\n"
"J_Y	= 58\n"
"J_CY0	= 61\n"
"J_CY1	= 64\n"
"	.section .text.tri_seg,\"ax\",@progbits\n"
"	.global	_tri_seg\n"
"_tri_seg:\n"
"	push	ix\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	ix, (iy + 6)\n"
"	ld	(.Ls_job), ix\n"
".Ls_line:\n"
"	ld	ix, (.Ls_job)\n"
"	ld	hl, (ix + J_LINES)\n"
"	ld	de, 1\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jp	m, .Ls_done\n"
"	ld	(ix + J_LINES), hl\n"
"	ld	hl, (ix + J_Y)\n"
"	ld	de, (ix + J_CY0)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jp	m, .Ls_step\n"
"	ld	hl, (ix + J_Y)\n"
"	ld	de, (ix + J_CY1)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jp	p, .Ls_step\n"
"	ld	hl, (ix + J_LX + 2)\n"
"	ld	(.Ls_scr), hl\n"
"	ld	a, (ix + J_LX + 3)\n"
"	rla\n"
"	sbc	a, a\n"
"	ld	(.Ls_scr + 2), a\n"
"	ld	hl, (.Ls_scr)\n"
"	ld	de, (ix + J_CX0)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	add	hl, de\n"
"	jp	p, .Ls_x0ok\n"
"	ex	de, hl\n"
".Ls_x0ok:\n"
"	ld	(.Ls_xs), hl\n"
"	ld	hl, (ix + J_RX + 2)\n"
"	ld	(.Ls_scr), hl\n"
"	ld	a, (ix + J_RX + 3)\n"
"	rla\n"
"	sbc	a, a\n"
"	ld	(.Ls_scr + 2), a\n"
"	ld	hl, (.Ls_scr)\n"
"	ld	de, (ix + J_CX1)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	add	hl, de\n"
"	jp	m, .Ls_x1ok\n"
"	ex	de, hl\n"
".Ls_x1ok:\n"
"	ld	de, (.Ls_xs)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jp	m, .Ls_step\n"
"	jp	z, .Ls_step\n"
"	ld	(.Ls_n), hl\n"
"	ex	de, hl\n"
"	ld	de, (ix + J_X0)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	ld	(.Ls_dx), hl\n"
"	ld	bc, (ix + J_DUX)\n"
"	call	__imulu\n"
"	ld	de, (ix + J_UROW)\n"
"	add	hl, de\n"
"	call	.Ls_q12to8\n"
"	ld	de, (_gG)\n"
"	add	hl, de\n"
"	ld	(.Ls_u), hl\n"
"	ld	hl, (.Ls_dx)\n"
"	ld	bc, (ix + J_DVX)\n"
"	call	__imulu\n"
"	ld	de, (ix + J_VROW)\n"
"	add	hl, de\n"
"	call	.Ls_q12to8\n"
"	ld	de, (_gH)\n"
"	add	hl, de\n"
"	ld	(.Ls_v), hl\n"
"	ld	hl, (ix + J_ROW)\n"
"	ld	de, (.Ls_xs)\n"
"	add	hl, de\n"
"	push	hl\n"
"	ld	hl, (.Ls_n)\n"
"	ld	de, 255\n"
"	add	hl, de\n"
"	ld	a, h\n"
"	exx\n"
"	ld	c, a\n"
"	ld	a, (.Ls_n)\n"
"	ld	b, a\n"
"	pop	de\n"
"	ld	hl, (_fE)\n"
"	exx\n"
"	ld	bc, (ix + J_DU8)\n"
"	ld	de, (ix + J_DV8)\n"
"	ld	hl, (.Ls_v)\n"
"	push	hl\n"
"	ld	hl, (.Ls_u)\n"
"	push	hl\n"
"	pop	ix\n"
"	pop	iy\n"
"	ld	hl, (_eG)\n"
"	exx\n"
".Ls_px:\n"
"	exx\n"
"	ld	a, iyh\n"
"	ld	h, a\n"
"	ld	a, ixh\n"
"	ld	l, a\n"
"	ld	a, (hl)\n"
"	add	ix, bc\n"
"	add	iy, de\n"
"	exx\n"
"	or	a, a\n"
"	jr	z, .Ls_skip\n"
"	ld	l, a\n"
"	ld	a, (hl)\n"
"	ld	(de), a\n"
".Ls_skip:\n"
"	inc	de\n"
"	djnz	.Ls_px\n"
"	dec	c\n"
"	jr	nz, .Ls_px\n"
"	exx\n"
"	ld	ix, (.Ls_job)\n"
".Ls_step:\n"
"	ld	hl, (ix + J_LX)\n"
"	ld	de, (ix + J_LDX)\n"
"	add	hl, de\n"
"	ld	(ix + J_LX), hl\n"
"	ld	a, (ix + J_LX + 3)\n"
"	adc	a, (ix + J_LDX + 3)\n"
"	ld	(ix + J_LX + 3), a\n"
"	ld	hl, (ix + J_RX)\n"
"	ld	de, (ix + J_RDX)\n"
"	add	hl, de\n"
"	ld	(ix + J_RX), hl\n"
"	ld	a, (ix + J_RX + 3)\n"
"	adc	a, (ix + J_RDX + 3)\n"
"	ld	(ix + J_RX + 3), a\n"
"	ld	hl, (ix + J_UROW)\n"
"	ld	de, (ix + J_DUY)\n"
"	add	hl, de\n"
"	ld	(ix + J_UROW), hl\n"
"	ld	hl, (ix + J_VROW)\n"
"	ld	de, (ix + J_DVY)\n"
"	add	hl, de\n"
"	ld	(ix + J_VROW), hl\n"
"	ld	hl, (ix + J_ROW)\n"
"	ld	de, (ix + J_PITCH)\n"
"	add	hl, de\n"
"	ld	(ix + J_ROW), hl\n"
"	ld	hl, (ix + J_Y)\n"
"	inc	hl\n"
"	ld	(ix + J_Y), hl\n"
"	jp	.Ls_line\n"
".Ls_done:\n"
"	pop	ix\n"
"	ret\n"
".Ls_q12to8:\n"
"	ld	(.Ls_scr), hl\n"
"	ld	a, (.Ls_scr + 2)\n"
"	rla\n"
"	sbc	a, a\n"
"	ld	(.Ls_scr + 3), a\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	ld	(.Ls_scr), hl\n"
"	ld	hl, (.Ls_scr + 1)\n"
"	ret\n"
"	.section .bss.tri_seg,\"aw\",@nobits\n"
".Ls_job:	.skip	3\n"
".Ls_scr:	.skip	4\n"
".Ls_xs:	.skip	3\n"
".Ls_n:	.skip	3\n"
".Ls_dx:	.skip	3\n"
".Ls_u:	.skip	3\n"
".Ls_v:	.skip	3\n"
"	.section .text.i3,\"ax\",@progbits\n"
"	.global	_i3\n"
"_i3:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 3)\n"
"	ld	de, (iy + 6)\n"
"	ld	b, (iy + 9)\n"
".Lu_loop:\n"
"	ld	a, (hl)\n"
"	inc	hl\n"
"	ld	(de), a\n"
"	inc	de\n"
"	ld	(de), a\n"
"	inc	de\n"
"	djnz	.Lu_loop\n"
"	ld	hl, (iy + 6)\n"
"	ld	de, (iy + 6)\n"
"	ex	de, hl\n"
"	ld	bc, (iy + 12)\n"
"	add	hl, bc\n"
"	ex	de, hl\n"
"	ld	bc, 0\n"
"	ld	c, (iy + 9)\n"
"	sla	c\n"
"	rl	b\n"
"	ldir\n"
"	ret\n"
"	.section .text.i4,\"ax\",@progbits\n"
"	.global	_i4\n"
"_i4:\n"
"	push	ix\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 6)\n"
"	ld	ix, (iy + 9)\n"
"	ld	de, (iy + 12)\n"
"	ld	b, (iy + 15)\n"
".Ld_px:\n"
"	ld	a, (hl)\n"
"	inc	hl\n"
"	cp	a, (hl)\n"
"	jr	nz, .Ld_slow\n"
"	cp	a, (ix + 0)\n"
"	jr	nz, .Ld_slow\n"
"	cp	a, (ix + 1)\n"
"	jr	nz, .Ld_slow\n"
".Ld_store:\n"
"	ld	(de), a\n"
"	inc	hl\n"
"	lea	ix, ix + 2\n"
"	inc	de\n"
"	djnz	.Ld_px\n"
"	pop	ix\n"
"	ret\n"
".Ld_slow:\n"
"	push	bc\n"
"	push	de\n"
"	push	hl\n"
"	ld	c, a\n"
"	ld	b, (hl)\n"
"	ld	d, (ix + 0)\n"
"	ld	e, (ix + 1)\n"
"	cp	a, 240\n"
"	jr	nc, .Ld_c\n"
"	ld	a, b\n"
"	cp	a, 240\n"
"	jr	nc, .Ld_c\n"
"	ld	a, d\n"
"	cp	a, 240\n"
"	jr	nc, .Ld_c\n"
"	ld	a, e\n"
"	cp	a, 240\n"
"	jr	nc, .Ld_c\n"
"	ld	hl, (_dU)\n"
"	ld	l, c\n"
"	ld	a, (hl)\n"
"	ld	l, b\n"
"	add	a, (hl)\n"
"	ld	l, d\n"
"	add	a, (hl)\n"
"	ld	l, e\n"
"	add	a, (hl)\n"
"	rrca\n"
"	rrca\n"
"	rrca\n"
"	rrca\n"
"	and	a, 15\n"
"	ld	iyh, a\n"
"	inc	h\n"
"	ld	l, c\n"
"	ld	a, (hl)\n"
"	ld	l, b\n"
"	add	a, (hl)\n"
"	ld	l, d\n"
"	add	a, (hl)\n"
"	ld	l, e\n"
"	add	a, (hl)\n"
"	and	a, 0xF0\n"
"	ld	iyl, a\n"
"	inc	h\n"
"	ld	l, c\n"
"	ld	a, (hl)\n"
"	ld	l, b\n"
"	add	a, (hl)\n"
"	ld	l, d\n"
"	add	a, (hl)\n"
"	ld	l, e\n"
"	add	a, (hl)\n"
"	rrca\n"
"	rrca\n"
"	rrca\n"
"	rrca\n"
"	and	a, 15\n"
"	or	a, iyl\n"
"	ld	de, 0\n"
"	ld	e, a\n"
"	ld	d, iyh\n"
"	ld	hl, (_gh)\n"
"	add	hl, de\n"
"	ld	a, (hl)\n"
"	pop	hl\n"
"	pop	de\n"
"	pop	bc\n"
"	jp	.Ld_store\n"
".Ld_c:\n"
"	ld	a, c\n"
"	ld	c, e\n"
"	push	bc\n"
"	ld	c, d\n"
"	push	bc\n"
"	ld	c, b\n"
"	push	bc\n"
"	ld	c, a\n"
"	push	bc\n"
"	call	_oN\n"
"	pop	bc\n"
"	pop	bc\n"
"	pop	bc\n"
"	pop	bc\n"
"	pop	hl\n"
"	pop	de\n"
"	pop	bc\n"
"	jp	.Ld_store\n"
"K_ROW	= 0\n"
"K_PITCH	= 3\n"
"K_LINES	= 6\n"
"K_LX	= 9\n"
"K_LDX	= 14\n"
"K_RX	= 18\n"
"K_RDX	= 23\n"
"K_U	= 27\n"
"K_V	= 30\n"
"K_XS	= 33\n"
"K_DUY	= 36\n"
"K_DVY	= 39\n"
"K_DUX	= 42\n"
"K_DVX	= 45\n"
"K_CX0	= 48\n"
"K_CX1	= 51\n"
"K_DU8	= 54\n"
"K_DV8	= 57\n"
"	.section .text.iL,\"ax\",@progbits\n"
"	.global	_iL\n"
"_iL:\n"
"	push	ix\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	ix, (iy + 6)\n"
"	ld	(.Lk_job), ix\n"
".Lk_line:\n"
"	ld	hl, (ix + K_RX + 2)\n"
"	ld	de, (ix + K_CX1)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	add	hl, de\n"
"	jr	c, 1f\n"
"	ex	de, hl\n"
"1:\n"
"	ld	de, (ix + K_XS)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jp	c, .Lk_adv\n"
"	jp	z, .Lk_adv\n"
"	ld	(.Lk_n), hl\n"
"	ld	hl, (ix + K_ROW)\n"
"	add	hl, de\n"
"	ex	de, hl\n"
"	ld	a, (_iy)\n"
"	or	a, a\n"
"	jr	z, .Lk_tex\n"
"	ld	bc, (.Lk_n)\n"
"	dec	a\n"
"	jr	nz, .Lk_dark\n"
"	ld	a, (_lk)\n"
"	ld	(de), a\n"
"	dec	bc\n"
"	ld	a, b\n"
"	or	a, c\n"
"	jp	z, .Lk_adv\n"
"	push	de\n"
"	pop	hl\n"
"	inc	de\n"
"	ldir\n"
"	jp	.Lk_adv\n"
".Lk_dark:\n"
"	ex	de, hl\n"
"	ld	de, (_fE)\n"
".Lk_dk:\n"
"	ld	e, (hl)\n"
"	ld	a, (de)\n"
"	ld	(hl), a\n"
"	inc	hl\n"
"	dec	bc\n"
"	ld	a, b\n"
"	or	a, c\n"
"	jr	nz, .Lk_dk\n"
"	jp	.Lk_adv\n"
".Lk_tex:\n"
"	ld	hl, (.Lk_n)\n"
"	ld	a, l\n"
"	neg\n"
"	and	a, 15\n"
"	ld	bc, 0\n"
"	ld	c, a\n"
"	add	hl, bc\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	add	hl, hl\n"
"	ld	a, h\n"
"	ld	(.Lk_q), a\n"
"	ld	a, c\n"
"	add	a, a\n"
"	add	a, a\n"
"	add	a, a\n"
"	add	a, a\n"
"	ld	c, a\n"
"	ld	hl, .Lk_blk\n"
"	add	hl, bc\n"
"	ld	(.Lk_jp + 1), hl\n"
"	ld	hl, (ix + K_DU8)\n"
"	ld	(.Lk_du), hl\n"
"	ld	bc, (ix + K_DV8)\n"
"	ld	iy, (ix + K_V + 1)\n"
"	ld	ix, (ix + K_U + 1)\n"
"	ld	(.Lk_sp), sp\n"
"	ld	sp, (.Lk_du)\n"
"	ld	hl, (_eG)\n"
".Lk_jp:\n"
"	jp	.Lk_blk\n"
".Lk_blk:\n"
"	.rept	16\n"
"	ld	a, iyh\n"
"	ld	h, a\n"
"	ld	a, ixh\n"
"	ld	l, a\n"
"	ld	a, (hl)\n"
"	add	ix, sp\n"
"	add	iy, bc\n"
"	or	a, a\n"
"	jr	z, 1f\n"
"	ld	(de), a\n"
"1:\n"
"	inc	de\n"
"	.endr\n"
"	ld	a, (.Lk_q)\n"
"	dec	a\n"
"	ld	(.Lk_q), a\n"
"	jp	nz, .Lk_blk\n"
"	ld	sp, (.Lk_sp)\n"
"	ld	ix, (.Lk_job)\n"
".Lk_adv:\n"
"	dec	(ix + K_LINES)\n"
"	jp	z, .Lk_done\n"
"	ld	hl, (ix + K_LX)\n"
"	ld	de, (ix + K_LDX)\n"
"	add	hl, de\n"
"	ld	(ix + K_LX), hl\n"
"	ld	a, (ix + K_LX + 3)\n"
"	adc	a, (ix + K_LDX + 3)\n"
"	ld	(ix + K_LX + 3), a\n"
"	ld	hl, (ix + K_RX)\n"
"	ld	de, (ix + K_RDX)\n"
"	add	hl, de\n"
"	ld	(ix + K_RX), hl\n"
"	ld	a, (ix + K_RX + 3)\n"
"	adc	a, (ix + K_RDX + 3)\n"
"	ld	(ix + K_RX + 3), a\n"
"	ld	hl, (ix + K_ROW)\n"
"	ld	de, (ix + K_PITCH)\n"
"	add	hl, de\n"
"	ld	(ix + K_ROW), hl\n"
"	ld	hl, (ix + K_LX + 2)\n"
"	ld	de, (ix + K_CX0)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	add	hl, de\n"
"	jr	nc, 1f\n"
"	ex	de, hl\n"
"1:\n"
"	ld	de, (ix + K_XS)\n"
"	ld	(ix + K_XS), hl\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jr	z, .Lk_k0\n"
"	ld	(.Lk_k), hl\n"
"	dec	hl\n"
"	ld	a, h\n"
"	or	a, l\n"
"	jr	z, .Lk_kp1\n"
"	ld	hl, (.Lk_k)\n"
"	inc	hl\n"
"	add	hl, de\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	jr	z, .Lk_km1\n"
"	ld	hl, (.Lk_k)\n"
"	ld	bc, (ix + K_DUX)\n"
"	call	__imulu\n"
"	ld	de, (ix + K_U)\n"
"	add	hl, de\n"
"	ld	(ix + K_U), hl\n"
"	ld	hl, (.Lk_k)\n"
"	ld	bc, (ix + K_DVX)\n"
"	call	__imulu\n"
"	ld	de, (ix + K_V)\n"
"	add	hl, de\n"
"	ld	(ix + K_V), hl\n"
"	jr	.Lk_k0\n"
".Lk_km1:\n"
"	ld	hl, (ix + K_U)\n"
"	ld	de, (ix + K_DUX)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	ld	(ix + K_U), hl\n"
"	ld	hl, (ix + K_V)\n"
"	ld	de, (ix + K_DVX)\n"
"	or	a, a\n"
"	sbc	hl, de\n"
"	ld	(ix + K_V), hl\n"
"	jr	.Lk_k0\n"
".Lk_kp1:\n"
"	ld	hl, (ix + K_U)\n"
"	ld	de, (ix + K_DUX)\n"
"	add	hl, de\n"
"	ld	(ix + K_U), hl\n"
"	ld	hl, (ix + K_V)\n"
"	ld	de, (ix + K_DVX)\n"
"	add	hl, de\n"
"	ld	(ix + K_V), hl\n"
".Lk_k0:\n"
"	ld	hl, (ix + K_U)\n"
"	ld	de, (ix + K_DUY)\n"
"	add	hl, de\n"
"	ld	(ix + K_U), hl\n"
"	ld	hl, (ix + K_V)\n"
"	ld	de, (ix + K_DVY)\n"
"	add	hl, de\n"
"	ld	(ix + K_V), hl\n"
"	jp	.Lk_line\n"
".Lk_done:\n"
"	pop	ix\n"
"	ret\n"
"	.section .bss.iL,\"aw\",@nobits\n"
".Lk_job:	.skip	3\n"
".Lk_k:	.skip	3\n"
".Lk_n:	.skip	3\n"
".Lk_du:	.skip	3\n"
".Lk_sp:	.skip	3\n"
".Lk_q:	.skip	1\n"
"	.section .text.iC,\"ax\",@progbits\n"
"	.global	_iC\n"
"_iC:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	a, (iy + 9)\n"
"	and	a, 3\n"
"	ld	hl, (iy + 9)\n"
"	srl	h\n"
"	rr	l\n"
"	srl	h\n"
"	rr	l\n"
"	ld	h, a\n"
"	push	hl\n"
"	ld	bc, (iy + 3)\n"
"	ld	hl, (iy + 6)\n"
"	ld	de, (iy + 12)\n"
"	pop	iy\n"
"	ld	a, iyh\n"
"	or	a, a\n"
"	jr	z, .Lo_q\n"
".Lo_s:\n"
"	ld	e, (hl)\n"
"	inc	hl\n"
"	ld	a, (de)\n"
"	ld	(bc), a\n"
"	inc	bc\n"
"	dec	iyh\n"
"	jr	nz, .Lo_s\n"
".Lo_q:\n"
"	ld	a, iyl\n"
"	or	a, a\n"
"	ret	z\n"
".Lo_4:\n"
"	.rept	4\n"
"	ld	e, (hl)\n"
"	inc	hl\n"
"	ld	a, (de)\n"
"	ld	(bc), a\n"
"	inc	bc\n"
"	.endr\n"
"	dec	iyl\n"
"	jr	nz, .Lo_4\n"
"	ret\n"
"	.section .text.ae,\"ax\",@progbits\n"
"	.global	_ae\n"
"_ae:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 3)\n"
"	ld	de, (iy + 6)\n"
"	ld	a, h\n"
"	xor	a, d\n"
"	ld	(.Lm_sgn), a\n"
"	bit	7, h\n"
"	jr	z, 1f\n"
"	xor	a, a\n"
"	sub	a, l\n"
"	ld	l, a\n"
"	ld	a, 0\n"
"	sbc	a, h\n"
"	ld	h, a\n"
"1:\n"
"	bit	7, d\n"
"	jr	z, 2f\n"
"	xor	a, a\n"
"	sub	a, e\n"
"	ld	e, a\n"
"	ld	a, 0\n"
"	sbc	a, d\n"
"	ld	d, a\n"
"2:\n"
"	ld	b, l\n"
"	ld	c, e\n"
"	mlt	bc\n"
"	ld	(.Lm_r), bc\n"
"	ld	b, h\n"
"	ld	c, d\n"
"	mlt	bc\n"
"	ld	(.Lm_r + 2), bc\n"
"	ld	b, h\n"
"	ld	c, e\n"
"	mlt	bc\n"
"	ld	h, d\n"
"	mlt	hl\n"
"	ld	a, (.Lm_r + 1)\n"
"	add	a, c\n"
"	ld	(.Lm_r + 1), a\n"
"	ld	a, (.Lm_r + 2)\n"
"	adc	a, b\n"
"	ld	(.Lm_r + 2), a\n"
"	ld	a, (.Lm_r + 3)\n"
"	adc	a, 0\n"
"	ld	(.Lm_r + 3), a\n"
"	ld	a, (.Lm_r + 1)\n"
"	add	a, l\n"
"	ld	(.Lm_r + 1), a\n"
"	ld	a, (.Lm_r + 2)\n"
"	adc	a, h\n"
"	ld	(.Lm_r + 2), a\n"
"	ld	a, (.Lm_r + 3)\n"
"	adc	a, 0\n"
"	ld	e, a\n"
"	ld	hl, (.Lm_r)\n"
"	ld	a, (.Lm_sgn)\n"
"	rla\n"
"	ret	nc\n"
"	ld	a, e\n"
"	push	hl\n"
"	pop	bc\n"
"	or	a, a\n"
"	sbc	hl, hl\n"
"	sbc	hl, bc\n"
"	ld	e, a\n"
"	ld	a, 0\n"
"	sbc	a, e\n"
"	ld	e, a\n"
"	ret\n"
"	.section .text.d2,\"ax\",@progbits\n"
"	.global	_d2\n"
"_d2:\n"
"	ld	iy, 0\n"
"	add	iy, sp\n"
"	ld	hl, (iy + 3)\n"
"	ld	a, (iy + 6)\n"
"	ld	bc, (iy + 9)\n"
"	ld	(.Lm_sgn), a\n"
"	bit	7, a\n"
"	jr	z, 1f\n"
"	ld	(.Lm_r), a\n"
"	ex	de, hl\n"
"	or	a, a\n"
"	sbc	hl, hl\n"
"	sbc	hl, de\n"
"	ld	a, (.Lm_r)\n"
"	ld	d, a\n"
"	ld	a, 0\n"
"	sbc	a, d\n"
"1:\n"
"	ld	de, 0\n"
"	ld	e, a\n"
"	ld	a, 24\n"
".Lv_loop:\n"
"	add	hl, hl\n"
"	ex	de, hl\n"
"	adc	hl, hl\n"
"	sbc	hl, bc\n"
"	jr	nc, 2f\n"
"	add	hl, bc\n"
"	ex	de, hl\n"
"	dec	a\n"
"	jr	nz, .Lv_loop\n"
"	jr	3f\n"
"2:\n"
"	ex	de, hl\n"
"	inc	hl\n"
"	dec	a\n"
"	jr	nz, .Lv_loop\n"
"3:\n"
"	ld	a, (.Lm_sgn)\n"
"	rla\n"
"	ret	nc\n"
"	ex	de, hl\n"
"	or	a, a\n"
"	sbc	hl, hl\n"
"	sbc	hl, de\n"
"	ret\n"
"	.section .data.ae,\"aw\",@progbits\n"
".Lm_r:\n"
"	.db	0, 0, 0, 0, 0\n"
".Lm_sgn:\n"
"	.db	0\n"
);
