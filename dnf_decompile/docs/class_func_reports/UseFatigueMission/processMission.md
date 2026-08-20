# processMission

`_ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej`

`UseFatigueMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `UseFatigueMission` | `0x08165706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165706  _ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej
#           UseFatigueMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x08165706, 0x081657a1]
08165706 +0x00:  push   %ebp
08165707 +0x01:  mov    %esp,%ebp
08165709 +0x03:  sub    $0x18,%esp
0816570c +0x06:  mov    0x8(%ebp),%eax
0816570f +0x09:  add    $0x28,%eax
08165712 +0x0c:  movl   $0x0,0x4(%esp)
0816571a +0x14:  mov    %eax,(%esp)
0816571d +0x17:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08165722 +0x1c:  movzwl (%eax),%edx
08165725 +0x1f:  mov    0x10(%ebp),%eax
08165728 +0x22:  movzwl 0x4(%eax),%eax
0816572c +0x26:  cmp    %ax,%dx
0816572f +0x29:  setbe  %al
08165732 +0x2c:  test   %al,%al
08165734 +0x2e:  jne    0816579f <+0x99>
08165736 +0x30:  mov    0x8(%ebp),%eax
08165739 +0x33:  add    $0x28,%eax
0816573c +0x36:  movl   $0x0,0x4(%esp)
08165744 +0x3e:  mov    %eax,(%esp)
08165747 +0x41:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
0816574c +0x46:  movzwl (%eax),%eax
0816574f +0x49:  movzwl %ax,%edx
08165752 +0x4c:  mov    0x10(%ebp),%eax
08165755 +0x4f:  movzwl 0x4(%eax),%eax
08165759 +0x53:  movzwl %ax,%eax
0816575c +0x56:  add    0x14(%ebp),%eax
0816575f +0x59:  cmp    %eax,%edx
08165761 +0x5b:  setbe  %al
08165764 +0x5e:  test   %al,%al
08165766 +0x60:  je     0816578a <+0x84>
08165768 +0x62:  mov    0x8(%ebp),%eax
0816576b +0x65:  add    $0x28,%eax
0816576e +0x68:  movl   $0x0,0x4(%esp)
08165776 +0x70:  mov    %eax,(%esp)
08165779 +0x73:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
0816577e +0x78:  movzwl (%eax),%edx
08165781 +0x7b:  mov    0x10(%ebp),%eax
08165784 +0x7e:  mov    %dx,0x4(%eax)
08165788 +0x82:  jmp    081657a0 <+0x9a>
0816578a +0x84:  mov    0x10(%ebp),%eax
0816578d +0x87:  movzwl 0x4(%eax),%edx
08165791 +0x8b:  mov    0x14(%ebp),%eax
08165794 +0x8e:  add    %eax,%edx
08165796 +0x90:  mov    0x10(%ebp),%eax
08165799 +0x93:  mov    %dx,0x4(%eax)
0816579d +0x97:  jmp    081657a0 <+0x9a>
0816579f +0x99:  nop
081657a0 +0x9a:  leave
081657a1 +0x9b:  ret
```

## 反编译 C

```c
// UseFatigueMission::processMission @ 0x8165706

/* UseFatigueMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
UseFatigueMission::processMission
          (UseFatigueMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
  if (*(ushort *)(param_2 + 4) < *puVar1) {
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (*(ushort *)(param_2 + 4) + param_3 < (uint)*puVar1) {
      *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
    }
    else {
      puVar2 = (undefined2 *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      *(undefined2 *)(param_2 + 4) = *puVar2;
    }
  }
  return;
}
```
