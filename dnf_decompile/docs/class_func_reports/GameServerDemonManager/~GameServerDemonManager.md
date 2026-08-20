# ~GameServerDemonManager

`_ZN22GameServerDemonManagerD1Ev`

`GameServerDemonManager::~GameServerDemonManager()`

| 类 | 地址 |
|---|---|
| `GameServerDemonManager` | `0x080f621c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f621c  _ZN22GameServerDemonManagerD1Ev
#           GameServerDemonManager::~GameServerDemonManager()
# range [0x080f621c, 0x080f6221]
080f621c +0x00:  push   %ebp
080f621d +0x01:  mov    %esp,%ebp
080f621f +0x03:  pop    %ebp
080f6220 +0x04:  ret
080f6221 +0x05:  nop
```

## 反编译 C

```c
// GameServerDemonManager::~GameServerDemonManager @ 0x80f621c

/* GameServerDemonManager::~GameServerDemonManager() */

void __thiscall GameServerDemonManager::~GameServerDemonManager(GameServerDemonManager *this)

{
  return;
}
```
