# ~Log

`_ZN5yaSSL3LogD1Ev`

`yaSSL::Log::~Log()`

| 类 | 地址 |
|---|---|
| `yaSSL::Log` | `0x087a1450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1450  _ZN5yaSSL3LogD1Ev
#           yaSSL::Log::~Log()
# range [0x087a1450, 0x087a1459]
087a1450 +0x00:  push   %ebp
087a1451 +0x01:  mov    %esp,%ebp
087a1453 +0x03:  pop    %ebp
087a1454 +0x04:  ret
087a1455 +0x05:  nop
087a1456 +0x06:  lea    0x0(%esi),%esi
087a1459 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Log::~Log @ 0x87a1450

/* yaSSL::Log::~Log() */

void __thiscall yaSSL::Log::~Log(Log *this)

{
  return;
}
```
