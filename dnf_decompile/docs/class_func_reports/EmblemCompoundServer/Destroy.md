# Destroy

`_ZN20EmblemCompoundServer7DestroyEv`

`EmblemCompoundServer::Destroy()`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x0819162c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819162c  _ZN20EmblemCompoundServer7DestroyEv
#           EmblemCompoundServer::Destroy()
# range [0x0819162c, 0x08191635]
0819162c +0x00:  push   %ebp
0819162d +0x01:  mov    %esp,%ebp
0819162f +0x03:  mov    $0x1,%eax
08191634 +0x08:  pop    %ebp
08191635 +0x09:  ret
```

## 反编译 C

```c
// EmblemCompoundServer::Destroy @ 0x819162c

/* EmblemCompoundServer::Destroy() */

undefined4 EmblemCompoundServer::Destroy(void)

{
  return 1;
}
```
