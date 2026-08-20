# AddDungeonClear

`_ZN5CUser15AddDungeonClearEii`

`CUser::AddDungeonClear(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086780fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086780fa  _ZN5CUser15AddDungeonClearEii
#           CUser::AddDungeonClear(int, int)
# range [0x086780fa, 0x08678165]
086780fa +0x00:  push   %ebp
086780fb +0x01:  mov    %esp,%ebp
086780fd +0x03:  push   %esi
086780fe +0x04:  push   %ebx
086780ff +0x05:  sub    $0x10,%esp
08678102 +0x08:  mov    0xc(%ebp),%eax
08678105 +0x0b:  movswl %ax,%ebx
08678108 +0x0e:  mov    0x8(%ebp),%eax
0867810b +0x11:  mov    %eax,(%esp)
0867810e +0x14:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
08678113 +0x19:  mov    %ebx,0x4(%esp)
08678117 +0x1d:  mov    %eax,(%esp)
0867811a +0x20:  call   085bf96c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xeca>  ; global constructors keyed to CParty::cMember::cMember()+0xeca
0867811f +0x25:  movsbl %al,%eax
08678122 +0x28:  cmp    0x10(%ebp),%eax
08678125 +0x2b:  setl   %al
08678128 +0x2e:  test   %al,%al
0867812a +0x30:  je     0867815a <+0x60>
0867812c +0x32:  mov    0x10(%ebp),%eax
0867812f +0x35:  movsbl %al,%esi
08678132 +0x38:  mov    0xc(%ebp),%eax
08678135 +0x3b:  movswl %ax,%ebx
08678138 +0x3e:  mov    0x8(%ebp),%eax
0867813b +0x41:  mov    %eax,(%esp)
0867813e +0x44:  call   084b42cc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x37f>  ; global constructors keyed to game_master::CMacro::Reset()+0x37f
08678143 +0x49:  mov    %esi,0x8(%esp)
08678147 +0x4d:  mov    %ebx,0x4(%esp)
0867814b +0x51:  mov    %eax,(%esp)
0867814e +0x54:  call   08374f24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeef0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeef0
08678153 +0x59:  mov    $0x1,%eax
08678158 +0x5e:  jmp    0867815f <+0x65>
0867815a +0x60:  mov    $0x0,%eax
0867815f +0x65:  add    $0x10,%esp
08678162 +0x68:  pop    %ebx
08678163 +0x69:  pop    %esi
08678164 +0x6a:  pop    %ebp
08678165 +0x6b:  ret
```

## 反编译 C

```c
// CUser::AddDungeonClear @ 0x86780fa

/* CUser::AddDungeonClear(int, int) */

bool __thiscall CUser::AddDungeonClear(CUser *this,int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  CDungeonClear *this_00;
  
  sVar2 = CUserCharacInfo::getDungeonClearRefR((CUserCharacInfo *)this);
  cVar1 = WongWork::CDungeonClear::getClearedDungeonDiff(sVar2);
  if (cVar1 < param_2) {
    this_00 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW((CUserCharacInfo *)this);
    WongWork::CDungeonClear::addClearedDungeon(this_00,(short)param_1,(char)param_2);
  }
  return cVar1 < param_2;
}
```
