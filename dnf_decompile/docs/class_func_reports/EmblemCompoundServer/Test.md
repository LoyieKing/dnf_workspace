# Test

`_ZN20EmblemCompoundServer4TestEv`

`EmblemCompoundServer::Test()`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x081915b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081915b4  _ZN20EmblemCompoundServer4TestEv
#           EmblemCompoundServer::Test()
# range [0x081915b4, 0x081915b9]
081915b4 +0x00:  push   %ebp
081915b5 +0x01:  mov    %esp,%ebp
081915b7 +0x03:  pop    %ebp
081915b8 +0x04:  ret
081915b9 +0x05:  nop
```

## 反编译 C

```c
// EmblemCompoundServer::Test @ 0x81915b4

/* EmblemCompoundServer::Test() */

void EmblemCompoundServer::Test(void)

{
  return;
}
```
