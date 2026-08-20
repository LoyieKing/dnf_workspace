# operator=

`_ZN8TaoCrypt3MD5aSERKS0_`

`TaoCrypt::MD5::operator=(TaoCrypt::MD5 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x08767330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767330  _ZN8TaoCrypt3MD5aSERKS0_
#           TaoCrypt::MD5::operator=(TaoCrypt::MD5 const&)
# range [0x08767330, 0x087673ff]
08767330 +0x00:  push   %ebp
08767331 +0x01:  mov    %esp,%ebp
08767333 +0x03:  sub    $0x98,%esp
08767339 +0x09:  mov    %ebx,-0xc(%ebp)
0876733c +0x0c:  mov    0xc(%ebp),%eax
0876733f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08767344 +0x14:  add    $0xc05854,%ebx
0876734a +0x1a:  mov    %esi,-0x8(%ebp)
0876734d +0x1d:  mov    0x8(%ebp),%esi
08767350 +0x20:  mov    %edi,-0x4(%ebp)
08767353 +0x23:  lea    -0x88(%ebp),%edi
08767359 +0x29:  mov    %eax,0x4(%esp)
0876735d +0x2d:  mov    %edi,(%esp)
08767360 +0x30:  call   08767250 <_ZN8TaoCrypt3MD5C1ERKS0_>  ; TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&)
08767365 +0x35:  mov    %edi,0x4(%esp)
08767369 +0x39:  mov    %esi,(%esp)
0876736c +0x3c:  call   08767040 <_ZN8TaoCrypt3MD54SwapERS0_>  ; TaoCrypt::MD5::Swap(TaoCrypt::MD5&)
08767371 +0x41:  mov    %esi,%eax
08767373 +0x43:  mov    -0xc(%ebp),%ebx
08767376 +0x46:  mov    -0x8(%ebp),%esi
08767379 +0x49:  mov    -0x4(%ebp),%edi
0876737c +0x4c:  mov    %ebp,%esp
0876737e +0x4e:  pop    %ebp
0876737f +0x4f:  ret
08767380 +0x50:  push   %ebp
08767381 +0x51:  xor    %eax,%eax
08767383 +0x53:  mov    %esp,%ebp
08767385 +0x55:  pop    %ebp
08767386 +0x56:  ret
08767387 +0x57:  nop
08767388 +0x58:  nop
08767389 +0x59:  nop
0876738a +0x5a:  nop
0876738b +0x5b:  nop
0876738c +0x5c:  nop
0876738d +0x5d:  nop
0876738e +0x5e:  nop
0876738f +0x5f:  nop
08767390 +0x60:  push   %ebp
08767391 +0x61:  mov    $0x40,%eax
08767396 +0x66:  mov    %esp,%ebp
08767398 +0x68:  pop    %ebp
08767399 +0x69:  ret
0876739a +0x6a:  nop
0876739b +0x6b:  nop
0876739c +0x6c:  nop
0876739d +0x6d:  nop
0876739e +0x6e:  nop
0876739f +0x6f:  nop
087673a0 +0x70:  push   %ebp
087673a1 +0x71:  mov    $0x10,%eax
087673a6 +0x76:  mov    %esp,%ebp
087673a8 +0x78:  pop    %ebp
087673a9 +0x79:  ret
087673aa +0x7a:  nop
087673ab +0x7b:  nop
087673ac +0x7c:  nop
087673ad +0x7d:  nop
087673ae +0x7e:  nop
087673af +0x7f:  nop
087673b0 +0x80:  push   %ebp
087673b1 +0x81:  mov    $0x38,%eax
087673b6 +0x86:  mov    %esp,%ebp
087673b8 +0x88:  pop    %ebp
087673b9 +0x89:  ret
087673ba +0x8a:  nop
087673bb +0x8b:  nop
087673bc +0x8c:  nop
087673bd +0x8d:  nop
087673be +0x8e:  nop
087673bf +0x8f:  nop
087673c0 +0x90:  call   087245c4 <__i686.get_pc_thunk.cx>
087673c5 +0x95:  add    $0xc057d3,%ecx
087673cb +0x9b:  push   %ebp
087673cc +0x9c:  mov    %esp,%ebp
087673ce +0x9e:  mov    -0x3c(%ecx),%eax
087673d4 +0xa4:  lea    0x8(%eax),%edx
087673d7 +0xa7:  mov    0x8(%ebp),%eax
087673da +0xaa:  mov    %edx,(%eax)
087673dc +0xac:  pop    %ebp
087673dd +0xad:  ret
087673de +0xae:  nop
087673df +0xaf:  nop
087673e0 +0xb0:  call   087245c4 <__i686.get_pc_thunk.cx>
087673e5 +0xb5:  add    $0xc057b3,%ecx
087673eb +0xbb:  push   %ebp
087673ec +0xbc:  mov    %esp,%ebp
087673ee +0xbe:  mov    -0x3c(%ecx),%eax
087673f4 +0xc4:  lea    0x8(%eax),%edx
087673f7 +0xc7:  mov    0x8(%ebp),%eax
087673fa +0xca:  mov    %edx,(%eax)
087673fc +0xcc:  pop    %ebp
087673fd +0xcd:  ret
087673fe +0xce:  nop
087673ff +0xcf:  nop
```

## 反编译 C

```c
// TaoCrypt::MD5::operator= @ 0x8767330

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::MD5 const&) */

MD5 * __thiscall TaoCrypt::MD5::operator=(MD5 *this,MD5 *param_1)

{
  MD5 local_8c [124];
  
  MD5(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
