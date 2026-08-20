# _M_initialize_moneypunct

`_ZNSt10moneypunctIcLb0EE24_M_initialize_moneypunctEP15__locale_structPKc`

`std::moneypunct<char, false>::_M_initialize_moneypunct(__locale_struct*, char const*)`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, false>` | `0x0871feb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871feb0  _ZNSt10moneypunctIcLb0EE24_M_initialize_moneypunctEP15__locale_structPKc
#           std::moneypunct<char, false>::_M_initialize_moneypunct(__locale_struct*, char const*)
# range [0x0871feb0, 0x0872021f]
0871feb0 +0x000:  push   %ebp
0871feb1 +0x001:  mov    %esp,%ebp
0871feb3 +0x003:  push   %edi
0871feb4 +0x004:  push   %esi
0871feb5 +0x005:  push   %ebx
0871feb6 +0x006:  sub    $0x3c,%esp
0871feb9 +0x009:  mov    0x8(%ebp),%ebx
0871febc +0x00c:  mov    0xc(%ebp),%esi
0871febf +0x00f:  mov    0x8(%ebx),%edi
0871fec2 +0x012:  test   %edi,%edi
0871fec4 +0x014:  je     08720188 <+0x2d8>
0871feca +0x01a:  test   %esi,%esi
0871fecc +0x01c:  je     087200d8 <+0x228>
0871fed2 +0x022:  mov    %esi,0x4(%esp)
0871fed6 +0x026:  movl   $0x40002,(%esp)
0871fedd +0x02d:  call   0807de10 <_init+0x708>
0871fee2 +0x032:  movzbl (%eax),%eax
0871fee5 +0x035:  mov    %al,0x11(%edi)
0871fee8 +0x038:  mov    0x8(%ebx),%edi
0871feeb +0x03b:  mov    %esi,0x4(%esp)
0871feef +0x03f:  movl   $0x40003,(%esp)
0871fef6 +0x046:  call   0807de10 <_init+0x708>
0871fefb +0x04b:  movzbl (%eax),%eax
0871fefe +0x04e:  mov    %al,0x12(%edi)
0871ff01 +0x051:  mov    0x8(%ebx),%edi
0871ff04 +0x054:  mov    %esi,0x4(%esp)
0871ff08 +0x058:  movl   $0x40005,(%esp)
0871ff0f +0x05f:  call   0807de10 <_init+0x708>
0871ff14 +0x064:  mov    %eax,0x1c(%edi)
0871ff17 +0x067:  mov    0x8(%ebx),%edi
0871ff1a +0x06a:  mov    0x1c(%edi),%eax
0871ff1d +0x06d:  mov    %eax,(%esp)
0871ff20 +0x070:  call   0807e3b0 <_init+0xca8>
0871ff25 +0x075:  cmpb   $0x0,0x12(%edi)
0871ff29 +0x079:  mov    %eax,0x20(%edi)
0871ff2c +0x07c:  jne    08720088 <+0x1d8>
0871ff32 +0x082:  movl   $&data#2fb52a47(.rodata),0x8(%edi)
0871ff39 +0x089:  movl   $0x0,0xc(%edi)
0871ff40 +0x090:  movb   $0x0,0x10(%edi)
0871ff44 +0x094:  movb   $0x2c,0x12(%edi)
0871ff48 +0x098:  mov    0x8(%ebx),%edi
0871ff4b +0x09b:  cmpb   $0x0,0x11(%edi)
0871ff4f +0x09f:  jne    087200b6 <+0x206>
0871ff55 +0x0a5:  movl   $0x0,0x2c(%edi)
0871ff5c +0x0ac:  movb   $0x2e,0x11(%edi)
0871ff60 +0x0b0:  mov    %esi,0x4(%esp)
0871ff64 +0x0b4:  movl   $0x4000e,(%esp)
0871ff6b +0x0bb:  call   0807de10 <_init+0x708>
0871ff70 +0x0c0:  movzbl (%eax),%edx
0871ff73 +0x0c3:  test   %dl,%dl
0871ff75 +0x0c5:  jne    08720160 <+0x2b0>
0871ff7b +0x0cb:  mov    0x8(%ebx),%edi
0871ff7e +0x0ce:  movl   $"()",0x24(%edi)
0871ff85 +0x0d5:  mov    0x24(%edi),%eax
0871ff88 +0x0d8:  mov    %dl,-0x28(%ebp)
0871ff8b +0x0db:  mov    %eax,(%esp)
0871ff8e +0x0de:  call   0807e3b0 <_init+0xca8>
0871ff93 +0x0e3:  mov    %eax,0x28(%edi)
0871ff96 +0x0e6:  mov    %esi,0x4(%esp)
0871ff9a +0x0ea:  movl   $0x40001,(%esp)
0871ffa1 +0x0f1:  call   0807de10 <_init+0x708>
0871ffa6 +0x0f6:  mov    %eax,0x14(%edi)
0871ffa9 +0x0f9:  mov    0x8(%ebx),%edi
0871ffac +0x0fc:  mov    0x14(%edi),%eax
0871ffaf +0x0ff:  mov    %eax,(%esp)
0871ffb2 +0x102:  call   0807e3b0 <_init+0xca8>
0871ffb7 +0x107:  mov    %eax,0x18(%edi)
0871ffba +0x10a:  lea    -0x1c(%ebp),%edi
0871ffbd +0x10d:  mov    %esi,0x4(%esp)
0871ffc1 +0x111:  movl   $0x40009,(%esp)
0871ffc8 +0x118:  call   0807de10 <_init+0x708>
0871ffcd +0x11d:  movsbl (%eax),%eax
0871ffd0 +0x120:  mov    %esi,0x4(%esp)
0871ffd4 +0x124:  movl   $0x4000a,(%esp)
0871ffdb +0x12b:  mov    %eax,-0x24(%ebp)
0871ffde +0x12e:  call   0807de10 <_init+0x708>
0871ffe3 +0x133:  movsbl (%eax),%eax
0871ffe6 +0x136:  mov    %esi,0x4(%esp)
0871ffea +0x13a:  movl   $0x4000d,(%esp)
0871fff1 +0x141:  mov    %eax,-0x20(%ebp)
0871fff4 +0x144:  call   0807de10 <_init+0x708>
0871fff9 +0x149:  mov    0x8(%ebx),%ecx
0871fffc +0x14c:  movsbl (%eax),%eax
0871ffff +0x14f:  mov    %ecx,-0x2c(%ebp)
08720002 +0x152:  mov    %edi,(%esp)
08720005 +0x155:  mov    %eax,0xc(%esp)
08720009 +0x159:  mov    -0x20(%ebp),%eax
0872000c +0x15c:  mov    %eax,0x8(%esp)
08720010 +0x160:  mov    -0x24(%ebp),%eax
08720013 +0x163:  mov    %eax,0x4(%esp)
08720017 +0x167:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
0872001c +0x16c:  mov    -0x2c(%ebp),%ecx
0872001f +0x16f:  mov    -0x1c(%ebp),%eax
08720022 +0x172:  mov    %eax,0x30(%ecx)
08720025 +0x175:  sub    $0x4,%esp
08720028 +0x178:  mov    %esi,0x4(%esp)
0872002c +0x17c:  movl   $0x4000b,(%esp)
08720033 +0x183:  call   0807de10 <_init+0x708>
08720038 +0x188:  movsbl (%eax),%eax
0872003b +0x18b:  mov    %esi,0x4(%esp)
0872003f +0x18f:  movl   $0x4000c,(%esp)
08720046 +0x196:  mov    %eax,-0x20(%ebp)
08720049 +0x199:  call   0807de10 <_init+0x708>
0872004e +0x19e:  movzbl -0x28(%ebp),%edx
08720052 +0x1a2:  mov    0x8(%ebx),%ebx
08720055 +0x1a5:  movsbl %dl,%edx
08720058 +0x1a8:  mov    %edx,0xc(%esp)
0872005c +0x1ac:  movsbl (%eax),%eax
0872005f +0x1af:  mov    %edi,(%esp)
08720062 +0x1b2:  mov    %eax,0x8(%esp)
08720066 +0x1b6:  mov    -0x20(%ebp),%eax
08720069 +0x1b9:  mov    %eax,0x4(%esp)
0872006d +0x1bd:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
08720072 +0x1c2:  mov    -0x1c(%ebp),%eax
08720075 +0x1c5:  mov    %eax,0x34(%ebx)
08720078 +0x1c8:  sub    $0x4,%esp
0872007b +0x1cb:  lea    -0xc(%ebp),%esp
0872007e +0x1ce:  pop    %ebx
0872007f +0x1cf:  pop    %esi
08720080 +0x1d0:  pop    %edi
08720081 +0x1d1:  pop    %ebp
08720082 +0x1d2:  ret
08720083 +0x1d3:  nop
08720084 +0x1d4:  lea    0x0(%esi,%eiz,1),%esi
08720088 +0x1d8:  mov    %esi,0x4(%esp)
0872008c +0x1dc:  movl   $0x40004,(%esp)
08720093 +0x1e3:  call   0807de10 <_init+0x708>
08720098 +0x1e8:  mov    %eax,0x8(%edi)
0872009b +0x1eb:  mov    0x8(%ebx),%edi
0872009e +0x1ee:  mov    0x8(%edi),%eax
087200a1 +0x1f1:  mov    %eax,(%esp)
087200a4 +0x1f4:  call   0807e3b0 <_init+0xca8>
087200a9 +0x1f9:  cmpb   $0x0,0x11(%edi)
087200ad +0x1fd:  mov    %eax,0xc(%edi)
087200b0 +0x200:  je     0871ff55 <+0xa5>
087200b6 +0x206:  mov    %esi,0x4(%esp)
087200ba +0x20a:  movl   $0x40008,(%esp)
087200c1 +0x211:  call   0807de10 <_init+0x708>
087200c6 +0x216:  movsbl (%eax),%eax
087200c9 +0x219:  mov    %eax,0x2c(%edi)
087200cc +0x21c:  jmp    0871ff60 <+0xb0>
087200d1 +0x221:  lea    0x0(%esi,%eiz,1),%esi
087200d8 +0x228:  movb   $0x2e,0x11(%edi)
087200dc +0x22c:  mov    0x8(%ebx),%eax
087200df +0x22f:  mov    &_ZNSt10money_base18_S_default_patternE,%edx
087200e5 +0x235:  movb   $0x2c,0x12(%eax)
087200e9 +0x239:  mov    0x8(%ebx),%eax
087200ec +0x23c:  mov    &_ZNSt10money_base8_S_atomsE,%esi
087200f2 +0x242:  movl   $&data#2fb52a47(.rodata),0x8(%eax)
087200f9 +0x249:  movl   $0x0,0xc(%eax)
08720100 +0x250:  movb   $0x0,0x10(%eax)
08720104 +0x254:  movl   $&data#2fb52a47(.rodata),0x14(%eax)
0872010b +0x25b:  movl   $0x0,0x18(%eax)
08720112 +0x262:  movl   $&data#2fb52a47(.rodata),0x1c(%eax)
08720119 +0x269:  movl   $0x0,0x20(%eax)
08720120 +0x270:  movl   $&data#2fb52a47(.rodata),0x24(%eax)
08720127 +0x277:  movl   $0x0,0x28(%eax)
0872012e +0x27e:  movl   $0x0,0x2c(%eax)
08720135 +0x285:  mov    %edx,0x30(%eax)
08720138 +0x288:  mov    0x8(%ebx),%eax
0872013b +0x28b:  mov    %edx,0x34(%eax)
0872013e +0x28e:  xor    %eax,%eax
08720140 +0x290:  movzbl (%esi,%eax,1),%ecx
08720144 +0x294:  mov    0x8(%ebx),%edx
08720147 +0x297:  mov    %cl,0x38(%edx,%eax,1)
0872014b +0x29b:  add    $0x1,%eax
0872014e +0x29e:  cmp    $0xb,%eax
08720151 +0x2a1:  jne    08720140 <+0x290>
08720153 +0x2a3:  lea    -0xc(%ebp),%esp
08720156 +0x2a6:  pop    %ebx
08720157 +0x2a7:  pop    %esi
08720158 +0x2a8:  pop    %edi
08720159 +0x2a9:  pop    %ebp
0872015a +0x2aa:  ret
0872015b +0x2ab:  nop
0872015c +0x2ac:  lea    0x0(%esi,%eiz,1),%esi
08720160 +0x2b0:  mov    0x8(%ebx),%edi
08720163 +0x2b3:  mov    %dl,-0x28(%ebp)
08720166 +0x2b6:  mov    %esi,0x4(%esp)
0872016a +0x2ba:  movl   $0x40006,(%esp)
08720171 +0x2c1:  call   0807de10 <_init+0x708>
08720176 +0x2c6:  movzbl -0x28(%ebp),%edx
0872017a +0x2ca:  mov    %eax,0x24(%edi)
0872017d +0x2cd:  mov    0x8(%ebx),%edi
08720180 +0x2d0:  jmp    0871ff85 <+0xd5>
08720185 +0x2d5:  lea    0x0(%esi),%esi
08720188 +0x2d8:  movl   $0x44,(%esp)
0872018f +0x2df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08720194 +0x2e4:  movb   $0x0,0x11(%eax)
08720198 +0x2e8:  mov    %eax,%edi
0872019a +0x2ea:  movb   $0x0,0x12(%eax)
0872019e +0x2ee:  movb   $0x0,0x30(%eax)
087201a2 +0x2f2:  movb   $0x0,0x31(%eax)
087201a6 +0x2f6:  movb   $0x0,0x32(%eax)
087201aa +0x2fa:  movb   $0x0,0x33(%eax)
087201ae +0x2fe:  movb   $0x0,0x34(%eax)
087201b2 +0x302:  movb   $0x0,0x35(%eax)
087201b6 +0x306:  movb   $0x0,0x36(%eax)
087201ba +0x30a:  movb   $0x0,0x37(%eax)
087201be +0x30e:  movl   $0x0,0x4(%eax)
087201c5 +0x315:  movl   $&_ZTVSt18__moneypunct_cacheIcLb0EE+0x8,(%eax)
087201cb +0x31b:  movl   $0x0,0x8(%eax)
087201d2 +0x322:  movl   $0x0,0xc(%eax)
087201d9 +0x329:  movb   $0x0,0x10(%eax)
087201dd +0x32d:  movl   $0x0,0x14(%eax)
087201e4 +0x334:  movl   $0x0,0x18(%eax)
087201eb +0x33b:  movl   $0x0,0x1c(%eax)
087201f2 +0x342:  movl   $0x0,0x20(%eax)
087201f9 +0x349:  movl   $0x0,0x24(%eax)
08720200 +0x350:  movl   $0x0,0x28(%eax)
08720207 +0x357:  movl   $0x0,0x2c(%eax)
0872020e +0x35e:  movb   $0x0,0x43(%eax)
08720212 +0x362:  mov    %eax,0x8(%ebx)
08720215 +0x365:  jmp    0871feca <+0x1a>
0872021a +0x36a:  nop
0872021b +0x36b:  nop
0872021c +0x36c:  nop
0872021d +0x36d:  nop
0872021e +0x36e:  nop
0872021f +0x36f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x871feb0

/* std::moneypunct<char, false>::_M_initialize_moneypunct(__locale_struct*, char const*) */

void std::moneypunct<char,false>::_M_initialize_moneypunct(__locale_struct *param_1,char *param_2)

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
    *(undefined ***)p_Var11 = &PTR____moneypunct_cache_08cfef28;
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
      pcVar9 = (char *)__nl_langinfo_l(0x40008,param_2);
      *(int *)(p_Var11 + 0x2c) = (int)*pcVar9;
    }
    pcVar9 = (char *)__nl_langinfo_l(0x4000e,param_2);
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
    uVar7 = __nl_langinfo_l(0x40001,param_2);
    *(undefined4 *)(p_Var11 + 0x14) = uVar7;
    p_Var11 = param_1->__locales[2];
    sVar8 = strlen(*(char **)(p_Var11 + 0x14));
    *(size_t *)(p_Var11 + 0x18) = sVar8;
    pcVar9 = (char *)__nl_langinfo_l(0x40009,param_2);
    cVar3 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x4000a,param_2);
    cVar4 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x4000d,param_2);
    p_Var11 = param_1->__locales[2];
    money_base::_S_construct_pattern((money_base *)local_20,cVar3,cVar4,*pcVar9);
    *(undefined4 *)(p_Var11 + 0x30) = local_20[0];
    pcVar9 = (char *)__nl_langinfo_l(0x4000b,param_2);
    cVar3 = *pcVar9;
    pcVar9 = (char *)__nl_langinfo_l(0x4000c,param_2);
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
