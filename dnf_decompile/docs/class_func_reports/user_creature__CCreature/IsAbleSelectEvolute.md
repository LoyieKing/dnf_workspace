# IsAbleSelectEvolute

`_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser`

`user_creature::CCreature::IsAbleSelectEvolute(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337d58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337d58  _ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser
#           user_creature::CCreature::IsAbleSelectEvolute(CUser*)
# range [0x08337d58, 0x08337e47]
08337d58 +0x00:  push   %ebp
08337d59 +0x01:  mov    %esp,%ebp
08337d5b +0x03:  push   %esi
08337d5c +0x04:  push   %ebx
08337d5d +0x05:  sub    $0x20,%esp
08337d60 +0x08:  mov    0x8(%ebp),%eax
08337d63 +0x0b:  mov    0x44(%eax),%eax
08337d66 +0x0e:  test   %eax,%eax
08337d68 +0x10:  jne    08337d74 <+0x1c>
08337d6a +0x12:  mov    $0x0,%eax
08337d6f +0x17:  jmp    08337e40 <+0xe8>
08337d74 +0x1c:  mov    0x8(%ebp),%eax
08337d77 +0x1f:  mov    0x44(%eax),%eax
08337d7a +0x22:  mov    %eax,(%esp)
08337d7d +0x25:  call   0833f34a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1417>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1417
08337d82 +0x2a:  cmp    $0xffffffff,%eax
08337d85 +0x2d:  sete   %al
08337d88 +0x30:  test   %al,%al
08337d8a +0x32:  je     08337d96 <+0x3e>
08337d8c +0x34:  mov    $0x0,%eax
08337d91 +0x39:  jmp    08337e40 <+0xe8>
08337d96 +0x3e:  mov    0x8(%ebp),%eax
08337d99 +0x41:  mov    0x44(%eax),%eax
08337d9c +0x44:  mov    %eax,(%esp)
08337d9f +0x47:  call   0833f34a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1417>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1417
08337da4 +0x4c:  mov    0x8(%ebp),%edx
08337da7 +0x4f:  mov    0x2c(%edx),%edx
08337daa +0x52:  cmp    %edx,%eax
08337dac +0x54:  setg   %al
08337daf +0x57:  test   %al,%al
08337db1 +0x59:  je     08337dbd <+0x65>
08337db3 +0x5b:  mov    $0x0,%eax
08337db8 +0x60:  jmp    08337e40 <+0xe8>
08337dbd +0x65:  mov    0x8(%ebp),%eax
08337dc0 +0x68:  mov    0x44(%eax),%eax
08337dc3 +0x6b:  mov    %eax,(%esp)
08337dc6 +0x6e:  call   0833f134 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1201>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1201
08337dcb +0x73:  test   %al,%al
08337dcd +0x75:  je     08337e3b <+0xe3>
08337dcf +0x77:  cmpl   $0x0,0xc(%ebp)
08337dd3 +0x7b:  je     08337e34 <+0xdc>
08337dd5 +0x7d:  lea    -0x14(%ebp),%eax
08337dd8 +0x80:  mov    %eax,(%esp)
08337ddb +0x83:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08337de0 +0x88:  lea    -0x14(%ebp),%ebx
08337de3 +0x8b:  mov    0xc(%ebp),%eax
08337de6 +0x8e:  mov    %eax,(%esp)
08337de9 +0x91:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08337dee +0x96:  mov    %ebx,0x4(%esp)
08337df2 +0x9a:  mov    %eax,(%esp)
08337df5 +0x9d:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
08337dfa +0xa2:  lea    -0x14(%ebp),%eax
08337dfd +0xa5:  mov    %eax,0x4(%esp)
08337e01 +0xa9:  mov    0xc(%ebp),%eax
08337e04 +0xac:  mov    %eax,(%esp)
08337e07 +0xaf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08337e0c +0xb4:  jmp    08337e29 <+0xd1>
08337e0e +0xb6:  mov    %edx,%ebx
08337e10 +0xb8:  mov    %eax,%esi
08337e12 +0xba:  lea    -0x14(%ebp),%eax
08337e15 +0xbd:  mov    %eax,(%esp)
08337e18 +0xc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08337e1d +0xc5:  mov    %esi,%eax
08337e1f +0xc7:  mov    %ebx,%edx
08337e21 +0xc9:  mov    %eax,(%esp)
08337e24 +0xcc:  call   08ae3750 <_Unwind_Resume>
08337e29 +0xd1:  lea    -0x14(%ebp),%eax
08337e2c +0xd4:  mov    %eax,(%esp)
08337e2f +0xd7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08337e34 +0xdc:  mov    $0x0,%eax
08337e39 +0xe1:  jmp    08337e40 <+0xe8>
08337e3b +0xe3:  mov    $0x1,%eax
08337e40 +0xe8:  add    $0x20,%esp
08337e43 +0xeb:  pop    %ebx
08337e44 +0xec:  pop    %esi
08337e45 +0xed:  pop    %ebp
08337e46 +0xee:  ret
08337e47 +0xef:  nop
```

## 反编译 C

```c
// user_creature::CCreature::IsAbleSelectEvolute @ 0x8337d58

/* user_creature::CCreature::IsAbleSelectEvolute(CUser*) */

undefined4 __thiscall user_creature::CCreature::IsAbleSelectEvolute(CCreature *this,CUser *param_1)

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
    iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar3 == -1) {
      uVar2 = 0;
    }
    else {
      iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
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
                    /* try { // try from 08337df5 to 08337e0b has its CatchHandler @ 08337e0e */
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
