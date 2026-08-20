# tokenize

`_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b`

`WideString::tokenize(WideString const&, std::vector<WideString, std::allocator<WideString> >*, wchar_t const*, wchar_t const*, bool)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adbd56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adbd56  _ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b
#           WideString::tokenize(WideString const&, std::vector<WideString, std::allocator<WideString> >*, wchar_t const*, wchar_t const*, bool)
# range [0x08adbd56, 0x08adc0af]
08adbd56 +0x000:  push   %ebp
08adbd57 +0x001:  mov    %esp,%ebp
08adbd59 +0x003:  push   %esi
08adbd5a +0x004:  push   %ebx
08adbd5b +0x005:  sub    $0x60,%esp
08adbd5e +0x008:  mov    0x18(%ebp),%eax
08adbd61 +0x00b:  mov    %al,-0x4c(%ebp)
08adbd64 +0x00e:  mov    0x8(%ebp),%eax
08adbd67 +0x011:  mov    %eax,(%esp)
08adbd6a +0x014:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adbd6f +0x019:  mov    %eax,-0x30(%ebp)
08adbd72 +0x01c:  mov    0x8(%ebp),%eax
08adbd75 +0x01f:  mov    %eax,(%esp)
08adbd78 +0x022:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adbd7d +0x027:  mov    %eax,-0x2c(%ebp)
08adbd80 +0x02a:  movl   $0x0,-0x28(%ebp)
08adbd87 +0x031:  movl   $0x0,-0x24(%ebp)
08adbd8e +0x038:  movl   $0x0,-0x20(%ebp)
08adbd95 +0x03f:  jmp    08adc023 <+0x2cd>
08adbd9a +0x044:  mov    -0x20(%ebp),%eax
08adbd9d +0x047:  shl    $0x2,%eax
08adbda0 +0x04a:  add    -0x30(%ebp),%eax
08adbda3 +0x04d:  mov    (%eax),%eax
08adbda5 +0x04f:  mov    %eax,-0x1c(%ebp)
08adbda8 +0x052:  mov    0x10(%ebp),%eax
08adbdab +0x055:  mov    %eax,-0x18(%ebp)
08adbdae +0x058:  jmp    08adbdb4 <+0x5e>
08adbdb0 +0x05a:  addl   $0x4,-0x18(%ebp)
08adbdb4 +0x05e:  mov    -0x18(%ebp),%eax
08adbdb7 +0x061:  mov    (%eax),%eax
08adbdb9 +0x063:  test   %eax,%eax
08adbdbb +0x065:  je     08adbdce <+0x78>
08adbdbd +0x067:  mov    -0x18(%ebp),%eax
08adbdc0 +0x06a:  mov    (%eax),%eax
08adbdc2 +0x06c:  cmp    -0x1c(%ebp),%eax
08adbdc5 +0x06f:  je     08adbdce <+0x78>
08adbdc7 +0x071:  mov    $0x1,%eax
08adbdcc +0x076:  jmp    08adbdd3 <+0x7d>
08adbdce +0x078:  mov    $0x0,%eax
08adbdd3 +0x07d:  test   %al,%al
08adbdd5 +0x07f:  jne    08adbdb0 <+0x5a>
08adbdd7 +0x081:  mov    -0x18(%ebp),%eax
08adbdda +0x084:  mov    (%eax),%eax
08adbddc +0x086:  test   %eax,%eax
08adbdde +0x088:  je     08adbebd <+0x167>
08adbde4 +0x08e:  mov    -0x28(%ebp),%eax
08adbde7 +0x091:  mov    -0x20(%ebp),%edx
08adbdea +0x094:  mov    %edx,%ecx
08adbdec +0x096:  sub    %eax,%ecx
08adbdee +0x098:  mov    %ecx,%eax
08adbdf0 +0x09a:  mov    %eax,-0x10(%ebp)
08adbdf3 +0x09d:  cmpl   $0x0,-0x10(%ebp)
08adbdf7 +0x0a1:  jne    08adbe4e <+0xf8>
08adbdf9 +0x0a3:  cmpb   $0x0,-0x4c(%ebp)
08adbdfd +0x0a7:  je     08adbeaf <+0x159>
08adbe03 +0x0ad:  lea    -0x48(%ebp),%eax
08adbe06 +0x0b0:  mov    %eax,(%esp)
08adbe09 +0x0b3:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adbe0e +0x0b8:  lea    -0x48(%ebp),%eax
08adbe11 +0x0bb:  mov    %eax,0x4(%esp)
08adbe15 +0x0bf:  mov    0xc(%ebp),%eax
08adbe18 +0x0c2:  mov    %eax,(%esp)
08adbe1b +0x0c5:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adbe20 +0x0ca:  jmp    08adbe3d <+0xe7>
08adbe22 +0x0cc:  mov    %edx,%ebx
08adbe24 +0x0ce:  mov    %eax,%esi
08adbe26 +0x0d0:  lea    -0x48(%ebp),%eax
08adbe29 +0x0d3:  mov    %eax,(%esp)
08adbe2c +0x0d6:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbe31 +0x0db:  mov    %esi,%eax
08adbe33 +0x0dd:  mov    %ebx,%edx
08adbe35 +0x0df:  mov    %eax,(%esp)
08adbe38 +0x0e2:  call   08ae3750 <_Unwind_Resume>
08adbe3d +0x0e7:  lea    -0x48(%ebp),%eax
08adbe40 +0x0ea:  mov    %eax,(%esp)
08adbe43 +0x0ed:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbe48 +0x0f2:  addl   $0x1,-0x24(%ebp)
08adbe4c +0x0f6:  jmp    08adbeaf <+0x159>
08adbe4e +0x0f8:  lea    -0x44(%ebp),%eax
08adbe51 +0x0fb:  mov    -0x10(%ebp),%edx
08adbe54 +0x0fe:  mov    %edx,0xc(%esp)
08adbe58 +0x102:  mov    -0x28(%ebp),%edx
08adbe5b +0x105:  mov    %edx,0x8(%esp)
08adbe5f +0x109:  mov    0x8(%ebp),%edx
08adbe62 +0x10c:  mov    %edx,0x4(%esp)
08adbe66 +0x110:  mov    %eax,(%esp)
08adbe69 +0x113:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adbe6e +0x118:  sub    $0x4,%esp
08adbe71 +0x11b:  lea    -0x44(%ebp),%eax
08adbe74 +0x11e:  mov    %eax,0x4(%esp)
08adbe78 +0x122:  mov    0xc(%ebp),%eax
08adbe7b +0x125:  mov    %eax,(%esp)
08adbe7e +0x128:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adbe83 +0x12d:  jmp    08adbea0 <+0x14a>
08adbe85 +0x12f:  mov    %edx,%ebx
08adbe87 +0x131:  mov    %eax,%esi
08adbe89 +0x133:  lea    -0x44(%ebp),%eax
08adbe8c +0x136:  mov    %eax,(%esp)
08adbe8f +0x139:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbe94 +0x13e:  mov    %esi,%eax
08adbe96 +0x140:  mov    %ebx,%edx
08adbe98 +0x142:  mov    %eax,(%esp)
08adbe9b +0x145:  call   08ae3750 <_Unwind_Resume>
08adbea0 +0x14a:  lea    -0x44(%ebp),%eax
08adbea3 +0x14d:  mov    %eax,(%esp)
08adbea6 +0x150:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbeab +0x155:  addl   $0x1,-0x24(%ebp)
08adbeaf +0x159:  mov    -0x20(%ebp),%eax
08adbeb2 +0x15c:  add    $0x1,%eax
08adbeb5 +0x15f:  mov    %eax,-0x28(%ebp)
08adbeb8 +0x162:  jmp    08adc01f <+0x2c9>
08adbebd +0x167:  mov    0x14(%ebp),%eax
08adbec0 +0x16a:  mov    %eax,-0x14(%ebp)
08adbec3 +0x16d:  jmp    08adbec9 <+0x173>
08adbec5 +0x16f:  addl   $0x4,-0x14(%ebp)
08adbec9 +0x173:  mov    -0x14(%ebp),%eax
08adbecc +0x176:  mov    (%eax),%eax
08adbece +0x178:  test   %eax,%eax
08adbed0 +0x17a:  je     08adbee3 <+0x18d>
08adbed2 +0x17c:  mov    -0x14(%ebp),%eax
08adbed5 +0x17f:  mov    (%eax),%eax
08adbed7 +0x181:  cmp    -0x1c(%ebp),%eax
08adbeda +0x184:  je     08adbee3 <+0x18d>
08adbedc +0x186:  mov    $0x1,%eax
08adbee1 +0x18b:  jmp    08adbee8 <+0x192>
08adbee3 +0x18d:  mov    $0x0,%eax
08adbee8 +0x192:  test   %al,%al
08adbeea +0x194:  jne    08adbec5 <+0x16f>
08adbeec +0x196:  mov    -0x14(%ebp),%eax
08adbeef +0x199:  mov    (%eax),%eax
08adbef1 +0x19b:  test   %eax,%eax
08adbef3 +0x19d:  je     08adc01f <+0x2c9>
08adbef9 +0x1a3:  mov    -0x28(%ebp),%eax
08adbefc +0x1a6:  mov    -0x20(%ebp),%edx
08adbeff +0x1a9:  mov    %edx,%ecx
08adbf01 +0x1ab:  sub    %eax,%ecx
08adbf03 +0x1ad:  mov    %ecx,%eax
08adbf05 +0x1af:  mov    %eax,-0xc(%ebp)
08adbf08 +0x1b2:  cmpl   $0x0,-0xc(%ebp)
08adbf0c +0x1b6:  jne    08adbf63 <+0x20d>
08adbf0e +0x1b8:  cmpb   $0x0,-0x4c(%ebp)
08adbf12 +0x1bc:  je     08adbfc4 <+0x26e>
08adbf18 +0x1c2:  lea    -0x40(%ebp),%eax
08adbf1b +0x1c5:  mov    %eax,(%esp)
08adbf1e +0x1c8:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adbf23 +0x1cd:  lea    -0x40(%ebp),%eax
08adbf26 +0x1d0:  mov    %eax,0x4(%esp)
08adbf2a +0x1d4:  mov    0xc(%ebp),%eax
08adbf2d +0x1d7:  mov    %eax,(%esp)
08adbf30 +0x1da:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adbf35 +0x1df:  jmp    08adbf52 <+0x1fc>
08adbf37 +0x1e1:  mov    %edx,%ebx
08adbf39 +0x1e3:  mov    %eax,%esi
08adbf3b +0x1e5:  lea    -0x40(%ebp),%eax
08adbf3e +0x1e8:  mov    %eax,(%esp)
08adbf41 +0x1eb:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbf46 +0x1f0:  mov    %esi,%eax
08adbf48 +0x1f2:  mov    %ebx,%edx
08adbf4a +0x1f4:  mov    %eax,(%esp)
08adbf4d +0x1f7:  call   08ae3750 <_Unwind_Resume>
08adbf52 +0x1fc:  lea    -0x40(%ebp),%eax
08adbf55 +0x1ff:  mov    %eax,(%esp)
08adbf58 +0x202:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbf5d +0x207:  addl   $0x1,-0x24(%ebp)
08adbf61 +0x20b:  jmp    08adbfc4 <+0x26e>
08adbf63 +0x20d:  lea    -0x3c(%ebp),%eax
08adbf66 +0x210:  mov    -0xc(%ebp),%edx
08adbf69 +0x213:  mov    %edx,0xc(%esp)
08adbf6d +0x217:  mov    -0x28(%ebp),%edx
08adbf70 +0x21a:  mov    %edx,0x8(%esp)
08adbf74 +0x21e:  mov    0x8(%ebp),%edx
08adbf77 +0x221:  mov    %edx,0x4(%esp)
08adbf7b +0x225:  mov    %eax,(%esp)
08adbf7e +0x228:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adbf83 +0x22d:  sub    $0x4,%esp
08adbf86 +0x230:  lea    -0x3c(%ebp),%eax
08adbf89 +0x233:  mov    %eax,0x4(%esp)
08adbf8d +0x237:  mov    0xc(%ebp),%eax
08adbf90 +0x23a:  mov    %eax,(%esp)
08adbf93 +0x23d:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adbf98 +0x242:  jmp    08adbfb5 <+0x25f>
08adbf9a +0x244:  mov    %edx,%ebx
08adbf9c +0x246:  mov    %eax,%esi
08adbf9e +0x248:  lea    -0x3c(%ebp),%eax
08adbfa1 +0x24b:  mov    %eax,(%esp)
08adbfa4 +0x24e:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbfa9 +0x253:  mov    %esi,%eax
08adbfab +0x255:  mov    %ebx,%edx
08adbfad +0x257:  mov    %eax,(%esp)
08adbfb0 +0x25a:  call   08ae3750 <_Unwind_Resume>
08adbfb5 +0x25f:  lea    -0x3c(%ebp),%eax
08adbfb8 +0x262:  mov    %eax,(%esp)
08adbfbb +0x265:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbfc0 +0x26a:  addl   $0x1,-0x24(%ebp)
08adbfc4 +0x26e:  mov    -0x14(%ebp),%eax
08adbfc7 +0x271:  mov    (%eax),%eax
08adbfc9 +0x273:  mov    %eax,0x4(%esp)
08adbfcd +0x277:  lea    -0x38(%ebp),%eax
08adbfd0 +0x27a:  mov    %eax,(%esp)
08adbfd3 +0x27d:  call   08ad9bc0 <_ZN10WideStringC1Ew>  ; WideString::WideString(wchar_t)
08adbfd8 +0x282:  lea    -0x38(%ebp),%eax
08adbfdb +0x285:  mov    %eax,0x4(%esp)
08adbfdf +0x289:  mov    0xc(%ebp),%eax
08adbfe2 +0x28c:  mov    %eax,(%esp)
08adbfe5 +0x28f:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adbfea +0x294:  jmp    08adc007 <+0x2b1>
08adbfec +0x296:  mov    %edx,%ebx
08adbfee +0x298:  mov    %eax,%esi
08adbff0 +0x29a:  lea    -0x38(%ebp),%eax
08adbff3 +0x29d:  mov    %eax,(%esp)
08adbff6 +0x2a0:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adbffb +0x2a5:  mov    %esi,%eax
08adbffd +0x2a7:  mov    %ebx,%edx
08adbfff +0x2a9:  mov    %eax,(%esp)
08adc002 +0x2ac:  call   08ae3750 <_Unwind_Resume>
08adc007 +0x2b1:  lea    -0x38(%ebp),%eax
08adc00a +0x2b4:  mov    %eax,(%esp)
08adc00d +0x2b7:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc012 +0x2bc:  addl   $0x1,-0x24(%ebp)
08adc016 +0x2c0:  mov    -0x20(%ebp),%eax
08adc019 +0x2c3:  add    $0x1,%eax
08adc01c +0x2c6:  mov    %eax,-0x28(%ebp)
08adc01f +0x2c9:  addl   $0x1,-0x20(%ebp)
08adc023 +0x2cd:  mov    -0x20(%ebp),%eax
08adc026 +0x2d0:  cmp    -0x2c(%ebp),%eax
08adc029 +0x2d3:  setl   %al
08adc02c +0x2d6:  test   %al,%al
08adc02e +0x2d8:  jne    08adbd9a <+0x44>
08adc034 +0x2de:  mov    -0x28(%ebp),%eax
08adc037 +0x2e1:  cmp    -0x2c(%ebp),%eax
08adc03a +0x2e4:  je     08adc0a2 <+0x34c>
08adc03c +0x2e6:  mov    -0x28(%ebp),%eax
08adc03f +0x2e9:  mov    -0x2c(%ebp),%edx
08adc042 +0x2ec:  sub    %eax,%edx
08adc044 +0x2ee:  lea    -0x34(%ebp),%eax
08adc047 +0x2f1:  mov    %edx,0xc(%esp)
08adc04b +0x2f5:  mov    -0x28(%ebp),%edx
08adc04e +0x2f8:  mov    %edx,0x8(%esp)
08adc052 +0x2fc:  mov    0x8(%ebp),%edx
08adc055 +0x2ff:  mov    %edx,0x4(%esp)
08adc059 +0x303:  mov    %eax,(%esp)
08adc05c +0x306:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adc061 +0x30b:  sub    $0x4,%esp
08adc064 +0x30e:  lea    -0x34(%ebp),%eax
08adc067 +0x311:  mov    %eax,0x4(%esp)
08adc06b +0x315:  mov    0xc(%ebp),%eax
08adc06e +0x318:  mov    %eax,(%esp)
08adc071 +0x31b:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adc076 +0x320:  jmp    08adc093 <+0x33d>
08adc078 +0x322:  mov    %edx,%ebx
08adc07a +0x324:  mov    %eax,%esi
08adc07c +0x326:  lea    -0x34(%ebp),%eax
08adc07f +0x329:  mov    %eax,(%esp)
08adc082 +0x32c:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc087 +0x331:  mov    %esi,%eax
08adc089 +0x333:  mov    %ebx,%edx
08adc08b +0x335:  mov    %eax,(%esp)
08adc08e +0x338:  call   08ae3750 <_Unwind_Resume>
08adc093 +0x33d:  lea    -0x34(%ebp),%eax
08adc096 +0x340:  mov    %eax,(%esp)
08adc099 +0x343:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc09e +0x348:  addl   $0x1,-0x24(%ebp)
08adc0a2 +0x34c:  mov    -0x24(%ebp),%eax
08adc0a5 +0x34f:  lea    -0x8(%ebp),%esp
08adc0a8 +0x352:  add    $0x0,%esp
08adc0ab +0x355:  pop    %ebx
08adc0ac +0x356:  pop    %esi
08adc0ad +0x357:  pop    %ebp
08adc0ae +0x358:  ret
08adc0af +0x359:  nop
```

## 反编译 C

```c
// WideString::tokenize @ 0x8adbd56

int32 WideString::tokenize
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector,
                wchar *dropDelimiters,wchar *returnDelimiters,bool isKeepEmptyToken)

{
  bool bVar1;
  WideString *pWVar2;
  WideString local_4c;
  WideString local_48;
  WideString local_44;
  WideString local_40;
  WideString local_3c;
  WideString local_38;
  wchar *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextTokenStartIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_34 = c_str(str);
  local_30 = length(str);
  local_2c = 0;
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
                    /* Unresolved local var: wchar c@[???]
                       Unresolved local var: wchar * d0@[???]
                       Unresolved local var: wchar * d1@[???] */
    local_20 = local_34[local_24];
    local_1c = dropDelimiters;
    while( true ) {
      if ((*local_1c == 0) || (*local_1c == local_20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_1c = local_1c + 1;
    }
    if (*local_1c == 0) {
      local_18 = returnDelimiters;
      while( true ) {
        if ((*local_18 == 0) || (*local_18 == local_20)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        local_18 = local_18 + 1;
      }
      if (*local_18 != 0) {
                    /* Unresolved local var: int32 newLen@[???] */
        local_10 = local_24 - local_2c;
        if (local_10 == 0) {
          if (isKeepEmptyToken) {
            WideString(&local_44);
            pWVar2 = &local_44;
                    /* try { // try from 08adbf30 to 08adbf34 has its CatchHandler @ 08adbf37 */
            std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
            ~WideString(&local_44,(int)pWVar2);
            local_28 = local_28 + 1;
          }
        }
        else {
          mid(&local_40,str,local_2c,local_10);
          pWVar2 = &local_40;
                    /* try { // try from 08adbf93 to 08adbf97 has its CatchHandler @ 08adbf9a */
          std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
          ~WideString(&local_40,(int)pWVar2);
          local_28 = local_28 + 1;
        }
        WideString(&local_3c,*local_18);
        pWVar2 = &local_3c;
                    /* try { // try from 08adbfe5 to 08adbfe9 has its CatchHandler @ 08adbfec */
        std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
        ~WideString(&local_3c,(int)pWVar2);
        local_28 = local_28 + 1;
        local_2c = local_24 + 1;
      }
    }
    else {
                    /* Unresolved local var: int32 newLen@[???] */
      local_14 = local_24 - local_2c;
      if (local_14 == 0) {
        if (isKeepEmptyToken) {
          WideString(&local_4c);
          pWVar2 = &local_4c;
                    /* try { // try from 08adbe1b to 08adbe1f has its CatchHandler @ 08adbe22 */
          std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
          ~WideString(&local_4c,(int)pWVar2);
          local_28 = local_28 + 1;
        }
      }
      else {
        mid(&local_48,str,local_2c,local_14);
        pWVar2 = &local_48;
                    /* try { // try from 08adbe7e to 08adbe82 has its CatchHandler @ 08adbe85 */
        std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
        ~WideString(&local_48,(int)pWVar2);
        local_28 = local_28 + 1;
      }
      local_2c = local_24 + 1;
    }
  }
  if (local_2c != local_30) {
    mid(&local_38,str,local_2c,local_30 - local_2c);
    pWVar2 = &local_38;
                    /* try { // try from 08adc071 to 08adc075 has its CatchHandler @ 08adc078 */
    std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
    ~WideString(&local_38,(int)pWVar2);
    local_28 = local_28 + 1;
  }
  return local_28;
}
```
