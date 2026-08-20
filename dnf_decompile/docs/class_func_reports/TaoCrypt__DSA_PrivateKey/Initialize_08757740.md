# Initialize

`_ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE`

`TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PrivateKey` | `0x08757740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757740  _ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE
#           TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&)
# range [0x08757740, 0x0875777c]
08757740 +0x00:  push   %ebp
08757741 +0x01:  mov    %esp,%ebp
08757743 +0x03:  push   %ebx
08757744 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08757749 +0x09:  add    $0xc1544f,%ebx
0875774f +0x0f:  sub    $0x24,%esp
08757752 +0x12:  mov    0xc(%ebp),%eax
08757755 +0x15:  mov    %eax,-0xc(%ebp)
08757758 +0x18:  mov    -0xe0(%ebx),%eax
0875775e +0x1e:  add    $0x8,%eax
08757761 +0x21:  mov    %eax,-0x10(%ebp)
08757764 +0x24:  mov    0x8(%ebp),%eax
08757767 +0x27:  mov    %eax,0x4(%esp)
0875776b +0x2b:  lea    -0x10(%ebp),%eax
0875776e +0x2e:  mov    %eax,(%esp)
08757771 +0x31:  call   087559d0 <_ZN8TaoCrypt19DSA_Private_Decoder6DecodeERNS_14DSA_PrivateKeyE>  ; TaoCrypt::DSA_Private_Decoder::Decode(TaoCrypt::DSA_PrivateKey&)
08757776 +0x36:  add    $0x24,%esp
08757779 +0x39:  pop    %ebx
0875777a +0x3a:  pop    %ebp
0875777b +0x3b:  ret
0875777c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PrivateKey::Initialize @ 0x8757740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PrivateKey::Initialize(DSA_PrivateKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8757749;
  local_10 = param_1;
  local_14 = PTR_vtable_0936cab8 + 8;
  DSA_Private_Decoder::Decode((DSA_Private_Decoder *)&local_14,this);
  return;
}
```
