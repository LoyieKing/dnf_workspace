# SendCreatureItemInfo

`_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM`

`user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b498  _ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM
#           user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*)
# range [0x0833b498, 0x0833b591]
0833b498 +0x00:  push   %ebp
0833b499 +0x01:  mov    %esp,%ebp
0833b49b +0x03:  push   %esi
0833b49c +0x04:  push   %ebx
0833b49d +0x05:  sub    $0x40,%esp
0833b4a0 +0x08:  movl   $0x0,-0xc(%ebp)
0833b4a7 +0x0f:  mov    0xc(%ebp),%eax
0833b4aa +0x12:  mov    0x2c(%eax),%ebx
0833b4ad +0x15:  mov    0x8(%ebp),%eax
0833b4b0 +0x18:  mov    0x1c(%eax),%eax
0833b4b3 +0x1b:  mov    %eax,(%esp)
0833b4b6 +0x1e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0833b4bb +0x23:  mov    %ebx,0x8(%esp)
0833b4bf +0x27:  movl   $0x3,0x4(%esp)
0833b4c7 +0x2f:  mov    %eax,(%esp)
0833b4ca +0x32:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0833b4cf +0x37:  mov    %eax,-0xc(%ebp)
0833b4d2 +0x3a:  cmpl   $0x0,-0xc(%ebp)
0833b4d6 +0x3e:  je     0833b586 <+0xee>
0833b4dc +0x44:  mov    -0xc(%ebp),%eax
0833b4df +0x47:  mov    0x2(%eax),%eax
0833b4e2 +0x4a:  test   %eax,%eax
0833b4e4 +0x4c:  je     0833b586 <+0xee>
0833b4ea +0x52:  mov    0x8(%ebp),%eax
0833b4ed +0x55:  mov    0x1c(%eax),%eax
0833b4f0 +0x58:  movl   $0x0,0xc(%esp)
0833b4f8 +0x60:  movl   $0x0,0x8(%esp)
0833b500 +0x68:  mov    %eax,0x4(%esp)
0833b504 +0x6c:  lea    -0x2c(%ebp),%eax
0833b507 +0x6f:  mov    %eax,(%esp)
0833b50a +0x72:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833b50f +0x77:  mov    0xc(%ebp),%eax
0833b512 +0x7a:  mov    0x2c(%eax),%edx
0833b515 +0x7d:  mov    0x8(%ebp),%eax
0833b518 +0x80:  mov    %edx,0x8(%esp)
0833b51c +0x84:  mov    %eax,0x4(%esp)
0833b520 +0x88:  lea    -0x2c(%ebp),%eax
0833b523 +0x8b:  mov    %eax,(%esp)
0833b526 +0x8e:  call   083409e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2aad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2aad
0833b52b +0x93:  lea    -0x2c(%ebp),%eax
0833b52e +0x96:  mov    %eax,(%esp)
0833b531 +0x99:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
0833b536 +0x9e:  mov    0xc(%ebp),%eax
0833b539 +0xa1:  mov    0x2c(%eax),%edx
0833b53c +0xa4:  mov    0x8(%ebp),%eax
0833b53f +0xa7:  mov    0x1c(%eax),%eax
0833b542 +0xaa:  mov    %edx,0xc(%esp)
0833b546 +0xae:  movl   $0x7,0x8(%esp)
0833b54e +0xb6:  movl   $0x1,0x4(%esp)
0833b556 +0xbe:  mov    %eax,(%esp)
0833b559 +0xc1:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0833b55e +0xc6:  jmp    0833b57b <+0xe3>
0833b560 +0xc8:  mov    %edx,%ebx
0833b562 +0xca:  mov    %eax,%esi
0833b564 +0xcc:  lea    -0x2c(%ebp),%eax
0833b567 +0xcf:  mov    %eax,(%esp)
0833b56a +0xd2:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833b56f +0xd7:  mov    %esi,%eax
0833b571 +0xd9:  mov    %ebx,%edx
0833b573 +0xdb:  mov    %eax,(%esp)
0833b576 +0xde:  call   08ae3750 <_Unwind_Resume>
0833b57b +0xe3:  lea    -0x2c(%ebp),%eax
0833b57e +0xe6:  mov    %eax,(%esp)
0833b581 +0xe9:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833b586 +0xee:  mov    $0x1,%eax
0833b58b +0xf3:  add    $0x40,%esp
0833b58e +0xf6:  pop    %ebx
0833b58f +0xf7:  pop    %esi
0833b590 +0xf8:  pop    %ebp
0833b591 +0xf9:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SendCreatureItemInfo @ 0x833b498

/* user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::SendCreatureItemInfo(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  int iVar1;
  CInventory *this_00;
  CPacketRespondent local_30 [32];
  int local_10;
  
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x1c));
  local_10 = CInventory::GetInvenRef(this_00,3,iVar1);
  if ((local_10 != 0) && (*(int *)(local_10 + 2) != 0)) {
    CPacketRespondent::CPacketRespondent(local_30,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833b526 to 0833b55d has its CatchHandler @ 0833b560 */
    CPacketRespondent::MakeNotipacketCreatureItemList(local_30,(map *)this,*(int *)(param_1 + 0x2c))
    ;
    CPacketRespondent::Send(local_30);
    CUser::SendUpdateItemList(*(CUser **)(this + 0x1c),1,7,*(undefined4 *)(param_1 + 0x2c));
    CPacketRespondent::~CPacketRespondent(local_30);
  }
  return 1;
}
```
