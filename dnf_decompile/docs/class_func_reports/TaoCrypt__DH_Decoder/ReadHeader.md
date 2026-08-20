# ReadHeader

`_ZN8TaoCrypt10DH_Decoder10ReadHeaderEv`

`TaoCrypt::DH_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH_Decoder` | `0x08753a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753a00  _ZN8TaoCrypt10DH_Decoder10ReadHeaderEv
#           TaoCrypt::DH_Decoder::ReadHeader()
# range [0x08753a00, 0x08753a2a]
08753a00 +0x00:  push   %ebp
08753a01 +0x01:  mov    %esp,%ebp
08753a03 +0x03:  push   %ebx
08753a04 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08753a09 +0x09:  add    $0xc1918f,%ebx
08753a0f +0x0f:  sub    $0x14,%esp
08753a12 +0x12:  mov    0x8(%ebp),%eax
08753a15 +0x15:  mov    %eax,(%esp)
08753a18 +0x18:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753a1d +0x1d:  add    $0x14,%esp
08753a20 +0x20:  pop    %ebx
08753a21 +0x21:  pop    %ebp
08753a22 +0x22:  ret
08753a23 +0x23:  nop
08753a24 +0x24:  lea    0x0(%esi),%esi
08753a2a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::DH_Decoder::ReadHeader @ 0x8753a00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DH_Decoder::ReadHeader(DH_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}
```
