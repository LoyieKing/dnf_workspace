# Die

`_ZN13user_creature9CCreature3DieEP5CUser`

`user_creature::CCreature::Die(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338536  _ZN13user_creature9CCreature3DieEP5CUser
#           user_creature::CCreature::Die(CUser*)
# range [0x08338536, 0x083385a5]
08338536 +0x00:  push   %ebp
08338537 +0x01:  mov    %esp,%ebp
08338539 +0x03:  push   %esi
0833853a +0x04:  push   %ebx
0833853b +0x05:  sub    $0x30,%esp
0833853e +0x08:  movl   $0x0,0xc(%esp)
08338546 +0x10:  movl   $0x0,0x8(%esp)
0833854e +0x18:  mov    0xc(%ebp),%eax
08338551 +0x1b:  mov    %eax,0x4(%esp)
08338555 +0x1f:  lea    -0x28(%ebp),%eax
08338558 +0x22:  mov    %eax,(%esp)
0833855b +0x25:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08338560 +0x2a:  lea    -0x28(%ebp),%eax
08338563 +0x2d:  mov    %eax,(%esp)
08338566 +0x30:  call   083406fe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x27cb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x27cb
0833856b +0x35:  lea    -0x28(%ebp),%eax
0833856e +0x38:  mov    %eax,(%esp)
08338571 +0x3b:  call   0834048a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2557>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2557
08338576 +0x40:  mov    $0x1,%ebx
0833857b +0x45:  lea    -0x28(%ebp),%eax
0833857e +0x48:  mov    %eax,(%esp)
08338581 +0x4b:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338586 +0x50:  mov    %ebx,%eax
08338588 +0x52:  add    $0x30,%esp
0833858b +0x55:  pop    %ebx
0833858c +0x56:  pop    %esi
0833858d +0x57:  pop    %ebp
0833858e +0x58:  ret
0833858f +0x59:  mov    %edx,%ebx
08338591 +0x5b:  mov    %eax,%esi
08338593 +0x5d:  lea    -0x28(%ebp),%eax
08338596 +0x60:  mov    %eax,(%esp)
08338599 +0x63:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833859e +0x68:  mov    %esi,%eax
083385a0 +0x6a:  mov    %ebx,%edx
083385a2 +0x6c:  mov    %eax,(%esp)
083385a5 +0x6f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// user_creature::CCreature::Die @ 0x8338536

/* user_creature::CCreature::Die(CUser*) */

undefined4 __thiscall user_creature::CCreature::Die(CCreature *this,CUser *param_1)

{
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,param_1,0,0);
                    /* try { // try from 08338566 to 08338575 has its CatchHandler @ 0833858f */
  CPacketRespondent::MakeNotipacketDiedCreature(local_2c);
  CPacketRespondent::SendAll(local_2c);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return 1;
}
```
