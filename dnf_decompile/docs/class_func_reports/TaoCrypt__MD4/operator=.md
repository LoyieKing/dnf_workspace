# operator=

`_ZN8TaoCrypt3MD4aSERKS0_`

`TaoCrypt::MD4::operator=(TaoCrypt::MD4 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD4` | `0x087660f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087660f0  _ZN8TaoCrypt3MD4aSERKS0_
#           TaoCrypt::MD4::operator=(TaoCrypt::MD4 const&)
# range [0x087660f0, 0x087661bf]
087660f0 +0x00:  push   %ebp
087660f1 +0x01:  mov    %esp,%ebp
087660f3 +0x03:  sub    $0x98,%esp
087660f9 +0x09:  mov    %ebx,-0xc(%ebp)
087660fc +0x0c:  mov    0xc(%ebp),%eax
087660ff +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08766104 +0x14:  add    $0xc06a94,%ebx
0876610a +0x1a:  mov    %esi,-0x8(%ebp)
0876610d +0x1d:  mov    0x8(%ebp),%esi
08766110 +0x20:  mov    %edi,-0x4(%ebp)
08766113 +0x23:  lea    -0x88(%ebp),%edi
08766119 +0x29:  mov    %eax,0x4(%esp)
0876611d +0x2d:  mov    %edi,(%esp)
08766120 +0x30:  call   08766010 <_ZN8TaoCrypt3MD4C1ERKS0_>  ; TaoCrypt::MD4::MD4(TaoCrypt::MD4 const&)
08766125 +0x35:  mov    %edi,0x4(%esp)
08766129 +0x39:  mov    %esi,(%esp)
0876612c +0x3c:  call   08765f50 <_ZN8TaoCrypt3MD44SwapERS0_>  ; TaoCrypt::MD4::Swap(TaoCrypt::MD4&)
08766131 +0x41:  mov    %esi,%eax
08766133 +0x43:  mov    -0xc(%ebp),%ebx
08766136 +0x46:  mov    -0x8(%ebp),%esi
08766139 +0x49:  mov    -0x4(%ebp),%edi
0876613c +0x4c:  mov    %ebp,%esp
0876613e +0x4e:  pop    %ebp
0876613f +0x4f:  ret
08766140 +0x50:  push   %ebp
08766141 +0x51:  xor    %eax,%eax
08766143 +0x53:  mov    %esp,%ebp
08766145 +0x55:  pop    %ebp
08766146 +0x56:  ret
08766147 +0x57:  nop
08766148 +0x58:  nop
08766149 +0x59:  nop
0876614a +0x5a:  nop
0876614b +0x5b:  nop
0876614c +0x5c:  nop
0876614d +0x5d:  nop
0876614e +0x5e:  nop
0876614f +0x5f:  nop
08766150 +0x60:  push   %ebp
08766151 +0x61:  mov    $0x40,%eax
08766156 +0x66:  mov    %esp,%ebp
08766158 +0x68:  pop    %ebp
08766159 +0x69:  ret
0876615a +0x6a:  nop
0876615b +0x6b:  nop
0876615c +0x6c:  nop
0876615d +0x6d:  nop
0876615e +0x6e:  nop
0876615f +0x6f:  nop
08766160 +0x70:  push   %ebp
08766161 +0x71:  mov    $0x10,%eax
08766166 +0x76:  mov    %esp,%ebp
08766168 +0x78:  pop    %ebp
08766169 +0x79:  ret
0876616a +0x7a:  nop
0876616b +0x7b:  nop
0876616c +0x7c:  nop
0876616d +0x7d:  nop
0876616e +0x7e:  nop
0876616f +0x7f:  nop
08766170 +0x80:  push   %ebp
08766171 +0x81:  mov    $0x38,%eax
08766176 +0x86:  mov    %esp,%ebp
08766178 +0x88:  pop    %ebp
08766179 +0x89:  ret
0876617a +0x8a:  nop
0876617b +0x8b:  nop
0876617c +0x8c:  nop
0876617d +0x8d:  nop
0876617e +0x8e:  nop
0876617f +0x8f:  nop
08766180 +0x90:  call   087245c4 <__i686.get_pc_thunk.cx>
08766185 +0x95:  add    $0xc06a13,%ecx
0876618b +0x9b:  push   %ebp
0876618c +0x9c:  mov    %esp,%ebp
0876618e +0x9e:  mov    -0x3c(%ecx),%eax
08766194 +0xa4:  lea    0x8(%eax),%edx
08766197 +0xa7:  mov    0x8(%ebp),%eax
0876619a +0xaa:  mov    %edx,(%eax)
0876619c +0xac:  pop    %ebp
0876619d +0xad:  ret
0876619e +0xae:  nop
0876619f +0xaf:  nop
087661a0 +0xb0:  call   087245c4 <__i686.get_pc_thunk.cx>
087661a5 +0xb5:  add    $0xc069f3,%ecx
087661ab +0xbb:  push   %ebp
087661ac +0xbc:  mov    %esp,%ebp
087661ae +0xbe:  mov    -0x3c(%ecx),%eax
087661b4 +0xc4:  lea    0x8(%eax),%edx
087661b7 +0xc7:  mov    0x8(%ebp),%eax
087661ba +0xca:  mov    %edx,(%eax)
087661bc +0xcc:  pop    %ebp
087661bd +0xcd:  ret
087661be +0xce:  nop
087661bf +0xcf:  nop
```

## 反编译 C

```c
// TaoCrypt::MD4::operator= @ 0x87660f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD4::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::MD4 const&) */

MD4 * __thiscall TaoCrypt::MD4::operator=(MD4 *this,MD4 *param_1)

{
  MD4 local_8c [124];
  
  MD4(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
