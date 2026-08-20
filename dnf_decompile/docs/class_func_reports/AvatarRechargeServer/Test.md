# Test

`_ZN20AvatarRechargeServer4TestEv`

`AvatarRechargeServer::Test()`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190266  _ZN20AvatarRechargeServer4TestEv
#           AvatarRechargeServer::Test()
# range [0x08190266, 0x0819026b]
08190266 +0x00:  push   %ebp
08190267 +0x01:  mov    %esp,%ebp
08190269 +0x03:  pop    %ebp
0819026a +0x04:  ret
0819026b +0x05:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::Test @ 0x8190266

/* AvatarRechargeServer::Test() */

void AvatarRechargeServer::Test(void)

{
  return;
}
```
