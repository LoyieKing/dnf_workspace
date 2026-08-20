# DSA_Signer

`_ZN8TaoCrypt10DSA_SignerC1ERKNS_14DSA_PrivateKeyE`

`TaoCrypt::DSA_Signer::DSA_Signer(TaoCrypt::DSA_PrivateKey const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Signer` | `0x08757540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757540  _ZN8TaoCrypt10DSA_SignerC1ERKNS_14DSA_PrivateKeyE
#           TaoCrypt::DSA_Signer::DSA_Signer(TaoCrypt::DSA_PrivateKey const&)
# range [0x08757540, 0x0875757f]
08757540 +0x00:  push   %ebp
08757541 +0x01:  mov    %esp,%ebp
08757543 +0x03:  sub    $0x18,%esp
08757546 +0x06:  mov    %ebx,-0x8(%ebp)
08757549 +0x09:  mov    0xc(%ebp),%eax
0875754c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08757551 +0x11:  add    $0xc15647,%ebx
08757557 +0x17:  mov    %esi,-0x4(%ebp)
0875755a +0x1a:  mov    0x8(%ebp),%esi
0875755d +0x1d:  mov    %eax,(%esi)
0875755f +0x1f:  lea    0x4(%esi),%eax
08757562 +0x22:  add    $0x14,%esi
08757565 +0x25:  mov    %eax,(%esp)
08757568 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875756d +0x2d:  mov    %esi,(%esp)
08757570 +0x30:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08757575 +0x35:  mov    -0x8(%ebp),%ebx
08757578 +0x38:  mov    -0x4(%ebp),%esi
0875757b +0x3b:  mov    %ebp,%esp
0875757d +0x3d:  pop    %ebp
0875757e +0x3e:  ret
0875757f +0x3f:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_Signer::DSA_Signer @ 0x8757540

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Signer::DSA_Signer(TaoCrypt::DSA_PrivateKey const&) */

void __thiscall TaoCrypt::DSA_Signer::DSA_Signer(DSA_Signer *this,DSA_PrivateKey *param_1)

{
  *(DSA_PrivateKey **)this = param_1;
  Integer::Integer((Integer *)(this + 4));
  Integer::Integer((Integer *)(this + 0x14));
  return;
}
```
