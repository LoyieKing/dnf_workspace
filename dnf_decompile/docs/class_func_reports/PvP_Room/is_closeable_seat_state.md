# is_closeable_seat_state

`_ZN8PvP_Room23is_closeable_seat_stateEv`

`PvP_Room::is_closeable_seat_state()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7726  _ZN8PvP_Room23is_closeable_seat_stateEv
#           PvP_Room::is_closeable_seat_state()
# range [0x085d7726, 0x085d77bf]
085d7726 +0x00:  push   %ebp
085d7727 +0x01:  mov    %esp,%ebp
085d7729 +0x03:  sub    $0x28,%esp
085d772c +0x06:  movl   $0x0,-0x14(%ebp)
085d7733 +0x0d:  movl   $0x0,-0x10(%ebp)
085d773a +0x14:  movl   $0x0,-0xc(%ebp)
085d7741 +0x1b:  jmp    085d779b <+0x75>
085d7743 +0x1d:  mov    -0xc(%ebp),%edx
085d7746 +0x20:  mov    0x8(%ebp),%eax
085d7749 +0x23:  add    $0xc,%edx
085d774c +0x26:  mov    (%eax,%edx,4),%eax
085d774f +0x29:  test   %eax,%eax
085d7751 +0x2b:  je     085d7773 <+0x4d>
085d7753 +0x2d:  mov    -0xc(%ebp),%eax
085d7756 +0x30:  mov    %eax,0x4(%esp)
085d775a +0x34:  mov    0x8(%ebp),%eax
085d775d +0x37:  mov    %eax,(%esp)
085d7760 +0x3a:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085d7765 +0x3f:  xor    $0x1,%eax
085d7768 +0x42:  test   %al,%al
085d776a +0x44:  je     085d7773 <+0x4d>
085d776c +0x46:  mov    $0x1,%eax
085d7771 +0x4b:  jmp    085d7778 <+0x52>
085d7773 +0x4d:  mov    $0x0,%eax
085d7778 +0x52:  test   %al,%al
085d777a +0x54:  je     085d7780 <+0x5a>
085d777c +0x56:  addl   $0x1,-0x14(%ebp)
085d7780 +0x5a:  mov    -0xc(%ebp),%edx
085d7783 +0x5d:  mov    0x8(%ebp),%eax
085d7786 +0x60:  add    $0x14,%edx
085d7789 +0x63:  mov    (%eax,%edx,4),%eax
085d778c +0x66:  cmp    $0xff,%eax
085d7791 +0x6b:  jne    085d7797 <+0x71>
085d7793 +0x6d:  addl   $0x1,-0x10(%ebp)
085d7797 +0x71:  addl   $0x1,-0xc(%ebp)
085d779b +0x75:  cmpl   $0x7,-0xc(%ebp)
085d779f +0x79:  setle  %al
085d77a2 +0x7c:  test   %al,%al
085d77a4 +0x7e:  jne    085d7743 <+0x1d>
085d77a6 +0x80:  cmpl   $0x1,-0x14(%ebp)
085d77aa +0x84:  jne    085d77b9 <+0x93>
085d77ac +0x86:  cmpl   $0x1,-0x10(%ebp)
085d77b0 +0x8a:  jg     085d77b9 <+0x93>
085d77b2 +0x8c:  mov    $0x0,%eax
085d77b7 +0x91:  jmp    085d77be <+0x98>
085d77b9 +0x93:  mov    $0x1,%eax
085d77be +0x98:  leave
085d77bf +0x99:  ret
```

## 反编译 C

```c
// PvP_Room::is_closeable_seat_state @ 0x85d7726

/* PvP_Room::is_closeable_seat_state() */

undefined4 __thiscall PvP_Room::is_closeable_seat_state(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  do {
    if (7 < local_10) {
      if ((local_18 == 1) && (local_14 < 2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d7773:
      bVar1 = false;
    }
    else {
      cVar2 = IsPvpObserver(this,local_10);
      if (cVar2 == '\x01') goto LAB_085d7773;
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = local_18 + 1;
    }
    if (*(int *)(this + (local_10 + 0x14) * 4) == 0xff) {
      local_14 = local_14 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
