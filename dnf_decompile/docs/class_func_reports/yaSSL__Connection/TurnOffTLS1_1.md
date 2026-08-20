# TurnOffTLS1_1

`_ZN5yaSSL10Connection13TurnOffTLS1_1Ev`

`yaSSL::Connection::TurnOffTLS1_1()`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x08747260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747260  _ZN5yaSSL10Connection13TurnOffTLS1_1Ev
#           yaSSL::Connection::TurnOffTLS1_1()
# range [0x08747260, 0x08747279]
08747260 +0x00:  push   %ebp
08747261 +0x01:  mov    %esp,%ebp
08747263 +0x03:  mov    0x8(%ebp),%eax
08747266 +0x06:  movb   $0x0,0x12b(%eax)
0874726d +0x0d:  movb   $0x1,0x12f(%eax)
08747274 +0x14:  pop    %ebp
08747275 +0x15:  ret
08747276 +0x16:  lea    0x0(%esi),%esi
08747279 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Connection::TurnOffTLS1_1 @ 0x8747260

/* yaSSL::Connection::TurnOffTLS1_1() */

void __thiscall yaSSL::Connection::TurnOffTLS1_1(Connection *this)

{
  this[299] = (Connection)0x0;
  this[0x12f] = (Connection)0x1;
  return;
}
```
