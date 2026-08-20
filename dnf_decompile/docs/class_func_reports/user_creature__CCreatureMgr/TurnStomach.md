# TurnStomach

`_ZN13user_creature12CCreatureMgr11TurnStomachEb`

`user_creature::CCreatureMgr::TurnStomach(bool)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c28a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c28a  _ZN13user_creature12CCreatureMgr11TurnStomachEb
#           user_creature::CCreatureMgr::TurnStomach(bool)
# range [0x0833c28a, 0x0833c319]
0833c28a +0x00:  push   %ebp
0833c28b +0x01:  mov    %esp,%ebp
0833c28d +0x03:  sub    $0x28,%esp
0833c290 +0x06:  mov    0xc(%ebp),%eax
0833c293 +0x09:  mov    %al,-0xc(%ebp)
0833c296 +0x0c:  mov    0x8(%ebp),%eax
0833c299 +0x0f:  mov    0x18(%eax),%eax
0833c29c +0x12:  test   %eax,%eax
0833c29e +0x14:  je     0833c318 <+0x8e>
0833c2a0 +0x16:  cmpb   $0x0,-0xc(%ebp)
0833c2a4 +0x1a:  je     0833c2e0 <+0x56>
0833c2a6 +0x1c:  mov    0x8(%ebp),%eax
0833c2a9 +0x1f:  mov    0x18(%eax),%eax
0833c2ac +0x22:  mov    %eax,(%esp)
0833c2af +0x25:  call   0833f064 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1131>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1131
0833c2b4 +0x2a:  cmp    $0x3,%eax
0833c2b7 +0x2d:  sete   %al
0833c2ba +0x30:  test   %al,%al
0833c2bc +0x32:  je     0833c318 <+0x8e>
0833c2be +0x34:  mov    0x8(%ebp),%eax
0833c2c1 +0x37:  mov    0x1c(%eax),%edx
0833c2c4 +0x3a:  mov    0x8(%ebp),%eax
0833c2c7 +0x3d:  mov    0x18(%eax),%eax
0833c2ca +0x40:  movl   $0x1,0x8(%esp)
0833c2d2 +0x48:  mov    %edx,0x4(%esp)
0833c2d6 +0x4c:  mov    %eax,(%esp)
0833c2d9 +0x4f:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
0833c2de +0x54:  jmp    0833c318 <+0x8e>
0833c2e0 +0x56:  mov    0x8(%ebp),%eax
0833c2e3 +0x59:  mov    0x18(%eax),%eax
0833c2e6 +0x5c:  mov    %eax,(%esp)
0833c2e9 +0x5f:  call   0833f064 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1131>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1131
0833c2ee +0x64:  cmp    $0x1,%eax
0833c2f1 +0x67:  sete   %al
0833c2f4 +0x6a:  test   %al,%al
0833c2f6 +0x6c:  je     0833c318 <+0x8e>
0833c2f8 +0x6e:  mov    0x8(%ebp),%eax
0833c2fb +0x71:  mov    0x1c(%eax),%edx
0833c2fe +0x74:  mov    0x8(%ebp),%eax
0833c301 +0x77:  mov    0x18(%eax),%eax
0833c304 +0x7a:  movl   $0x3,0x8(%esp)
0833c30c +0x82:  mov    %edx,0x4(%esp)
0833c310 +0x86:  mov    %eax,(%esp)
0833c313 +0x89:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
0833c318 +0x8e:  leave
0833c319 +0x8f:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::TurnStomach @ 0x833c28a

/* user_creature::CCreatureMgr::TurnStomach(bool) */

void __thiscall user_creature::CCreatureMgr::TurnStomach(CCreatureMgr *this,bool param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    if (param_1) {
      iVar1 = CCreature::GetState(*(CCreature **)(this + 0x18));
      if (iVar1 == 3) {
        CCreature::SetState(*(CCreature **)(this + 0x18),*(undefined4 *)(this + 0x1c),1);
      }
    }
    else {
      iVar1 = CCreature::GetState(*(CCreature **)(this + 0x18));
      if (iVar1 == 1) {
        CCreature::SetState(*(CCreature **)(this + 0x18),*(undefined4 *)(this + 0x1c),3);
      }
    }
  }
  return;
}
```
