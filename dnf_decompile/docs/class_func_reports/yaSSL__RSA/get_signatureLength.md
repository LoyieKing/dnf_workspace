# get_signatureLength

`_ZNK5yaSSL3RSA19get_signatureLengthEv`

`yaSSL::RSA::get_signatureLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x08798e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798e80  _ZNK5yaSSL3RSA19get_signatureLengthEv
#           yaSSL::RSA::get_signatureLength() const
# range [0x08798e80, 0x08798eaa]
08798e80 +0x00:  push   %ebp
08798e81 +0x01:  mov    %esp,%ebp
08798e83 +0x03:  push   %ebx
08798e84 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08798e89 +0x09:  add    $0xbd3d0f,%ebx
08798e8f +0x0f:  sub    $0x14,%esp
08798e92 +0x12:  mov    0x8(%ebp),%eax
08798e95 +0x15:  mov    %eax,(%esp)
08798e98 +0x18:  call   08798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>  ; yaSSL::RSA::get_cipherLength() const
08798e9d +0x1d:  add    $0x14,%esp
08798ea0 +0x20:  pop    %ebx
08798ea1 +0x21:  pop    %ebp
08798ea2 +0x22:  ret
08798ea3 +0x23:  nop
08798ea4 +0x24:  lea    0x0(%esi),%esi
08798eaa +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::RSA::get_signatureLength @ 0x8798e80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::get_signatureLength() const */

void __thiscall yaSSL::RSA::get_signatureLength(RSA *this)

{
  get_cipherLength(this);
  return;
}
```
