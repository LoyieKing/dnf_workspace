# get_pvp_team_cnt

`_ZN8PvP_Room16get_pvp_team_cntEv`

`PvP_Room::get_pvp_team_cnt()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6774  _ZN8PvP_Room16get_pvp_team_cntEv
#           PvP_Room::get_pvp_team_cnt()
# range [0x085d6774, 0x085d6843]
085d6774 +0x00:  push   %ebp
085d6775 +0x01:  mov    %esp,%ebp
085d6777 +0x03:  sub    $0x28,%esp
085d677a +0x06:  mov    0x8(%ebp),%eax
085d677d +0x09:  mov    0x4(%eax),%eax
085d6780 +0x0c:  cmp    $0x2,%eax
085d6783 +0x0f:  je     085d67a5 <+0x31>
085d6785 +0x11:  mov    0x8(%ebp),%eax
085d6788 +0x14:  mov    0x4(%eax),%eax
085d678b +0x17:  cmp    $0x3,%eax
085d678e +0x1a:  je     085d67a5 <+0x31>
085d6790 +0x1c:  mov    0x8(%ebp),%eax
085d6793 +0x1f:  mov    0x4(%eax),%eax
085d6796 +0x22:  cmp    $0x5,%eax
085d6799 +0x25:  je     085d67a5 <+0x31>
085d679b +0x27:  mov    $0xffffffff,%eax
085d67a0 +0x2c:  jmp    085d6842 <+0xce>
085d67a5 +0x31:  movl   $0x0,-0x14(%ebp)
085d67ac +0x38:  movl   $0x0,-0x10(%ebp)
085d67b3 +0x3f:  movl   $0x0,-0xc(%ebp)
085d67ba +0x46:  jmp    085d6825 <+0xb1>
085d67bc +0x48:  mov    -0xc(%ebp),%edx
085d67bf +0x4b:  mov    0x8(%ebp),%eax
085d67c2 +0x4e:  add    $0xc,%edx
085d67c5 +0x51:  mov    (%eax,%edx,4),%eax
085d67c8 +0x54:  test   %eax,%eax
085d67ca +0x56:  je     085d67ec <+0x78>
085d67cc +0x58:  mov    -0xc(%ebp),%eax
085d67cf +0x5b:  mov    %eax,0x4(%esp)
085d67d3 +0x5f:  mov    0x8(%ebp),%eax
085d67d6 +0x62:  mov    %eax,(%esp)
085d67d9 +0x65:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085d67de +0x6a:  xor    $0x1,%eax
085d67e1 +0x6d:  test   %al,%al
085d67e3 +0x6f:  je     085d67ec <+0x78>
085d67e5 +0x71:  mov    $0x1,%eax
085d67ea +0x76:  jmp    085d67f1 <+0x7d>
085d67ec +0x78:  mov    $0x0,%eax
085d67f1 +0x7d:  test   %al,%al
085d67f3 +0x7f:  je     085d6821 <+0xad>
085d67f5 +0x81:  mov    -0xc(%ebp),%edx
085d67f8 +0x84:  mov    0x8(%ebp),%eax
085d67fb +0x87:  add    $0x14,%edx
085d67fe +0x8a:  mov    (%eax,%edx,4),%eax
085d6801 +0x8d:  cmp    $0x1,%eax
085d6804 +0x90:  jne    085d680c <+0x98>
085d6806 +0x92:  addl   $0x1,-0x14(%ebp)
085d680a +0x96:  jmp    085d6821 <+0xad>
085d680c +0x98:  mov    -0xc(%ebp),%edx
085d680f +0x9b:  mov    0x8(%ebp),%eax
085d6812 +0x9e:  add    $0x14,%edx
085d6815 +0xa1:  mov    (%eax,%edx,4),%eax
085d6818 +0xa4:  cmp    $0x2,%eax
085d681b +0xa7:  jne    085d6821 <+0xad>
085d681d +0xa9:  addl   $0x1,-0x10(%ebp)
085d6821 +0xad:  addl   $0x1,-0xc(%ebp)
085d6825 +0xb1:  cmpl   $0x7,-0xc(%ebp)
085d6829 +0xb5:  setle  %al
085d682c +0xb8:  test   %al,%al
085d682e +0xba:  jne    085d67bc <+0x48>
085d6830 +0xbc:  mov    -0x10(%ebp),%eax
085d6833 +0xbf:  cmp    -0x14(%ebp),%eax
085d6836 +0xc2:  je     085d683f <+0xcb>
085d6838 +0xc4:  mov    $0xffffffff,%eax
085d683d +0xc9:  jmp    085d6842 <+0xce>
085d683f +0xcb:  mov    -0x10(%ebp),%eax
085d6842 +0xce:  leave
085d6843 +0xcf:  ret
```

## 反编译 C

```c
// PvP_Room::get_pvp_team_cnt @ 0x85d6774

/* PvP_Room::get_pvp_team_cnt() */

int __thiscall PvP_Room::get_pvp_team_cnt(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) || (*(int *)(this + 4) == 5)) {
    local_18 = 0;
    local_14 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
         (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(this + (local_10 + 0x14) * 4) == 1) {
          local_18 = local_18 + 1;
        }
        else if (*(int *)(this + (local_10 + 0x14) * 4) == 2) {
          local_14 = local_14 + 1;
        }
      }
    }
    if (local_14 != local_18) {
      local_14 = -1;
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}
```
