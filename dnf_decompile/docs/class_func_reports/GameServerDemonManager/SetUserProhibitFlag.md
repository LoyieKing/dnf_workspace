# SetUserProhibitFlag

`_ZN22GameServerDemonManager19SetUserProhibitFlagEb`

`GameServerDemonManager::SetUserProhibitFlag(bool)`

| 类 | 地址 |
|---|---|
| `GameServerDemonManager` | `0x080f6222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6222  _ZN22GameServerDemonManager19SetUserProhibitFlagEb
#           GameServerDemonManager::SetUserProhibitFlag(bool)
# range [0x080f6222, 0x080f6239]
080f6222 +0x00:  push   %ebp
080f6223 +0x01:  mov    %esp,%ebp
080f6225 +0x03:  sub    $0x4,%esp
080f6228 +0x06:  mov    0xc(%ebp),%eax
080f622b +0x09:  mov    %al,-0x4(%ebp)
080f622e +0x0c:  mov    0x8(%ebp),%eax
080f6231 +0x0f:  movzbl -0x4(%ebp),%edx
080f6235 +0x13:  mov    %dl,(%eax)
080f6237 +0x15:  leave
080f6238 +0x16:  ret
080f6239 +0x17:  nop
```

## 反编译 C

```c
// GameServerDemonManager::SetUserProhibitFlag @ 0x80f6222

/* GameServerDemonManager::SetUserProhibitFlag(bool) */

void __thiscall
GameServerDemonManager::SetUserProhibitFlag(GameServerDemonManager *this,bool param_1)

{
  *this = (GameServerDemonManager)param_1;
  return;
}
```
