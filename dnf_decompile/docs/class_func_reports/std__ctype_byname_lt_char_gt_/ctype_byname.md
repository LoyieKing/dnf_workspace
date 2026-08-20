# ctype_byname

`_ZNSt12ctype_bynameIcEC1EPKcj`

`std::ctype_byname<char>::ctype_byname(char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<char>` | `0x0872f370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f370  _ZNSt12ctype_bynameIcEC1EPKcj
#           std::ctype_byname<char>::ctype_byname(char const*, unsigned int)
# range [0x0872f370, 0x0872f46f]
0872f370 +0x00:  push   %ebp
0872f371 +0x01:  mov    %esp,%ebp
0872f373 +0x03:  sub    $0x28,%esp
0872f376 +0x06:  mov    %ebx,-0xc(%ebp)
0872f379 +0x09:  mov    0x10(%ebp),%eax
0872f37c +0x0c:  mov    0x8(%ebp),%ebx
0872f37f +0x0f:  mov    %esi,-0x8(%ebp)
0872f382 +0x12:  mov    %edi,-0x4(%ebp)
0872f385 +0x15:  mov    $"C",%edi
0872f38a +0x1a:  mov    %eax,0xc(%esp)
0872f38e +0x1e:  movl   $0x0,0x8(%esp)
0872f396 +0x26:  movl   $0x0,0x4(%esp)
0872f39e +0x2e:  mov    %ebx,(%esp)
0872f3a1 +0x31:  call   08726ba0 <_ZNSt5ctypeIcEC1EPKtbj>  ; std::ctype<char>::ctype(unsigned short const*, bool, unsigned int)
0872f3a6 +0x36:  mov    0xc(%ebp),%esi
0872f3a9 +0x39:  mov    $0x2,%ecx
0872f3ae +0x3e:  movl   $&_ZTVSt12ctype_bynameIcE+0x8,(%ebx)
0872f3b4 +0x44:  repz cmpsb %es:(%edi),%ds:(%esi)
0872f3b6 +0x46:  je     0872f3c9 <+0x59>
0872f3b8 +0x48:  mov    0xc(%ebp),%esi
0872f3bb +0x4b:  mov    $"POSIX",%edi
0872f3c0 +0x50:  mov    $0x6,%ecx
0872f3c5 +0x55:  repz cmpsb %es:(%edi),%ds:(%esi)
0872f3c7 +0x57:  jne    0872f3d8 <+0x68>
0872f3c9 +0x59:  mov    -0xc(%ebp),%ebx
0872f3cc +0x5c:  mov    -0x8(%ebp),%esi
0872f3cf +0x5f:  mov    -0x4(%ebp),%edi
0872f3d2 +0x62:  mov    %ebp,%esp
0872f3d4 +0x64:  pop    %ebp
0872f3d5 +0x65:  ret
0872f3d6 +0x66:  xchg   %ax,%ax
0872f3d8 +0x68:  lea    0x8(%ebx),%esi
0872f3db +0x6b:  mov    %esi,(%esp)
0872f3de +0x6e:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
0872f3e3 +0x73:  mov    0xc(%ebp),%eax
0872f3e6 +0x76:  movl   $0x0,0x8(%esp)
0872f3ee +0x7e:  mov    %esi,(%esp)
0872f3f1 +0x81:  mov    %eax,0x4(%esp)
0872f3f5 +0x85:  call   08722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>  ; std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*)
0872f3fa +0x8a:  mov    0x8(%ebx),%eax
0872f3fd +0x8d:  mov    0x3c(%eax),%edx
0872f400 +0x90:  mov    %edx,0x10(%ebx)
0872f403 +0x93:  mov    0x38(%eax),%edx
0872f406 +0x96:  mov    0x34(%eax),%eax
0872f409 +0x99:  mov    %edx,0x14(%ebx)
0872f40c +0x9c:  mov    %eax,0x18(%ebx)
0872f40f +0x9f:  mov    -0xc(%ebp),%ebx
0872f412 +0xa2:  mov    -0x8(%ebp),%esi
0872f415 +0xa5:  mov    -0x4(%ebp),%edi
0872f418 +0xa8:  mov    %ebp,%esp
0872f41a +0xaa:  pop    %ebp
0872f41b +0xab:  ret
0872f41c +0xac:  mov    %eax,%esi
0872f41e +0xae:  mov    %ebx,(%esp)
0872f421 +0xb1:  call   08726b20 <_ZNSt5ctypeIcED1Ev>  ; std::ctype<char>::~ctype()
0872f426 +0xb6:  mov    %esi,(%esp)
0872f429 +0xb9:  call   08ae3750 <_Unwind_Resume>
0872f42e +0xbe:  nop
0872f42f +0xbf:  nop
0872f430 +0xc0:  push   %ebp
0872f431 +0xc1:  mov    %esp,%ebp
0872f433 +0xc3:  sub    $0x18,%esp
0872f436 +0xc6:  mov    0x8(%ebp),%eax
0872f439 +0xc9:  mov    0x14(%ebp),%ecx
0872f43c +0xcc:  mov    0xc(%eax),%eax
0872f43f +0xcf:  add    $0x2,%ecx
0872f442 +0xd2:  mov    (%eax),%edx
0872f444 +0xd4:  mov    %ecx,0xc(%esp)
0872f448 +0xd8:  mov    0x10(%ebp),%ecx
0872f44b +0xdb:  mov    %ecx,0x8(%esp)
0872f44f +0xdf:  mov    0xc(%ebp),%ecx
0872f452 +0xe2:  mov    0xc(%ecx),%ecx
0872f455 +0xe5:  mov    %eax,(%esp)
0872f458 +0xe8:  mov    %ecx,0x4(%esp)
0872f45c +0xec:  call   *0x10(%edx)
0872f45f +0xef:  leave
0872f460 +0xf0:  ret
0872f461 +0xf1:  nop
0872f462 +0xf2:  nop
0872f463 +0xf3:  nop
0872f464 +0xf4:  nop
0872f465 +0xf5:  nop
0872f466 +0xf6:  nop
0872f467 +0xf7:  nop
0872f468 +0xf8:  nop
0872f469 +0xf9:  nop
0872f46a +0xfa:  nop
0872f46b +0xfb:  nop
0872f46c +0xfc:  nop
0872f46d +0xfd:  nop
0872f46e +0xfe:  nop
0872f46f +0xff:  nop
```

## 反编译 C

```c
// std::ctype_byname<char>::ctype_byname @ 0x872f370

/* std::ctype_byname<char>::ctype_byname(char const*, unsigned int) */

void __thiscall
std::ctype_byname<char>::ctype_byname(ctype_byname<char> *this,char *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 uVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar5 = &stack0x00000000 == (undefined1 *)0x2c;
  ctype<char>::ctype((ctype<char> *)this,(ushort *)0x0,false,param_2);
  iVar2 = 2;
  *(undefined ***)this = &PTR__ctype_byname_08d02948;
  pcVar3 = param_1;
  pcVar4 = "C";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    uVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while ((bool)uVar5);
  if (!(bool)uVar5) {
    iVar2 = 6;
    pcVar3 = param_1;
    pcVar4 = "POSIX";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      uVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while ((bool)uVar5);
    if (!(bool)uVar5) {
                    /* try { // try from 0872f3de to 0872f3f9 has its CatchHandler @ 0872f41c */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 8),param_1,(__locale_struct *)0x0);
      iVar2 = *(int *)(this + 8);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar2 + 0x3c);
      uVar1 = *(undefined4 *)(iVar2 + 0x34);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(this + 0x18) = uVar1;
      return;
    }
  }
  return;
}
```
