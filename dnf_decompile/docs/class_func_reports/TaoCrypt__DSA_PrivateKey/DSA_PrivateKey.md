# DSA_PrivateKey

`_ZN8TaoCrypt14DSA_PrivateKeyC1ERNS_6SourceE`

`TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PrivateKey` | `0x08757780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757780  _ZN8TaoCrypt14DSA_PrivateKeyC1ERNS_6SourceE
#           TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(TaoCrypt::Source&)
# range [0x08757780, 0x087577e9]
08757780 +0x00:  push   %ebp
08757781 +0x01:  mov    %esp,%ebp
08757783 +0x03:  sub    $0x18,%esp
08757786 +0x06:  mov    %ebx,-0x8(%ebp)
08757789 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875778e +0x0e:  add    $0xc1540a,%ebx
08757794 +0x14:  mov    %esi,-0x4(%ebp)
08757797 +0x17:  mov    0x8(%ebp),%esi
0875779a +0x1a:  mov    %esi,(%esp)
0875779d +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087577a2 +0x22:  lea    0x10(%esi),%eax
087577a5 +0x25:  mov    %eax,(%esp)
087577a8 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087577ad +0x2d:  lea    0x20(%esi),%eax
087577b0 +0x30:  mov    %eax,(%esp)
087577b3 +0x33:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087577b8 +0x38:  lea    0x30(%esi),%eax
087577bb +0x3b:  mov    %eax,(%esp)
087577be +0x3e:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087577c3 +0x43:  lea    0x40(%esi),%eax
087577c6 +0x46:  mov    %eax,(%esp)
087577c9 +0x49:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087577ce +0x4e:  mov    0xc(%ebp),%eax
087577d1 +0x51:  mov    %esi,(%esp)
087577d4 +0x54:  mov    %eax,0x4(%esp)
087577d8 +0x58:  call   08757740 <_ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE>  ; TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&)
087577dd +0x5d:  mov    -0x8(%ebp),%ebx
087577e0 +0x60:  mov    -0x4(%ebp),%esi
087577e3 +0x63:  mov    %ebp,%esp
087577e5 +0x65:  pop    %ebp
087577e6 +0x66:  ret
087577e7 +0x67:  nop
087577e8 +0x68:  nop
087577e9 +0x69:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PrivateKey::DSA_PrivateKey @ 0x8757780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(DSA_PrivateKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Integer::Integer((Integer *)(this + 0x40));
  Initialize(this,param_1);
  return;
}
```
