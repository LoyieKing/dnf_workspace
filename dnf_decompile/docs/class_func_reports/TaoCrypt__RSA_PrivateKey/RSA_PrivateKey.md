# RSA_PrivateKey

`_ZN8TaoCrypt14RSA_PrivateKeyC1ERNS_6SourceE`

`TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PrivateKey` | `0x08767ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767ce0  _ZN8TaoCrypt14RSA_PrivateKeyC1ERNS_6SourceE
#           TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(TaoCrypt::Source&)
# range [0x08767ce0, 0x08767d69]
08767ce0 +0x00:  push   %ebp
08767ce1 +0x01:  mov    %esp,%ebp
08767ce3 +0x03:  push   %esi
08767ce4 +0x04:  push   %ebx
08767ce5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
08767cea +0x0a:  add    $0xc04eae,%ebx
08767cf0 +0x10:  sub    $0x10,%esp
08767cf3 +0x13:  mov    0x8(%ebp),%esi
08767cf6 +0x16:  mov    %esi,(%esp)
08767cf9 +0x19:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767cfe +0x1e:  lea    0x10(%esi),%eax
08767d01 +0x21:  mov    %eax,(%esp)
08767d04 +0x24:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d09 +0x29:  lea    0x20(%esi),%eax
08767d0c +0x2c:  mov    %eax,(%esp)
08767d0f +0x2f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d14 +0x34:  lea    0x30(%esi),%eax
08767d17 +0x37:  mov    %eax,(%esp)
08767d1a +0x3a:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d1f +0x3f:  lea    0x40(%esi),%eax
08767d22 +0x42:  mov    %eax,(%esp)
08767d25 +0x45:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d2a +0x4a:  lea    0x50(%esi),%eax
08767d2d +0x4d:  mov    %eax,(%esp)
08767d30 +0x50:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d35 +0x55:  lea    0x60(%esi),%eax
08767d38 +0x58:  mov    %eax,(%esp)
08767d3b +0x5b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d40 +0x60:  lea    0x70(%esi),%eax
08767d43 +0x63:  mov    %eax,(%esp)
08767d46 +0x66:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08767d4b +0x6b:  mov    0xc(%ebp),%eax
08767d4e +0x6e:  mov    %esi,(%esp)
08767d51 +0x71:  mov    %eax,0x4(%esp)
08767d55 +0x75:  call   08767ca0 <_ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE>  ; TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&)
08767d5a +0x7a:  add    $0x10,%esp
08767d5d +0x7d:  pop    %ebx
08767d5e +0x7e:  pop    %esi
08767d5f +0x7f:  pop    %ebp
08767d60 +0x80:  ret
08767d61 +0x81:  nop
08767d62 +0x82:  lea    0x0(%esi,%eiz,1),%esi
08767d69 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_PrivateKey::RSA_PrivateKey @ 0x8767ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(RSA_PrivateKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Integer::Integer((Integer *)(this + 0x40));
  Integer::Integer((Integer *)(this + 0x50));
  Integer::Integer((Integer *)(this + 0x60));
  Integer::Integer((Integer *)(this + 0x70));
  Initialize(this,param_1);
  return;
}
```
