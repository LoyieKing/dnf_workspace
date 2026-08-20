# Log

`_ZN5yaSSL3LogC1EPKc`

`yaSSL::Log::Log(char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Log` | `0x087a1440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1440  _ZN5yaSSL3LogC1EPKc
#           yaSSL::Log::Log(char const*)
# range [0x087a1440, 0x087a1449]
087a1440 +0x00:  push   %ebp
087a1441 +0x01:  mov    %esp,%ebp
087a1443 +0x03:  pop    %ebp
087a1444 +0x04:  ret
087a1445 +0x05:  nop
087a1446 +0x06:  lea    0x0(%esi),%esi
087a1449 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Log::Log @ 0x87a1440

/* yaSSL::Log::Log(char const*) */

void __thiscall yaSSL::Log::Log(Log *this,char *param_1)

{
  return;
}
```
