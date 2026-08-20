# calculate_pvp_point

`_ZN8PvP_Room19calculate_pvp_pointEv`

`PvP_Room::calculate_pvp_point()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc778` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc778  _ZN8PvP_Room19calculate_pvp_pointEv
#           PvP_Room::calculate_pvp_point()
# range [0x085dc778, 0x085dc865]
085dc778 +0x00:  push   %ebp
085dc779 +0x01:  mov    %esp,%ebp
085dc77b +0x03:  sub    $0x28,%esp
085dc77e +0x06:  mov    0x8(%ebp),%eax
085dc781 +0x09:  add    $0x268,%eax
085dc786 +0x0e:  mov    %eax,(%esp)
085dc789 +0x11:  call   085d490a <_ZN12PvpUserTable5ClearEv>  ; PvpUserTable::Clear()
085dc78e +0x16:  movl   $0x0,-0xc(%ebp)
085dc795 +0x1d:  jmp    085dc844 <+0xcc>
085dc79a +0x22:  mov    -0xc(%ebp),%edx
085dc79d +0x25:  mov    0x8(%ebp),%eax
085dc7a0 +0x28:  add    $0xc,%edx
085dc7a3 +0x2b:  mov    (%eax,%edx,4),%eax
085dc7a6 +0x2e:  test   %eax,%eax
085dc7a8 +0x30:  je     085dc83c <+0xc4>
085dc7ae +0x36:  mov    -0xc(%ebp),%eax
085dc7b1 +0x39:  mov    %eax,0x4(%esp)
085dc7b5 +0x3d:  mov    0x8(%ebp),%eax
085dc7b8 +0x40:  mov    %eax,(%esp)
085dc7bb +0x43:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dc7c0 +0x48:  test   %al,%al
085dc7c2 +0x4a:  jne    085dc83f <+0xc7>
085dc7c4 +0x4c:  mov    0x8(%ebp),%eax
085dc7c7 +0x4f:  mov    0x4(%eax),%eax
085dc7ca +0x52:  cmp    $0x1,%eax
085dc7cd +0x55:  je     085dc7da <+0x62>
085dc7cf +0x57:  mov    0x8(%ebp),%eax
085dc7d2 +0x5a:  mov    0x4(%eax),%eax
085dc7d5 +0x5d:  cmp    $0x4,%eax
085dc7d8 +0x60:  jne    085dc804 <+0x8c>
085dc7da +0x62:  mov    -0xc(%ebp),%edx
085dc7dd +0x65:  mov    0x8(%ebp),%eax
085dc7e0 +0x68:  add    $0xc,%edx
085dc7e3 +0x6b:  mov    (%eax,%edx,4),%eax
085dc7e6 +0x6e:  mov    0x8(%ebp),%edx
085dc7e9 +0x71:  add    $0x268,%edx
085dc7ef +0x77:  mov    %eax,0x8(%esp)
085dc7f3 +0x7b:  mov    -0xc(%ebp),%eax
085dc7f6 +0x7e:  mov    %eax,0x4(%esp)
085dc7fa +0x82:  mov    %edx,(%esp)
085dc7fd +0x85:  call   085d4980 <_ZN12PvpUserTable3SetEiP5CUser>  ; PvpUserTable::Set(int, CUser*)
085dc802 +0x8a:  jmp    085dc840 <+0xc8>
085dc804 +0x8c:  mov    -0xc(%ebp),%edx
085dc807 +0x8f:  mov    0x8(%ebp),%eax
085dc80a +0x92:  add    $0xc,%edx
085dc80d +0x95:  mov    (%eax,%edx,4),%edx
085dc810 +0x98:  mov    -0xc(%ebp),%eax
085dc813 +0x9b:  mov    0x8(%ebp),%ecx
085dc816 +0x9e:  movzbl 0x5d0(%ecx,%eax,1),%eax
085dc81e +0xa6:  movzbl %al,%eax
085dc821 +0xa9:  mov    0x8(%ebp),%ecx
085dc824 +0xac:  add    $0x268,%ecx
085dc82a +0xb2:  mov    %edx,0x8(%esp)
085dc82e +0xb6:  mov    %eax,0x4(%esp)
085dc832 +0xba:  mov    %ecx,(%esp)
085dc835 +0xbd:  call   085d4980 <_ZN12PvpUserTable3SetEiP5CUser>  ; PvpUserTable::Set(int, CUser*)
085dc83a +0xc2:  jmp    085dc840 <+0xc8>
085dc83c +0xc4:  nop
085dc83d +0xc5:  jmp    085dc840 <+0xc8>
085dc83f +0xc7:  nop
085dc840 +0xc8:  addl   $0x1,-0xc(%ebp)
085dc844 +0xcc:  cmpl   $0x7,-0xc(%ebp)
085dc848 +0xd0:  setle  %al
085dc84b +0xd3:  test   %al,%al
085dc84d +0xd5:  jne    085dc79a <+0x22>
085dc853 +0xdb:  mov    0x8(%ebp),%eax
085dc856 +0xde:  add    $0x268,%eax
085dc85b +0xe3:  mov    %eax,(%esp)
085dc85e +0xe6:  call   085d4bd0 <_ZN12PvpUserTable9CalculateEv>  ; PvpUserTable::Calculate()
085dc863 +0xeb:  leave
085dc864 +0xec:  ret
085dc865 +0xed:  nop
```

## 反编译 C

```c
// PvP_Room::calculate_pvp_point @ 0x85dc778

/* PvP_Room::calculate_pvp_point() */

void __thiscall PvP_Room::calculate_pvp_point(PvP_Room *this)

{
  char cVar1;
  int local_10;
  
  PvpUserTable::Clear((PvpUserTable *)(this + 0x268));
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
       (cVar1 = IsPvpObserver(this,local_10), cVar1 == '\0')) {
      if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
        PvpUserTable::Set((PvpUserTable *)(this + 0x268),local_10,
                          *(CUser **)(this + (local_10 + 0xc) * 4));
      }
      else {
        PvpUserTable::Set((PvpUserTable *)(this + 0x268),(uint)(byte)this[local_10 + 0x5d0],
                          *(CUser **)(this + (local_10 + 0xc) * 4));
      }
    }
  }
  PvpUserTable::Calculate((PvpUserTable *)(this + 0x268));
  return;
}
```
