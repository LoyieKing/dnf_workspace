# ReadHeader

`_ZN8TaoCrypt19DSA_Private_Decoder10ReadHeaderEv`

`TaoCrypt::DSA_Private_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Private_Decoder` | `0x08753960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753960  _ZN8TaoCrypt19DSA_Private_Decoder10ReadHeaderEv
#           TaoCrypt::DSA_Private_Decoder::ReadHeader()
# range [0x08753960, 0x0875399a]
08753960 +0x00:  push   %ebp
08753961 +0x01:  mov    %esp,%ebp
08753963 +0x03:  sub    $0x18,%esp
08753966 +0x06:  mov    %ebx,-0x8(%ebp)
08753969 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875396e +0x0e:  add    $0xc1922a,%ebx
08753974 +0x14:  mov    %esi,-0x4(%ebp)
08753977 +0x17:  mov    0x8(%ebp),%esi
0875397a +0x1a:  mov    %esi,(%esp)
0875397d +0x1d:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753982 +0x22:  mov    %esi,(%esp)
08753985 +0x25:  call   08753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>  ; TaoCrypt::BER_Decoder::GetVersion()
0875398a +0x2a:  mov    -0x8(%ebp),%ebx
0875398d +0x2d:  mov    -0x4(%ebp),%esi
08753990 +0x30:  mov    %ebp,%esp
08753992 +0x32:  pop    %ebp
08753993 +0x33:  ret
08753994 +0x34:  lea    0x0(%esi),%esi
0875399a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::DSA_Private_Decoder::ReadHeader @ 0x8753960

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Private_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DSA_Private_Decoder::ReadHeader(DSA_Private_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}
```
