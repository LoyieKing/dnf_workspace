# join

`_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_`

`CharString::join(std::vector<CharString, std::allocator<CharString> > const&, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad920e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad920e  _ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_
#           CharString::join(std::vector<CharString, std::allocator<CharString> > const&, CharString const&)
# range [0x08ad920e, 0x08ad94ad]
08ad920e +0x000:  push   %ebp
08ad920f +0x001:  mov    %esp,%ebp
08ad9211 +0x003:  push   %esi
08ad9212 +0x004:  push   %ebx
08ad9213 +0x005:  sub    $0x60,%esp
08ad9216 +0x008:  mov    0x8(%ebp),%ebx
08ad9219 +0x00b:  mov    0xc(%ebp),%eax
08ad921c +0x00e:  mov    %eax,(%esp)
08ad921f +0x011:  call   08add2f2 <_ZN10WideString8isupunctEw+0x7a2>  ; WideString::isupunct(wchar_t)+0x7a2
08ad9224 +0x016:  test   %al,%al
08ad9226 +0x018:  je     08ad9237 <+0x29>
08ad9228 +0x01a:  mov    %ebx,%eax
08ad922a +0x01c:  mov    %eax,(%esp)
08ad922d +0x01f:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad9232 +0x024:  jmp    08ad949d <+0x28f>
08ad9237 +0x029:  mov    0x10(%ebp),%eax
08ad923a +0x02c:  mov    %eax,(%esp)
08ad923d +0x02f:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9242 +0x034:  mov    %eax,-0x30(%ebp)
08ad9245 +0x037:  mov    0x10(%ebp),%eax
08ad9248 +0x03a:  mov    %eax,(%esp)
08ad924b +0x03d:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad9250 +0x042:  mov    %eax,-0x2c(%ebp)
08ad9253 +0x045:  mov    0xc(%ebp),%eax
08ad9256 +0x048:  mov    %eax,(%esp)
08ad9259 +0x04b:  call   08add336 <_ZN10WideString8isupunctEw+0x7e6>  ; WideString::isupunct(wchar_t)+0x7e6
08ad925e +0x050:  sub    $0x1,%eax
08ad9261 +0x053:  imul   -0x2c(%ebp),%eax
08ad9265 +0x057:  mov    %eax,-0x28(%ebp)
08ad9268 +0x05a:  movb   $0x0,-0x19(%ebp)
08ad926c +0x05e:  cmpb   $0x0,-0x19(%ebp)
08ad9270 +0x062:  jne    08ad9317 <+0x109>
08ad9276 +0x068:  lea    -0x40(%ebp),%eax
08ad9279 +0x06b:  mov    0xc(%ebp),%edx
08ad927c +0x06e:  mov    %edx,0x4(%esp)
08ad9280 +0x072:  mov    %eax,(%esp)
08ad9283 +0x075:  call   08add352 <_ZN10WideString8isupunctEw+0x802>  ; WideString::isupunct(wchar_t)+0x802
08ad9288 +0x07a:  sub    $0x4,%esp
08ad928b +0x07d:  lea    -0x44(%ebp),%eax
08ad928e +0x080:  mov    0xc(%ebp),%edx
08ad9291 +0x083:  mov    %edx,0x4(%esp)
08ad9295 +0x087:  mov    %eax,(%esp)
08ad9298 +0x08a:  call   08add37e <_ZN10WideString8isupunctEw+0x82e>  ; WideString::isupunct(wchar_t)+0x82e
08ad929d +0x08f:  sub    $0x4,%esp
08ad92a0 +0x092:  jmp    08ad92e7 <+0xd9>
08ad92a2 +0x094:  lea    -0x40(%ebp),%eax
08ad92a5 +0x097:  mov    %eax,(%esp)
08ad92a8 +0x09a:  call   08add40a <_ZN10WideString8isupunctEw+0x8ba>  ; WideString::isupunct(wchar_t)+0x8ba
08ad92ad +0x09f:  mov    %eax,-0x18(%ebp)
08ad92b0 +0x0a2:  jmp    08ad92c4 <+0xb6>
08ad92b2 +0x0a4:  mov    -0x18(%ebp),%eax
08ad92b5 +0x0a7:  mov    %eax,(%esp)
08ad92b8 +0x0aa:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad92bd +0x0af:  add    %eax,-0x28(%ebp)
08ad92c0 +0x0b2:  movb   $0x0,-0x19(%ebp)
08ad92c4 +0x0b6:  cmpb   $0x0,-0x19(%ebp)
08ad92c8 +0x0ba:  jne    08ad92b2 <+0xa4>
08ad92ca +0x0bc:  lea    -0x3c(%ebp),%eax
08ad92cd +0x0bf:  movl   $0x0,0x8(%esp)
08ad92d5 +0x0c7:  lea    -0x40(%ebp),%edx
08ad92d8 +0x0ca:  mov    %edx,0x4(%esp)
08ad92dc +0x0ce:  mov    %eax,(%esp)
08ad92df +0x0d1:  call   08add3d6 <_ZN10WideString8isupunctEw+0x886>  ; WideString::isupunct(wchar_t)+0x886
08ad92e4 +0x0d6:  sub    $0x4,%esp
08ad92e7 +0x0d9:  lea    -0x44(%ebp),%eax
08ad92ea +0x0dc:  mov    %eax,0x4(%esp)
08ad92ee +0x0e0:  lea    -0x40(%ebp),%eax
08ad92f1 +0x0e3:  mov    %eax,(%esp)
08ad92f4 +0x0e6:  call   08add3aa <_ZN10WideString8isupunctEw+0x85a>  ; WideString::isupunct(wchar_t)+0x85a
08ad92f9 +0x0eb:  test   %al,%al
08ad92fb +0x0ed:  je     08ad930e <+0x100>
08ad92fd +0x0ef:  xorb   $0x1,-0x19(%ebp)
08ad9301 +0x0f3:  cmpb   $0x0,-0x19(%ebp)
08ad9305 +0x0f7:  je     08ad930e <+0x100>
08ad9307 +0x0f9:  mov    $0x1,%eax
08ad930c +0x0fe:  jmp    08ad9313 <+0x105>
08ad930e +0x100:  mov    $0x0,%eax
08ad9313 +0x105:  test   %al,%al
08ad9315 +0x107:  jne    08ad92a2 <+0x94>
08ad9317 +0x109:  cmpl   $0x0,-0x28(%ebp)
08ad931b +0x10d:  jne    08ad932c <+0x11e>
08ad931d +0x10f:  mov    %ebx,%eax
08ad931f +0x111:  mov    %eax,(%esp)
08ad9322 +0x114:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad9327 +0x119:  jmp    08ad949d <+0x28f>
08ad932c +0x11e:  mov    -0x28(%ebp),%eax
08ad932f +0x121:  mov    %eax,(%esp)
08ad9332 +0x124:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad9337 +0x129:  mov    %eax,-0x24(%ebp)
08ad933a +0x12c:  mov    -0x24(%ebp),%eax
08ad933d +0x12f:  mov    %eax,(%esp)
08ad9340 +0x132:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad9345 +0x137:  mov    %eax,-0x20(%ebp)
08ad9348 +0x13a:  movb   $0x0,-0x11(%ebp)
08ad934c +0x13e:  cmpb   $0x0,-0x11(%ebp)
08ad9350 +0x142:  jne    08ad948c <+0x27e>
08ad9356 +0x148:  lea    -0x48(%ebp),%eax
08ad9359 +0x14b:  mov    0xc(%ebp),%edx
08ad935c +0x14e:  mov    %edx,0x4(%esp)
08ad9360 +0x152:  mov    %eax,(%esp)
08ad9363 +0x155:  call   08add352 <_ZN10WideString8isupunctEw+0x802>  ; WideString::isupunct(wchar_t)+0x802
08ad9368 +0x15a:  sub    $0x4,%esp
08ad936b +0x15d:  lea    -0x4c(%ebp),%eax
08ad936e +0x160:  mov    0xc(%ebp),%edx
08ad9371 +0x163:  mov    %edx,0x4(%esp)
08ad9375 +0x167:  mov    %eax,(%esp)
08ad9378 +0x16a:  call   08add37e <_ZN10WideString8isupunctEw+0x82e>  ; WideString::isupunct(wchar_t)+0x82e
08ad937d +0x16f:  sub    $0x4,%esp
08ad9380 +0x172:  jmp    08ad9458 <+0x24a>
08ad9385 +0x177:  lea    -0x48(%ebp),%eax
08ad9388 +0x17a:  mov    %eax,(%esp)
08ad938b +0x17d:  call   08add40a <_ZN10WideString8isupunctEw+0x8ba>  ; WideString::isupunct(wchar_t)+0x8ba
08ad9390 +0x182:  mov    %eax,-0x10(%ebp)
08ad9393 +0x185:  jmp    08ad9431 <+0x223>
08ad9398 +0x18a:  cmpl   $0x0,-0x2c(%ebp)
08ad939c +0x18e:  jle    08ad93d0 <+0x1c2>
08ad939e +0x190:  lea    -0x38(%ebp),%eax
08ad93a1 +0x193:  mov    0xc(%ebp),%edx
08ad93a4 +0x196:  mov    %edx,0x4(%esp)
08ad93a8 +0x19a:  mov    %eax,(%esp)
08ad93ab +0x19d:  call   08add352 <_ZN10WideString8isupunctEw+0x802>  ; WideString::isupunct(wchar_t)+0x802
08ad93b0 +0x1a2:  sub    $0x4,%esp
08ad93b3 +0x1a5:  lea    -0x38(%ebp),%eax
08ad93b6 +0x1a8:  mov    %eax,0x4(%esp)
08ad93ba +0x1ac:  lea    -0x48(%ebp),%eax
08ad93bd +0x1af:  mov    %eax,(%esp)
08ad93c0 +0x1b2:  call   08add3aa <_ZN10WideString8isupunctEw+0x85a>  ; WideString::isupunct(wchar_t)+0x85a
08ad93c5 +0x1b7:  test   %al,%al
08ad93c7 +0x1b9:  je     08ad93d0 <+0x1c2>
08ad93c9 +0x1bb:  mov    $0x1,%eax
08ad93ce +0x1c0:  jmp    08ad93d5 <+0x1c7>
08ad93d0 +0x1c2:  mov    $0x0,%eax
08ad93d5 +0x1c7:  test   %al,%al
08ad93d7 +0x1c9:  je     08ad93f8 <+0x1ea>
08ad93d9 +0x1cb:  mov    -0x2c(%ebp),%eax
08ad93dc +0x1ce:  mov    %eax,0x8(%esp)
08ad93e0 +0x1d2:  mov    -0x30(%ebp),%eax
08ad93e3 +0x1d5:  mov    %eax,0x4(%esp)
08ad93e7 +0x1d9:  mov    -0x20(%ebp),%eax
08ad93ea +0x1dc:  mov    %eax,(%esp)
08ad93ed +0x1df:  call   0807d8a0 <_init+0x198>
08ad93f2 +0x1e4:  mov    -0x2c(%ebp),%eax
08ad93f5 +0x1e7:  add    %eax,-0x20(%ebp)
08ad93f8 +0x1ea:  mov    -0x10(%ebp),%eax
08ad93fb +0x1ed:  mov    %eax,(%esp)
08ad93fe +0x1f0:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad9403 +0x1f5:  mov    %eax,-0xc(%ebp)
08ad9406 +0x1f8:  mov    -0xc(%ebp),%esi
08ad9409 +0x1fb:  mov    -0x10(%ebp),%eax
08ad940c +0x1fe:  mov    %eax,(%esp)
08ad940f +0x201:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9414 +0x206:  mov    %esi,0x8(%esp)
08ad9418 +0x20a:  mov    %eax,0x4(%esp)
08ad941c +0x20e:  mov    -0x20(%ebp),%eax
08ad941f +0x211:  mov    %eax,(%esp)
08ad9422 +0x214:  call   0807d8a0 <_init+0x198>
08ad9427 +0x219:  mov    -0xc(%ebp),%eax
08ad942a +0x21c:  add    %eax,-0x20(%ebp)
08ad942d +0x21f:  movb   $0x0,-0x11(%ebp)
08ad9431 +0x223:  cmpb   $0x0,-0x11(%ebp)
08ad9435 +0x227:  jne    08ad9398 <+0x18a>
08ad943b +0x22d:  lea    -0x34(%ebp),%eax
08ad943e +0x230:  movl   $0x0,0x8(%esp)
08ad9446 +0x238:  lea    -0x48(%ebp),%edx
08ad9449 +0x23b:  mov    %edx,0x4(%esp)
08ad944d +0x23f:  mov    %eax,(%esp)
08ad9450 +0x242:  call   08add3d6 <_ZN10WideString8isupunctEw+0x886>  ; WideString::isupunct(wchar_t)+0x886
08ad9455 +0x247:  sub    $0x4,%esp
08ad9458 +0x24a:  lea    -0x4c(%ebp),%eax
08ad945b +0x24d:  mov    %eax,0x4(%esp)
08ad945f +0x251:  lea    -0x48(%ebp),%eax
08ad9462 +0x254:  mov    %eax,(%esp)
08ad9465 +0x257:  call   08add3aa <_ZN10WideString8isupunctEw+0x85a>  ; WideString::isupunct(wchar_t)+0x85a
08ad946a +0x25c:  test   %al,%al
08ad946c +0x25e:  je     08ad947f <+0x271>
08ad946e +0x260:  xorb   $0x1,-0x11(%ebp)
08ad9472 +0x264:  cmpb   $0x0,-0x11(%ebp)
08ad9476 +0x268:  je     08ad947f <+0x271>
08ad9478 +0x26a:  mov    $0x1,%eax
08ad947d +0x26f:  jmp    08ad9484 <+0x276>
08ad947f +0x271:  mov    $0x0,%eax
08ad9484 +0x276:  test   %al,%al
08ad9486 +0x278:  jne    08ad9385 <+0x177>
08ad948c +0x27e:  mov    %ebx,%eax
08ad948e +0x280:  mov    -0x24(%ebp),%edx
08ad9491 +0x283:  mov    %edx,0x4(%esp)
08ad9495 +0x287:  mov    %eax,(%esp)
08ad9498 +0x28a:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad949d +0x28f:  mov    %ebx,%eax
08ad949f +0x291:  mov    %ebx,%eax
08ad94a1 +0x293:  lea    -0x8(%ebp),%esp
08ad94a4 +0x296:  add    $0x0,%esp
08ad94a7 +0x299:  pop    %ebx
08ad94a8 +0x29a:  pop    %esi
08ad94a9 +0x29b:  pop    %ebp
08ad94aa +0x29c:  ret    $0x4
08ad94ad +0x29f:  nop
```

## 反编译 C

```c
// CharString::join @ 0x8ad920e

CharString *
CharString::join(CharString *__return_storage_ptr__,
                vector<CharString,_std::allocator<CharString>_> *tokenVector,
                CharString *separatorStr)

{
  bool bVar1;
  size_t sVar2;
  int32 iVar3;
  size_t __n;
  char *__src;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
  local_40;
  vector<CharString,_std::allocator<CharString>_> local_3c;
  size_t local_30;
  int local_2c;
  CharStringData *local_28;
  char *local_24;
  byte local_1d;
  CharString *local_1c;
  byte local_15;
  CharString *local_14;
  size_t local_10;
  
                    /* Unresolved local var: char * separatorStrSrc@[???]
                       Unresolved local var: int32 separatorStrLen@[???]
                       Unresolved local var: int32 totalLength@[???]
                       Unresolved local var: CharStringData * newData@[???]
                       Unresolved local var: char * newDataBuf@[???] */
  bVar1 = std::vector<CharString,_std::allocator<CharString>_>::empty(tokenVector);
  if (bVar1) {
    CharString(__return_storage_ptr__);
  }
  else {
    local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>._M_impl._M_end_of_storage =
         (CharString *)c_str(separatorStr);
    local_30 = length(separatorStr);
    sVar2 = std::vector<CharString,_std::allocator<CharString>_>::size(tokenVector);
    local_2c = (sVar2 - 1) * local_30;
                    /* Unresolved local var: bool token_runOnce@[???] */
    local_1d = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iteratorEnd@[???] */
    std::vector<CharString,_std::allocator<CharString>_>::begin
              ((vector<CharString,_std::allocator<CharString>_> *)(local_48 + 4));
    std::vector<CharString,_std::allocator<CharString>_>::end
              ((vector<CharString,_std::allocator<CharString>_> *)local_48);
    while( true ) {
      bVar1 = __gnu_cxx::
              operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                        ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          *)(local_48 + 4),
                         (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          *)local_48);
      if ((bVar1) && (local_1d = local_1d ^ 1, local_1d != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
                    /* Unresolved local var: CharString * token@[???] */
      local_1c = __gnu_cxx::
                 __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                 ::operator*((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                              *)(local_48 + 4));
      while (local_1d != 0) {
        iVar3 = length(local_1c);
        local_2c = local_2c + iVar3;
        local_1d = 0;
      }
      __gnu_cxx::
      __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>::
      operator++(&local_40,(int)(local_48 + 4));
    }
    if (local_2c == 0) {
      CharString(__return_storage_ptr__);
    }
    else {
      local_28 = CharStringData::createTerminated(local_2c);
      local_24 = CharStringData::getBuffer(local_28);
                    /* Unresolved local var: bool token_runOnce@[???] */
      local_15 = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iteratorEnd@[???] */
      std::vector<CharString,_std::allocator<CharString>_>::begin
                ((vector<CharString,_std::allocator<CharString>_> *)(local_50 + 4));
      std::vector<CharString,_std::allocator<CharString>_>::end
                ((vector<CharString,_std::allocator<CharString>_> *)local_50);
      while( true ) {
        bVar1 = __gnu_cxx::
                operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                            *)(local_50 + 4),
                           (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                            *)local_50);
        if ((bVar1) && (local_15 = local_15 ^ 1, local_15 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
                    /* Unresolved local var: CharString * token@[???] */
        local_14 = __gnu_cxx::
                   __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                   ::operator*((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)(local_50 + 4));
        while (local_15 != 0) {
                    /* Unresolved local var: int32 tokenLength@[???] */
          if ((int)local_30 < 1) {
LAB_08ad93d0:
            bVar1 = false;
          }
          else {
            std::vector<CharString,_std::allocator<CharString>_>::begin(&local_3c);
            bVar1 = __gnu_cxx::
                    operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                              ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)(local_50 + 4),
                               (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)&local_3c);
            if (!bVar1) goto LAB_08ad93d0;
            bVar1 = true;
          }
          if (bVar1) {
            memcpy(local_24,local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>.
                            _M_impl._M_end_of_storage,local_30);
            local_24 = local_24 + local_30;
          }
          __n = length(local_14);
          local_10 = __n;
          __src = c_str(local_14);
          memcpy(local_24,__src,__n);
          local_24 = local_24 + local_10;
          local_15 = 0;
        }
        __gnu_cxx::
        __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
        ::operator++((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                      *)&local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>.
                         _M_impl._M_finish,(int)(local_50 + 4));
      }
      CharString(__return_storage_ptr__,local_28);
    }
  }
  return __return_storage_ptr__;
}
```
