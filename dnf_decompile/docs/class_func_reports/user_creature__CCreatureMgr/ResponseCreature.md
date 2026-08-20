# ResponseCreature

`_ZN13user_creature12CCreatureMgr16ResponseCreatureEv`

`user_creature::CCreatureMgr::ResponseCreature()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a6d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a6d8  _ZN13user_creature12CCreatureMgr16ResponseCreatureEv
#           user_creature::CCreatureMgr::ResponseCreature()
# range [0x0833a6d8, 0x0833a77d]
0833a6d8 +0x00:  push   %ebp
0833a6d9 +0x01:  mov    %esp,%ebp
0833a6db +0x03:  push   %esi
0833a6dc +0x04:  push   %ebx
0833a6dd +0x05:  sub    $0x30,%esp
0833a6e0 +0x08:  mov    0x8(%ebp),%eax
0833a6e3 +0x0b:  mov    0x1c(%eax),%eax
0833a6e6 +0x0e:  movl   $0x0,0xc(%esp)
0833a6ee +0x16:  movl   $0x0,0x8(%esp)
0833a6f6 +0x1e:  mov    %eax,0x4(%esp)
0833a6fa +0x22:  lea    -0x28(%ebp),%eax
0833a6fd +0x25:  mov    %eax,(%esp)
0833a700 +0x28:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833a705 +0x2d:  lea    -0x28(%ebp),%eax
0833a708 +0x30:  mov    %eax,(%esp)
0833a70b +0x33:  call   0834097e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2a4b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2a4b
0833a710 +0x38:  mov    0x8(%ebp),%eax
0833a713 +0x3b:  mov    0x1c(%eax),%eax
0833a716 +0x3e:  movl   $0x0,0x4(%esp)
0833a71e +0x46:  mov    %eax,(%esp)
0833a721 +0x49:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0833a726 +0x4e:  mov    %eax,%ebx
0833a728 +0x50:  mov    0x8(%ebp),%eax
0833a72b +0x53:  mov    0x1c(%eax),%eax
0833a72e +0x56:  mov    %eax,(%esp)
0833a731 +0x59:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0833a736 +0x5e:  movsbl %al,%eax
0833a739 +0x61:  mov    %ebx,0x8(%esp)
0833a73d +0x65:  mov    %eax,0x4(%esp)
0833a741 +0x69:  lea    -0x28(%ebp),%eax
0833a744 +0x6c:  mov    %eax,(%esp)
0833a747 +0x6f:  call   08340404 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24d1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24d1
0833a74c +0x74:  mov    %eax,%ebx
0833a74e +0x76:  lea    -0x28(%ebp),%eax
0833a751 +0x79:  mov    %eax,(%esp)
0833a754 +0x7c:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833a759 +0x81:  mov    %ebx,%eax
0833a75b +0x83:  add    $0x30,%esp
0833a75e +0x86:  pop    %ebx
0833a75f +0x87:  pop    %esi
0833a760 +0x88:  pop    %ebp
0833a761 +0x89:  ret
0833a762 +0x8a:  mov    %edx,%ebx
0833a764 +0x8c:  mov    %eax,%esi
0833a766 +0x8e:  lea    -0x28(%ebp),%eax
0833a769 +0x91:  mov    %eax,(%esp)
0833a76c +0x94:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833a771 +0x99:  mov    %esi,%eax
0833a773 +0x9b:  mov    %ebx,%edx
0833a775 +0x9d:  mov    %eax,(%esp)
0833a778 +0xa0:  call   08ae3750 <_Unwind_Resume>
0833a77d +0xa5:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::ResponseCreature @ 0x833a6d8

/* user_creature::CCreatureMgr::ResponseCreature() */

undefined4 __thiscall user_creature::CCreatureMgr::ResponseCreature(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833a70b to 0833a74b has its CatchHandler @ 0833a762 */
  CPacketRespondent::MakeNotipacketResponseCreature(local_2c);
  iVar2 = CUser::get_area(*(CUser **)(this + 0x1c),false);
  cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x1c));
  uVar3 = CPacketRespondent::Broadcast(local_2c,(int)cVar1,iVar2);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return uVar3;
}
```
