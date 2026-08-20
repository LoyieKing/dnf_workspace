# OnCreateRoom

`_ZN15CRelayBattleMgr12OnCreateRoomEi`

`CRelayBattleMgr::OnCreateRoom(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de0cc  _ZN15CRelayBattleMgr12OnCreateRoomEi
#           CRelayBattleMgr::OnCreateRoom(int)
# range [0x085de0cc, 0x085de0dd]
085de0cc +0x00:  push   %ebp
085de0cd +0x01:  mov    %esp,%ebp
085de0cf +0x03:  cmpl   $0x0,0xc(%ebp)
085de0d3 +0x07:  js     085de0db <+0xf>
085de0d5 +0x09:  cmpl   $0x7,0xc(%ebp)
085de0d9 +0x0d:  jmp    085de0dc <+0x10>
085de0db +0x0f:  nop
085de0dc +0x10:  pop    %ebp
085de0dd +0x11:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnCreateRoom @ 0x85de0cc

/* CRelayBattleMgr::OnCreateRoom(int) */

void CRelayBattleMgr::OnCreateRoom(int param_1)

{
  return;
}
```
