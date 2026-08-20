# UseFeed

`_ZN13user_creature9CCreature7UseFeedEP5CUserRi`

`user_creature::CCreature::UseFeed(CUser*, int&)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083373d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083373d4  _ZN13user_creature9CCreature7UseFeedEP5CUserRi
#           user_creature::CCreature::UseFeed(CUser*, int&)
# range [0x083373d4, 0x083374d1]
083373d4 +0x00:  push   %ebp
083373d5 +0x01:  mov    %esp,%ebp
083373d7 +0x03:  push   %esi
083373d8 +0x04:  push   %ebx
083373d9 +0x05:  sub    $0x40,%esp
083373dc +0x08:  mov    0x8(%ebp),%eax
083373df +0x0b:  movzbl 0x4c(%eax),%eax
083373e3 +0x0f:  xor    $0x1,%eax
083373e6 +0x12:  test   %al,%al
083373e8 +0x14:  je     083373f4 <+0x20>
083373ea +0x16:  mov    $0x0,%ebx
083373ef +0x1b:  jmp    083374c8 <+0xf4>
083373f4 +0x20:  movl   $0x0,0xc(%esp)
083373fc +0x28:  movl   $0x0,0x8(%esp)
08337404 +0x30:  mov    0xc(%ebp),%eax
08337407 +0x33:  mov    %eax,0x4(%esp)
0833740b +0x37:  lea    -0x28(%ebp),%eax
0833740e +0x3a:  mov    %eax,(%esp)
08337411 +0x3d:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08337416 +0x42:  mov    0x8(%ebp),%eax
08337419 +0x45:  mov    %eax,(%esp)
0833741c +0x48:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
08337421 +0x4d:  test   %al,%al
08337423 +0x4f:  je     0833743b <+0x67>
08337425 +0x51:  lea    -0x28(%ebp),%eax
08337428 +0x54:  mov    %eax,(%esp)
0833742b +0x57:  call   083408b6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2983>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2983
08337430 +0x5c:  lea    -0x28(%ebp),%eax
08337433 +0x5f:  mov    %eax,(%esp)
08337436 +0x62:  call   0834048a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2557>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2557
0833743b +0x67:  mov    0x8(%ebp),%eax
0833743e +0x6a:  lea    0x34(%eax),%edx
08337441 +0x6d:  mov    $0x41f00000,%eax
08337446 +0x72:  mov    %eax,0x4(%esp)
0833744a +0x76:  mov    %edx,(%esp)
0833744d +0x79:  call   08336e66 <_ZN13user_creature8CStomach14IncrementValueEf>  ; user_creature::CStomach::IncrementValue(float)
08337452 +0x7e:  fnstcw -0x2a(%ebp)
08337455 +0x81:  movzwl -0x2a(%ebp),%eax
08337459 +0x85:  mov    $0xc,%ah
0833745b +0x87:  mov    %ax,-0x2c(%ebp)
0833745f +0x8b:  fldcw  -0x2c(%ebp)
08337462 +0x8e:  fistpl -0x30(%ebp)
08337465 +0x91:  fldcw  -0x2a(%ebp)
08337468 +0x94:  mov    -0x30(%ebp),%edx
0833746b +0x97:  mov    0x10(%ebp),%eax
0833746e +0x9a:  mov    %edx,(%eax)
08337470 +0x9c:  mov    0x10(%ebp),%eax
08337473 +0x9f:  mov    (%eax),%ebx
08337475 +0xa1:  mov    0x8(%ebp),%eax
08337478 +0xa4:  mov    %eax,(%esp)
0833747b +0xa7:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08337480 +0xac:  mov    %ebx,0x8(%esp)
08337484 +0xb0:  mov    %eax,0x4(%esp)
08337488 +0xb4:  lea    -0x28(%ebp),%eax
0833748b +0xb7:  mov    %eax,(%esp)
0833748e +0xba:  call   08340918 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x29e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x29e5
08337493 +0xbf:  lea    -0x28(%ebp),%eax
08337496 +0xc2:  mov    %eax,(%esp)
08337499 +0xc5:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
0833749e +0xca:  mov    %eax,%ebx
083374a0 +0xcc:  lea    -0x28(%ebp),%eax
083374a3 +0xcf:  mov    %eax,(%esp)
083374a6 +0xd2:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
083374ab +0xd7:  jmp    083374c8 <+0xf4>
083374ad +0xd9:  mov    %edx,%ebx
083374af +0xdb:  mov    %eax,%esi
083374b1 +0xdd:  lea    -0x28(%ebp),%eax
083374b4 +0xe0:  mov    %eax,(%esp)
083374b7 +0xe3:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
083374bc +0xe8:  mov    %esi,%eax
083374be +0xea:  mov    %ebx,%edx
083374c0 +0xec:  mov    %eax,(%esp)
083374c3 +0xef:  call   08ae3750 <_Unwind_Resume>
083374c8 +0xf4:  mov    %ebx,%eax
083374ca +0xf6:  add    $0x40,%esp
083374cd +0xf9:  pop    %ebx
083374ce +0xfa:  pop    %esi
083374cf +0xfb:  pop    %ebp
083374d0 +0xfc:  ret
083374d1 +0xfd:  nop
```

## 反编译 C

```c
// user_creature::CCreature::UseFeed @ 0x83373d4

/* user_creature::CCreature::UseFeed(CUser*, int&) */

undefined4 __thiscall user_creature::CCreature::UseFeed(CCreature *this,CUser *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  CPacketRespondent local_2c [32];
  
  if (this[0x4c] == (CCreature)0x1) {
    CPacketRespondent::CPacketRespondent(local_2c,param_1,0,0);
    cVar2 = IsDieCreature(this);
    if (cVar2 != '\0') {
                    /* try { // try from 0833742b to 0833749d has its CatchHandler @ 083374ad */
      CPacketRespondent::MakeNotipacketRevivalCreature(local_2c);
      CPacketRespondent::SendAll(local_2c);
    }
    lVar5 = (longdouble)CStomach::IncrementValue((CStomach *)(this + 0x34),30.0);
    *param_2 = (int)ROUND(lVar5);
    iVar1 = *param_2;
    iVar3 = CCreatureItem::GetUid((CCreatureItem *)this);
    CPacketRespondent::MakeNotipacketCreatureState(local_2c,iVar3,iVar1);
    uVar4 = CPacketRespondent::Send(local_2c);
    CPacketRespondent::~CPacketRespondent(local_2c);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
