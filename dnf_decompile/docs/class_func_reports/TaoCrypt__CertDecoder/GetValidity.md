# GetValidity

`_ZN8TaoCrypt11CertDecoder11GetValidityEv`

`TaoCrypt::CertDecoder::GetValidity()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08754c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754c40  _ZN8TaoCrypt11CertDecoder11GetValidityEv
#           TaoCrypt::CertDecoder::GetValidity()
# range [0x08754c40, 0x08754c99]
08754c40 +0x00:  push   %ebp
08754c41 +0x01:  mov    %esp,%ebp
08754c43 +0x03:  sub    $0x18,%esp
08754c46 +0x06:  mov    %esi,-0x4(%ebp)
08754c49 +0x09:  mov    0x8(%ebp),%esi
08754c4c +0x0c:  mov    %ebx,-0x8(%ebp)
08754c4f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08754c54 +0x14:  add    $0xc17f44,%ebx
08754c5a +0x1a:  mov    0x4(%esi),%eax
08754c5d +0x1d:  mov    0x10(%eax),%ecx
08754c60 +0x20:  test   %ecx,%ecx
08754c62 +0x22:  jne    08754c8c <+0x4c>
08754c64 +0x24:  mov    %esi,(%esp)
08754c67 +0x27:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08754c6c +0x2c:  movl   $0x0,0x4(%esp)
08754c74 +0x34:  mov    %esi,(%esp)
08754c77 +0x37:  call   08754830 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE>  ; TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType)
08754c7c +0x3c:  movl   $0x1,0x4(%esp)
08754c84 +0x44:  mov    %esi,(%esp)
08754c87 +0x47:  call   08754830 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE>  ; TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType)
08754c8c +0x4c:  mov    -0x8(%ebp),%ebx
08754c8f +0x4f:  mov    -0x4(%ebp),%esi
08754c92 +0x52:  mov    %ebp,%esp
08754c94 +0x54:  pop    %ebp
08754c95 +0x55:  ret
08754c96 +0x56:  lea    0x0(%esi),%esi
08754c99 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetValidity @ 0x8754c40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetValidity() */

void __thiscall TaoCrypt::CertDecoder::GetValidity(CertDecoder *this)

{
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    GetDate(this,0);
    GetDate(this,1);
  }
  return;
}
```
