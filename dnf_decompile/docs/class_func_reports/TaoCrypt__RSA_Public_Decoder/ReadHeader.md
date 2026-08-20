# ReadHeader

`_ZN8TaoCrypt18RSA_Public_Decoder10ReadHeaderEv`

`TaoCrypt::RSA_Public_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_Public_Decoder` | `0x087539a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087539a0  _ZN8TaoCrypt18RSA_Public_Decoder10ReadHeaderEv
#           TaoCrypt::RSA_Public_Decoder::ReadHeader()
# range [0x087539a0, 0x087539ca]
087539a0 +0x00:  push   %ebp
087539a1 +0x01:  mov    %esp,%ebp
087539a3 +0x03:  push   %ebx
087539a4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087539a9 +0x09:  add    $0xc191ef,%ebx
087539af +0x0f:  sub    $0x14,%esp
087539b2 +0x12:  mov    0x8(%ebp),%eax
087539b5 +0x15:  mov    %eax,(%esp)
087539b8 +0x18:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
087539bd +0x1d:  add    $0x14,%esp
087539c0 +0x20:  pop    %ebx
087539c1 +0x21:  pop    %ebp
087539c2 +0x22:  ret
087539c3 +0x23:  nop
087539c4 +0x24:  lea    0x0(%esi),%esi
087539ca +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_Public_Decoder::ReadHeader @ 0x87539a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Public_Decoder::ReadHeader() */

void __thiscall TaoCrypt::RSA_Public_Decoder::ReadHeader(RSA_Public_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}
```
