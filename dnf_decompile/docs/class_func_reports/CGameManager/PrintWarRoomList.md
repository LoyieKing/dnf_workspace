# PrintWarRoomList

`_ZN12CGameManager16PrintWarRoomListEv`

`CGameManager::PrintWarRoomList()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298b40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298b40  _ZN12CGameManager16PrintWarRoomListEv
#           CGameManager::PrintWarRoomList()
# range [0x08298b40, 0x08298b47]
08298b40 +0x00:  push   %ebp
08298b41 +0x01:  mov    %esp,%ebp
08298b43 +0x03:  sub    $0x50,%esp
08298b46 +0x06:  leave
08298b47 +0x07:  ret
```

## 反编译 C

```c
// CGameManager::PrintWarRoomList @ 0x8298b40

/* CGameManager::PrintWarRoomList() */

void CGameManager::PrintWarRoomList(void)

{
  return;
}
```
