# Destroy

`_ZN20AvatarRechargeServer7DestroyEv`

`AvatarRechargeServer::Destroy()`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081902de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081902de  _ZN20AvatarRechargeServer7DestroyEv
#           AvatarRechargeServer::Destroy()
# range [0x081902de, 0x081902e7]
081902de +0x00:  push   %ebp
081902df +0x01:  mov    %esp,%ebp
081902e1 +0x03:  mov    $0x1,%eax
081902e6 +0x08:  pop    %ebp
081902e7 +0x09:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::Destroy @ 0x81902de

/* AvatarRechargeServer::Destroy() */

undefined4 AvatarRechargeServer::Destroy(void)

{
  return 1;
}
```
