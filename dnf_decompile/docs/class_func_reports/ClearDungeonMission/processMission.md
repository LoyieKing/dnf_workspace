# processMission

`_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej`

`ClearDungeonMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `ClearDungeonMission` | `0x081653b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081653b4  _ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej
#           ClearDungeonMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x081653b4, 0x08165483]
081653b4 +0x00:  push   %ebp
081653b5 +0x01:  mov    %esp,%ebp
081653b7 +0x03:  sub    $0x18,%esp
081653ba +0x06:  mov    0x8(%ebp),%eax
081653bd +0x09:  add    $0x28,%eax
081653c0 +0x0c:  movl   $0x0,0x4(%esp)
081653c8 +0x14:  mov    %eax,(%esp)
081653cb +0x17:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081653d0 +0x1c:  movzwl (%eax),%edx
081653d3 +0x1f:  mov    0x10(%ebp),%eax
081653d6 +0x22:  movzwl 0x4(%eax),%eax
081653da +0x26:  cmp    %ax,%dx
081653dd +0x29:  setbe  %al
081653e0 +0x2c:  test   %al,%al
081653e2 +0x2e:  jne    0816547e <+0xca>
081653e8 +0x34:  mov    0x8(%ebp),%eax
081653eb +0x37:  mov    %eax,(%esp)
081653ee +0x3a:  call   08164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>  ; BaseHeroMissionCondition::getMissionType()
081653f3 +0x3f:  cmp    $0x2,%eax
081653f6 +0x42:  jne    0816540c <+0x58>
081653f8 +0x44:  mov    0x10(%ebp),%eax
081653fb +0x47:  movzwl 0x8(%eax),%eax
081653ff +0x4b:  cmp    $0x7,%ax
08165403 +0x4f:  je     0816540c <+0x58>
08165405 +0x51:  mov    $0x1,%eax
0816540a +0x56:  jmp    08165411 <+0x5d>
0816540c +0x58:  mov    $0x0,%eax
08165411 +0x5d:  test   %al,%al
08165413 +0x5f:  jne    08165481 <+0xcd>
08165415 +0x61:  mov    0x8(%ebp),%eax
08165418 +0x64:  add    $0x28,%eax
0816541b +0x67:  movl   $0x0,0x4(%esp)
08165423 +0x6f:  mov    %eax,(%esp)
08165426 +0x72:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
0816542b +0x77:  movzwl (%eax),%eax
0816542e +0x7a:  movzwl %ax,%edx
08165431 +0x7d:  mov    0x10(%ebp),%eax
08165434 +0x80:  movzwl 0x4(%eax),%eax
08165438 +0x84:  movzwl %ax,%eax
0816543b +0x87:  add    0x14(%ebp),%eax
0816543e +0x8a:  cmp    %eax,%edx
08165440 +0x8c:  setbe  %al
08165443 +0x8f:  test   %al,%al
08165445 +0x91:  je     08165469 <+0xb5>
08165447 +0x93:  mov    0x8(%ebp),%eax
0816544a +0x96:  add    $0x28,%eax
0816544d +0x99:  movl   $0x0,0x4(%esp)
08165455 +0xa1:  mov    %eax,(%esp)
08165458 +0xa4:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
0816545d +0xa9:  movzwl (%eax),%edx
08165460 +0xac:  mov    0x10(%ebp),%eax
08165463 +0xaf:  mov    %dx,0x4(%eax)
08165467 +0xb3:  jmp    08165482 <+0xce>
08165469 +0xb5:  mov    0x10(%ebp),%eax
0816546c +0xb8:  movzwl 0x4(%eax),%edx
08165470 +0xbc:  mov    0x14(%ebp),%eax
08165473 +0xbf:  add    %eax,%edx
08165475 +0xc1:  mov    0x10(%ebp),%eax
08165478 +0xc4:  mov    %dx,0x4(%eax)
0816547c +0xc8:  jmp    08165482 <+0xce>
0816547e +0xca:  nop
0816547f +0xcb:  jmp    08165482 <+0xce>
08165481 +0xcd:  nop
08165482 +0xce:  leave
08165483 +0xcf:  ret
```

## 反编译 C

```c
// ClearDungeonMission::processMission @ 0x81653b4

/* ClearDungeonMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
ClearDungeonMission::processMission
          (ClearDungeonMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  puVar2 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
  if (*(ushort *)(param_2 + 4) < *puVar2) {
    iVar3 = BaseHeroMissionCondition::getMissionType((BaseHeroMissionCondition *)this);
    if ((iVar3 == 2) && (*(short *)(param_2 + 8) != 7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      puVar2 = (ushort *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      if (*(ushort *)(param_2 + 4) + param_3 < (uint)*puVar2) {
        *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
      }
      else {
        puVar4 = (undefined2 *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0
                           );
        *(undefined2 *)(param_2 + 4) = *puVar4;
      }
    }
  }
  return;
}
```
