# TurnOffTLS

`_ZN5yaSSL10Connection10TurnOffTLSEv`

`yaSSL::Connection::TurnOffTLS()`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x08747240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747240  _ZN5yaSSL10Connection10TurnOffTLSEv
#           yaSSL::Connection::TurnOffTLS()
# range [0x08747240, 0x08747259]
08747240 +0x00:  push   %ebp
08747241 +0x01:  mov    %esp,%ebp
08747243 +0x03:  mov    0x8(%ebp),%eax
08747246 +0x06:  movb   $0x0,0x12a(%eax)
0874724d +0x0d:  movb   $0x0,0x12f(%eax)
08747254 +0x14:  pop    %ebp
08747255 +0x15:  ret
08747256 +0x16:  lea    0x0(%esi),%esi
08747259 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Connection::TurnOffTLS @ 0x8747240

/* yaSSL::Connection::TurnOffTLS() */

void __thiscall yaSSL::Connection::TurnOffTLS(Connection *this)

{
  this[0x12a] = (Connection)0x0;
  this[0x12f] = (Connection)0x0;
  return;
}
```
