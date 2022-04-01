# Verkefni 4 (20%)

- **Verkefnið er einstaklingsverkefni.** Ef tveir eða fleiri nemendur skila sömu lausnunum er gefið 0 (núll) fyrir þær lausnir.
- **Ef kóði er tekinn af netinu** (eða öðrum álíka stöðum) skal taka það fram, benda á hvaðan hann kemur og skrifa skýringar (e. comment) við hverja línu kóðans. Sé það ekki gert verður gefið 0 (núll) fyrir verkefnið í heild. Almennt er ekki gefin einkunn fyrir kóða sem nemandi skrifar ekki sjálfur.

## Markmið

Vinna með breytur, stöður, if setningar, stafrænan og hliðrænan lestur og skrif í Arduino ásamt rafrásum.

## Verkefnið

![rásarmynd](./ezgif.com-gif-maker-2.gif)

Verkefnið gengur út á að setja upp og forrita sambærilega rás og í myndinni hér að ofan.

Það eru fjórar LED perur sem eru settar upp í tígul. Þessum perum verður stjórnað frá Arduino með stýripinnanum. Auk þess er ein LED pera í viðbót sem segir til um hvaða ham (e. mode) rásin er í. Í öðrum hamnum sem rásin getur verið í virkar stýripinninn þannig að þegar ýtt er upp/niður/hægri/vinstri þá kviknar á samsvarandi peru í rásinni, ef ekki er ýtt í neina átt er slökkt á öllum perunum. Í hinum hamnum (_fade mode_) virkar stýripinninn þannig að þegar ekki er ýtt í neina átt loga allar perurnar á hálfum styrk en þegar ýtt er upp eykst birtan á up/niður perunum en þegar ýtt er niður minnkar birtan á upp/niður perunum. Sambærilegt gerist svo þegar ýtt er hægri/vinstri. Til að skipta á milli hama er ýtt á skottakkann á stýripinnanum (muna að gera ráðstafanir vegna _debounce_ fyrir takkann). Muna að setja viðeigandi viðnám með LED perunum.

Bættu svo einhverju sniðugu við verkefnið.

## Skil

Þegar búið er að setja upp rásina og forrita hana sýnir þú kennaranum þínum hana. Skilaðu svo kóðanum í skilahófið á Innu.

## Námsmat

Fyrir hvern lið er gefið heilt fyrir fullnægjandi lausn, hálft ef lausn er ábótavant, ekkert ef lausn er stórlega ábótavant eða vantar.
- (30%) Uppsetning og tengingar á rás.
- (50%) Forritun.
- (20%) Viðbót frá nemanda.