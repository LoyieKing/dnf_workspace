# Initialize

`_ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE`

`TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PublicKey` | `0x08767d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767d70  _ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE
#           TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&)
# range [0x08767d70, 0x08767dac]
08767d70 +0x00:  push   %ebp
08767d71 +0x01:  mov    %esp,%ebp
08767d73 +0x03:  push   %ebx
08767d74 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08767d79 +0x09:  add    $0xc04e1f,%ebx
08767d7f +0x0f:  sub    $0x24,%esp
08767d82 +0x12:  mov    0xc(%ebp),%eax
08767d85 +0x15:  mov    %eax,-0xc(%ebp)
08767d88 +0x18:  mov    -0x4(%ebx),%eax
08767d8e +0x1e:  add    $0x8,%eax
08767d91 +0x21:  mov    %eax,-0x10(%ebp)
08767d94 +0x24:  mov    0x8(%ebp),%eax
08767d97 +0x27:  mov    %eax,0x4(%esp)
08767d9b +0x2b:  lea    -0x10(%ebp),%eax
08767d9e +0x2e:  mov    %eax,(%esp)
08767da1 +0x31:  call   087558d0 <_ZN8TaoCrypt18RSA_Public_Decoder6DecodeERNS_13RSA_PublicKeyE>  ; TaoCrypt::RSA_Public_Decoder::Decode(TaoCrypt::RSA_PublicKey&)
08767da6 +0x36:  add    $0x24,%esp
08767da9 +0x39:  pop    %ebx
08767daa +0x3a:  pop    %ebp
08767dab +0x3b:  ret
08767dac +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::RSA_PublicKey::Initialize @ 0x8767d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PublicKey::Initialize(RSA_PublicKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8767d79;
  local_10 = param_1;
  local_14 = PTR_vtable_0936cb94 + 8;
  RSA_Public_Decoder::Decode((RSA_Public_Decoder *)&local_14,this);
  return;
}
```
