# OnJoinRoom

`_ZN20CDeathMatchBattleMgr10OnJoinRoomEi`

`CDeathMatchBattleMgr::OnJoinRoom(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085dee78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dee78  _ZN20CDeathMatchBattleMgr10OnJoinRoomEi
#           CDeathMatchBattleMgr::OnJoinRoom(int)
# range [0x085dee78, 0x085dee89]
085dee78 +0x00:  push   %ebp
085dee79 +0x01:  mov    %esp,%ebp
085dee7b +0x03:  cmpl   $0x0,0xc(%ebp)
085dee7f +0x07:  js     085dee87 <+0xf>
085dee81 +0x09:  cmpl   $0x7,0xc(%ebp)
085dee85 +0x0d:  jmp    085dee88 <+0x10>
085dee87 +0x0f:  nop
085dee88 +0x10:  pop    %ebp
085dee89 +0x11:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnJoinRoom @ 0x85dee78

/* CDeathMatchBattleMgr::OnJoinRoom(int) */

void CDeathMatchBattleMgr::OnJoinRoom(int param_1)

{
  return;
}
```
