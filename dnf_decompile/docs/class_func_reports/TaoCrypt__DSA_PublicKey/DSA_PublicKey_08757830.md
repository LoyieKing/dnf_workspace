# DSA_PublicKey

`_ZN8TaoCrypt13DSA_PublicKeyC1ERNS_6SourceE`

`TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757830  _ZN8TaoCrypt13DSA_PublicKeyC1ERNS_6SourceE
#           TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::Source&)
# range [0x08757830, 0x0875788c]
08757830 +0x00:  push   %ebp
08757831 +0x01:  mov    %esp,%ebp
08757833 +0x03:  sub    $0x18,%esp
08757836 +0x06:  mov    %ebx,-0x8(%ebp)
08757839 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875783e +0x0e:  add    $0xc1535a,%ebx
08757844 +0x14:  mov    %esi,-0x4(%ebp)
08757847 +0x17:  mov    0x8(%ebp),%esi
0875784a +0x1a:  mov    %esi,(%esp)
0875784d +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08757852 +0x22:  lea    0x10(%esi),%eax
08757855 +0x25:  mov    %eax,(%esp)
08757858 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875785d +0x2d:  lea    0x20(%esi),%eax
08757860 +0x30:  mov    %eax,(%esp)
08757863 +0x33:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08757868 +0x38:  lea    0x30(%esi),%eax
0875786b +0x3b:  mov    %eax,(%esp)
0875786e +0x3e:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08757873 +0x43:  mov    0xc(%ebp),%eax
08757876 +0x46:  mov    %esi,(%esp)
08757879 +0x49:  mov    %eax,0x4(%esp)
0875787d +0x4d:  call   087577f0 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE>  ; TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&)
08757882 +0x52:  mov    -0x8(%ebp),%ebx
08757885 +0x55:  mov    -0x4(%ebp),%esi
08757888 +0x58:  mov    %ebp,%esp
0875788a +0x5a:  pop    %ebp
0875788b +0x5b:  ret
0875788c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::DSA_PublicKey @ 0x8757830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PublicKey::DSA_PublicKey(DSA_PublicKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Initialize(this,param_1);
  return;
}
```
