# DecodeToKey

`_ZN8TaoCrypt11CertDecoder11DecodeToKeyEv`

`TaoCrypt::CertDecoder::DecodeToKey()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087550b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087550b0  _ZN8TaoCrypt11CertDecoder11DecodeToKeyEv
#           TaoCrypt::CertDecoder::DecodeToKey()
# range [0x087550b0, 0x08755119]
087550b0 +0x00:  push   %ebp
087550b1 +0x01:  mov    %esp,%ebp
087550b3 +0x03:  sub    $0x18,%esp
087550b6 +0x06:  mov    %esi,-0x4(%ebp)
087550b9 +0x09:  mov    0x8(%ebp),%esi
087550bc +0x0c:  mov    %ebx,-0x8(%ebp)
087550bf +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087550c4 +0x14:  add    $0xc17ad4,%ebx
087550ca +0x1a:  mov    (%esi),%eax
087550cc +0x1c:  mov    %esi,(%esp)
087550cf +0x1f:  call   *0x8(%eax)
087550d2 +0x22:  mov    %esi,(%esp)
087550d5 +0x25:  call   08753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>  ; TaoCrypt::CertDecoder::GetAlgoId()
087550da +0x2a:  mov    %eax,0x1c(%esi)
087550dd +0x2d:  mov    %esi,(%esp)
087550e0 +0x30:  movl   $0x0,0x4(%esp)
087550e8 +0x38:  call   08754ca0 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE>  ; TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType)
087550ed +0x3d:  mov    %esi,(%esp)
087550f0 +0x40:  call   08754c40 <_ZN8TaoCrypt11CertDecoder11GetValidityEv>  ; TaoCrypt::CertDecoder::GetValidity()
087550f5 +0x45:  mov    %esi,(%esp)
087550f8 +0x48:  movl   $0x1,0x4(%esp)
08755100 +0x50:  call   08754ca0 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE>  ; TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType)
08755105 +0x55:  mov    %esi,(%esp)
08755108 +0x58:  call   087543d0 <_ZN8TaoCrypt11CertDecoder6GetKeyEv>  ; TaoCrypt::CertDecoder::GetKey()
0875510d +0x5d:  mov    -0x8(%ebp),%ebx
08755110 +0x60:  mov    -0x4(%ebp),%esi
08755113 +0x63:  mov    %ebp,%esp
08755115 +0x65:  pop    %ebp
08755116 +0x66:  ret
08755117 +0x67:  mov    %esi,%esi
08755119 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::DecodeToKey @ 0x87550b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::DecodeToKey() */

void __thiscall TaoCrypt::CertDecoder::DecodeToKey(CertDecoder *this)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)this + 8))(this);
  uVar1 = GetAlgoId(this);
  *(undefined4 *)(this + 0x1c) = uVar1;
  GetName(this,0);
  GetValidity(this);
  GetName(this,1);
  GetKey(this);
  return;
}
```
