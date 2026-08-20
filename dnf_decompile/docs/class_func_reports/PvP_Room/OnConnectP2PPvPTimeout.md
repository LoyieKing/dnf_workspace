# OnConnectP2PPvPTimeout

`_ZN8PvP_Room22OnConnectP2PPvPTimeoutEv`

`PvP_Room::OnConnectP2PPvPTimeout()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085ddef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddef6  _ZN8PvP_Room22OnConnectP2PPvPTimeoutEv
#           PvP_Room::OnConnectP2PPvPTimeout()
# range [0x085ddef6, 0x085ddf35]
085ddef6 +0x00:  push   %ebp
085ddef7 +0x01:  mov    %esp,%ebp
085ddef9 +0x03:  sub    $0x18,%esp
085ddefc +0x06:  mov    0x8(%ebp),%eax
085ddeff +0x09:  mov    %eax,(%esp)
085ddf02 +0x0c:  call   085d65e8 <_ZN8PvP_Room17check_start_stateEv>  ; PvP_Room::check_start_state()
085ddf07 +0x11:  xor    $0x1,%eax
085ddf0a +0x14:  test   %al,%al
085ddf0c +0x16:  je     085ddf33 <+0x3d>
085ddf0e +0x18:  mov    0x8(%ebp),%eax
085ddf11 +0x1b:  mov    0x6e4(%eax),%eax
085ddf17 +0x21:  mov    (%eax),%eax
085ddf19 +0x23:  add    $0x58,%eax
085ddf1c +0x26:  mov    (%eax),%ecx
085ddf1e +0x28:  mov    0x8(%ebp),%eax
085ddf21 +0x2b:  mov    0x6e4(%eax),%eax
085ddf27 +0x31:  mov    0x8(%ebp),%edx
085ddf2a +0x34:  mov    %edx,0x4(%esp)
085ddf2e +0x38:  mov    %eax,(%esp)
085ddf31 +0x3b:  call   *%ecx
085ddf33 +0x3d:  leave
085ddf34 +0x3e:  ret
085ddf35 +0x3f:  nop
```

## 反编译 C

```c
// PvP_Room::OnConnectP2PPvPTimeout @ 0x85ddef6

/* PvP_Room::OnConnectP2PPvPTimeout() */

void __thiscall PvP_Room::OnConnectP2PPvPTimeout(PvP_Room *this)

{
  char cVar1;
  
  cVar1 = check_start_state(this);
  if (cVar1 != '\x01') {
    (**(code **)(**(int **)(this + 0x6e4) + 0x58))(*(undefined4 *)(this + 0x6e4),this);
  }
  return;
}
```
