# processMission

`_ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej`

`UseCubeMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `UseCubeMission` | `0x08165992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165992  _ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej
#           UseCubeMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x08165992, 0x08165a2d]
08165992 +0x00:  push   %ebp
08165993 +0x01:  mov    %esp,%ebp
08165995 +0x03:  sub    $0x18,%esp
08165998 +0x06:  mov    0x8(%ebp),%eax
0816599b +0x09:  add    $0x28,%eax
0816599e +0x0c:  movl   $0x0,0x4(%esp)
081659a6 +0x14:  mov    %eax,(%esp)
081659a9 +0x17:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081659ae +0x1c:  movzwl (%eax),%edx
081659b1 +0x1f:  mov    0x10(%ebp),%eax
081659b4 +0x22:  movzwl 0x4(%eax),%eax
081659b8 +0x26:  cmp    %ax,%dx
081659bb +0x29:  setbe  %al
081659be +0x2c:  test   %al,%al
081659c0 +0x2e:  jne    08165a2b <+0x99>
081659c2 +0x30:  mov    0x8(%ebp),%eax
081659c5 +0x33:  add    $0x28,%eax
081659c8 +0x36:  movl   $0x0,0x4(%esp)
081659d0 +0x3e:  mov    %eax,(%esp)
081659d3 +0x41:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081659d8 +0x46:  movzwl (%eax),%eax
081659db +0x49:  movzwl %ax,%edx
081659de +0x4c:  mov    0x10(%ebp),%eax
081659e1 +0x4f:  movzwl 0x4(%eax),%eax
081659e5 +0x53:  movzwl %ax,%eax
081659e8 +0x56:  add    0x14(%ebp),%eax
081659eb +0x59:  cmp    %eax,%edx
081659ed +0x5b:  setbe  %al
081659f0 +0x5e:  test   %al,%al
081659f2 +0x60:  je     08165a16 <+0x84>
081659f4 +0x62:  mov    0x8(%ebp),%eax
081659f7 +0x65:  add    $0x28,%eax
081659fa +0x68:  movl   $0x0,0x4(%esp)
08165a02 +0x70:  mov    %eax,(%esp)
08165a05 +0x73:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08165a0a +0x78:  movzwl (%eax),%edx
08165a0d +0x7b:  mov    0x10(%ebp),%eax
08165a10 +0x7e:  mov    %dx,0x4(%eax)
08165a14 +0x82:  jmp    08165a2c <+0x9a>
08165a16 +0x84:  mov    0x10(%ebp),%eax
08165a19 +0x87:  movzwl 0x4(%eax),%edx
08165a1d +0x8b:  mov    0x14(%ebp),%eax
08165a20 +0x8e:  add    %eax,%edx
08165a22 +0x90:  mov    0x10(%ebp),%eax
08165a25 +0x93:  mov    %dx,0x4(%eax)
08165a29 +0x97:  jmp    08165a2c <+0x9a>
08165a2b +0x99:  nop
08165a2c +0x9a:  leave
08165a2d +0x9b:  ret
```

## 反编译 C

```c
// UseCubeMission::processMission @ 0x8165992

/* UseCubeMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
UseCubeMission::processMission
          (UseCubeMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

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
