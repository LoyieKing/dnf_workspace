# SendToRoom

`_ZN7WarRoom10SendToRoomER11PacketGuard`

`WarRoom::SendToRoom(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be0cc  _ZN7WarRoom10SendToRoomER11PacketGuard
#           WarRoom::SendToRoom(PacketGuard&)
# range [0x086be0cc, 0x086be119]
086be0cc +0x00:  push   %ebp
086be0cd +0x01:  mov    %esp,%ebp
086be0cf +0x03:  sub    $0x28,%esp
086be0d2 +0x06:  movl   $0x0,-0xc(%ebp)
086be0d9 +0x0d:  jmp    086be10c <+0x40>
086be0db +0x0f:  mov    -0xc(%ebp),%edx
086be0de +0x12:  mov    0x8(%ebp),%eax
086be0e1 +0x15:  add    $0x48,%edx
086be0e4 +0x18:  mov    0xc(%eax,%edx,4),%eax
086be0e8 +0x1c:  test   %eax,%eax
086be0ea +0x1e:  je     086be108 <+0x3c>
086be0ec +0x20:  mov    -0xc(%ebp),%edx
086be0ef +0x23:  mov    0x8(%ebp),%eax
086be0f2 +0x26:  add    $0x48,%edx
086be0f5 +0x29:  mov    0xc(%eax,%edx,4),%eax
086be0f9 +0x2d:  mov    0xc(%ebp),%edx
086be0fc +0x30:  mov    %edx,0x4(%esp)
086be100 +0x34:  mov    %eax,(%esp)
086be103 +0x37:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086be108 +0x3c:  addl   $0x1,-0xc(%ebp)
086be10c +0x40:  cmpl   $0x5,-0xc(%ebp)
086be110 +0x44:  setle  %al
086be113 +0x47:  test   %al,%al
086be115 +0x49:  jne    086be0db <+0xf>
086be117 +0x4b:  leave
086be118 +0x4c:  ret
086be119 +0x4d:  nop
```

## 反编译 C

```c
// WarRoom::SendToRoom @ 0x86be0cc

/* WarRoom::SendToRoom(PacketGuard&) */

void __thiscall WarRoom::SendToRoom(WarRoom *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUser::Send(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc),param_1);
    }
  }
  return;
}
```
