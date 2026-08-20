# Test

`_ZN19AvatarConvertServer4TestEv`

`AvatarConvertServer::Test()`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x0819220c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819220c  _ZN19AvatarConvertServer4TestEv
#           AvatarConvertServer::Test()
# range [0x0819220c, 0x08192211]
0819220c +0x00:  push   %ebp
0819220d +0x01:  mov    %esp,%ebp
0819220f +0x03:  pop    %ebp
08192210 +0x04:  ret
08192211 +0x05:  nop
```

## 反编译 C

```c
// AvatarConvertServer::Test @ 0x819220c

/* AvatarConvertServer::Test() */

void AvatarConvertServer::Test(void)

{
  return;
}
```
