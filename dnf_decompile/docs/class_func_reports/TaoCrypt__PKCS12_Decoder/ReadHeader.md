# ReadHeader

`_ZN8TaoCrypt14PKCS12_Decoder10ReadHeaderEv`

`TaoCrypt::PKCS12_Decoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PKCS12_Decoder` | `0x08753bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753bd0  _ZN8TaoCrypt14PKCS12_Decoder10ReadHeaderEv
#           TaoCrypt::PKCS12_Decoder::ReadHeader()
# range [0x08753bd0, 0x08753c0a]
08753bd0 +0x00:  push   %ebp
08753bd1 +0x01:  mov    %esp,%ebp
08753bd3 +0x03:  sub    $0x18,%esp
08753bd6 +0x06:  mov    %ebx,-0x8(%ebp)
08753bd9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08753bde +0x0e:  add    $0xc18fba,%ebx
08753be4 +0x14:  mov    %esi,-0x4(%ebp)
08753be7 +0x17:  mov    0x8(%ebp),%esi
08753bea +0x1a:  mov    %esi,(%esp)
08753bed +0x1d:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753bf2 +0x22:  mov    %esi,(%esp)
08753bf5 +0x25:  call   08753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>  ; TaoCrypt::BER_Decoder::GetVersion()
08753bfa +0x2a:  mov    -0x8(%ebp),%ebx
08753bfd +0x2d:  mov    -0x4(%ebp),%esi
08753c00 +0x30:  mov    %ebp,%esp
08753c02 +0x32:  pop    %ebp
08753c03 +0x33:  ret
08753c04 +0x34:  lea    0x0(%esi),%esi
08753c0a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::PKCS12_Decoder::ReadHeader @ 0x8753bd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PKCS12_Decoder::ReadHeader() */

void __thiscall TaoCrypt::PKCS12_Decoder::ReadHeader(PKCS12_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}
```
