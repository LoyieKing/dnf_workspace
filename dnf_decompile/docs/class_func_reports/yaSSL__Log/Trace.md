# Trace

`_ZN5yaSSL3Log5TraceEPKc`

`yaSSL::Log::Trace(char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Log` | `0x087a1460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1460  _ZN5yaSSL3Log5TraceEPKc
#           yaSSL::Log::Trace(char const*)
# range [0x087a1460, 0x087a1469]
087a1460 +0x00:  push   %ebp
087a1461 +0x01:  mov    %esp,%ebp
087a1463 +0x03:  pop    %ebp
087a1464 +0x04:  ret
087a1465 +0x05:  nop
087a1466 +0x06:  lea    0x0(%esi),%esi
087a1469 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Log::Trace @ 0x87a1460

/* yaSSL::Log::Trace(char const*) */

void yaSSL::Log::Trace(char *param_1)

{
  return;
}
```
