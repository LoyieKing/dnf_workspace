# ClearActionAndSendtoUser

`_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS`

`APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x08122390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122390  _ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS
#           APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
# range [0x08122390, 0x08122397]
08122390 +0x00:  push   %ebp
08122391 +0x01:  mov    %esp,%ebp
08122393 +0x03:  sub    $0x10,%esp
08122396 +0x06:  leave
08122397 +0x07:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::ClearActionAndSendtoUser @ 0x8122390

/* APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int,
   ENUM_PACKETCLASS) */

void APSystem::CUserProc::ClearActionAndSendtoUser(void)

{
  return;
}
```
