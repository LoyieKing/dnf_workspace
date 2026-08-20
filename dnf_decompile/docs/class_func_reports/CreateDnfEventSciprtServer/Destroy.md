# Destroy

`_ZN26CreateDnfEventSciprtServer7DestroyEv`

`CreateDnfEventSciprtServer::Destroy()`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprtServer` | `0x08164590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164590  _ZN26CreateDnfEventSciprtServer7DestroyEv
#           CreateDnfEventSciprtServer::Destroy()
# range [0x08164590, 0x08164599]
08164590 +0x00:  push   %ebp
08164591 +0x01:  mov    %esp,%ebp
08164593 +0x03:  mov    $0x1,%eax
08164598 +0x08:  pop    %ebp
08164599 +0x09:  ret
```

## 反编译 C

```c
// CreateDnfEventSciprtServer::Destroy @ 0x8164590

/* CreateDnfEventSciprtServer::Destroy() */

undefined4 CreateDnfEventSciprtServer::Destroy(void)

{
  return 1;
}
```
