# _M_initialize_moneypunct

`_ZNSt10moneypunctIcLb1EE24_M_initialize_moneypunctEP15__locale_structPKc`

`std::moneypunct<char, true>::_M_initialize_moneypunct(__locale_struct*, char const*)`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, true>` | `0x08720220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08720220  _ZNSt10moneypunctIcLb1EE24_M_initialize_moneypunctEP15__locale_structPKc
#           std::moneypunct<char, true>::_M_initialize_moneypunct(__locale_struct*, char const*)
# range [0x08720220, 0x0872058f]
08720220 +0x000:  push   %ebp
08720221 +0x001:  mov    %esp,%ebp
08720223 +0x003:  push   %edi
08720224 +0x004:  push   %esi
08720225 +0x005:  push   %ebx
08720226 +0x006:  sub    $0x3c,%esp
08720229 +0x009:  mov    0x8(%ebp),%ebx
0872022c +0x00c:  mov    0xc(%ebp),%esi
0872022f +0x00f:  mov    0x8(%ebx),%edi
08720232 +0x012:  test   %edi,%edi
08720234 +0x014:  je     087204f8 <+0x2d8>
0872023a +0x01a:  test   %esi,%esi
0872023c +0x01c:  je     08720448 <+0x228>
08720242 +0x022:  mov    %esi,0x4(%esp)
08720246 +0x026:  movl   $0x40002,(%esp)
0872024d +0x02d:  call   0807de10 <_init+0x708>
08720252 +0x032:  movzbl (%eax),%eax
08720255 +0x035:  mov    %al,0x11(%edi)
08720258 +0x038:  mov    0x8(%ebx),%edi
0872025b +0x03b:  mov    %esi,0x4(%esp)
0872025f +0x03f:  movl   $0x40003,(%esp)
08720266 +0x046:  call   0807de10 <_init+0x708>
0872026b +0x04b:  movzbl (%eax),%eax
0872026e +0x04e:  mov    %al,0x12(%edi)
08720271 +0x051:  mov    0x8(%ebx),%edi
08720274 +0x054:  mov    %esi,0x4(%esp)
08720278 +0x058:  movl   $0x40005,(%esp)
0872027f +0x05f:  call   0807de10 <_init+0x708>
08720284 +0x064:  mov    %eax,0x1c(%edi)
08720287 +0x067:  mov    0x8(%ebx),%edi
0872028a +0x06a:  mov    0x1c(%edi),%eax
0872028d +0x06d:  mov    %eax,(%esp)
08720290 +0x070:  call   0807e3b0 <_init+0xca8>
08720295 +0x075:  cmpb   $0x0,0x12(%edi)
08720299 +0x079:  mov    %eax,0x20(%edi)
0872029c +0x07c:  jne    087203f8 <+0x1d8>
087202a2 +0x082:  movl   $&data#2fb52a47(.rodata),0x8(%edi)
087202a9 +0x089:  movl   $0x0,0xc(%edi)
087202b0 +0x090:  movb   $0x0,0x10(%edi)
087202b4 +0x094:  movb   $0x2c,0x12(%edi)
087202b8 +0x098:  mov    0x8(%ebx),%edi
087202bb +0x09b:  cmpb   $0x0,0x11(%edi)
087202bf +0x09f:  jne    08720426 <+0x206>
087202c5 +0x0a5:  movl   $0x0,0x2c(%edi)
087202cc +0x0ac:  movb   $0x2e,0x11(%edi)
087202d0 +0x0b0:  mov    %esi,0x4(%esp)
087202d4 +0x0b4:  movl   $0x40015,(%esp)
087202db +0x0bb:  call   0807de10 <_init+0x708>
087202e0 +0x0c0:  movzbl (%eax),%edx
087202e3 +0x0c3:  test   %dl,%dl
087202e5 +0x0c5:  jne    087204d0 <+0x2b0>
087202eb +0x0cb:  mov    0x8(%ebx),%edi
087202ee +0x0ce:  movl   $"()",0x24(%edi)
087202f5 +0x0d5:  mov    0x24(%edi),%eax
087202f8 +0x0d8:  mov    %dl,-0x28(%ebp)
087202fb +0x0db:  mov    %eax,(%esp)
087202fe +0x0de:  call   0807e3b0 <_init+0xca8>
08720303 +0x0e3:  mov    %eax,0x28(%edi)
08720306 +0x0e6:  mov    %esi,0x4(%esp)
0872030a +0x0ea:  movl   $0x40000,(%esp)
08720311 +0x0f1:  call   0807de10 <_init+0x708>
08720316 +0x0f6:  mov    %eax,0x14(%edi)
08720319 +0x0f9:  mov    0x8(%ebx),%edi
0872031c +0x0fc:  mov    0x14(%edi),%eax
0872031f +0x0ff:  mov    %eax,(%esp)
08720322 +0x102:  call   0807e3b0 <_init+0xca8>
08720327 +0x107:  mov    %eax,0x18(%edi)
0872032a +0x10a:  lea    -0x1c(%ebp),%edi
0872032d +0x10d:  mov    %esi,0x4(%esp)
08720331 +0x111:  movl   $0x40010,(%esp)
08720338 +0x118:  call   0807de10 <_init+0x708>
0872033d +0x11d:  movsbl (%eax),%eax
08720340 +0x120:  mov    %esi,0x4(%esp)
08720344 +0x124:  movl   $0x40011,(%esp)
0872034b +0x12b:  mov    %eax,-0x24(%ebp)
0872034e +0x12e:  call   0807de10 <_init+0x708>
08720353 +0x133:  movsbl (%eax),%eax
08720356 +0x136:  mov    %esi,0x4(%esp)
0872035a +0x13a:  movl   $0x40014,(%esp)
08720361 +0x141:  mov    %eax,-0x20(%ebp)
08720364 +0x144:  call   0807de10 <_init+0x708>
08720369 +0x149:  mov    0x8(%ebx),%ecx
0872036c +0x14c:  movsbl (%eax),%eax
0872036f +0x14f:  mov    %ecx,-0x2c(%ebp)
08720372 +0x152:  mov    %edi,(%esp)
08720375 +0x155:  mov    %eax,0xc(%esp)
08720379 +0x159:  mov    -0x20(%ebp),%eax
0872037c +0x15c:  mov    %eax,0x8(%esp)
08720380 +0x160:  mov    -0x24(%ebp),%eax
08720383 +0x163:  mov    %eax,0x4(%esp)
08720387 +0x167:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
0872038c +0x16c:  mov    -0x2c(%ebp),%ecx
0872038f +0x16f:  mov    -0x1c(%ebp),%eax
08720392 +0x172:  mov    %eax,0x30(%ecx)
08720395 +0x175:  sub    $0x4,%esp
08720398 +0x178:  mov    %esi,0x4(%esp)
0872039c +0x17c:  movl   $0x40012,(%esp)
087203a3 +0x183:  call   0807de10 <_init+0x708>
087203a8 +0x188:  movsbl (%eax),%eax
087203ab +0x18b:  mov    %esi,0x4(%esp)
087203af +0x18f:  movl   $0x40013,(%esp)
087203b6 +0x196:  mov    %eax,-0x20(%ebp)
087203b9 +0x199:  call   0807de10 <_init+0x708>
087203be +0x19e:  movzbl -0x28(%ebp),%edx
087203c2 +0x1a2:  mov    0x8(%ebx),%ebx
087203c5 +0x1a5:  movsbl %dl,%edx
087203c8 +0x1a8:  mov    %edx,0xc(%esp)
087203cc +0x1ac:  movsbl (%eax),%eax
087203cf +0x1af:  mov    %edi,(%esp)
087203d2 +0x1b2:  mov    %eax,0x8(%esp)
087203d6 +0x1b6:  mov    -0x20(%ebp),%eax
087203d9 +0x1b9:  mov    %eax,0x4(%esp)
087203dd +0x1bd:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
087203e2 +0x1c2:  mov    -0x1c(%ebp),%eax
087203e5 +0x1c5:  mov    %eax,0x34(%ebx)
087203e8 +0x1c8:  sub    $0x4,%esp
087203eb +0x1cb:  lea    -0xc(%ebp),%esp
087203ee +0x1ce:  pop    %ebx
087203ef +0x1cf:  pop    %esi
087203f0 +0x1d0:  pop    %edi
087203f1 +0x1d1:  pop    %ebp
087203f2 +0x1d2:  ret
087203f3 +0x1d3:  nop
087203f4 +0x1d4:  lea    0x0(%esi,%eiz,1),%esi
087203f8 +0x1d8:  mov    %esi,0x4(%esp)
087203fc +0x1dc:  movl   $0x40004,(%esp)
08720403 +0x1e3:  call   0807de10 <_init+0x708>
08720408 +0x1e8:  mov    %eax,0x8(%edi)
0872040b +0x1eb:  mov    0x8(%ebx),%edi
0872040e +0x1ee:  mov    0x8(%edi),%eax
08720411 +0x1f1:  mov    %eax,(%esp)
08720414 +0x1f4:  call   0807e3b0 <_init+0xca8>
08720419 +0x1f9:  cmpb   $0x0,0x11(%edi)
0872041d +0x1fd:  mov    %eax,0xc(%edi)
08720420 +0x200:  je     087202c5 <+0xa5>
08720426 +0x206:  mov    %esi,0x4(%esp)
0872042a +0x20a:  movl   $0x40007,(%esp)
08720431 +0x211:  call   0807de10 <_init+0x708>
08720436 +0x216:  movsbl (%eax),%eax
08720439 +0x219:  mov    %eax,0x2c(%edi)
0872043c +0x21c:  jmp    087202d0 <+0xb0>
08720441 +0x221:  lea    0x0(%esi,%eiz,1),%esi
08720448 +0x228:  movb   $0x2e,0x11(%edi)
0872044c +0x22c:  mov    0x8(%ebx),%eax
0872044f +0x22f:  mov    &_ZNSt10money_base18_S_default_patternE,%edx
08720455 +0x235:  movb   $0x2c,0x12(%eax)
08720459 +0x239:  mov    0x8(%ebx),%eax
0872045c +0x23c:  mov    &_ZNSt10money_base8_S_atomsE,%esi
08720462 +0x242:  movl   $&data#2fb52a47(.rodata),0x8(%eax)
08720469 +0x249:  movl   $0x0,0xc(%eax)
08720470 +0x250:  movb   $0x0,0x10(%eax)
08720474 +0x254:  movl   $&data#2fb52a47(.rodata),0x14(%eax)
0872047b +0x25b:  movl   $0x0,0x18(%eax)
08720482 +0x262:  movl   $&data#2fb52a47(.rodata),0x1c(%eax)
08720489 +0x269:  movl   $0x0,0x20(%eax)
08720490 +0x270:  movl   $&data#2fb52a47(.rodata),0x24(%eax)
08720497 +0x277:  movl   $0x0,0x28(%eax)
0872049e +0x27e:  movl   $0x0,0x2c(%eax)
087204a5 +0x285:  mov    %edx,0x30(%eax)
087204a8 +0x288:  mov    0x8(%ebx),%eax
087204ab +0x28b:  mov    %edx,0x34(%eax)
087204ae +0x28e:  xor    %eax,%eax
087204b0 +0x290:  movzbl (%esi,%eax,1),%ecx
087204b4 +0x294:  mov    0x8(%ebx),%edx
087204b7 +0x297:  mov    %cl,0x38(%edx,%eax,1)
087204bb +0x29b:  add    $0x1,%eax
087204be +0x29e:  cmp    $0xb,%eax
087204c1 +0x2a1:  jne    087204b0 <+0x290>
087204c3 +0x2a3:  lea    -0xc(%ebp),%esp
087204c6 +0x2a6:  pop    %ebx
087204c7 +0x2a7:  pop    %esi
087204c8 +0x2a8:  pop    %edi
087204c9 +0x2a9:  pop    %ebp
087204ca +0x2aa:  ret
087204cb +0x2ab:  nop
087204cc +0x2ac:  lea    0x0(%esi,%eiz,1),%esi
087204d0 +0x2b0:  mov    0x8(%ebx),%edi
087204d3 +0x2b3:  mov    %dl,-0x28(%ebp)
087204d6 +0x2b6:  mov    %esi,0x4(%esp)
087204da +0x2ba:  movl   $0x40006,(%esp)
087204e1 +0x2c1:  call   0807de10 <_init+0x708>
087204e6 +0x2c6:  movzbl -0x28(%ebp),%edx
087204ea +0x2ca:  mov    %eax,0x24(%edi)
087204ed +0x2cd:  mov    0x8(%ebx),%edi
087204f0 +0x2d0:  jmp    087202f5 <+0xd5>
087204f5 +0x2d5:  lea    0x0(%esi),%esi
087204f8 +0x2d8:  movl   $0x44,(%esp)
087204ff +0x2df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08720504 +0x2e4:  movb   $0x0,0x11(%eax)
08720508 +0x2e8:  mov    %eax,%edi
0872050a +0x2ea:  movb   $0x0,0x12(%eax)
0872050e +0x2ee:  movb   $0x0,0x30(%eax)
08720512 +0x2f2:  movb   $0x0,0x31(%eax)
08720516 +0x2f6:  movb   $0x0,0x32(%eax)
0872051a +0x2fa:  movb   $0x0,0x33(%eax)
0872051e +0x2fe:  movb   $0x0,0x34(%eax)
08720522 +0x302:  movb   $0x0,0x35(%eax)
08720526 +0x306:  movb   $0x0,0x36(%eax)
0872052a +0x30a:  movb   $0x0,0x37(%eax)
0872052e +0x30e:  movl   $0x0,0x4(%eax)
08720535 +0x315:  movl   $&_ZTVSt18__moneypunct_cacheIcLb1EE+0x8,(%eax)
0872053b +0x31b:  movl   $0x0,0x8(%eax)
08720542 +0x322:  movl   $0x0,0xc(%eax)
08720549 +0x329:  movb   $0x0,0x10(%eax)
0872054d +0x32d:  movl   $0x0,0x14(%eax)
08720554 +0x334:  movl   $0x0,0x18(%eax)
0872055b +0x33b:  movl   $0x0,0x1c(%eax)
08720562 +0x342:  movl   $0x0,0x20(%eax)
08720569 +0x349:  movl   $0x0,0x24(%eax)
08720570 +0x350:  movl   $0x0,0x28(%eax)
08720577 +0x357:  movl   $0x0,0x2c(%eax)
0872057e +0x35e:  movb   $0x0,0x43(%eax)
08720582 +0x362:  mov    %eax,0x8(%ebx)
08720585 +0x365:  jmp    0872023a <+0x1a>
0872058a +0x36a:  nop
0872058b +0x36b:  nop
0872058c +0x36c:  nop
0872058d +0x36d:  nop
0872058e +0x36e:  nop
0872058f +0x36f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x8720220

/* std::moneypunct<char, true>::_M_initialize_moneypunct(__locale_struct*, char const*) */

void std::moneypunct<char,true>::_M_initialize_moneypunct(__locale_struct *param_1,char *param_2)

{
  __locale_data _Var1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  __locale_data *p_Var6;
  undefined4 uVar7;
  size_t sVar8;
  char *pcVar9;
  int iVar10;
  __locale_data *p_Var11;
  undefined4 local_20 [4];
  
  p_Var11 = param_1->__locales[2];
  if (p_Var11 == (__locale_data *)0x0) {
    p_Var11 = operator_new(0x44);
    p_Var11[0x11] = (__locale_data)0x0;
    p_Var11[0x12] = (__locale_data)0x0;
    p_Var11[0x30] = (__locale_data)0x0;
    p_Var11[0x31] = (__locale_data)0x0;
    p_Var11[0x32] = (__locale_data)0x0;
    p_Var11[0x33] = (__locale_data)0x0;
    p_Var11[0x34] = (__locale_data)0x0;
    p_Var11[0x35] = (__locale_data)0x0;
    p_Var11[0x36] = (__locale_data)0x0;
    p_Var11[0x37] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 4) = 0;
    *(undefined ***)p_Var11 = &PTR____moneypunct_cache_08cfef18;
    *(undefined4 *)(p_Var11 + 8) = 0;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 0x14) = 0;
    *(undefined4 *)(p_Var11 + 0x18) = 0;
    *(undefined4 *)(p_Var11 + 0x1c) = 0;
    *(undefined4 *)(p_Var11 + 0x20) = 0;
    *(undefined4 *)(p_Var11 + 0x24) = 0;
    *(undefined4 *)(p_Var11 + 0x28) = 0;
    *(undefined4 *)(p_Var11 + 0x2c) = 0;
    p_Var11[0x43] = (__locale_data)0x0;
    param_1->__locales[2] = p_Var11;
  }
  if (param_2 != (char *)0x0) {
    p_Var6 = (__locale_data *)__nl_langinfo_l(0x40002,param_2);
    p_Var11[0x11] = *p_Var6;
    p_Var11 = param_1->__locales[2];
    p_Var6 = (__locale_data *)__nl_langinfo_l(0x40003,param_2);
    p_Var11[0x12] = *p_Var6;
    p_Var11 = param_1->__locales[2];
    uVar7 = __nl_langinfo_l(0x40005,param_2);
    *(undefined4 *)(p_Var11 + 0x1c) = uVar7;
    p_Var11 = param_1->__locales[2];
    sVar8 = strlen(*(char **)(p_Var11 + 0x1c));
    *(size_t *)(p_Var11 + 0x20) = sVar8;
    if (p_Var11[0x12] == (__locale_data)0x0) {
      *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
      *(undefined4 *)(p_Var11 + 0xc) = 0;
      p_Var11[0x10] = (__locale_data)0x0;
      p_Var11[0x12] = (__locale_data)0x2c;
      p_Var11 = param_1->__locales[2];
      _Var1 = p_Var11[0x11];
    }
    else {
      uVar7 = __nl_langinfo_l(0x40004,param_2);
      *(undefined4 *)(p_Var11 + 8) = uVar7;
      p_Var11 = param_1->__locales[2];
      sVar8 = strlen(*(char **)(p_Var11 + 8));
      _Var1 = p_Var11[0x11];
      *(size_t *)(p_Var11 + 0xc) = sVar8;
    }
    if (_Var1 == (__locale_data)0x0) {
      *(undefined4 *)(p_Var11 + 0x2c) = 0;
      p_Var11[0x11] = (__locale_data)0x2e;
    }
    else {
      pcVar9 = (char *)__nl_langinfo_l(0x40007,param_2);
      *(int *)(p_Var11 + 0x2c) = (int)*pcVar9;
    }
    pcVar9 = (char *)__nl_langinfo_l(0x40015,param_2);
    cVar2 = *pcVar9;
    if (cVar2 == '\0') {
      p_Var11 = param_1->__locales[2];
      *(char **)(p_Var11 + 0x24) = "()";
    }
    else {
      p_Var11 = param_1->__locales[2];
      uVar7 = __nl_langinfo_l(0x40006,param_2);
      *(undefined4 *)(p_Var11 + 0x24) = uVar7;
      p_Var11 = param_1->__locales[2];
    }
    sVar8 = strlen(*(char **)(p_Var11 + 0x24));
    *(size_t *)(p_Var11 + 0x28) = sVar8;
    uVar7 = __nl_langinfo_l(0x40000,param_2);
    *(undefined4 *)(p_Var11 + 0x14) = uVar7;
    p_Var11 = param_1->__locales[2];
    sVar8 = strlen(*(char **)(p_Var11 + 0x14));
    *(size_t *)(p_Var11 + 0x18) = sVar8;
    pcVar9 = (char *)__nl_langinfo_l(0x40010,param_2);
    cVar3 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x40011,param_2);
    cVar4 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x40014,param_2);
    p_Var11 = param_1->__locales[2];
    money_base::_S_construct_pattern((money_base *)local_20,cVar3,cVar4,*pcVar9);
    *(undefined4 *)(p_Var11 + 0x30) = local_20[0];
    pcVar9 = (char *)__nl_langinfo_l(0x40012,param_2);
    cVar3 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x40013,param_2);
    p_Var11 = param_1->__locales[2];
    money_base::_S_construct_pattern((money_base *)local_20,cVar3,*pcVar9,cVar2);
    *(undefined4 *)(p_Var11 + 0x34) = local_20[0];
    return;
  }
  p_Var11[0x11] = (__locale_data)0x2e;
  uVar7 = money_base::_S_default_pattern;
  param_1->__locales[2][0x12] = (__locale_data)0x2c;
  puVar5 = money_base::_S_atoms;
  p_Var11 = param_1->__locales[2];
  *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
  *(undefined4 *)(p_Var11 + 0xc) = 0;
  p_Var11[0x10] = (__locale_data)0x0;
  *(undefined1 **)(p_Var11 + 0x14) = &DAT_08d0c9a4;
  *(undefined4 *)(p_Var11 + 0x18) = 0;
  *(undefined1 **)(p_Var11 + 0x1c) = &DAT_08d0c9a4;
  *(undefined4 *)(p_Var11 + 0x20) = 0;
  *(undefined1 **)(p_Var11 + 0x24) = &DAT_08d0c9a4;
  *(undefined4 *)(p_Var11 + 0x28) = 0;
  *(undefined4 *)(p_Var11 + 0x2c) = 0;
  *(undefined4 *)(p_Var11 + 0x30) = uVar7;
  *(undefined4 *)(param_1->__locales[2] + 0x34) = uVar7;
  iVar10 = 0;
  do {
    param_1->__locales[2][iVar10 + 0x38] = *(__locale_data *)(puVar5 + iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xb);
  return;
}
```
