# send_to_pvp_team

`_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser`

`PvP_Room::send_to_pvp_team(PacketGuard&, CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbe64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbe64  _ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser
#           PvP_Room::send_to_pvp_team(PacketGuard&, CUser*)
# range [0x085dbe64, 0x085dbf81]
085dbe64 +0x000:  push   %ebp
085dbe65 +0x001:  mov    %esp,%ebp
085dbe67 +0x003:  sub    $0x28,%esp
085dbe6a +0x006:  mov    0x8(%ebp),%eax
085dbe6d +0x009:  mov    0x4(%eax),%eax
085dbe70 +0x00c:  cmp    $0x1,%eax
085dbe73 +0x00f:  jle    085dbf7c <+0x118>
085dbe79 +0x015:  movl   $0x0,-0x14(%ebp)
085dbe80 +0x01c:  movl   $0x0,-0x10(%ebp)
085dbe87 +0x023:  jmp    085dbee8 <+0x84>
085dbe89 +0x025:  mov    -0x10(%ebp),%edx
085dbe8c +0x028:  mov    0x8(%ebp),%eax
085dbe8f +0x02b:  add    $0xc,%edx
085dbe92 +0x02e:  mov    (%eax,%edx,4),%eax
085dbe95 +0x031:  test   %eax,%eax
085dbe97 +0x033:  je     085dbeb9 <+0x55>
085dbe99 +0x035:  mov    -0x10(%ebp),%eax
085dbe9c +0x038:  mov    %eax,0x4(%esp)
085dbea0 +0x03c:  mov    0x8(%ebp),%eax
085dbea3 +0x03f:  mov    %eax,(%esp)
085dbea6 +0x042:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dbeab +0x047:  xor    $0x1,%eax
085dbeae +0x04a:  test   %al,%al
085dbeb0 +0x04c:  je     085dbeb9 <+0x55>
085dbeb2 +0x04e:  mov    $0x1,%eax
085dbeb7 +0x053:  jmp    085dbebe <+0x5a>
085dbeb9 +0x055:  mov    $0x0,%eax
085dbebe +0x05a:  test   %al,%al
085dbec0 +0x05c:  je     085dbee4 <+0x80>
085dbec2 +0x05e:  mov    -0x10(%ebp),%edx
085dbec5 +0x061:  mov    0x8(%ebp),%eax
085dbec8 +0x064:  add    $0xc,%edx
085dbecb +0x067:  mov    (%eax,%edx,4),%eax
085dbece +0x06a:  cmp    0x10(%ebp),%eax
085dbed1 +0x06d:  jne    085dbee4 <+0x80>
085dbed3 +0x06f:  mov    -0x10(%ebp),%edx
085dbed6 +0x072:  mov    0x8(%ebp),%eax
085dbed9 +0x075:  add    $0x14,%edx
085dbedc +0x078:  mov    (%eax,%edx,4),%eax
085dbedf +0x07b:  mov    %eax,-0x14(%ebp)
085dbee2 +0x07e:  jmp    085dbef3 <+0x8f>
085dbee4 +0x080:  addl   $0x1,-0x10(%ebp)
085dbee8 +0x084:  cmpl   $0x7,-0x10(%ebp)
085dbeec +0x088:  setle  %al
085dbeef +0x08b:  test   %al,%al
085dbef1 +0x08d:  jne    085dbe89 <+0x25>
085dbef3 +0x08f:  cmpl   $0x0,-0x14(%ebp)
085dbef7 +0x093:  je     085dbf7f <+0x11b>
085dbefd +0x099:  movl   $0x0,-0xc(%ebp)
085dbf04 +0x0a0:  jmp    085dbf6f <+0x10b>
085dbf06 +0x0a2:  mov    -0xc(%ebp),%edx
085dbf09 +0x0a5:  mov    0x8(%ebp),%eax
085dbf0c +0x0a8:  add    $0xc,%edx
085dbf0f +0x0ab:  mov    (%eax,%edx,4),%eax
085dbf12 +0x0ae:  test   %eax,%eax
085dbf14 +0x0b0:  je     085dbf36 <+0xd2>
085dbf16 +0x0b2:  mov    -0xc(%ebp),%eax
085dbf19 +0x0b5:  mov    %eax,0x4(%esp)
085dbf1d +0x0b9:  mov    0x8(%ebp),%eax
085dbf20 +0x0bc:  mov    %eax,(%esp)
085dbf23 +0x0bf:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dbf28 +0x0c4:  xor    $0x1,%eax
085dbf2b +0x0c7:  test   %al,%al
085dbf2d +0x0c9:  je     085dbf36 <+0xd2>
085dbf2f +0x0cb:  mov    $0x1,%eax
085dbf34 +0x0d0:  jmp    085dbf3b <+0xd7>
085dbf36 +0x0d2:  mov    $0x0,%eax
085dbf3b +0x0d7:  test   %al,%al
085dbf3d +0x0d9:  je     085dbf6b <+0x107>
085dbf3f +0x0db:  mov    -0xc(%ebp),%edx
085dbf42 +0x0de:  mov    0x8(%ebp),%eax
085dbf45 +0x0e1:  add    $0x14,%edx
085dbf48 +0x0e4:  mov    (%eax,%edx,4),%eax
085dbf4b +0x0e7:  cmp    -0x14(%ebp),%eax
085dbf4e +0x0ea:  jne    085dbf6b <+0x107>
085dbf50 +0x0ec:  mov    -0xc(%ebp),%edx
085dbf53 +0x0ef:  mov    0x8(%ebp),%eax
085dbf56 +0x0f2:  add    $0xc,%edx
085dbf59 +0x0f5:  mov    (%eax,%edx,4),%eax
085dbf5c +0x0f8:  mov    0xc(%ebp),%edx
085dbf5f +0x0fb:  mov    %edx,0x4(%esp)
085dbf63 +0x0ff:  mov    %eax,(%esp)
085dbf66 +0x102:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085dbf6b +0x107:  addl   $0x1,-0xc(%ebp)
085dbf6f +0x10b:  cmpl   $0x7,-0xc(%ebp)
085dbf73 +0x10f:  setle  %al
085dbf76 +0x112:  test   %al,%al
085dbf78 +0x114:  jne    085dbf06 <+0xa2>
085dbf7a +0x116:  jmp    085dbf80 <+0x11c>
085dbf7c +0x118:  nop
085dbf7d +0x119:  jmp    085dbf80 <+0x11c>
085dbf7f +0x11b:  nop
085dbf80 +0x11c:  leave
085dbf81 +0x11d:  ret
```

## 反编译 C

```c
// PvP_Room::send_to_pvp_team @ 0x85dbe64

/* PvP_Room::send_to_pvp_team(PacketGuard&, CUser*) */

void __thiscall PvP_Room::send_to_pvp_team(PvP_Room *this,PacketGuard *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (1 < *(int *)(this + 4)) {
    local_18 = 0;
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if ((*(int *)(this + (local_14 + 0xc) * 4) == 0) ||
         (cVar2 = IsPvpObserver(this,local_14), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(CUser **)(this + (local_14 + 0xc) * 4) == param_2)) {
        local_18 = *(int *)(this + (local_14 + 0x14) * 4);
        break;
      }
    }
    if (local_18 != 0) {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(int *)(this + (local_10 + 0x14) * 4) == local_18)) {
          CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),param_1);
        }
      }
    }
  }
  return;
}
```
