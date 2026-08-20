# OnJoinRoom

`_ZN15CRelayBattleMgr10OnJoinRoomEi`

`CRelayBattleMgr::OnJoinRoom(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de0de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de0de  _ZN15CRelayBattleMgr10OnJoinRoomEi
#           CRelayBattleMgr::OnJoinRoom(int)
# range [0x085de0de, 0x085de0ef]
085de0de +0x00:  push   %ebp
085de0df +0x01:  mov    %esp,%ebp
085de0e1 +0x03:  cmpl   $0x0,0xc(%ebp)
085de0e5 +0x07:  js     085de0ed <+0xf>
085de0e7 +0x09:  cmpl   $0x7,0xc(%ebp)
085de0eb +0x0d:  jmp    085de0ee <+0x10>
085de0ed +0x0f:  nop
085de0ee +0x10:  pop    %ebp
085de0ef +0x11:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnJoinRoom @ 0x85de0de

/* CRelayBattleMgr::OnJoinRoom(int) */

void CRelayBattleMgr::OnJoinRoom(int param_1)

{
  return;
}
```
