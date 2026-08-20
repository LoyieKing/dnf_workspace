# check_start_state

`_ZN8PvP_Room17check_start_stateEv`

`PvP_Room::check_start_state()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d65e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d65e8  _ZN8PvP_Room17check_start_stateEv
#           PvP_Room::check_start_state()
# range [0x085d65e8, 0x085d667f]
085d65e8 +0x00:  push   %ebp
085d65e9 +0x01:  mov    %esp,%ebp
085d65eb +0x03:  sub    $0x28,%esp
085d65ee +0x06:  mov    0x8(%ebp),%eax
085d65f1 +0x09:  mov    %eax,(%esp)
085d65f4 +0x0c:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d65f9 +0x11:  movl   $0x0,-0xc(%ebp)
085d6600 +0x18:  jmp    085d6663 <+0x7b>
085d6602 +0x1a:  mov    -0xc(%ebp),%edx
085d6605 +0x1d:  mov    0x8(%ebp),%eax
085d6608 +0x20:  add    $0xc,%edx
085d660b +0x23:  mov    (%eax,%edx,4),%eax
085d660e +0x26:  test   %eax,%eax
085d6610 +0x28:  je     085d6632 <+0x4a>
085d6612 +0x2a:  mov    -0xc(%ebp),%eax
085d6615 +0x2d:  mov    %eax,0x4(%esp)
085d6619 +0x31:  mov    0x8(%ebp),%eax
085d661c +0x34:  mov    %eax,(%esp)
085d661f +0x37:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085d6624 +0x3c:  xor    $0x1,%eax
085d6627 +0x3f:  test   %al,%al
085d6629 +0x41:  je     085d6632 <+0x4a>
085d662b +0x43:  mov    $0x1,%eax
085d6630 +0x48:  jmp    085d6637 <+0x4f>
085d6632 +0x4a:  mov    $0x0,%eax
085d6637 +0x4f:  test   %al,%al
085d6639 +0x51:  je     085d665f <+0x77>
085d663b +0x53:  mov    -0xc(%ebp),%eax
085d663e +0x56:  mov    0x8(%ebp),%edx
085d6641 +0x59:  movzbl 0x70(%edx,%eax,1),%eax
085d6646 +0x5e:  xor    $0x1,%eax
085d6649 +0x61:  test   %al,%al
085d664b +0x63:  je     085d665f <+0x77>
085d664d +0x65:  mov    0x8(%ebp),%eax
085d6650 +0x68:  mov    %eax,(%esp)
085d6653 +0x6b:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d6658 +0x70:  mov    $0x0,%eax
085d665d +0x75:  jmp    085d667e <+0x96>
085d665f +0x77:  addl   $0x1,-0xc(%ebp)
085d6663 +0x7b:  cmpl   $0x7,-0xc(%ebp)
085d6667 +0x7f:  setle  %al
085d666a +0x82:  test   %al,%al
085d666c +0x84:  jne    085d6602 <+0x1a>
085d666e +0x86:  mov    0x8(%ebp),%eax
085d6671 +0x89:  mov    %eax,(%esp)
085d6674 +0x8c:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d6679 +0x91:  mov    $0x1,%eax
085d667e +0x96:  leave
085d667f +0x97:  ret
```

## 反编译 C

```c
// PvP_Room::check_start_state @ 0x85d65e8

/* PvP_Room::check_start_state() */

undefined4 __thiscall PvP_Room::check_start_state(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_10;
  
  lock();
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      unlock();
      return 1;
    }
    if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
       (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (this[local_10 + 0x70] != (PvP_Room)0x1)) break;
    local_10 = local_10 + 1;
  }
  unlock();
  return 0;
}
```
