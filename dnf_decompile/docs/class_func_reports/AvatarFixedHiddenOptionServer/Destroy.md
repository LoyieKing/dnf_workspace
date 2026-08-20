# Destroy

`_ZN29AvatarFixedHiddenOptionServer7DestroyEv`

`AvatarFixedHiddenOptionServer::Destroy()`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e1e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e1e2  _ZN29AvatarFixedHiddenOptionServer7DestroyEv
#           AvatarFixedHiddenOptionServer::Destroy()
# range [0x0817e1e2, 0x0817e1eb]
0817e1e2 +0x00:  push   %ebp
0817e1e3 +0x01:  mov    %esp,%ebp
0817e1e5 +0x03:  mov    $0x1,%eax
0817e1ea +0x08:  pop    %ebp
0817e1eb +0x09:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::Destroy @ 0x817e1e2

/* AvatarFixedHiddenOptionServer::Destroy() */

undefined4 AvatarFixedHiddenOptionServer::Destroy(void)

{
  return 1;
}
```
