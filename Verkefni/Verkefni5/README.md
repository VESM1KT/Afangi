# Verkefni 5 (20%)

- **Verkefnið er einstaklingsverkefni.** Ef tveir eða fleiri nemendur skila sömu lausnunum er gefið 0 (núll) fyrir þær lausnir.
- **Ef kóði er tekinn af netinu** (eða öðrum álíka stöðum) skal taka það fram, benda á hvaðan hann kemur og skrifa skýringar (e. comment) við hverja línu kóðans. Sé það ekki gert verður gefið 0 (núll) fyrir verkefnið í heild. Almennt er ekki gefin einkunn fyrir kóða sem nemandi skrifar ekki sjálfur.

## Markmið

Vinna með breytur, stöður, lykkjur, vinna með íhlut sem ekki hefur verið unnið með áður (birtir (e. display)), takka og mótor.

## Verkefnið

### Uppsetning

Byrjaðu að setja upp rásina sem er á [þessari mynd](segment.png) og settu svo [þennan kóða](segment.ino) inn á Arduino-inn. Þú þarft væntanlega að setja inn *SevSeg* kóðasafnið (e. library). Þú getur gert það með því að velja **Sketch -> Include Library -> Manage Libraries...** þá opnast gluggi þar sem þú slærð inn leitarorðið *SevSeg*, smellir svo á **Install**. Ef allt hefur tekist eins og á að gerast ættir þú að sjá talningu frá 0 og upp í 9 á birtinum. Ef þú villt fræðast meira um birtinn þá getur þú lesið [þessa grein](https://lastminuteengineers.com/seven-segment-arduino-tutorial/) en kóðinn hér að ofan byggir á kóða úr greininni.

### Grunnkröfur

Bættu núna við tveimur tökkum og servo mótor (bláa mótornum). Upphafsstaða mótorsins á að vera í 0° stöðunni.

Rásin og forritið eiga að virka þannig að þegar ýtt er á annan takkann fer teljari í gang sem telur frá 9 og niður í 0 (talningin á að birtast á birtinum) á ca. 5 sekúndum. Á meðan talningunni stendur á mótorinn að færast í skrefum yfir í 180° stöðuna. Þar stoppar svo mótorinn og á birtinum stendur 0. Ekkert meir gerist fyrr en ýtt er á hinn takkann. Þá endurstillist bæði mótor og teljari þ.e. mótor fer í 0° stöðuna og teljarinn sýnir 9.

### Aukakrafa

Á meðan niðurtalningunni stendur færist mótorinn stiglaust frá 0° stöðunni í 180° stöðuna, færslan á að taka álíka langan tíma (má muna ca. 1 sekúndu) og teljarinn er að telja niður. Hér skal nota `millis()` í stað `delay()`.

## Skil

Þegar búið er að setja upp rásina og forrita hana sýnir þú kennaranum þínum hana. Skilaðu svo kóðanum í skilahófið á Innu.

## Námsmat

Fyrir hvern lið er gefið heilt fyrir fullnægjandi lausn, hálft ef lausn er ábótavant, ekkert ef lausn er stórlega ábótavant eða vantar.
- (30%) Uppsetning og tengingar á rás.
- (50%) Forritun, grunnkröfur.
- (20%) Forritun, aukakrafan.


