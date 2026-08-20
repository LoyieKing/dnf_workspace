# get_cipherLength

`_ZNK5yaSSL3RSA16get_cipherLengthEv`

`yaSSL::RSA::get_cipherLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x08798e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798e50  _ZNK5yaSSL3RSA16get_cipherLengthEv
#           yaSSL::RSA::get_cipherLength() const
# range [0x08798e50, 0x08798e79]
08798e50 +0x00:  push   %ebp
08798e51 +0x01:  mov    %esp,%ebp
08798e53 +0x03:  push   %ebx
08798e54 +0x04:  sub    $0x14,%esp
08798e57 +0x07:  mov    0x8(%ebp),%eax
08798e5a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08798e5f +0x0f:  add    $0xbd3d39,%ebx
08798e65 +0x15:  mov    0x4(%eax),%eax
08798e68 +0x18:  mov    %eax,(%esp)
08798e6b +0x1b:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08798e70 +0x20:  add    $0x14,%esp
08798e73 +0x23:  pop    %ebx
08798e74 +0x24:  pop    %ebp
08798e75 +0x25:  ret
08798e76 +0x26:  lea    0x0(%esi),%esi
08798e79 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RSA::get_cipherLength @ 0x8798e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::get_cipherLength() const */

void __thiscall yaSSL::RSA::get_cipherLength(RSA *this)

{
  TaoCrypt::Integer::ByteCount(*(Integer **)(this + 4));
  return;
}
```
