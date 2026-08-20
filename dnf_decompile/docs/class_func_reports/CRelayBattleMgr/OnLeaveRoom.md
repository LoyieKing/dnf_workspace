# OnLeaveRoom

`_ZN15CRelayBattleMgr11OnLeaveRoomEi`

`CRelayBattleMgr::OnLeaveRoom(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de0f0  _ZN15CRelayBattleMgr11OnLeaveRoomEi
#           CRelayBattleMgr::OnLeaveRoom(int)
# range [0x085de0f0, 0x085de159]
085de0f0 +0x00:  push   %ebp
085de0f1 +0x01:  mov    %esp,%ebp
085de0f3 +0x03:  sub    $0x18,%esp
085de0f6 +0x06:  cmpl   $0x0,0xc(%ebp)
085de0fa +0x0a:  js     085de154 <+0x64>
085de0fc +0x0c:  cmpl   $0x7,0xc(%ebp)
085de100 +0x10:  jg     085de157 <+0x67>
085de102 +0x12:  mov    0xc(%ebp),%edx
085de105 +0x15:  mov    0x8(%ebp),%ecx
085de108 +0x18:  mov    %edx,%eax
085de10a +0x1a:  add    %eax,%eax
085de10c +0x1c:  add    %edx,%eax
085de10e +0x1e:  shl    $0x2,%eax
085de111 +0x21:  mov    (%eax,%ecx,1),%eax
085de114 +0x24:  cmp    $0x2,%eax
085de117 +0x27:  jne    085de13b <+0x4b>
085de119 +0x29:  movl   $0x1,0xc(%esp)
085de121 +0x31:  movl   $0xffffffff,0x8(%esp)
085de129 +0x39:  mov    0xc(%ebp),%eax
085de12c +0x3c:  mov    %eax,0x4(%esp)
085de130 +0x40:  mov    0x8(%ebp),%eax
085de133 +0x43:  mov    %eax,(%esp)
085de136 +0x46:  call   085de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>  ; CRelayBattleMgr::OnDiePlayer(int, int, bool)
085de13b +0x4b:  mov    0xc(%ebp),%edx
085de13e +0x4e:  mov    %edx,%eax
085de140 +0x50:  add    %eax,%eax
085de142 +0x52:  add    %edx,%eax
085de144 +0x54:  shl    $0x2,%eax
085de147 +0x57:  add    0x8(%ebp),%eax
085de14a +0x5a:  mov    %eax,(%esp)
085de14d +0x5d:  call   085de01a <_ZN12CRelayBattle5ResetEv>  ; CRelayBattle::Reset()
085de152 +0x62:  jmp    085de158 <+0x68>
085de154 +0x64:  nop
085de155 +0x65:  jmp    085de158 <+0x68>
085de157 +0x67:  nop
085de158 +0x68:  leave
085de159 +0x69:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnLeaveRoom @ 0x85de0f0

/* CRelayBattleMgr::OnLeaveRoom(int) */

void __thiscall CRelayBattleMgr::OnLeaveRoom(CRelayBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    if (*(int *)(this + param_1 * 0xc) == 2) {
      OnDiePlayer(this,param_1,-1,true);
    }
    CRelayBattle::Reset((CRelayBattle *)(this + param_1 * 0xc));
  }
  return;
}
```
