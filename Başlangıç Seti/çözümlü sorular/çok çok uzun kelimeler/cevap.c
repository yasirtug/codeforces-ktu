#include <stdio.h>

int main()
{
	int a, kelimeUzunlugu;
	char kelime[101];
	//kelimeyi almak için dizi

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s", kelime);

		for(kelimeUzunlugu = 0; kelime[kelimeUzunlugu] != '\0'; kelimeUzunlugu++);
		// kelime[kelimeUzunlugu], null char müddetçe kelimeUzunlugu'nu bir arttırıyoruz
		if (kelimeUzunlugu > 10)
		{
			kelimeUzunlugu -= 2;
			// ilk harf ve son harf hariç uzunluk olarak güncelledik
			if (kelimeUzunlugu > 9) // iki basamak olarak ifade etmemiz gerekiyorsa
			{
				// kısaltma için yine kelime dizisini kullanabiliriz, onun üzerine yazıyoruz.
				kelime[1] = '0' + (kelimeUzunlugu / 10);
				// ilk basamak
				kelime[2] = '0' + (kelimeUzunlugu % 10);
				// ikinci basamak
				kelime[3] = kelime[kelimeUzunlugu + 1];
				// 3. harfi uzun kelimenin son harfi yapıyoruz.
				kelime[4] = '\0';
			}
			else
			{
				// kısaltma için yine kelime dizisini kullanabiliriz, onun üzerine yazıyoruz.
				kelime[1] = '0' + kelimeUzunlugu;
				// tek basamak
				kelime[2] = kelime[kelimeUzunlugu + 1];
				// ikinci harfi uzun kelimenin ilk harfi yapıyoruz.
				kelime[3] = '\0';
			}
		}
		printf("%s\n", kelime);
	}
	return 0;
}
