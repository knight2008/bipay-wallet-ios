#ifndef COINS_H
#define COINS_H

#include <cstdint>
#include <map>
#include <initializer_list>
/*
 coinType
 */
namespace bipay {
namespace coin {

const static size_t BTC = 0; //Bitcoin
const static size_t Testnet = 1; //Testnet (all coins)
const static size_t LTC = 2; //Litecoin
const static size_t DOGE = 3; //Dogecoin
const static size_t RDD = 4; //Reddcoin
const static size_t DSH = 5; //Dash (ex Darkcoin)
const static size_t PPC = 6; //Peercoin
const static size_t NMC = 7; //Namecoin
const static size_t FTC = 8; //Feathercoin
const static size_t XCP = 9; //Counterparty
const static size_t BLK = 10; //Blackcoin
const static size_t NSR = 11; //NuShares
const static size_t NBT = 12; //NuBits
const static size_t MZC = 13; //Mazacoin
const static size_t VIA = 14; //Viacoin
const static size_t XCH = 15; //ClearingHouse
const static size_t RBY = 16; //Rubycoin
const static size_t GRS = 17; //Groestlcoin
const static size_t DGC = 18; //Digitalcoin
const static size_t CCN = 19; //Cannacoin
const static size_t DGB = 20; //DigiByte
const static size_t OA = 21; //Open Assets
const static size_t MONA = 22; //Monacoin
const static size_t CLAM = 23; //Clams
const static size_t XPM = 24; //Primecoin
const static size_t NEOS = 25; //Neoscoin
const static size_t JBS = 26; //Jumbucks
const static size_t ZRC = 27; //ziftrCOIN
const static size_t VTC = 28; //Vertcoin
const static size_t NXT = 29; //NXT
const static size_t BURST = 30; //Burst
const static size_t MUE = 31; //MonetaryUnit
const static size_t ZOOM = 32; //Zoom
const static size_t VPN = 33; //Vpncoin
const static size_t CDN = 34; //Canada eCoin
const static size_t SDC = 35; //ShadowCash
const static size_t PKB = 36; //ParkByte
const static size_t PND = 37; //Pandacoin
const static size_t START = 38; //StartCOIN
const static size_t MOIN = 39; //MOIN
const static size_t EXP = 40; //Expanse
const static size_t EMC2 = 41; //Einsteinium
const static size_t DCR = 42; //Decred
const static size_t XEM = 43; //NEM
const static size_t PART = 44; //Particl
const static size_t ARG = 45; //Argentum
const static size_t Lib = 46; //Libertas
const static size_t PC = 47; //Posw coin
const static size_t SHR = 48; //Shreeji
const static size_t GCR = 49; //Global Currency Reserve (GCRcoin)
const static size_t NVC = 50; //Novacoin
const static size_t AC = 51; //Asiacoin
const static size_t BTCD = 52; //Bitcoindark
const static size_t DOPE = 53; //Dopecoin
const static size_t TPC = 54; //Templecoin
const static size_t AIB = 55; //AIB
const static size_t EDRC = 56; //EDRCoin
const static size_t SYS = 57; //Syscoin
const static size_t SLR = 58; //Solarcoin
const static size_t SMLY = 59; //Smileycoin
const static size_t ETH = 60; //Ether
const static size_t ETC = 61; //Ether Classic
const static size_t PSB = 62; //Pesobit
const static size_t LDCN = 63; //Landcoin
const static size_t OC = 64; //Open Chain
const static size_t XBC = 65; //Bitcoinplus
const static size_t IOP = 66; //Internet of People
const static size_t NXS = 67; //Nexus
const static size_t INSN = 68; //InsaneCoin
const static size_t OK = 69; //OKCash
const static size_t BRIT = 70; //BritCoin
const static size_t CMP = 71; //Compcoin
const static size_t CRW = 72; //Crown
const static size_t BELA = 73; //BelaCoin
const static size_t VASH = 74; //Virtual Cash the new version of Vpncoin
const static size_t FJC = 75; //FujiCoin
const static size_t MIX = 76; //MIX
const static size_t XVG = 77; //Verge
const static size_t EFL = 78; //Electronic Gulden
const static size_t CLUB = 79; //ClubCoin
const static size_t RICHX = 80; //RichCoin
const static size_t POT = 81; //Potcoin
const static size_t QRK = 82; //Quarkcoin
const static size_t TRC = 83; //Terracoin
const static size_t GRC = 84; //Gridcoin
const static size_t AUR = 85; //Auroracoin
const static size_t IXC = 86; //IXCoin
const static size_t NLG = 87; //Gulden
const static size_t BITB = 88; //BitBean
const static size_t BTA = 89; //Bata
const static size_t XMY = 90; //Myriadcoin
const static size_t BSD = 91; //BitSend
const static size_t UNO = 92; //Unobtanium
const static size_t MTR = 93; //MasterTrader
const static size_t GB = 94; //GoldBlocks
const static size_t SHM = 95; //Saham
const static size_t CRX = 96; //Chronos
const static size_t BIQ = 97; //Ubiquoin
const static size_t EVO = 98; //Evotion
const static size_t STO = 99; //SaveTheOcean
const static size_t BIGUP = 100; //BigUp
const static size_t GAME = 101; //GameCredits
const static size_t DLC = 102; //Dollarcoins
const static size_t ZYD = 103; //Zayedcoin
const static size_t DBIC = 104; //Dubaicoin
const static size_t STRAT = 105; //Stratis
const static size_t SH = 106; //Shilling
const static size_t MARS = 107; //MarsCoin
const static size_t UBQ = 108; //Ubiq
const static size_t PTC = 109; //Pesetacoin
const static size_t NRO = 110; //Neurocoin
const static size_t ARK = 111; //ARK
const static size_t USC = 112; //UltimateSecureCashMain
const static size_t THC = 113; //Hempcoin
const static size_t LINX = 114; //Linx
const static size_t ECN = 115; //Ecoin
const static size_t DNR = 116; //Denarius
const static size_t PINK = 117; //Pinkcoin
const static size_t PIGGY = 118; //PiggyCoin
const static size_t PIVX = 119; //Pivx
const static size_t FLASH = 120; //Flashcoin
const static size_t ZEN = 121; //Zencash
const static size_t PUT = 122; //Putincoin
const static size_t ZNY = 123; //BitZeny
const static size_t UNIFY = 124; //Unify
const static size_t XST = 125; //StealthCoin
const static size_t BRK = 126; //Breakout Coin
const static size_t VC = 127; //Vcash
const static size_t XMR = 128; //Monero
const static size_t VOX = 129; //Voxels
const static size_t NAV = 130; //NavCoin
const static size_t FCT = 131; //Factom Factoids
const static size_t EC = 132; //Factom Entry Credits
const static size_t ZEC = 133; //Zcash
const static size_t LSK = 134; //Lisk
const static size_t STEEM = 135; //Steem
const static size_t XZC = 136; //ZCoin
//const static size_t SBTC = 137; //RSK
const static size_t Gift = 138; //Giftblock
const static size_t RPT = 139; //RealPointCoin
const static size_t LBC = 140; //LBRY Credits
const static size_t KMD = 141; //Komodo
const static size_t BSQ = 142; //bisq Token
const static size_t RIC = 143; //Riecoin
const static size_t XRP = 144; //Ripple
const static size_t BCH = 145; //Bitcoin Cash
const static size_t NEBL = 146; //Neblio
const static size_t ZCL = 147; //ZClassic
const static size_t XLM = 148; //Stellar Lumens
const static size_t NLC2 = 149; //NoLimitCoin2
const static size_t WHL = 150; //WhaleCoin
const static size_t ERC = 151; //EuropeCoin
const static size_t DMD = 152; //Diamond
const static size_t BTM = 153; //Bytom
const static size_t BIO = 154; //Biocoin
const static size_t XWC = 155; //Whitecoin
const static size_t BTG = 156; //Bitcoin Gold
const static size_t BTC2X = 157; //Bitcoin 2x
const static size_t SSN = 158; //SuperSkynet
const static size_t TOA = 159; //TOACoin
const static size_t BTX = 160; //Bitcore
const static size_t ACC = 161; //Adcoin
//const static size_t BCO = 162; //Bridgecoin
const static size_t ELLA = 163; //Ellaism
const static size_t PIRL = 164; //Pirl
const static size_t XRB = 165; //RaiBlocks
const static size_t VIVO = 166; //Vivo
const static size_t FRST = 167; //Firstcoin
const static size_t HNC = 168; //Helleniccoin
const static size_t BUZZ = 169; //BUZZ
const static size_t MBRS = 170; //Ember
const static size_t HSR = 171; //Hcash
const static size_t HTML = 172; //HTMLCOIN
const static size_t ODN = 173; //Obsidian
const static size_t ONX = 174; //OnixCoin
const static size_t RVN = 175; //Ravencoin
const static size_t GBX = 176; //GoByte
const static size_t BTCZ = 177; //BitcoinZ
const static size_t POA = 178; //Poa
const static size_t NYC = 179; //NewYorkCoin
const static size_t MXT = 180; //MarteXcoin
const static size_t WC = 181; //Wincoin
const static size_t MNX = 182; //Minexcoin
const static size_t BTCP = 183; //Bitcoin Private
const static size_t MUSIC = 184; //Musicoin
const static size_t BCA = 185; //Bitcoin Atom
const static size_t CRAVE = 186; //Crave
const static size_t STAK = 187; //STRAKS
const static size_t WBTC = 188; //World Bitcoin
const static size_t LCH = 189; //LiteCash
const static size_t EXCL = 190; //ExclusiveCoin
const static size_t Lynx = 191; //Lynx
const static size_t LCC = 192; //LitecoinCash
const static size_t XFE = 193; //Feirm
const static size_t EOS = 194; //EOS
const static size_t TRX = 195; //Tron
const static size_t KOBO = 196; //Kobocoin
const static size_t HUSH = 197; //HUSH
const static size_t BANANO = 198; //Bananos
const static size_t ETF = 199; //ETF
const static size_t OMNI = 200; //Omni
const static size_t BIFI = 201; //BitcoinFile
const static size_t UFO = 202; //Uniform Fiscal Object
const static size_t CNMC = 203; //Cryptonodes
const static size_t NRG = 204; //Energi
const static size_t RIN = 205; //Ringo
const static size_t DVC = 206; //Dev
const static size_t USDT = 207; //USDT
const static size_t XNE = 208; //XNE
const static size_t BIS = 209; //Bismuth
const static size_t NEET = 210; //NEETCOIN
const static size_t BOPO = 211; //BopoChain
const static size_t BOXY = 215; //BoxyCoin
const static size_t BITG = 222; //Bitcoin Green
const static size_t ASK = 223; //AskCoin
const static size_t SMART = 224; //Smartcash
const static size_t XUEZ = 225; //XUEZ
const static size_t VAR = 233; //Varda
const static size_t NIM = 242; //Nimiq
const static size_t UC = 247; //Ulord
const static size_t Shm = 255; //SmartHoldem
const static size_t NANO = 256; //Bitcoin Nano
const static size_t ZP = 258; //Zen Protocol
const static size_t ZEST = 259; //Zest
const static size_t NUKO = 299; //Nekonium
const static size_t ARA = 312; //Aura
const static size_t RAP = 321; //Rapture
const static size_t BLOCK = 328; //Blocknet
const static size_t MEM = 333; //MemCoin
const static size_t PHR = 444; //Phore
const static size_t KOTO = 510; //Koto
const static size_t XRD = 512; //Radiant
const static size_t YAP = 528; //Yapstone
const static size_t BCS = 555; //Bitcoin Smart
const static size_t EAST = 625; //Eastcoin
const static size_t ACT = 666; //Achain
const static size_t SSC = 668; //SelfSell
const static size_t BTW = 777; //Bitcoin World
const static size_t BEET = 800; //Beetle Coin
const static size_t QVT = 808; //Qvolta
const static size_t VET = 818; //VeChain Token
const static size_t CLO = 820; //Callisto
const static size_t ADF = 886; //AD Token
const static size_t NEO = 888; //NEO
const static size_t LBTC = 998; //Lightning Bitcoin
const static size_t BCD = 999; //Bitcoin Diamond
const static size_t BTN = 1000; //Bitcoin New
const static size_t BBC = 1111; //Big Bitcoin
const static size_t ETSC = 1128; //Ethereum Social
const static size_t CDY = 1145; //Bitcoin Candy
const static size_t DFC = 1337; //Defcoin
const static size_t Taler = 1524; //Taler
const static size_t BCX = 1688; //BitcoinX
const static size_t XTZ = 1729; //Tezos
const static size_t ADA = 1815; //Cardano
const static size_t VIPS = 1919; //VIPSTARCOIN
const static size_t XMX = 1977; //Xuma
const static size_t EGEM = 1987; //EtherGem
const static size_t HODL = 1989; //HOdlcoin
const static size_t POLIS = 1997; //Polis
const static size_t QTUM = 2301; //QTUM
const static size_t ETP = 2302; //Metaverse
const static size_t DEO = 3552; //Destocoin
const static size_t NAS = 2718; //Nebulas
const static size_t AXE = 4242; //Axe
const static size_t BPA = 6666; //Bitcoin Pizza
const static size_t SAFE = 6688; //SAFE
const static size_t BTV = 7777; //Bitvote
const static size_t BTQ = 8339; //BitcoinQuark
const static size_t SBTC = 8888; //Super Bitcoin
const static size_t BTP = 8999; //Bitcoin Pay
const static size_t BTF = 9888; //Bitcoin Faith
const static size_t ESN = 31102; //EtherSocial Network
const static size_t BTCS = 33878; //Bitcoin Stake
const static size_t RSK = 37310; //RSK Testnet
const static size_t ORT = 88888; //Orientum
const static size_t WICC = 99999; //Waykichain
const static size_t LAX = 1712144; //LAPO
const static size_t BCO = 5249353; //BitcoinOre
const static size_t WAN = 5718350; //Wanchain
const static size_t WAVES = 5741564; //Waves
const static size_t kUSD = 91927009; //kUSD

}
}

/*
 币种私钥前缀和地址前缀
 
 | 币种  |  私钥前缀 | 地址前缀 |
 |  ----| -----  | ------ |
 |BTC   |   128    |   0     |
 |BCH   |   128    |   0     |
 |ETH   |   -1     |   -1    |
 |DVC   |   176    |   30    |
 |DASH  |   204    |   76    |
 |DOGE  |   176    |   30    |
 |LTC   |   176    |   48    |
 |QTUM  |   128    |   58    |
 |USDT  |   128    |   0     |
 |XNE   |   176    |   75    |
 |ZEC   |   128    |   35    |
 |GCA   |   176    |   38    |
 |GCB   |   176    |   25    |
 |GCC   |   176    |   26    |
 |STO   |   176    |   63    |
 |ETC   |   -1     |   -1    |
 */
#endif // ! COINS_H

