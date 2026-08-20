# Initialize

`_ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE`

`TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087577f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087577f0  _ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE
#           TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&)
# range [0x087577f0, 0x0875782c]
087577f0 +0x00:  push   %ebp
087577f1 +0x01:  mov    %esp,%ebp
087577f3 +0x03:  push   %ebx
087577f4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087577f9 +0x09:  add    $0xc1539f,%ebx
087577ff +0x0f:  sub    $0x24,%esp
08757802 +0x12:  mov    0xc(%ebp),%eax
08757805 +0x15:  mov    %eax,-0xc(%ebp)
08757808 +0x18:  mov    -0x530(%ebx),%eax
0875780e +0x1e:  add    $0x8,%eax
08757811 +0x21:  mov    %eax,-0x10(%ebp)
08757814 +0x24:  mov    0x8(%ebp),%eax
08757817 +0x27:  mov    %eax,0x4(%esp)
0875781b +0x2b:  lea    -0x10(%ebp),%eax
0875781e +0x2e:  mov    %eax,(%esp)
08757821 +0x31:  call   08755720 <_ZN8TaoCrypt18DSA_Public_Decoder6DecodeERNS_13DSA_PublicKeyE>  ; TaoCrypt::DSA_Public_Decoder::Decode(TaoCrypt::DSA_PublicKey&)
08757826 +0x36:  add    $0x24,%esp
08757829 +0x39:  pop    %ebx
0875782a +0x3a:  pop    %ebp
0875782b +0x3b:  ret
0875782c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::Initialize @ 0x87577f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PublicKey::Initialize(DSA_PublicKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x87577f9;
  local_10 = param_1;
  local_14 = PTR_vtable_0936c668 + 8;
  DSA_Public_Decoder::Decode((DSA_Public_Decoder *)&local_14,this);
  return;
}
```
