# SendCreatureItemList

`_ZNK13user_creature12CCreatureMgr20SendCreatureItemListEv`

`user_creature::CCreatureMgr::SendCreatureItemList() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833bdd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833bdd2  _ZNK13user_creature12CCreatureMgr20SendCreatureItemListEv
#           user_creature::CCreatureMgr::SendCreatureItemList() const
# range [0x0833bdd2, 0x0833be55]
0833bdd2 +0x00:  push   %ebp
0833bdd3 +0x01:  mov    %esp,%ebp
0833bdd5 +0x03:  push   %esi
0833bdd6 +0x04:  push   %ebx
0833bdd7 +0x05:  sub    $0x30,%esp
0833bdda +0x08:  mov    0x8(%ebp),%eax
0833bddd +0x0b:  mov    0x1c(%eax),%eax
0833bde0 +0x0e:  movl   $0x0,0xc(%esp)
0833bde8 +0x16:  movl   $0x0,0x8(%esp)
0833bdf0 +0x1e:  mov    %eax,0x4(%esp)
0833bdf4 +0x22:  lea    -0x28(%ebp),%eax
0833bdf7 +0x25:  mov    %eax,(%esp)
0833bdfa +0x28:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833bdff +0x2d:  mov    0x8(%ebp),%eax
0833be02 +0x30:  movl   $0xffffffff,0x8(%esp)
0833be0a +0x38:  mov    %eax,0x4(%esp)
0833be0e +0x3c:  lea    -0x28(%ebp),%eax
0833be11 +0x3f:  mov    %eax,(%esp)
0833be14 +0x42:  call   083409e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2aad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2aad
0833be19 +0x47:  lea    -0x28(%ebp),%eax
0833be1c +0x4a:  mov    %eax,(%esp)
0833be1f +0x4d:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
0833be24 +0x52:  mov    %eax,%ebx
0833be26 +0x54:  lea    -0x28(%ebp),%eax
0833be29 +0x57:  mov    %eax,(%esp)
0833be2c +0x5a:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833be31 +0x5f:  mov    %ebx,%eax
0833be33 +0x61:  add    $0x30,%esp
0833be36 +0x64:  pop    %ebx
0833be37 +0x65:  pop    %esi
0833be38 +0x66:  pop    %ebp
0833be39 +0x67:  ret
0833be3a +0x68:  mov    %edx,%ebx
0833be3c +0x6a:  mov    %eax,%esi
0833be3e +0x6c:  lea    -0x28(%ebp),%eax
0833be41 +0x6f:  mov    %eax,(%esp)
0833be44 +0x72:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833be49 +0x77:  mov    %esi,%eax
0833be4b +0x79:  mov    %ebx,%edx
0833be4d +0x7b:  mov    %eax,(%esp)
0833be50 +0x7e:  call   08ae3750 <_Unwind_Resume>
0833be55 +0x83:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SendCreatureItemList @ 0x833bdd2

/* user_creature::CCreatureMgr::SendCreatureItemList() const */

undefined4 __thiscall user_creature::CCreatureMgr::SendCreatureItemList(CCreatureMgr *this)

{
  undefined4 uVar1;
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833be14 to 0833be23 has its CatchHandler @ 0833be3a */
  CPacketRespondent::MakeNotipacketCreatureItemList(local_2c,(map *)this,-1);
  uVar1 = CPacketRespondent::Send(local_2c);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return uVar1;
}
```
