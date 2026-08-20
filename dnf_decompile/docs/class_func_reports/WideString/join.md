# join

`_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_`

`WideString::join(std::vector<WideString, std::allocator<WideString> > const&, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc2f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc2f4  _ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_
#           WideString::join(std::vector<WideString, std::allocator<WideString> > const&, WideString const&)
# range [0x08adc2f4, 0x08adc5a3]
08adc2f4 +0x000:  push   %ebp
08adc2f5 +0x001:  mov    %esp,%ebp
08adc2f7 +0x003:  push   %esi
08adc2f8 +0x004:  push   %ebx
08adc2f9 +0x005:  sub    $0x60,%esp
08adc2fc +0x008:  mov    0x8(%ebp),%ebx
08adc2ff +0x00b:  mov    0xc(%ebp),%eax
08adc302 +0x00e:  mov    %eax,(%esp)
08adc305 +0x011:  call   08add436 <_ZN10WideString8isupunctEw+0x8e6>  ; WideString::isupunct(wchar_t)+0x8e6
08adc30a +0x016:  test   %al,%al
08adc30c +0x018:  je     08adc31d <+0x29>
08adc30e +0x01a:  mov    %ebx,%eax
08adc310 +0x01c:  mov    %eax,(%esp)
08adc313 +0x01f:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adc318 +0x024:  jmp    08adc593 <+0x29f>
08adc31d +0x029:  mov    0x10(%ebp),%eax
08adc320 +0x02c:  mov    %eax,(%esp)
08adc323 +0x02f:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc328 +0x034:  mov    %eax,-0x30(%ebp)
08adc32b +0x037:  mov    0x10(%ebp),%eax
08adc32e +0x03a:  mov    %eax,(%esp)
08adc331 +0x03d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adc336 +0x042:  mov    %eax,-0x2c(%ebp)
08adc339 +0x045:  mov    0xc(%ebp),%eax
08adc33c +0x048:  mov    %eax,(%esp)
08adc33f +0x04b:  call   08add47a <_ZN10WideString8isupunctEw+0x92a>  ; WideString::isupunct(wchar_t)+0x92a
08adc344 +0x050:  sub    $0x1,%eax
08adc347 +0x053:  imul   -0x2c(%ebp),%eax
08adc34b +0x057:  mov    %eax,-0x28(%ebp)
08adc34e +0x05a:  movb   $0x0,-0x19(%ebp)
08adc352 +0x05e:  cmpb   $0x0,-0x19(%ebp)
08adc356 +0x062:  jne    08adc3fd <+0x109>
08adc35c +0x068:  lea    -0x40(%ebp),%eax
08adc35f +0x06b:  mov    0xc(%ebp),%edx
08adc362 +0x06e:  mov    %edx,0x4(%esp)
08adc366 +0x072:  mov    %eax,(%esp)
08adc369 +0x075:  call   08add496 <_ZN10WideString8isupunctEw+0x946>  ; WideString::isupunct(wchar_t)+0x946
08adc36e +0x07a:  sub    $0x4,%esp
08adc371 +0x07d:  lea    -0x44(%ebp),%eax
08adc374 +0x080:  mov    0xc(%ebp),%edx
08adc377 +0x083:  mov    %edx,0x4(%esp)
08adc37b +0x087:  mov    %eax,(%esp)
08adc37e +0x08a:  call   08add4c2 <_ZN10WideString8isupunctEw+0x972>  ; WideString::isupunct(wchar_t)+0x972
08adc383 +0x08f:  sub    $0x4,%esp
08adc386 +0x092:  jmp    08adc3cd <+0xd9>
08adc388 +0x094:  lea    -0x40(%ebp),%eax
08adc38b +0x097:  mov    %eax,(%esp)
08adc38e +0x09a:  call   08add54e <_ZN10WideString8isupunctEw+0x9fe>  ; WideString::isupunct(wchar_t)+0x9fe
08adc393 +0x09f:  mov    %eax,-0x18(%ebp)
08adc396 +0x0a2:  jmp    08adc3aa <+0xb6>
08adc398 +0x0a4:  mov    -0x18(%ebp),%eax
08adc39b +0x0a7:  mov    %eax,(%esp)
08adc39e +0x0aa:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adc3a3 +0x0af:  add    %eax,-0x28(%ebp)
08adc3a6 +0x0b2:  movb   $0x0,-0x19(%ebp)
08adc3aa +0x0b6:  cmpb   $0x0,-0x19(%ebp)
08adc3ae +0x0ba:  jne    08adc398 <+0xa4>
08adc3b0 +0x0bc:  lea    -0x3c(%ebp),%eax
08adc3b3 +0x0bf:  movl   $0x0,0x8(%esp)
08adc3bb +0x0c7:  lea    -0x40(%ebp),%edx
08adc3be +0x0ca:  mov    %edx,0x4(%esp)
08adc3c2 +0x0ce:  mov    %eax,(%esp)
08adc3c5 +0x0d1:  call   08add51a <_ZN10WideString8isupunctEw+0x9ca>  ; WideString::isupunct(wchar_t)+0x9ca
08adc3ca +0x0d6:  sub    $0x4,%esp
08adc3cd +0x0d9:  lea    -0x44(%ebp),%eax
08adc3d0 +0x0dc:  mov    %eax,0x4(%esp)
08adc3d4 +0x0e0:  lea    -0x40(%ebp),%eax
08adc3d7 +0x0e3:  mov    %eax,(%esp)
08adc3da +0x0e6:  call   08add4ee <_ZN10WideString8isupunctEw+0x99e>  ; WideString::isupunct(wchar_t)+0x99e
08adc3df +0x0eb:  test   %al,%al
08adc3e1 +0x0ed:  je     08adc3f4 <+0x100>
08adc3e3 +0x0ef:  xorb   $0x1,-0x19(%ebp)
08adc3e7 +0x0f3:  cmpb   $0x0,-0x19(%ebp)
08adc3eb +0x0f7:  je     08adc3f4 <+0x100>
08adc3ed +0x0f9:  mov    $0x1,%eax
08adc3f2 +0x0fe:  jmp    08adc3f9 <+0x105>
08adc3f4 +0x100:  mov    $0x0,%eax
08adc3f9 +0x105:  test   %al,%al
08adc3fb +0x107:  jne    08adc388 <+0x94>
08adc3fd +0x109:  cmpl   $0x0,-0x28(%ebp)
08adc401 +0x10d:  jne    08adc412 <+0x11e>
08adc403 +0x10f:  mov    %ebx,%eax
08adc405 +0x111:  mov    %eax,(%esp)
08adc408 +0x114:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adc40d +0x119:  jmp    08adc593 <+0x29f>
08adc412 +0x11e:  mov    -0x28(%ebp),%eax
08adc415 +0x121:  mov    %eax,(%esp)
08adc418 +0x124:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08adc41d +0x129:  mov    %eax,-0x24(%ebp)
08adc420 +0x12c:  mov    -0x24(%ebp),%eax
08adc423 +0x12f:  mov    %eax,(%esp)
08adc426 +0x132:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adc42b +0x137:  mov    %eax,-0x20(%ebp)
08adc42e +0x13a:  movb   $0x0,-0x11(%ebp)
08adc432 +0x13e:  cmpb   $0x0,-0x11(%ebp)
08adc436 +0x142:  jne    08adc582 <+0x28e>
08adc43c +0x148:  lea    -0x48(%ebp),%eax
08adc43f +0x14b:  mov    0xc(%ebp),%edx
08adc442 +0x14e:  mov    %edx,0x4(%esp)
08adc446 +0x152:  mov    %eax,(%esp)
08adc449 +0x155:  call   08add496 <_ZN10WideString8isupunctEw+0x946>  ; WideString::isupunct(wchar_t)+0x946
08adc44e +0x15a:  sub    $0x4,%esp
08adc451 +0x15d:  lea    -0x4c(%ebp),%eax
08adc454 +0x160:  mov    0xc(%ebp),%edx
08adc457 +0x163:  mov    %edx,0x4(%esp)
08adc45b +0x167:  mov    %eax,(%esp)
08adc45e +0x16a:  call   08add4c2 <_ZN10WideString8isupunctEw+0x972>  ; WideString::isupunct(wchar_t)+0x972
08adc463 +0x16f:  sub    $0x4,%esp
08adc466 +0x172:  jmp    08adc54e <+0x25a>
08adc46b +0x177:  lea    -0x48(%ebp),%eax
08adc46e +0x17a:  mov    %eax,(%esp)
08adc471 +0x17d:  call   08add54e <_ZN10WideString8isupunctEw+0x9fe>  ; WideString::isupunct(wchar_t)+0x9fe
08adc476 +0x182:  mov    %eax,-0x10(%ebp)
08adc479 +0x185:  jmp    08adc527 <+0x233>
08adc47e +0x18a:  cmpl   $0x0,-0x2c(%ebp)
08adc482 +0x18e:  jle    08adc4b6 <+0x1c2>
08adc484 +0x190:  lea    -0x38(%ebp),%eax
08adc487 +0x193:  mov    0xc(%ebp),%edx
08adc48a +0x196:  mov    %edx,0x4(%esp)
08adc48e +0x19a:  mov    %eax,(%esp)
08adc491 +0x19d:  call   08add496 <_ZN10WideString8isupunctEw+0x946>  ; WideString::isupunct(wchar_t)+0x946
08adc496 +0x1a2:  sub    $0x4,%esp
08adc499 +0x1a5:  lea    -0x38(%ebp),%eax
08adc49c +0x1a8:  mov    %eax,0x4(%esp)
08adc4a0 +0x1ac:  lea    -0x48(%ebp),%eax
08adc4a3 +0x1af:  mov    %eax,(%esp)
08adc4a6 +0x1b2:  call   08add4ee <_ZN10WideString8isupunctEw+0x99e>  ; WideString::isupunct(wchar_t)+0x99e
08adc4ab +0x1b7:  test   %al,%al
08adc4ad +0x1b9:  je     08adc4b6 <+0x1c2>
08adc4af +0x1bb:  mov    $0x1,%eax
08adc4b4 +0x1c0:  jmp    08adc4bb <+0x1c7>
08adc4b6 +0x1c2:  mov    $0x0,%eax
08adc4bb +0x1c7:  test   %al,%al
08adc4bd +0x1c9:  je     08adc4e4 <+0x1f0>
08adc4bf +0x1cb:  mov    -0x2c(%ebp),%eax
08adc4c2 +0x1ce:  shl    $0x2,%eax
08adc4c5 +0x1d1:  mov    %eax,0x8(%esp)
08adc4c9 +0x1d5:  mov    -0x30(%ebp),%eax
08adc4cc +0x1d8:  mov    %eax,0x4(%esp)
08adc4d0 +0x1dc:  mov    -0x20(%ebp),%eax
08adc4d3 +0x1df:  mov    %eax,(%esp)
08adc4d6 +0x1e2:  call   0807d8a0 <_init+0x198>
08adc4db +0x1e7:  mov    -0x2c(%ebp),%eax
08adc4de +0x1ea:  shl    $0x2,%eax
08adc4e1 +0x1ed:  add    %eax,-0x20(%ebp)
08adc4e4 +0x1f0:  mov    -0x10(%ebp),%eax
08adc4e7 +0x1f3:  mov    %eax,(%esp)
08adc4ea +0x1f6:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adc4ef +0x1fb:  mov    %eax,-0xc(%ebp)
08adc4f2 +0x1fe:  mov    -0xc(%ebp),%eax
08adc4f5 +0x201:  lea    0x0(,%eax,4),%esi
08adc4fc +0x208:  mov    -0x10(%ebp),%eax
08adc4ff +0x20b:  mov    %eax,(%esp)
08adc502 +0x20e:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc507 +0x213:  mov    %esi,0x8(%esp)
08adc50b +0x217:  mov    %eax,0x4(%esp)
08adc50f +0x21b:  mov    -0x20(%ebp),%eax
08adc512 +0x21e:  mov    %eax,(%esp)
08adc515 +0x221:  call   0807d8a0 <_init+0x198>
08adc51a +0x226:  mov    -0xc(%ebp),%eax
08adc51d +0x229:  shl    $0x2,%eax
08adc520 +0x22c:  add    %eax,-0x20(%ebp)
08adc523 +0x22f:  movb   $0x0,-0x11(%ebp)
08adc527 +0x233:  cmpb   $0x0,-0x11(%ebp)
08adc52b +0x237:  jne    08adc47e <+0x18a>
08adc531 +0x23d:  lea    -0x34(%ebp),%eax
08adc534 +0x240:  movl   $0x0,0x8(%esp)
08adc53c +0x248:  lea    -0x48(%ebp),%edx
08adc53f +0x24b:  mov    %edx,0x4(%esp)
08adc543 +0x24f:  mov    %eax,(%esp)
08adc546 +0x252:  call   08add51a <_ZN10WideString8isupunctEw+0x9ca>  ; WideString::isupunct(wchar_t)+0x9ca
08adc54b +0x257:  sub    $0x4,%esp
08adc54e +0x25a:  lea    -0x4c(%ebp),%eax
08adc551 +0x25d:  mov    %eax,0x4(%esp)
08adc555 +0x261:  lea    -0x48(%ebp),%eax
08adc558 +0x264:  mov    %eax,(%esp)
08adc55b +0x267:  call   08add4ee <_ZN10WideString8isupunctEw+0x99e>  ; WideString::isupunct(wchar_t)+0x99e
08adc560 +0x26c:  test   %al,%al
08adc562 +0x26e:  je     08adc575 <+0x281>
08adc564 +0x270:  xorb   $0x1,-0x11(%ebp)
08adc568 +0x274:  cmpb   $0x0,-0x11(%ebp)
08adc56c +0x278:  je     08adc575 <+0x281>
08adc56e +0x27a:  mov    $0x1,%eax
08adc573 +0x27f:  jmp    08adc57a <+0x286>
08adc575 +0x281:  mov    $0x0,%eax
08adc57a +0x286:  test   %al,%al
08adc57c +0x288:  jne    08adc46b <+0x177>
08adc582 +0x28e:  mov    %ebx,%eax
08adc584 +0x290:  mov    -0x24(%ebp),%edx
08adc587 +0x293:  mov    %edx,0x4(%esp)
08adc58b +0x297:  mov    %eax,(%esp)
08adc58e +0x29a:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adc593 +0x29f:  mov    %ebx,%eax
08adc595 +0x2a1:  mov    %ebx,%eax
08adc597 +0x2a3:  lea    -0x8(%ebp),%esp
08adc59a +0x2a6:  add    $0x0,%esp
08adc59d +0x2a9:  pop    %ebx
08adc59e +0x2aa:  pop    %esi
08adc59f +0x2ab:  pop    %ebp
08adc5a0 +0x2ac:  ret    $0x4
08adc5a3 +0x2af:  nop
```

## 反编译 C

```c
// WideString::join @ 0x8adc2f4

WideString *
WideString::join(WideString *__return_storage_ptr__,
                vector<WideString,_std::allocator<WideString>_> *tokenVector,
                WideString *separatorStr)

{
  size_t __n;
  bool bVar1;
  size_t sVar2;
  int32 iVar3;
  wchar *__src;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
  local_40;
  vector<WideString,_std::allocator<WideString>_> local_3c;
  int local_30;
  int local_2c;
  WideStringData *local_28;
  wchar *local_24;
  byte local_1d;
  WideString *local_1c;
  byte local_15;
  WideString *local_14;
  int32 local_10;
  
                    /* Unresolved local var: wchar * separatorStrSrc@[???]
                       Unresolved local var: int32 separatorStrLen@[???]
                       Unresolved local var: int32 totalLength@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * newDataBuf@[???] */
  bVar1 = std::vector<WideString,_std::allocator<WideString>_>::empty(tokenVector);
  if (bVar1) {
    WideString(__return_storage_ptr__);
  }
  else {
    local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>._M_impl._M_end_of_storage =
         (WideString *)c_str(separatorStr);
    local_30 = length(separatorStr);
    sVar2 = std::vector<WideString,_std::allocator<WideString>_>::size(tokenVector);
    local_2c = (sVar2 - 1) * local_30;
                    /* Unresolved local var: bool token_runOnce@[???] */
    local_1d = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iteratorEnd@[???] */
    std::vector<WideString,_std::allocator<WideString>_>::begin
              ((vector<WideString,_std::allocator<WideString>_> *)(local_48 + 4));
    std::vector<WideString,_std::allocator<WideString>_>::end
              ((vector<WideString,_std::allocator<WideString>_> *)local_48);
    while( true ) {
      bVar1 = __gnu_cxx::
              operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                        ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          *)(local_48 + 4),
                         (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          *)local_48);
      if ((bVar1) && (local_1d = local_1d ^ 1, local_1d != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
                    /* Unresolved local var: WideString * token@[???] */
      local_1c = __gnu_cxx::
                 __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                 ::operator*((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                              *)(local_48 + 4));
      while (local_1d != 0) {
        iVar3 = length(local_1c);
        local_2c = local_2c + iVar3;
        local_1d = 0;
      }
      __gnu_cxx::
      __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>::
      operator++(&local_40,(int)(local_48 + 4));
    }
    if (local_2c == 0) {
      WideString(__return_storage_ptr__);
    }
    else {
      local_28 = WideStringData::createTerminated(local_2c);
      local_24 = WideStringData::getBuffer(local_28);
                    /* Unresolved local var: bool token_runOnce@[???] */
      local_15 = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iteratorEnd@[???] */
      std::vector<WideString,_std::allocator<WideString>_>::begin
                ((vector<WideString,_std::allocator<WideString>_> *)(local_50 + 4));
      std::vector<WideString,_std::allocator<WideString>_>::end
                ((vector<WideString,_std::allocator<WideString>_> *)local_50);
      while( true ) {
        bVar1 = __gnu_cxx::
                operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                            *)(local_50 + 4),
                           (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                            *)local_50);
        if ((bVar1) && (local_15 = local_15 ^ 1, local_15 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
                    /* Unresolved local var: WideString * token@[???] */
        local_14 = __gnu_cxx::
                   __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                   ::operator*((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)(local_50 + 4));
        while (local_15 != 0) {
                    /* Unresolved local var: int32 tokenLength@[???] */
          if (local_30 < 1) {
LAB_08adc4b6:
            bVar1 = false;
          }
          else {
            std::vector<WideString,_std::allocator<WideString>_>::begin(&local_3c);
            bVar1 = __gnu_cxx::
                    operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                              ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)(local_50 + 4),
                               (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)&local_3c);
            if (!bVar1) goto LAB_08adc4b6;
            bVar1 = true;
          }
          if (bVar1) {
            memcpy(local_24,local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>.
                            _M_impl._M_end_of_storage,local_30 << 2);
            local_24 = local_24 + local_30;
          }
          local_10 = length(local_14);
          __n = local_10 * 4;
          __src = c_str(local_14);
          memcpy(local_24,__src,__n);
          local_24 = local_24 + local_10;
          local_15 = 0;
        }
        __gnu_cxx::
        __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
        ::operator++((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                      *)&local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>.
                         _M_impl._M_finish,(int)(local_50 + 4));
      }
      WideString(__return_storage_ptr__,local_28);
    }
  }
  return __return_storage_ptr__;
}
```
