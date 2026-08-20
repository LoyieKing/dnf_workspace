# ctype

`_ZNSt5ctypeIcEC1EPKtbj`

`std::ctype<char>::ctype(unsigned short const*, bool, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726ba0  _ZNSt5ctypeIcEC1EPKtbj
#           std::ctype<char>::ctype(unsigned short const*, bool, unsigned int)
# range [0x08726ba0, 0x08726c8f]
08726ba0 +0x00:  push   %ebp
08726ba1 +0x01:  xor    %eax,%eax
08726ba3 +0x03:  mov    %esp,%ebp
08726ba5 +0x05:  sub    $0x28,%esp
08726ba8 +0x08:  mov    %ebx,-0xc(%ebp)
08726bab +0x0b:  mov    0x8(%ebp),%ebx
08726bae +0x0e:  cmpl   $0x0,0x14(%ebp)
08726bb2 +0x12:  mov    %esi,-0x8(%ebp)
08726bb5 +0x15:  movzbl 0x10(%ebp),%esi
08726bb9 +0x19:  mov    %edi,-0x4(%ebp)
08726bbc +0x1c:  mov    0xc(%ebp),%edi
08726bbf +0x1f:  setne  %al
08726bc2 +0x22:  mov    %eax,0x4(%ebx)
08726bc5 +0x25:  movl   $&_ZTVSt5ctypeIcE+0x8,(%ebx)
08726bcb +0x2b:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08726bd0 +0x30:  test   %edi,%edi
08726bd2 +0x32:  mov    %eax,0x8(%ebx)
08726bd5 +0x35:  je     08726c60 <+0xc0>
08726bdb +0x3b:  mov    %esi,%edx
08726bdd +0x3d:  test   %dl,%dl
08726bdf +0x3f:  jne    08726c48 <+0xa8>
08726be1 +0x41:  mov    0x3c(%eax),%edx
08726be4 +0x44:  movb   $0x0,0xc(%ebx)
08726be8 +0x48:  mov    %edx,0x10(%ebx)
08726beb +0x4b:  mov    0x38(%eax),%eax
08726bee +0x4e:  mov    %eax,0x14(%ebx)
08726bf1 +0x51:  mov    %edi,0x18(%ebx)
08726bf4 +0x54:  xor    %eax,%eax
08726bf6 +0x56:  mov    $0x3f,%ecx
08726bfb +0x5b:  lea    0x20(%ebx),%edi
08726bfe +0x5e:  movb   $0x0,0x1d(%ebx)
08726c02 +0x62:  movw   $0x0,0x1e(%ebx)
08726c08 +0x68:  rep stos %eax,%es:(%edi)
08726c0a +0x6a:  movb   $0x0,0x11d(%ebx)
08726c11 +0x71:  movw   $0x0,0x11e(%ebx)
08726c1a +0x7a:  movb   $0x0,0x1c(%ebx)
08726c1e +0x7e:  movb   $0x0,0x21d(%ebx)
08726c25 +0x85:  movb   $0x0,(%edi)
08726c28 +0x88:  mov    $0x3f,%cl
08726c2a +0x8a:  lea    0x120(%ebx),%edi
08726c30 +0x90:  rep stos %eax,%es:(%edi)
08726c32 +0x92:  movb   $0x0,(%edi)
08726c35 +0x95:  mov    -0xc(%ebp),%ebx
08726c38 +0x98:  mov    -0x8(%ebp),%esi
08726c3b +0x9b:  mov    -0x4(%ebp),%edi
08726c3e +0x9e:  mov    %ebp,%esp
08726c40 +0xa0:  pop    %ebp
08726c41 +0xa1:  ret
08726c42 +0xa2:  lea    0x0(%esi),%esi
08726c48 +0xa8:  mov    0x3c(%eax),%edx
08726c4b +0xab:  movb   $0x1,0xc(%ebx)
08726c4f +0xaf:  mov    %edx,0x10(%ebx)
08726c52 +0xb2:  mov    0x38(%eax),%eax
08726c55 +0xb5:  mov    %eax,0x14(%ebx)
08726c58 +0xb8:  jmp    08726bf1 <+0x51>
08726c5a +0xba:  lea    0x0(%esi),%esi
08726c60 +0xc0:  mov    0x3c(%eax),%edx
08726c63 +0xc3:  movb   $0x0,0xc(%ebx)
08726c67 +0xc7:  mov    0x34(%eax),%edi
08726c6a +0xca:  mov    %edx,0x10(%ebx)
08726c6d +0xcd:  mov    0x38(%eax),%edx
08726c70 +0xd0:  mov    %edx,0x14(%ebx)
08726c73 +0xd3:  jmp    08726bf1 <+0x51>
08726c78 +0xd8:  mov    %eax,%esi
08726c7a +0xda:  mov    %ebx,(%esp)
08726c7d +0xdd:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
08726c82 +0xe2:  mov    %esi,(%esp)
08726c85 +0xe5:  call   08ae3750 <_Unwind_Resume>
08726c8a +0xea:  nop
08726c8b +0xeb:  nop
08726c8c +0xec:  nop
08726c8d +0xed:  nop
08726c8e +0xee:  nop
08726c8f +0xef:  nop
```

## 反编译 C

```c
// std::ctype<char>::ctype @ 0x8726ba0

/* std::ctype<char>::ctype(unsigned short const*, bool, unsigned int) */

void __thiscall std::ctype<char>::ctype(ctype<char> *this,ushort *param_1,bool param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  ctype<char> *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(uint *)(this + 4) = (uint)(param_3 != 0);
  *(undefined ***)this = &PTR__ctype_08d01dc8;
                    /* try { // try from 08726bcb to 08726bcf has its CatchHandler @ 08726c78 */
  iVar2 = locale::facet::_S_get_c_locale();
  *(int *)(this + 8) = iVar2;
  if (param_1 == (ushort *)0x0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    param_1 = *(ushort **)(iVar2 + 0x34);
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  else if (param_2) {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x1;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  *(ushort **)(this + 0x18) = param_1;
  this[0x1d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x1e) = 0;
  pcVar3 = this + 0x20;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  this[0x11d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x11e) = 0;
  this[0x1c] = (ctype<char>)0x0;
  this[0x21d] = (ctype<char>)0x0;
  *pcVar3 = (ctype<char>)0x0;
  pcVar3 = this + 0x120;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  *pcVar3 = (ctype<char>)0x0;
  return;
}
```
