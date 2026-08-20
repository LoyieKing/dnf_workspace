# get_signatureLength

`_ZNK5yaSSL3DSS19get_signatureLengthEv`

`yaSSL::DSS::get_signatureLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS` | `0x08798f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798f90  _ZNK5yaSSL3DSS19get_signatureLengthEv
#           yaSSL::DSS::get_signatureLength() const
# range [0x08798f90, 0x08798fb9]
08798f90 +0x00:  push   %ebp
08798f91 +0x01:  mov    %esp,%ebp
08798f93 +0x03:  push   %ebx
08798f94 +0x04:  sub    $0x14,%esp
08798f97 +0x07:  mov    0x8(%ebp),%eax
08798f9a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08798f9f +0x0f:  add    $0xbd3bf9,%ebx
08798fa5 +0x15:  mov    0x4(%eax),%eax
08798fa8 +0x18:  mov    %eax,(%esp)
08798fab +0x1b:  call   08757460 <_ZNK8TaoCrypt13DSA_PublicKey15SignatureLengthEv>  ; TaoCrypt::DSA_PublicKey::SignatureLength() const
08798fb0 +0x20:  add    $0x14,%esp
08798fb3 +0x23:  pop    %ebx
08798fb4 +0x24:  pop    %ebp
08798fb5 +0x25:  ret
08798fb6 +0x26:  lea    0x0(%esi),%esi
08798fb9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DSS::get_signatureLength @ 0x8798f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::get_signatureLength() const */

void __thiscall yaSSL::DSS::get_signatureLength(DSS *this)

{
  TaoCrypt::DSA_PublicKey::SignatureLength(*(DSA_PublicKey **)(this + 4));
  return;
}
```
