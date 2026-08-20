# DSA_Verifier

`_ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE`

`TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Verifier` | `0x08757500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757500  _ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE
#           TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&)
# range [0x08757500, 0x0875753f]
08757500 +0x00:  push   %ebp
08757501 +0x01:  mov    %esp,%ebp
08757503 +0x03:  sub    $0x18,%esp
08757506 +0x06:  mov    %ebx,-0x8(%ebp)
08757509 +0x09:  mov    0xc(%ebp),%eax
0875750c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08757511 +0x11:  add    $0xc15687,%ebx
08757517 +0x17:  mov    %esi,-0x4(%ebp)
0875751a +0x1a:  mov    0x8(%ebp),%esi
0875751d +0x1d:  mov    %eax,(%esi)
0875751f +0x1f:  lea    0x4(%esi),%eax
08757522 +0x22:  add    $0x14,%esi
08757525 +0x25:  mov    %eax,(%esp)
08757528 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875752d +0x2d:  mov    %esi,(%esp)
08757530 +0x30:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08757535 +0x35:  mov    -0x8(%ebp),%ebx
08757538 +0x38:  mov    -0x4(%ebp),%esi
0875753b +0x3b:  mov    %ebp,%esp
0875753d +0x3d:  pop    %ebp
0875753e +0x3e:  ret
0875753f +0x3f:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_Verifier::DSA_Verifier @ 0x8757500

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&) */

void __thiscall TaoCrypt::DSA_Verifier::DSA_Verifier(DSA_Verifier *this,DSA_PublicKey *param_1)

{
  *(DSA_PublicKey **)this = param_1;
  Integer::Integer((Integer *)(this + 4));
  Integer::Integer((Integer *)(this + 0x14));
  return;
}
```
