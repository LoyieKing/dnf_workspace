# ProcLockInSeriaRoom

`_ZNK26CLocalChinaErrorDispatcher19ProcLockInSeriaRoomER5CUser14ENUM_CMDPACKET`

`CLocalChinaErrorDispatcher::ProcLockInSeriaRoom(CUser&, ENUM_CMDPACKET) const`

| 类 | 地址 |
|---|---|
| `CLocalChinaErrorDispatcher` | `0x0812b0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812b0e6  _ZNK26CLocalChinaErrorDispatcher19ProcLockInSeriaRoomER5CUser14ENUM_CMDPACKET
#           CLocalChinaErrorDispatcher::ProcLockInSeriaRoom(CUser&, ENUM_CMDPACKET) const
# range [0x0812b0e6, 0x0812b0ef]
0812b0e6 +0x00:  push   %ebp
0812b0e7 +0x01:  mov    %esp,%ebp
0812b0e9 +0x03:  mov    $0x0,%eax
0812b0ee +0x08:  pop    %ebp
0812b0ef +0x09:  ret
```

## 反编译 C

```c
// CLocalChinaErrorDispatcher::ProcLockInSeriaRoom @ 0x812b0e6

/* CLocalChinaErrorDispatcher::ProcLockInSeriaRoom(CUser&, ENUM_CMDPACKET) const */

undefined4 CLocalChinaErrorDispatcher::ProcLockInSeriaRoom(void)

{
  return 0;
}
```
