#include <stdio.h>
int menu1();
int kullanici_ekle();
int kullanici_bul();
int ogr_no();
int tel_no();
int mail();
int sirala();
int adSirala();
int noSirala();
unsigned int karsilastirma(const char *s1, const char *s2);
int count_array();
FILE *dosya;
#define SIZE 20

struct ogrenci
{
    char isim[SIZE];
    char soyisim[SIZE];
    char ogrno[SIZE];
    char telno[SIZE];
    char mail[SIZE];
};

int main()
{
    start();
}

void start()
{

    int ok = 1;
    int secim;

    while (ok)
    {
        printf("menu1\n 1:kullanici ekle\n 2:kullanici bul\n 3:kullanici sirala\n 4:cikis\n");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1:
            kullanici_ekle();
            break;

        case 2:
            kullanici_bul();
            break;

        case 3:
            sirala();
            break;

        case 4:
            printf("Çıkış yapıldı.");
            ok = 0;
            break;

        default:
            printf("hatali secim yaptiniz.Lutfen tekrar deneyin.");
            break;
        }
    }
}

int kullanici_ekle()
{

    struct ogrenci x;
    dosya = fopen("test.txt", "r+");
    printf("sirasiyla 'isim', 'soyisim', 'ogrencino', 'telefon no', 'mail adresi'ni giriniz.\n");
    fprintf(dosya, "isim\t\t  soyisim\t\t  ogrenci_no\t\t  telefon_no\t\t  mail\n");
    fclose(dosya);
    dosya = fopen("test.txt", "a+");
    scanf("%s %s  %s  %s  %s", &x.isim, &x.soyisim, &x.ogrno, &x.telno, &x.mail);
    fprintf(dosya, "%s\t\t  %s\t\t\t  %s\t\t  %s\t\t %s\n", x.isim, x.soyisim, x.ogrno, x.telno, x.mail);
    fclose(dosya);
    return 0;
}

int kullanici_bul()
{
    int ok = 1;
    printf("menu2\n 1:ogrenci no'ya gore bul\n 2:telefon no'ya gore bul\n 3:mail adresine gore bul\n 4:bir ust menuye don\n");
    int secim;

    while (ok)
    {
        scanf("%d", &secim);
        switch (secim)
        {

        case 1:
            ogr_no();
            break;

        case 2:
            tel_no();
            break;

        case 3:
            mail();
            break;

        case 4:
            ok = 0;
            break;
        default:
            printf("hatali secim yaptiniz.Lutfen tekrar deneyin.");
            break;
        }
    }
}

unsigned int karsilastirma(const char *s1, const char *s2)
{
    unsigned int loc = 1;
    unsigned int a = 0;
    while (s1[a] != '\0' && s2[a] != '\0')
    {

        if (s1[a] != s2[a])
        {
            loc = 0;
            break;
        }

        a++;
    }
    return loc;
}
int ogr_no()
{
    printf("bulunacak ogrencinin ogrenci numarasini giriniz.");
    char numara[SIZE];
    struct ogrenci k;
    scanf("%s", numara);
    dosya = fopen("test.txt", "r+");
    while (!feof(dosya))
    {
        fscanf(dosya, "%s %s %s %s %s", k.isim, k.soyisim, k.ogrno, k.telno, k.mail);

        if (karsilastirma(numara, k.ogrno))
        {
            printf("%s\t %s\t %s\t %s\t %s\n", k.isim, k.soyisim, k.ogrno, k.telno, k.mail);
            break;
        }
    }
    fclose(dosya);
}

int tel_no()
{
    printf("bulunacak ogrencinin telefon numarasini giriniz.");
    char telefon[15];
    struct ogrenci m;
    scanf("%s", telefon);
    dosya = fopen("test.txt", "r+");
    while (!feof(dosya))
    {
        fscanf(dosya, "%s %s %s %s %s", m.isim, m.soyisim, m.ogrno, m.telno, m.mail);
        if (karsilastirma(telefon, m.telno))
        {
            printf("%s\t %s\t %s\t %s\t %s\n", m.isim, m.soyisim, m.ogrno, m.telno, m.mail);
            return 0;
        }
    }
    fclose(dosya);
}

int mail()
{
    printf("bulunacak ogrencinin mail adresini giriniz.");
    char mail[25];
    struct ogrenci n;
    scanf("%s", mail);
    dosya = fopen("test.txt", "r+");
    while (!feof(dosya))
    {
        fscanf(dosya, "%s %s %s %s %s", n.isim, n.soyisim, n.ogrno, n.telno, n.mail);
        if (karsilastirma(mail, n.mail))
        {
            printf("%s\t %s\t %s\t %s\t %s\n", n.isim, n.soyisim, n.ogrno, n.telno, n.mail);
            return 0;
        }
    }
    fclose(dosya);
}

int sirala()
{
    const int count = count_array();
    int select;
    int ok = 1;
    while (ok)
    {
        printf("1.numaraya gore sirala\n2.ada gore sirala\n3.bir ust menuye don");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            adSirala(&count);
            break;
        case 2:
            noSirala(&count);
            break;
        case 3:
            ok = 0;
            break;
        default:
            printf("lutfen tekrar deneyiniz");
            break;
        }
    }
}

int adSirala()
{
    int count = count_array();
    dosya = fopen("test.txt", "r+");
    struct ogrenci m[count];
    struct ogrenci n;
    int i = 0;
    int k = 0;
    int j = 0;
    fscanf(dosya, "%s %s %s %s %s", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
    while (!feof(dosya))
    {
        fscanf(dosya, "%s %s %s %s %s", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
        i++;
    }
    for (i = 0; i < count; i++)
    {

        for (j = i + 1; j < count; j++)
        {
            k = 0;

            while (m[j].ogrno[k] != '\0' && m[i].ogrno[k] != '\0')
            {

                if (m[i].ogrno[k] == m[j].ogrno[k])
                {
                    k++; // eşit ise bir sonraki harfe geç
                }

                else if (m[i].ogrno[k] > m[j].ogrno[k]) // iki kelimenin harflerini karşılaştırır char ascii değerine göre karşılaştırır.
                {
                    n = m[i];
                    m[i] = m[j];
                    m[j] = n;
                }
                else
                {
                    break;
                }
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%s\t %s\t %s\t %s\t %s\n", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
    }

    fclose(dosya);
}

int noSirala()

{
    int count = count_array();
    dosya = fopen("test.txt", "r+");
    struct ogrenci m[count];
    struct ogrenci n;
    int i = 0;
    int k = 0;
    int j = 0;
    fscanf(dosya, "%s %s %s %s %s", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
    while (!feof(dosya))
    {
        fscanf(dosya, "%s %s %s %s %s", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
        i++;
    }
    for (i = 0; i < count; i++)
    {

        for (j = i + 1; j < count; j++)
        {
            k = 0;

            while (m[j].isim[k] != '\0' && m[i].isim[k] != '\0')
            {

                if (m[i].isim[k] == m[j].isim[k])
                {
                    k++; // eşit ise bir sonraki harfe geç
                }

                else if (m[i].isim[k] > m[j].isim[k]) // iki kelimenin harflerini karşılaştırır char ascii değerine göre karşılaştırır.
                {
                    n = m[i];
                    m[i] = m[j];
                    m[j] = n;
                }
                else
                {
                    break;
                }
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%s\t %s\t %s\t %s\t %s\n", m[i].isim, m[i].soyisim, m[i].ogrno, m[i].telno, m[i].mail);
    }

    fclose(dosya);
}
int count_array()
{

    dosya = fopen("test.txt", "r+");
    struct ogrenci m;
    int count = -1;
    while (!feof(dosya))
    {
        count++;
        fscanf(dosya, "%s %s %s %s %s", m.isim, m.soyisim, m.ogrno, m.telno, m.mail);
    }
    fclose(dosya);

    return count;
}
