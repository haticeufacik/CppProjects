Programda birinci nesnesi global olarak tanımlanmaktadır. Bu yüzden mainden önce yaratılır ve program sonlandırılmadan hemen önce yıkılır.
İkinci ve dorduncu nesneleri yerel otomatik olarak mainde bildirilmiştir. Yapıcı fonksiyonları mainde tanımlandıkları noktada çağrılır. Yıkıcıları ise main fonksiyonunun sonuna gelindiğinde çağrılır.
ucuncu nesnesi mainde static olarak bildirilmiştir. Program sonlanana kadar varlığını sürdürür ve global nesneden önce yıkılır.
Yarat fonksiyonu 3 yerel otomatik nesne oluşturur(567). Yıkıcı fonksiyonları yaratıldığı fonksiyon sona ermeden önce çağrılır. 7 6 5 sırası ile yıkılır.

