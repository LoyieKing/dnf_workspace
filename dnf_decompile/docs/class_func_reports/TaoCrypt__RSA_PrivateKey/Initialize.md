# Initialize

`_ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE`

`TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PrivateKey` | `0x08767ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767ca0  _ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE
#           TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&)
# range [0x08767ca0, 0x08767cdc]
08767ca0 +0x00:  push   %ebp
08767ca1 +0x01:  mov    %esp,%ebp
08767ca3 +0x03:  push   %ebx
08767ca4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08767ca9 +0x09:  add    $0xc04eef,%ebx
08767caf +0x0f:  sub    $0x24,%esp
08767cb2 +0x12:  mov    0xc(%ebp),%eax
08767cb5 +0x15:  mov    %eax,-0xc(%ebp)
08767cb8 +0x18:  mov    -0x138(%ebx),%eax
08767cbe +0x1e:  add    $0x8,%eax
08767cc1 +0x21:  mov    %eax,-0x10(%ebp)
08767cc4 +0x24:  mov    0x8(%ebp),%eax
08767cc7 +0x27:  mov    %eax,0x4(%esp)
08767ccb +0x2b:  lea    -0x10(%ebp),%eax
08767cce +0x2e:  mov    %eax,(%esp)
08767cd1 +0x31:  call   08755bc0 <_ZN8TaoCrypt19RSA_Private_Decoder6DecodeERNS_14RSA_PrivateKeyE>  ; TaoCrypt::RSA_Private_Decoder::Decode(TaoCrypt::RSA_PrivateKey&)
08767cd6 +0x36:  add    $0x24,%esp
08767cd9 +0x39:  pop    %ebx
08767cda +0x3a:  pop    %ebp
08767cdb +0x3b:  ret
08767cdc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::RSA_PrivateKey::Initialize @ 0x8767ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PrivateKey::Initialize(RSA_PrivateKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8767ca9;
  local_10 = param_1;
  local_14 = PTR_vtable_0936ca60 + 8;
  RSA_Private_Decoder::Decode((RSA_Private_Decoder *)&local_14,this);
  return;
}
```
