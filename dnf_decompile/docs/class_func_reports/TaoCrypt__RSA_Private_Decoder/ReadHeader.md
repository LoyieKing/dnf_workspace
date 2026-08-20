# ReadHeader

`_ZN8TaoCrypt19RSA_Private_Decoder10ReadHeaderEv`

`TaoCrypt::RSA_Private_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_Private_Decoder` | `0x08753920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753920  _ZN8TaoCrypt19RSA_Private_Decoder10ReadHeaderEv
#           TaoCrypt::RSA_Private_Decoder::ReadHeader()
# range [0x08753920, 0x0875395a]
08753920 +0x00:  push   %ebp
08753921 +0x01:  mov    %esp,%ebp
08753923 +0x03:  sub    $0x18,%esp
08753926 +0x06:  mov    %ebx,-0x8(%ebp)
08753929 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875392e +0x0e:  add    $0xc1926a,%ebx
08753934 +0x14:  mov    %esi,-0x4(%ebp)
08753937 +0x17:  mov    0x8(%ebp),%esi
0875393a +0x1a:  mov    %esi,(%esp)
0875393d +0x1d:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753942 +0x22:  mov    %esi,(%esp)
08753945 +0x25:  call   08753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>  ; TaoCrypt::BER_Decoder::GetVersion()
0875394a +0x2a:  mov    -0x8(%ebp),%ebx
0875394d +0x2d:  mov    -0x4(%ebp),%esi
08753950 +0x30:  mov    %ebp,%esp
08753952 +0x32:  pop    %ebp
08753953 +0x33:  ret
08753954 +0x34:  lea    0x0(%esi),%esi
0875395a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_Private_Decoder::ReadHeader @ 0x8753920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Private_Decoder::ReadHeader() */

void __thiscall TaoCrypt::RSA_Private_Decoder::ReadHeader(RSA_Private_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}
```
