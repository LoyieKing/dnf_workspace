# OnLeaveRoom

`_ZN20CDeathMatchBattleMgr11OnLeaveRoomEi`

`CDeathMatchBattleMgr::OnLeaveRoom(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085dee8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dee8a  _ZN20CDeathMatchBattleMgr11OnLeaveRoomEi
#           CDeathMatchBattleMgr::OnLeaveRoom(int)
# range [0x085dee8a, 0x085dee9b]
085dee8a +0x00:  push   %ebp
085dee8b +0x01:  mov    %esp,%ebp
085dee8d +0x03:  cmpl   $0x0,0xc(%ebp)
085dee91 +0x07:  js     085dee99 <+0xf>
085dee93 +0x09:  cmpl   $0x7,0xc(%ebp)
085dee97 +0x0d:  jmp    085dee9a <+0x10>
085dee99 +0x0f:  nop
085dee9a +0x10:  pop    %ebp
085dee9b +0x11:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnLeaveRoom @ 0x85dee8a

/* CDeathMatchBattleMgr::OnLeaveRoom(int) */

void CDeathMatchBattleMgr::OnLeaveRoom(int param_1)

{
  return;
}
```
