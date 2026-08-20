# _M_initialize_numpunct

`_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct`

`std::numpunct<char>::_M_initialize_numpunct(__locale_struct*)`

| 类 | 地址 |
|---|---|
| `std::numpunct<char>` | `0x087212d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087212d0  _ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct
#           std::numpunct<char>::_M_initialize_numpunct(__locale_struct*)
# range [0x087212d0, 0x0872144f]
087212d0 +0x000:  push   %ebp
087212d1 +0x001:  mov    %esp,%ebp
087212d3 +0x003:  push   %edi
087212d4 +0x004:  push   %esi
087212d5 +0x005:  push   %ebx
087212d6 +0x006:  sub    $0x1c,%esp
087212d9 +0x009:  mov    0x8(%ebp),%ebx
087212dc +0x00c:  mov    0xc(%ebp),%edi
087212df +0x00f:  mov    0x8(%ebx),%esi
087212e2 +0x012:  test   %esi,%esi
087212e4 +0x014:  je     087213f0 <+0x120>
087212ea +0x01a:  test   %edi,%edi
087212ec +0x01c:  je     08721390 <+0xc0>
087212f2 +0x022:  mov    %edi,0x4(%esp)
087212f6 +0x026:  movl   $&_ZL14gUnicodeBuffer+0x5ad4,(%esp)
087212fd +0x02d:  call   0807de10 <_init+0x708>
08721302 +0x032:  movzbl (%eax),%eax
08721305 +0x035:  mov    %al,0x24(%esi)
08721308 +0x038:  mov    0x8(%ebx),%esi
0872130b +0x03b:  mov    %edi,0x4(%esp)
0872130f +0x03f:  movl   $&_ZL14gUnicodeBuffer+0x5ad5,(%esp)
08721316 +0x046:  call   0807de10 <_init+0x708>
0872131b +0x04b:  movzbl (%eax),%eax
0872131e +0x04e:  mov    %al,0x25(%esi)
08721321 +0x051:  mov    0x8(%ebx),%esi
08721324 +0x054:  cmpb   $0x0,0x25(%esi)
08721328 +0x058:  jne    08721368 <+0x98>
0872132a +0x05a:  movl   $&data#2fb52a47(.rodata),0x8(%esi)
08721331 +0x061:  movl   $0x0,0xc(%esi)
08721338 +0x068:  movb   $0x0,0x10(%esi)
0872133c +0x06c:  movb   $0x2c,0x25(%esi)
08721340 +0x070:  mov    0x8(%ebx),%ebx
08721343 +0x073:  movl   $"true",0x14(%ebx)
0872134a +0x07a:  movl   $0x4,0x18(%ebx)
08721351 +0x081:  movl   $"false",0x1c(%ebx)
08721358 +0x088:  movl   $0x5,0x20(%ebx)
0872135f +0x08f:  add    $0x1c,%esp
08721362 +0x092:  pop    %ebx
08721363 +0x093:  pop    %esi
08721364 +0x094:  pop    %edi
08721365 +0x095:  pop    %ebp
08721366 +0x096:  ret
08721367 +0x097:  nop
08721368 +0x098:  mov    %edi,0x4(%esp)
0872136c +0x09c:  movl   $&_ZL14gUnicodeBuffer+0x5ad6,(%esp)
08721373 +0x0a3:  call   0807de10 <_init+0x708>
08721378 +0x0a8:  mov    0x8(%ebx),%ebx
0872137b +0x0ab:  mov    %eax,0x8(%esi)
0872137e +0x0ae:  mov    0x8(%ebx),%eax
08721381 +0x0b1:  mov    %eax,(%esp)
08721384 +0x0b4:  call   0807e3b0 <_init+0xca8>
08721389 +0x0b9:  mov    %eax,0xc(%ebx)
0872138c +0x0bc:  jmp    08721343 <+0x73>
0872138e +0x0be:  xchg   %ax,%ax
08721390 +0x0c0:  mov    0x8(%ebx),%eax
08721393 +0x0c3:  movl   $&data#2fb52a47(.rodata),0x8(%esi)
0872139a +0x0ca:  movb   $0x2e,0x24(%eax)
0872139e +0x0ce:  movl   $0x0,0xc(%eax)
087213a5 +0x0d5:  movb   $0x0,0x10(%eax)
087213a9 +0x0d9:  mov    0x8(%ebx),%eax
087213ac +0x0dc:  movb   $0x2c,0x25(%eax)
087213b0 +0x0e0:  mov    &_ZNSt10__num_base12_S_atoms_outE,%esi
087213b6 +0x0e6:  xor    %eax,%eax
087213b8 +0x0e8:  movzbl (%esi,%eax,1),%ecx
087213bc +0x0ec:  mov    0x8(%ebx),%edx
087213bf +0x0ef:  mov    %cl,0x26(%edx,%eax,1)
087213c3 +0x0f3:  add    $0x1,%eax
087213c6 +0x0f6:  cmp    $0x24,%eax
087213c9 +0x0f9:  jne    087213b8 <+0xe8>
087213cb +0x0fb:  mov    &_ZNSt10__num_base11_S_atoms_inE,%esi
087213d1 +0x101:  xor    %al,%al
087213d3 +0x103:  nop
087213d4 +0x104:  lea    0x0(%esi,%eiz,1),%esi
087213d8 +0x108:  movzbl (%esi,%eax,1),%ecx
087213dc +0x10c:  mov    0x8(%ebx),%edx
087213df +0x10f:  mov    %cl,0x4a(%edx,%eax,1)
087213e3 +0x113:  add    $0x1,%eax
087213e6 +0x116:  cmp    $0x1a,%eax
087213e9 +0x119:  jne    087213d8 <+0x108>
087213eb +0x11b:  jmp    08721340 <+0x70>
087213f0 +0x120:  movl   $0x68,(%esp)
087213f7 +0x127:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087213fc +0x12c:  movb   $0x0,0x24(%eax)
08721400 +0x130:  mov    %eax,%esi
08721402 +0x132:  movb   $0x0,0x25(%eax)
08721406 +0x136:  movl   $0x0,0x4(%eax)
0872140d +0x13d:  movl   $&_ZTVSt16__numpunct_cacheIcE+0x8,(%eax)
08721413 +0x143:  movl   $0x0,0x8(%eax)
0872141a +0x14a:  movl   $0x0,0xc(%eax)
08721421 +0x151:  movb   $0x0,0x10(%eax)
08721425 +0x155:  movl   $0x0,0x14(%eax)
0872142c +0x15c:  movl   $0x0,0x18(%eax)
08721433 +0x163:  movl   $0x0,0x1c(%eax)
0872143a +0x16a:  movl   $0x0,0x20(%eax)
08721441 +0x171:  movb   $0x0,0x64(%eax)
08721445 +0x175:  mov    %eax,0x8(%ebx)
08721448 +0x178:  jmp    087212ea <+0x1a>
0872144d +0x17d:  nop
0872144e +0x17e:  nop
0872144f +0x17f:  nop
```

## 反编译 C

```c
// std::numpunct<char>::_M_initialize_numpunct @ 0x87212d0

/* std::numpunct<char>::_M_initialize_numpunct(__locale_struct*) */

void __thiscall
std::numpunct<char>::_M_initialize_numpunct(numpunct<char> *this,__locale_struct *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = *(undefined4 **)(this + 8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = operator_new(0x68);
    *(undefined1 *)(puVar7 + 9) = 0;
    *(undefined1 *)((int)puVar7 + 0x25) = 0;
    puVar7[1] = 0;
    *puVar7 = &PTR____numpunct_cache_08cfef08;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    *(undefined1 *)(puVar7 + 0x19) = 0;
    *(undefined4 **)(this + 8) = puVar7;
  }
  if (param_1 == (__locale_struct *)0x0) {
    iVar6 = *(int *)(this + 8);
    puVar7[2] = &DAT_08d0c9a4;
    *(undefined1 *)(iVar6 + 0x24) = 0x2e;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    *(undefined1 *)(*(int *)(this + 8) + 0x25) = 0x2c;
    puVar2 = __num_base::_S_atoms_out;
    iVar6 = 0;
    do {
      *(undefined *)(*(int *)(this + 8) + 0x26 + iVar6) = puVar2[iVar6];
      puVar1 = __num_base::_S_atoms_in;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x24);
    iVar6 = 0;
    do {
      *(undefined *)(*(int *)(this + 8) + 0x4a + iVar6) = puVar1[iVar6];
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1a);
  }
  else {
    puVar3 = (undefined1 *)__nl_langinfo_l(0x10000,param_1);
    *(undefined1 *)(puVar7 + 9) = *puVar3;
    iVar6 = *(int *)(this + 8);
    puVar3 = (undefined1 *)__nl_langinfo_l(0x10001,param_1);
    *(undefined1 *)(iVar6 + 0x25) = *puVar3;
    iVar6 = *(int *)(this + 8);
    if (*(char *)(iVar6 + 0x25) != '\0') {
      uVar4 = __nl_langinfo_l(0x10002,param_1);
      iVar8 = *(int *)(this + 8);
      *(undefined4 *)(iVar6 + 8) = uVar4;
      sVar5 = strlen(*(char **)(iVar8 + 8));
      *(size_t *)(iVar8 + 0xc) = sVar5;
      goto LAB_08721343;
    }
    *(undefined1 **)(iVar6 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    *(undefined1 *)(iVar6 + 0x25) = 0x2c;
  }
  iVar8 = *(int *)(this + 8);
LAB_08721343:
  *(undefined1 **)(iVar8 + 0x14) = &DAT_08d0118c;
  *(undefined4 *)(iVar8 + 0x18) = 4;
  *(char **)(iVar8 + 0x1c) = "false";
  *(undefined4 *)(iVar8 + 0x20) = 5;
  return;
}
```
