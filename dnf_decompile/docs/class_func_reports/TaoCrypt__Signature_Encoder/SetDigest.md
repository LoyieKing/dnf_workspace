# SetDigest

`_ZN8TaoCrypt17Signature_Encoder9SetDigestEPKhjPh`

`TaoCrypt::Signature_Encoder::SetDigest(unsigned char const*, unsigned int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Signature_Encoder` | `0x08753c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753c50  _ZN8TaoCrypt17Signature_Encoder9SetDigestEPKhjPh
#           TaoCrypt::Signature_Encoder::SetDigest(unsigned char const*, unsigned int, unsigned char*)
# range [0x08753c50, 0x08753c99]
08753c50 +0x00:  push   %ebp
08753c51 +0x01:  mov    %esp,%ebp
08753c53 +0x03:  sub    $0x18,%esp
08753c56 +0x06:  mov    %esi,-0x4(%ebp)
08753c59 +0x09:  mov    0x10(%ebp),%esi
08753c5c +0x0c:  mov    0x14(%ebp),%eax
08753c5f +0x0f:  mov    %ebx,-0x8(%ebp)
08753c62 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08753c67 +0x17:  add    $0xc18f31,%ebx
08753c6d +0x1d:  mov    %esi,%edx
08753c6f +0x1f:  movb   $0x4,(%eax)
08753c72 +0x22:  mov    %dl,0x1(%eax)
08753c75 +0x25:  mov    0xc(%ebp),%edx
08753c78 +0x28:  add    $0x2,%eax
08753c7b +0x2b:  mov    %esi,0x8(%esp)
08753c7f +0x2f:  mov    %eax,(%esp)
08753c82 +0x32:  mov    %edx,0x4(%esp)
08753c86 +0x36:  call   0807d8a0 <_init+0x198>
08753c8b +0x3b:  lea    0x2(%esi),%eax
08753c8e +0x3e:  mov    -0x8(%ebp),%ebx
08753c91 +0x41:  mov    -0x4(%ebp),%esi
08753c94 +0x44:  mov    %ebp,%esp
08753c96 +0x46:  pop    %ebp
08753c97 +0x47:  ret
08753c98 +0x48:  nop
08753c99 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Signature_Encoder::SetDigest @ 0x8753c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signature_Encoder::SetDigest(unsigned char const*, unsigned int, unsigned char*) */

int __thiscall
TaoCrypt::Signature_Encoder::SetDigest
          (Signature_Encoder *this,uchar *param_1,uint param_2,uchar *param_3)

{
  *param_3 = '\x04';
  param_3[1] = (uchar)param_2;
  memcpy(param_3 + 2,param_1,param_2);
  return param_2 + 2;
}
```
