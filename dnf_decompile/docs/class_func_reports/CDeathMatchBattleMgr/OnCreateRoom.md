# OnCreateRoom

`_ZN20CDeathMatchBattleMgr12OnCreateRoomEi`

`CDeathMatchBattleMgr::OnCreateRoom(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085dee66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dee66  _ZN20CDeathMatchBattleMgr12OnCreateRoomEi
#           CDeathMatchBattleMgr::OnCreateRoom(int)
# range [0x085dee66, 0x085dee77]
085dee66 +0x00:  push   %ebp
085dee67 +0x01:  mov    %esp,%ebp
085dee69 +0x03:  cmpl   $0x0,0xc(%ebp)
085dee6d +0x07:  js     085dee75 <+0xf>
085dee6f +0x09:  cmpl   $0x7,0xc(%ebp)
085dee73 +0x0d:  jmp    085dee76 <+0x10>
085dee75 +0x0f:  nop
085dee76 +0x10:  pop    %ebp
085dee77 +0x11:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnCreateRoom @ 0x85dee66

/* CDeathMatchBattleMgr::OnCreateRoom(int) */

void CDeathMatchBattleMgr::OnCreateRoom(int param_1)

{
  return;
}
```
