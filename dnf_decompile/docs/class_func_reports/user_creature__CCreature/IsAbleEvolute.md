# IsAbleEvolute

`_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser`

`user_creature::CCreature::IsAbleEvolute(CUser*) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083380fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083380fc  _ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser
#           user_creature::CCreature::IsAbleEvolute(CUser*) const
# range [0x083380fc, 0x083381e9]
083380fc +0x00:  push   %ebp
083380fd +0x01:  mov    %esp,%ebp
083380ff +0x03:  push   %esi
08338100 +0x04:  push   %ebx
08338101 +0x05:  sub    $0x20,%esp
08338104 +0x08:  mov    0x8(%ebp),%eax
08338107 +0x0b:  mov    0x44(%eax),%eax
0833810a +0x0e:  test   %eax,%eax
0833810c +0x10:  jne    08338118 <+0x1c>
0833810e +0x12:  mov    $0x0,%eax
08338113 +0x17:  jmp    083381e3 <+0xe7>
08338118 +0x1c:  mov    0x8(%ebp),%eax
0833811b +0x1f:  mov    0x44(%eax),%eax
0833811e +0x22:  mov    %eax,(%esp)
08338121 +0x25:  call   0833f240 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x130d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x130d
08338126 +0x2a:  test   %eax,%eax
08338128 +0x2c:  sete   %al
0833812b +0x2f:  test   %al,%al
0833812d +0x31:  je     08338139 <+0x3d>
0833812f +0x33:  mov    $0x0,%eax
08338134 +0x38:  jmp    083381e3 <+0xe7>
08338139 +0x3d:  mov    0x8(%ebp),%eax
0833813c +0x40:  mov    0x44(%eax),%eax
0833813f +0x43:  mov    %eax,(%esp)
08338142 +0x46:  call   0833f240 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x130d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x130d
08338147 +0x4b:  mov    0x8(%ebp),%edx
0833814a +0x4e:  mov    0x2c(%edx),%edx
0833814d +0x51:  cmp    %edx,%eax
0833814f +0x53:  setg   %al
08338152 +0x56:  test   %al,%al
08338154 +0x58:  je     08338160 <+0x64>
08338156 +0x5a:  mov    $0x0,%eax
0833815b +0x5f:  jmp    083381e3 <+0xe7>
08338160 +0x64:  mov    0x8(%ebp),%eax
08338163 +0x67:  mov    0x44(%eax),%eax
08338166 +0x6a:  mov    %eax,(%esp)
08338169 +0x6d:  call   0833f134 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1201>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1201
0833816e +0x72:  test   %al,%al
08338170 +0x74:  je     083381de <+0xe2>
08338172 +0x76:  cmpl   $0x0,0xc(%ebp)
08338176 +0x7a:  je     083381d7 <+0xdb>
08338178 +0x7c:  lea    -0x14(%ebp),%eax
0833817b +0x7f:  mov    %eax,(%esp)
0833817e +0x82:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08338183 +0x87:  lea    -0x14(%ebp),%ebx
08338186 +0x8a:  mov    0xc(%ebp),%eax
08338189 +0x8d:  mov    %eax,(%esp)
0833818c +0x90:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08338191 +0x95:  mov    %ebx,0x4(%esp)
08338195 +0x99:  mov    %eax,(%esp)
08338198 +0x9c:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0833819d +0xa1:  lea    -0x14(%ebp),%eax
083381a0 +0xa4:  mov    %eax,0x4(%esp)
083381a4 +0xa8:  mov    0xc(%ebp),%eax
083381a7 +0xab:  mov    %eax,(%esp)
083381aa +0xae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
083381af +0xb3:  jmp    083381cc <+0xd0>
083381b1 +0xb5:  mov    %edx,%ebx
083381b3 +0xb7:  mov    %eax,%esi
083381b5 +0xb9:  lea    -0x14(%ebp),%eax
083381b8 +0xbc:  mov    %eax,(%esp)
083381bb +0xbf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083381c0 +0xc4:  mov    %esi,%eax
083381c2 +0xc6:  mov    %ebx,%edx
083381c4 +0xc8:  mov    %eax,(%esp)
083381c7 +0xcb:  call   08ae3750 <_Unwind_Resume>
083381cc +0xd0:  lea    -0x14(%ebp),%eax
083381cf +0xd3:  mov    %eax,(%esp)
083381d2 +0xd6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083381d7 +0xdb:  mov    $0x0,%eax
083381dc +0xe0:  jmp    083381e3 <+0xe7>
083381de +0xe2:  mov    $0x1,%eax
083381e3 +0xe7:  add    $0x20,%esp
083381e6 +0xea:  pop    %ebx
083381e7 +0xeb:  pop    %esi
083381e8 +0xec:  pop    %ebp
083381e9 +0xed:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsAbleEvolute @ 0x83380fc

/* user_creature::CCreature::IsAbleEvolute(CUser*) const */

undefined4 __thiscall user_creature::CCreature::IsAbleEvolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  UserQuest *this_00;
  PacketGuard local_18 [12];
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CCreatureScript::GetEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = CCreatureScript::GetEvolutionLevel(*(CCreatureScript **)(this + 0x44));
      if (*(int *)(this + 0x2c) < iVar3) {
        uVar2 = 0;
      }
      else {
        cVar1 = CCreatureScript::IsExistEvolutionQuest(*(CCreatureScript **)(this + 0x44));
        if (cVar1 == '\0') {
          uVar2 = 1;
        }
        else {
          if (param_1 != (CUser *)0x0) {
            PacketGuard::PacketGuard(local_18);
            this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 08338198 to 083381ae has its CatchHandler @ 083381b1 */
            UserQuest::get_quest_info(this_00,(char *)local_18);
            CUser::Send(param_1,local_18);
            PacketGuard::~PacketGuard(local_18);
          }
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}
```
