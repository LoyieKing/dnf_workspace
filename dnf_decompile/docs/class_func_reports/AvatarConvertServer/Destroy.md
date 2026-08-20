# Destroy

`_ZN19AvatarConvertServer7DestroyEv`

`AvatarConvertServer::Destroy()`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x0819312c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819312c  _ZN19AvatarConvertServer7DestroyEv
#           AvatarConvertServer::Destroy()
# range [0x0819312c, 0x08193135]
0819312c +0x00:  push   %ebp
0819312d +0x01:  mov    %esp,%ebp
0819312f +0x03:  mov    $0x1,%eax
08193134 +0x08:  pop    %ebp
08193135 +0x09:  ret
```

## 反编译 C

```c
// AvatarConvertServer::Destroy @ 0x819312c

/* AvatarConvertServer::Destroy() */

undefined4 AvatarConvertServer::Destroy(void)

{
  return 1;
}
```
