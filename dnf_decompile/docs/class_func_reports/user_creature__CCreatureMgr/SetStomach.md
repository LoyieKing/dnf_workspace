# SetStomach

`_ZN13user_creature12CCreatureMgr10SetStomachEi`

`user_creature::CCreatureMgr::SetStomach(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339ee0  _ZN13user_creature12CCreatureMgr10SetStomachEi
#           user_creature::CCreatureMgr::SetStomach(int)
# range [0x08339ee0, 0x08339f9f]
08339ee0 +0x00:  push   %ebp
08339ee1 +0x01:  mov    %esp,%ebp
08339ee3 +0x03:  push   %esi
08339ee4 +0x04:  push   %ebx
08339ee5 +0x05:  sub    $0x30,%esp
08339ee8 +0x08:  mov    0x8(%ebp),%eax
08339eeb +0x0b:  mov    0x18(%eax),%eax
08339eee +0x0e:  test   %eax,%eax
08339ef0 +0x10:  je     08339f94 <+0xb4>
08339ef6 +0x16:  mov    0x8(%ebp),%eax
08339ef9 +0x19:  mov    0x18(%eax),%eax
08339efc +0x1c:  mov    0xc(%ebp),%edx
08339eff +0x1f:  mov    %edx,0x4(%esp)
08339f03 +0x23:  mov    %eax,(%esp)
08339f06 +0x26:  call   0833f070 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x113d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x113d
08339f0b +0x2b:  mov    0x8(%ebp),%eax
08339f0e +0x2e:  mov    0x1c(%eax),%eax
08339f11 +0x31:  movl   $0x0,0xc(%esp)
08339f19 +0x39:  movl   $0x0,0x8(%esp)
08339f21 +0x41:  mov    %eax,0x4(%esp)
08339f25 +0x45:  lea    -0x28(%ebp),%eax
08339f28 +0x48:  mov    %eax,(%esp)
08339f2b +0x4b:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08339f30 +0x50:  mov    0x8(%ebp),%eax
08339f33 +0x53:  mov    0x18(%eax),%eax
08339f36 +0x56:  mov    %eax,(%esp)
08339f39 +0x59:  call   083384ee <_ZN13user_creature9CCreature10GetStomachEv>  ; user_creature::CCreature::GetStomach()
08339f3e +0x5e:  mov    %eax,%ebx
08339f40 +0x60:  mov    0x8(%ebp),%eax
08339f43 +0x63:  mov    0x18(%eax),%eax
08339f46 +0x66:  mov    %eax,(%esp)
08339f49 +0x69:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08339f4e +0x6e:  mov    %ebx,0x8(%esp)
08339f52 +0x72:  mov    %eax,0x4(%esp)
08339f56 +0x76:  lea    -0x28(%ebp),%eax
08339f59 +0x79:  mov    %eax,(%esp)
08339f5c +0x7c:  call   08340918 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x29e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x29e5
08339f61 +0x81:  lea    -0x28(%ebp),%eax
08339f64 +0x84:  mov    %eax,(%esp)
08339f67 +0x87:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
08339f6c +0x8c:  jmp    08339f89 <+0xa9>
08339f6e +0x8e:  mov    %edx,%ebx
08339f70 +0x90:  mov    %eax,%esi
08339f72 +0x92:  lea    -0x28(%ebp),%eax
08339f75 +0x95:  mov    %eax,(%esp)
08339f78 +0x98:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08339f7d +0x9d:  mov    %esi,%eax
08339f7f +0x9f:  mov    %ebx,%edx
08339f81 +0xa1:  mov    %eax,(%esp)
08339f84 +0xa4:  call   08ae3750 <_Unwind_Resume>
08339f89 +0xa9:  lea    -0x28(%ebp),%eax
08339f8c +0xac:  mov    %eax,(%esp)
08339f8f +0xaf:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08339f94 +0xb4:  mov    $0x1,%eax
08339f99 +0xb9:  add    $0x30,%esp
08339f9c +0xbc:  pop    %ebx
08339f9d +0xbd:  pop    %esi
08339f9e +0xbe:  pop    %ebp
08339f9f +0xbf:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SetStomach @ 0x8339ee0

/* user_creature::CCreatureMgr::SetStomach(int) */

undefined4 __thiscall user_creature::CCreatureMgr::SetStomach(CCreatureMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  CPacketRespondent local_2c [32];
  
  if (*(int *)(this + 0x18) != 0) {
    CCreature::SetStomach(*(CCreature **)(this + 0x18),param_1);
    CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
    iVar1 = CCreature::GetStomach(*(CCreature **)(this + 0x18));
    iVar2 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339f5c to 08339f6b has its CatchHandler @ 08339f6e */
    CPacketRespondent::MakeNotipacketCreatureState(local_2c,iVar2,iVar1);
    CPacketRespondent::Send(local_2c);
    CPacketRespondent::~CPacketRespondent(local_2c);
  }
  return 1;
}
```
