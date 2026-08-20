# RSA_PublicKey

`_ZN8TaoCrypt13RSA_PublicKeyC1ERNS_6SourceE`

`TaoCrypt::RSA_PublicKey::RSA_PublicKey(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PublicKey` | `0x08767db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767db0  _ZN8TaoCrypt13RSA_PublicKeyC1ERNS_6SourceE
#           TaoCrypt::RSA_PublicKey::RSA_PublicKey(TaoCrypt::Source&)
# range [0x08767db0, 0x08767df9]
08767db0 +0x00:  push   %ebp
08767db1 +0x01:  mov    %esp,%ebp
08767db3 +0x03:  sub    $0x18,%esp
08767db6 +0x06:  mov    %ebx,-0x8(%ebp)
08767db9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08767dbe +0x0e:  add    $0xc04dda,%ebx
08767dc4 +0x14:  mov    %esi,-0x4(%ebp)
08767dc7 +0x17:  mov    0x8(%ebp),%esi
08767dca +0x1a:  mov    %esi,(%esp)
08767dcd +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767dd2 +0x22:  lea    0x10(%esi),%eax
08767dd5 +0x25:  mov    %eax,(%esp)
08767dd8 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767ddd +0x2d:  mov    0xc(%ebp),%eax
08767de0 +0x30:  mov    %esi,(%esp)
08767de3 +0x33:  mov    %eax,0x4(%esp)
08767de7 +0x37:  call   08767d70 <_ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE>  ; TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&)
08767dec +0x3c:  mov    -0x8(%ebp),%ebx
08767def +0x3f:  mov    -0x4(%ebp),%esi
08767df2 +0x42:  mov    %ebp,%esp
08767df4 +0x44:  pop    %ebp
08767df5 +0x45:  ret
08767df6 +0x46:  lea    0x0(%esi),%esi
08767df9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_PublicKey::RSA_PublicKey @ 0x8767db0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::RSA_PublicKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PublicKey::RSA_PublicKey(RSA_PublicKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Initialize(this,param_1);
  return;
}
```
