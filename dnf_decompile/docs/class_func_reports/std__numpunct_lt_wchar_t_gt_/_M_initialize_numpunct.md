# _M_initialize_numpunct

`_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct`

`std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*)`

| 类 | 地址 |
|---|---|
| `std::numpunct<wchar_t>` | `0x08721150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08721150  _ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct
#           std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*)
# range [0x08721150, 0x087212cf]
08721150 +0x000:  push   %ebp
08721151 +0x001:  mov    %esp,%ebp
08721153 +0x003:  push   %edi
08721154 +0x004:  push   %esi
08721155 +0x005:  push   %ebx
08721156 +0x006:  sub    $0x1c,%esp
08721159 +0x009:  mov    0x8(%ebp),%esi
0872115c +0x00c:  mov    0xc(%ebp),%edi
0872115f +0x00f:  mov    0x8(%esi),%eax
08721162 +0x012:  test   %eax,%eax
08721164 +0x014:  je     08721268 <+0x118>
0872116a +0x01a:  test   %edi,%edi
0872116c +0x01c:  je     08721208 <+0xb8>
08721172 +0x022:  mov    %edi,0x4(%esp)
08721176 +0x026:  movl   $&_ZL14gUnicodeBuffer+0x5ad7,(%esp)
0872117d +0x02d:  call   0807de10 <_init+0x708>
08721182 +0x032:  mov    0x8(%esi),%edx
08721185 +0x035:  mov    %eax,0x24(%edx)
08721188 +0x038:  mov    %edi,0x4(%esp)
0872118c +0x03c:  movl   $&_ZL14gUnicodeBuffer+0x5ad8,(%esp)
08721193 +0x043:  call   0807de10 <_init+0x708>
08721198 +0x048:  mov    0x8(%esi),%ebx
0872119b +0x04b:  test   %eax,%eax
0872119d +0x04d:  mov    %eax,0x28(%ebx)
087211a0 +0x050:  jne    087211e0 <+0x90>
087211a2 +0x052:  movl   $&data#2fb52a47(.rodata),0x8(%ebx)
087211a9 +0x059:  movl   $0x0,0xc(%ebx)
087211b0 +0x060:  movb   $0x0,0x10(%ebx)
087211b4 +0x064:  movl   $0x2c,0x28(%ebx)
087211bb +0x06b:  movl   $"t",0x14(%ebx)
087211c2 +0x072:  movl   $0x4,0x18(%ebx)
087211c9 +0x079:  movl   $"f",0x1c(%ebx)
087211d0 +0x080:  movl   $0x5,0x20(%ebx)
087211d7 +0x087:  add    $0x1c,%esp
087211da +0x08a:  pop    %ebx
087211db +0x08b:  pop    %esi
087211dc +0x08c:  pop    %edi
087211dd +0x08d:  pop    %ebp
087211de +0x08e:  ret
087211df +0x08f:  nop
087211e0 +0x090:  mov    %edi,0x4(%esp)
087211e4 +0x094:  movl   $&_ZL14gUnicodeBuffer+0x5ad6,(%esp)
087211eb +0x09b:  call   0807de10 <_init+0x708>
087211f0 +0x0a0:  mov    %eax,0x8(%ebx)
087211f3 +0x0a3:  mov    0x8(%esi),%ebx
087211f6 +0x0a6:  mov    0x8(%ebx),%eax
087211f9 +0x0a9:  mov    %eax,(%esp)
087211fc +0x0ac:  call   0807e3b0 <_init+0xca8>
08721201 +0x0b1:  mov    %eax,0xc(%ebx)
08721204 +0x0b4:  jmp    087211bb <+0x6b>
08721206 +0x0b6:  xchg   %ax,%ax
08721208 +0x0b8:  mov    0x8(%esi),%ebx
0872120b +0x0bb:  xor    %eax,%eax
0872120d +0x0bd:  mov    &_ZNSt10__num_base12_S_atoms_outE,%ecx
08721213 +0x0c3:  movl   $&data#2fb52a47(.rodata),0x8(%ebx)
0872121a +0x0ca:  movl   $0x0,0xc(%ebx)
08721221 +0x0d1:  movb   $0x0,0x10(%ebx)
08721225 +0x0d5:  movl   $0x2e,0x24(%ebx)
0872122c +0x0dc:  movl   $0x2c,0x28(%ebx)
08721233 +0x0e3:  nop
08721234 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
08721238 +0x0e8:  movsbl (%ecx,%eax,1),%edx
0872123c +0x0ec:  mov    %edx,0x2c(%ebx,%eax,4)
08721240 +0x0f0:  add    $0x1,%eax
08721243 +0x0f3:  cmp    $0x24,%eax
08721246 +0x0f6:  jne    08721238 <+0xe8>
08721248 +0x0f8:  mov    &_ZNSt10__num_base11_S_atoms_inE,%ecx
0872124e +0x0fe:  xor    %al,%al
08721250 +0x100:  movsbl (%ecx,%eax,1),%edx
08721254 +0x104:  mov    %edx,0xbc(%ebx,%eax,4)
0872125b +0x10b:  add    $0x1,%eax
0872125e +0x10e:  cmp    $0x1a,%eax
08721261 +0x111:  jne    08721250 <+0x100>
08721263 +0x113:  jmp    087211bb <+0x6b>
08721268 +0x118:  movl   $0x128,(%esp)
0872126f +0x11f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08721274 +0x124:  movl   $0x0,0x4(%eax)
0872127b +0x12b:  movl   $&_ZTVSt16__numpunct_cacheIwE+0x8,(%eax)
08721281 +0x131:  movl   $0x0,0x8(%eax)
08721288 +0x138:  movl   $0x0,0xc(%eax)
0872128f +0x13f:  movb   $0x0,0x10(%eax)
08721293 +0x143:  movl   $0x0,0x14(%eax)
0872129a +0x14a:  movl   $0x0,0x18(%eax)
087212a1 +0x151:  movl   $0x0,0x1c(%eax)
087212a8 +0x158:  movl   $0x0,0x20(%eax)
087212af +0x15f:  movl   $0x0,0x24(%eax)
087212b6 +0x166:  movl   $0x0,0x28(%eax)
087212bd +0x16d:  movb   $0x0,0x124(%eax)
087212c4 +0x174:  mov    %eax,0x8(%esi)
087212c7 +0x177:  jmp    0872116a <+0x1a>
087212cc +0x17c:  nop
087212cd +0x17d:  nop
087212ce +0x17e:  nop
087212cf +0x17f:  nop
```

## 反编译 C

```c
// std::numpunct<wchar_t>::_M_initialize_numpunct @ 0x8721150

/* std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*) */

void __thiscall
std::numpunct<wchar_t>::_M_initialize_numpunct(numpunct<wchar_t> *this,__locale_struct *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(this + 8) == 0) {
    puVar6 = operator_new(0x128);
    puVar6[1] = 0;
    *puVar6 = &PTR____numpunct_cache_08d00698;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0x49) = 0;
    *(undefined4 **)(this + 8) = puVar6;
  }
  puVar2 = __num_base::_S_atoms_out;
  if (param_1 == (__locale_struct *)0x0) {
    iVar7 = *(int *)(this + 8);
    iVar4 = 0;
    *(undefined1 **)(iVar7 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined1 *)(iVar7 + 0x10) = 0;
    *(undefined4 *)(iVar7 + 0x24) = 0x2e;
    *(undefined4 *)(iVar7 + 0x28) = 0x2c;
    do {
      *(int *)(iVar7 + 0x2c + iVar4 * 4) = (int)(char)puVar2[iVar4];
      puVar1 = __num_base::_S_atoms_in;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x24);
    iVar4 = 0;
    do {
      *(int *)(iVar7 + 0xbc + iVar4 * 4) = (int)(char)puVar1[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
  }
  else {
    uVar3 = __nl_langinfo_l(0x10003,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x24) = uVar3;
    iVar4 = __nl_langinfo_l(0x10004,param_1);
    iVar7 = *(int *)(this + 8);
    *(int *)(iVar7 + 0x28) = iVar4;
    if (iVar4 == 0) {
      *(undefined1 **)(iVar7 + 8) = &DAT_08d0c9a4;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined1 *)(iVar7 + 0x10) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0x2c;
    }
    else {
      uVar3 = __nl_langinfo_l(0x10002,param_1);
      *(undefined4 *)(iVar7 + 8) = uVar3;
      iVar7 = *(int *)(this + 8);
      sVar5 = strlen(*(char **)(iVar7 + 8));
      *(size_t *)(iVar7 + 0xc) = sVar5;
    }
  }
  *(undefined **)(iVar7 + 0x14) = &DAT_08d01198;
  *(undefined4 *)(iVar7 + 0x18) = 4;
  *(wchar_t **)(iVar7 + 0x1c) = L"false";
  *(undefined4 *)(iVar7 + 0x20) = 5;
  return;
}
```
