# get_player_count

`_ZN8PvP_Room16get_player_countEv`

`PvP_Room::get_player_count()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d68a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d68a0  _ZN8PvP_Room16get_player_countEv
#           PvP_Room::get_player_count()
# range [0x085d68a0, 0x085d6907]
085d68a0 +0x00:  push   %ebp
085d68a1 +0x01:  mov    %esp,%ebp
085d68a3 +0x03:  sub    $0x28,%esp
085d68a6 +0x06:  movl   $0x0,-0x10(%ebp)
085d68ad +0x0d:  movl   $0x0,-0xc(%ebp)
085d68b4 +0x14:  jmp    085d68f7 <+0x57>
085d68b6 +0x16:  mov    -0xc(%ebp),%edx
085d68b9 +0x19:  mov    0x8(%ebp),%eax
085d68bc +0x1c:  add    $0xc,%edx
085d68bf +0x1f:  mov    (%eax,%edx,4),%eax
085d68c2 +0x22:  test   %eax,%eax
085d68c4 +0x24:  je     085d68e6 <+0x46>
085d68c6 +0x26:  mov    -0xc(%ebp),%eax
085d68c9 +0x29:  mov    %eax,0x4(%esp)
085d68cd +0x2d:  mov    0x8(%ebp),%eax
085d68d0 +0x30:  mov    %eax,(%esp)
085d68d3 +0x33:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085d68d8 +0x38:  xor    $0x1,%eax
085d68db +0x3b:  test   %al,%al
085d68dd +0x3d:  je     085d68e6 <+0x46>
085d68df +0x3f:  mov    $0x1,%eax
085d68e4 +0x44:  jmp    085d68eb <+0x4b>
085d68e6 +0x46:  mov    $0x0,%eax
085d68eb +0x4b:  test   %al,%al
085d68ed +0x4d:  je     085d68f3 <+0x53>
085d68ef +0x4f:  addl   $0x1,-0x10(%ebp)
085d68f3 +0x53:  addl   $0x1,-0xc(%ebp)
085d68f7 +0x57:  cmpl   $0x7,-0xc(%ebp)
085d68fb +0x5b:  setle  %al
085d68fe +0x5e:  test   %al,%al
085d6900 +0x60:  jne    085d68b6 <+0x16>
085d6902 +0x62:  mov    -0x10(%ebp),%eax
085d6905 +0x65:  leave
085d6906 +0x66:  ret
085d6907 +0x67:  nop
```

## 反编译 C

```c
// PvP_Room::get_player_count @ 0x85d68a0

/* PvP_Room::get_player_count() */

int __thiscall PvP_Room::get_player_count(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  do {
    if (7 < local_10) {
      return local_14;
    }
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d68e6:
      bVar1 = false;
    }
    else {
      cVar2 = IsPvpObserver(this,local_10);
      if (cVar2 == '\x01') goto LAB_085d68e6;
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = local_14 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
