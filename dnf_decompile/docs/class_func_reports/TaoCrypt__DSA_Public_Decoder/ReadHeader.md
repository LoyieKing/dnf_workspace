# ReadHeader

`_ZN8TaoCrypt18DSA_Public_Decoder10ReadHeaderEv`

`TaoCrypt::DSA_Public_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Public_Decoder` | `0x087539d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087539d0  _ZN8TaoCrypt18DSA_Public_Decoder10ReadHeaderEv
#           TaoCrypt::DSA_Public_Decoder::ReadHeader()
# range [0x087539d0, 0x087539fa]
087539d0 +0x00:  push   %ebp
087539d1 +0x01:  mov    %esp,%ebp
087539d3 +0x03:  push   %ebx
087539d4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087539d9 +0x09:  add    $0xc191bf,%ebx
087539df +0x0f:  sub    $0x14,%esp
087539e2 +0x12:  mov    0x8(%ebp),%eax
087539e5 +0x15:  mov    %eax,(%esp)
087539e8 +0x18:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
087539ed +0x1d:  add    $0x14,%esp
087539f0 +0x20:  pop    %ebx
087539f1 +0x21:  pop    %ebp
087539f2 +0x22:  ret
087539f3 +0x23:  nop
087539f4 +0x24:  lea    0x0(%esi),%esi
087539fa +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::DSA_Public_Decoder::ReadHeader @ 0x87539d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Public_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DSA_Public_Decoder::ReadHeader(DSA_Public_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}
```
