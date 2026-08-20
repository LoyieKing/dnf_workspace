# Reload_APC_Info

`_ZN17TowerOfDespairMgr15Reload_APC_InfoEv`

`TowerOfDespairMgr::Reload_APC_Info()`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08644360` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08644360  _ZN17TowerOfDespairMgr15Reload_APC_InfoEv
#           TowerOfDespairMgr::Reload_APC_Info()
# range [0x08644360, 0x08644365]
08644360 +0x00:  push   %ebp
08644361 +0x01:  mov    %esp,%ebp
08644363 +0x03:  pop    %ebp
08644364 +0x04:  ret
08644365 +0x05:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::Reload_APC_Info @ 0x8644360

/* TowerOfDespairMgr::Reload_APC_Info() */

void TowerOfDespairMgr::Reload_APC_Info(void)

{
  return;
}
```
