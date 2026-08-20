# chargeCash

`_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE`

`nexon::cash::NCashImpl::chargeCash(char*, unsigned char, unsigned char, int, char*, char*, char*, char*, int, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ade34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ade34  _ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE
#           nexon::cash::NCashImpl::chargeCash(char*, unsigned char, unsigned char, int, char*, char*, char*, char*, int, nexon::cash::NXTransaction&)
# range [0x081ade34, 0x081ae1af]
081ade34 +0x000:  push   %ebp
081ade35 +0x001:  mov    %esp,%ebp
081ade37 +0x003:  push   %ebx
081ade38 +0x004:  sub    $0xc4,%esp
081ade3e +0x00a:  mov    0x10(%ebp),%edx
081ade41 +0x00d:  mov    0x14(%ebp),%eax
081ade44 +0x010:  mov    %dl,-0x8c(%ebp)
081ade4a +0x016:  mov    %al,-0x90(%ebp)
081ade50 +0x01c:  lea    -0x4c(%ebp),%eax
081ade53 +0x01f:  movl   $0x1,0xc(%esp)
081ade5b +0x027:  movl   $0x2,0x8(%esp)
081ade63 +0x02f:  mov    0x8(%ebp),%edx
081ade66 +0x032:  mov    %edx,0x4(%esp)
081ade6a +0x036:  mov    %eax,(%esp)
081ade6d +0x039:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081ade72 +0x03e:  sub    $0x4,%esp
081ade75 +0x041:  movl   $0xe8c3f80b,-0x2c(%ebp)
081ade7c +0x048:  movl   $0xf3d8266f,-0x28(%ebp)
081ade83 +0x04f:  movl   $0x0,-0x24(%ebp)
081ade8a +0x056:  movl   $0x3e8,0x8(%esp)
081ade92 +0x05e:  movl   $0x0,0x4(%esp)
081ade9a +0x066:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE4data,(%esp)
081adea1 +0x06d:  call   0807dcc0 <_init+0x5b8>
081adea6 +0x072:  movl   $0xfa0,0x8(%esp)
081adeae +0x07a:  movl   $0x0,0x4(%esp)
081adeb6 +0x082:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9wide_data,(%esp)
081adebd +0x089:  call   0807dcc0 <_init+0x5b8>
081adec2 +0x08e:  movl   $0xfa0,0x8(%esp)
081adeca +0x096:  movl   $0x0,0x4(%esp)
081aded2 +0x09e:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE8enc_data,(%esp)
081aded9 +0x0a5:  call   0807dcc0 <_init+0x5b8>
081adede +0x0aa:  movl   $0x3e8,0x8(%esp)
081adee6 +0x0b2:  movl   $0x0,0x4(%esp)
081adeee +0x0ba:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9send_data,(%esp)
081adef5 +0x0c1:  call   0807dcc0 <_init+0x5b8>
081adefa +0x0c6:  movl   $0x257c7325,-0x67(%ebp)
081adf01 +0x0cd:  movl   $0x69257c69,-0x63(%ebp)
081adf08 +0x0d4:  movl   $0x7c69257c,-0x5f(%ebp)
081adf0f +0x0db:  movl   $0x257c7325,-0x5b(%ebp)
081adf16 +0x0e2:  movl   $0x73257c73,-0x57(%ebp)
081adf1d +0x0e9:  movl   $0x7c73257c,-0x53(%ebp)
081adf24 +0x0f0:  movw   $0x6925,-0x4f(%ebp)
081adf2a +0x0f6:  movb   $0x0,-0x4d(%ebp)
081adf2e +0x0fa:  movzbl -0x90(%ebp),%edx
081adf35 +0x101:  movzbl -0x8c(%ebp),%eax
081adf3c +0x108:  mov    0x2c(%ebp),%ecx
081adf3f +0x10b:  mov    %ecx,0x2c(%esp)
081adf43 +0x10f:  mov    0x28(%ebp),%ecx
081adf46 +0x112:  mov    %ecx,0x28(%esp)
081adf4a +0x116:  mov    0x24(%ebp),%ecx
081adf4d +0x119:  mov    %ecx,0x24(%esp)
081adf51 +0x11d:  mov    0x20(%ebp),%ecx
081adf54 +0x120:  mov    %ecx,0x20(%esp)
081adf58 +0x124:  mov    0x1c(%ebp),%ecx
081adf5b +0x127:  mov    %ecx,0x1c(%esp)
081adf5f +0x12b:  mov    0x18(%ebp),%ecx
081adf62 +0x12e:  mov    %ecx,0x18(%esp)
081adf66 +0x132:  mov    %edx,0x14(%esp)
081adf6a +0x136:  mov    %eax,0x10(%esp)
081adf6e +0x13a:  mov    0xc(%ebp),%eax
081adf71 +0x13d:  mov    %eax,0xc(%esp)
081adf75 +0x141:  lea    -0x67(%ebp),%eax
081adf78 +0x144:  mov    %eax,0x8(%esp)
081adf7c +0x148:  movl   $0x3e8,0x4(%esp)
081adf84 +0x150:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE4data,(%esp)
081adf8b +0x157:  call   0807dbe0 <_init+0x4d8>
081adf90 +0x15c:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE4data,(%esp)
081adf97 +0x163:  call   0807e3b0 <_init+0xca8>
081adf9c +0x168:  add    $0x1,%eax
081adf9f +0x16b:  mov    %eax,-0x1c(%ebp)
081adfa2 +0x16e:  mov    -0x1c(%ebp),%eax
081adfa5 +0x171:  mov    %eax,0x8(%esp)
081adfa9 +0x175:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE4data,0x4(%esp)
081adfb1 +0x17d:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9wide_data,(%esp)
081adfb8 +0x184:  call   0807dae0 <_init+0x3d8>
081adfbd +0x189:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9wide_data,(%esp)
081adfc4 +0x190:  call   0807e130 <_init+0xa28>
081adfc9 +0x195:  lea    (%eax,%eax,1),%edx
081adfcc +0x198:  mov    $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9wide_data,%eax
081adfd1 +0x19d:  mov    %edx,0x4(%esp)
081adfd5 +0x1a1:  mov    %eax,(%esp)
081adfd8 +0x1a4:  call   0807e190 <_init+0xa88>
081adfdd +0x1a9:  mov    $0x0,%edx
081adfe2 +0x1ae:  mov    %eax,-0x18(%ebp)
081adfe5 +0x1b1:  mov    %edx,-0x14(%ebp)
081adfe8 +0x1b4:  movl   $0x1b1bde64,0x8(%esp)
081adff0 +0x1bc:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE8enc_data,0x4(%esp)
081adff8 +0x1c4:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9wide_data,(%esp)
081adfff +0x1cb:  call   0807e8e0 <_init+0x11d8>
081ae004 +0x1d0:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE8enc_data,(%esp)
081ae00b +0x1d7:  call   0807e130 <_init+0xa28>
081ae010 +0x1dc:  add    $0x1,%eax
081ae013 +0x1df:  add    %eax,%eax
081ae015 +0x1e1:  mov    %eax,-0x10(%ebp)
081ae018 +0x1e4:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE8enc_data,(%esp)
081ae01f +0x1eb:  call   0807e130 <_init+0xa28>
081ae024 +0x1f0:  mov    %eax,0x8(%esp)
081ae028 +0x1f4:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE8enc_data,0x4(%esp)
081ae030 +0x1fc:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9send_data,(%esp)
081ae037 +0x203:  call   0807d8c0 <_init+0x1b8>
081ae03c +0x208:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE9send_data,0x4(%esp)
081ae044 +0x210:  lea    -0x4c(%ebp),%eax
081ae047 +0x213:  mov    %eax,(%esp)
081ae04a +0x216:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ae04f +0x21b:  mov    -0x28(%ebp),%eax
081ae052 +0x21e:  mov    -0x24(%ebp),%edx
081ae055 +0x221:  mov    %eax,0x4(%esp)
081ae059 +0x225:  mov    %edx,0x8(%esp)
081ae05d +0x229:  lea    -0x4c(%ebp),%eax
081ae060 +0x22c:  mov    %eax,(%esp)
081ae063 +0x22f:  call   081ae7d4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x2c3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x2c3
081ae068 +0x234:  mov    -0x18(%ebp),%eax
081ae06b +0x237:  mov    -0x14(%ebp),%edx
081ae06e +0x23a:  mov    %eax,0x4(%esp)
081ae072 +0x23e:  mov    %edx,0x8(%esp)
081ae076 +0x242:  lea    -0x4c(%ebp),%eax
081ae079 +0x245:  mov    %eax,(%esp)
081ae07c +0x248:  call   081ae7d4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x2c3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x2c3
081ae081 +0x24d:  movl   $0x0,-0xc(%ebp)
081ae088 +0x254:  lea    -0x4c(%ebp),%eax
081ae08b +0x257:  mov    %eax,(%esp)
081ae08e +0x25a:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae093 +0x25f:  mov    %eax,0x4(%esp)
081ae097 +0x263:  mov    0x8(%ebp),%eax
081ae09a +0x266:  mov    %eax,(%esp)
081ae09d +0x269:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081ae0a2 +0x26e:  mov    %eax,-0xc(%ebp)
081ae0a5 +0x271:  cmpl   $0x0,-0xc(%ebp)
081ae0a9 +0x275:  je     081ae0b3 <+0x27f>
081ae0ab +0x277:  mov    -0xc(%ebp),%eax
081ae0ae +0x27a:  jmp    081ae1aa <+0x376>
081ae0b3 +0x27f:  mov    0x8(%ebp),%eax
081ae0b6 +0x282:  mov    %eax,(%esp)
081ae0b9 +0x285:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081ae0be +0x28a:  mov    %eax,-0xc(%ebp)
081ae0c1 +0x28d:  cmpl   $0x0,-0xc(%ebp)
081ae0c5 +0x291:  je     081ae0cf <+0x29b>
081ae0c7 +0x293:  mov    -0xc(%ebp),%eax
081ae0ca +0x296:  jmp    081ae1aa <+0x376>
081ae0cf +0x29b:  lea    -0x80(%ebp),%eax
081ae0d2 +0x29e:  lea    -0x70(%ebp),%edx
081ae0d5 +0x2a1:  mov    %edx,0x10(%esp)
081ae0d9 +0x2a5:  lea    -0x69(%ebp),%edx
081ae0dc +0x2a8:  mov    %edx,0xc(%esp)
081ae0e0 +0x2ac:  lea    -0x68(%ebp),%edx
081ae0e3 +0x2af:  mov    %edx,0x8(%esp)
081ae0e7 +0x2b3:  mov    0x8(%ebp),%edx
081ae0ea +0x2b6:  mov    %edx,0x4(%esp)
081ae0ee +0x2ba:  mov    %eax,(%esp)
081ae0f1 +0x2bd:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081ae0f6 +0x2c2:  sub    $0x4,%esp
081ae0f9 +0x2c5:  movzbl -0x69(%ebp),%eax
081ae0fd +0x2c9:  cmp    $0x2,%al
081ae0ff +0x2cb:  je     081ae153 <+0x31f>
081ae101 +0x2cd:  movzbl -0x69(%ebp),%eax
081ae105 +0x2d1:  movzbl %al,%ebx
081ae108 +0x2d4:  movl   $0x0,0xc(%esp)
081ae110 +0x2dc:  movl   $0x303,0x8(%esp)
081ae118 +0x2e4:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE12__FUNCTION__,0x4(%esp)
081ae120 +0x2ec:  lea    -0x3c(%ebp),%eax
081ae123 +0x2ef:  mov    %eax,(%esp)
081ae126 +0x2f2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ae12b +0x2f7:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE4data,0xc(%esp)
081ae133 +0x2ff:  mov    %ebx,0x8(%esp)
081ae137 +0x303:  movl   $"NCashImpl::chargeCash Recv Error!! packet_id:%d, data:%s",0x4(%esp)
081ae13f +0x30b:  lea    -0x3c(%ebp),%eax
081ae142 +0x30e:  mov    %eax,(%esp)
081ae145 +0x311:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ae14a +0x316:  movzbl -0x69(%ebp),%eax
081ae14e +0x31a:  movzbl %al,%eax
081ae151 +0x31d:  jmp    081ae1aa <+0x376>
081ae153 +0x31f:  mov    0x30(%ebp),%eax
081ae156 +0x322:  mov    %eax,0x4(%esp)
081ae15a +0x326:  lea    -0x80(%ebp),%eax
081ae15d +0x329:  mov    %eax,(%esp)
081ae160 +0x32c:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ae165 +0x331:  mov    0x30(%ebp),%eax
081ae168 +0x334:  add    $0x4,%eax
081ae16b +0x337:  mov    %eax,0x4(%esp)
081ae16f +0x33b:  lea    -0x80(%ebp),%eax
081ae172 +0x33e:  mov    %eax,(%esp)
081ae175 +0x341:  call   081ae94e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x43d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x43d
081ae17a +0x346:  mov    0x30(%ebp),%eax
081ae17d +0x349:  mov    0x4(%eax),%edx
081ae180 +0x34c:  mov    0x30(%ebp),%eax
081ae183 +0x34f:  movzbl (%eax),%eax
081ae186 +0x352:  movzbl %al,%eax
081ae189 +0x355:  mov    %edx,0xc(%esp)
081ae18d +0x359:  mov    %eax,0x8(%esp)
081ae191 +0x35d:  movl   $&_ZZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionEE12__FUNCTION__,0x4(%esp)
081ae199 +0x365:  movl   $"[%s] CHARGE_CASH OK, db_id: %u, transaction_id: %u\n",(%esp)
081ae1a0 +0x36c:  call   0807db60 <_init+0x458>
081ae1a5 +0x371:  mov    $0x0,%eax
081ae1aa +0x376:  mov    -0x4(%ebp),%ebx
081ae1ad +0x379:  leave
081ae1ae +0x37a:  ret
081ae1af +0x37b:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::chargeCash @ 0x81ade34

/* nexon::cash::NCashImpl::chargeCash(char*, unsigned char, unsigned char, int, char*, char*, char*,
   char*, int, nexon::cash::NXTransaction&) */

uint __thiscall
nexon::cash::NCashImpl::chargeCash
          (NCashImpl *this,char *param_1,uchar param_2,uchar param_3,int param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int param_9,NXTransaction *param_10)

{
  size_t sVar1;
  uint uVar2;
  undefined1 *puVar3;
  ByteBuffer local_84 [16];
  undefined1 local_74 [7];
  byte local_6d;
  undefined1 local_6c [5];
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ByteBuffer local_50 [16];
  cMyTrace local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  size_t local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  set_data_header((uchar)local_50,(uchar)this);
  local_30 = 0xe8c3f80b;
  local_2c = 0xf3d8266f;
  local_28 = 0;
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::data,0,1000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::wide_data,0,4000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::enc_data,0,4000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::send_data,0,1000);
  local_6c._1_4_ = 0x257c7325;
  local_67 = 0x69257c69;
  local_63 = 0x7c69257c;
  local_5f = 0x257c7325;
  local_5b = 0x73257c73;
  local_57 = 0x7c73257c;
  local_53 = 0x6925;
  local_51 = 0;
  snprintf(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::data,1000,local_6c + 1,param_1,(uint)param_2,(uint)param_3,param_4,param_5,param_6,
           param_7,param_8,param_9);
  local_20 = strlen(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                    ::data);
  local_20 = local_20 + 1;
  mbstowcs((wchar_t *)
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::wide_data,
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::data,local_20);
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::wide_data);
  local_1c = Encryption::Adler32(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                                 ::wide_data,sVar1 * 2);
  local_18 = 0;
  Encryption::EncodeDressStringWide
            ((wchar_t *)
             chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
             ::wide_data,
             (wchar_t *)
             chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
             ::enc_data,0x1b1bde64);
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::enc_data);
  local_14 = (sVar1 + 1) * 2;
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::enc_data);
  wcstombs(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::send_data,
           (wchar_t *)
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::enc_data,sVar1);
  ByteBuffer::operator<<
            (local_50,chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                      ::send_data);
  ByteBuffer::operator<<(local_50,CONCAT44(local_28,local_2c));
  ByteBuffer::operator<<(local_50,CONCAT44(local_18,local_1c));
  local_10 = 0;
  uVar2 = ByteBuffer::length(local_50);
  local_10 = send_msg(this,uVar2);
  if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
    puVar3 = local_74;
    get_data_header((uchar *)local_84,(uchar *)this,(uint *)local_6c);
    if (local_6d == 2) {
      ByteBuffer::operator>>(local_84,(uchar *)param_10);
      ByteBuffer::operator>>(local_84,(uint *)(param_10 + 4));
      printf("[%s] CHARGE_CASH OK, db_id: %u, transaction_id: %u\n","chargeCash",
             (uint)(byte)*param_10,*(undefined4 *)(param_10 + 4),puVar3);
      local_10 = 0;
    }
    else {
      uVar2 = (uint)local_6d;
      cMyTrace::cMyTrace(local_40,"chargeCash",0x303,0);
      cMyTrace::operator()
                (local_40,"NCashImpl::chargeCash Recv Error!! packet_id:%d, data:%s",uVar2,
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::data);
      local_10 = (uint)local_6d;
    }
  }
  return local_10;
}
```
