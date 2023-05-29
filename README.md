# L293D-Servo-Motor
Servo motor control made using L293D
#Connection

1. Öncelikle L293D shield'i Arduino veya mikrodenetleyici kartınıza doğru şekilde yerleştirin. Shield, Arduino üzerindeki pimlere doğru şekilde oturmalıdır.

2. L293D shield üzerinde servo motorlar için ayrılmış pimler vardır. Genellikle SERVO1 ve SERVO2 olarak etiketlenmişlerdir. İlgili servo motoru L293D shield üzerindeki SERVOx pimine bağlayacağız.

3. Servo motorun üç kablosu vardır: sinyal (signal), güç (+) ve toprak (-). Bu kablolardan sinyal kablosunu L293D shield üzerindeki SERVOx pimine bağlamamız gerekiyor. Genellikle sinyal kablosu beyaz, kırmızı kablosu güç (+) ve siyah kablosu toprak (-) olarak renklendirilir.

4. Servo motorun güç (+) ve toprak (-) hatlarını beslemek için uygun kaynakları sağlamanız gerekmektedir. Bu kaynak genellikle Arduino veya harici bir güç kaynağı olabilir. Servo motorun güç gereksinimlerini kontrol ederek doğru gerilimi ve akımı sağladığınızdan emin olun.


#Code


1. `AFMotor.h` kütüphanesini projeye dahil ederiz, bu kütüphane L293D shield'i kontrol etmek için kullanılır. Ardından `AF_Servo` sınıfından `servo1` adında bir nesne oluştururuz.

2. `setup()` fonksiyonunda, servo motoru bağladığımız pimi belirtmek için `servo1.attach(SERVO1)` komutunu kullanırız. Burada `SERVO1` pimi, L293D shield üzerindeki servo motor pimlerinden biridir.

3. `loop()` fonksiyonunda iki adet `for` döngüsü kullanarak servo motorun hareketini kontrol ederiz.

   - İlk döngüde, `angle` değişkenini 0'dan 180'e kadar artırarak servo motoru 0 derece konumuna kadar döndürürüz. Her bir adımda `servo1.write(angle)` komutuyla servo motorun açısını güncelleriz. Ardından `delay(15)` komutuyla 15 milisaniye bekleriz. Bu döngü, servo motoru 0 derece konumuna kadar sürekli olarak döndürür.

   - İkinci döngüde, `angle` değişkenini 180'den 0'a kadar azaltarak servo motoru 180 derece konumuna kadar geri döndürürüz. Yine her adımda `servo1.write(angle)` komutuyla servo motorun açısını güncelleriz ve `delay(15)` komutuyla 15 milisaniye bekleriz. Bu döngü, servo motoru 180 derece konumuna kadar geri döndürür.

4. Her iki döngü arasında `delay(1000)` komutunu kullanarak 1 saniye bekleriz. Bu, servo motorun hareketini belirli bir hızda ve sürekli olarak tekrarlamasını sağlar.
