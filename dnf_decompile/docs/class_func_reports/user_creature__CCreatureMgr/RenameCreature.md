# RenameCreature

`_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii`

`user_creature::CCreatureMgr::RenameCreature(char const*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339b6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339b6e  _ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii
#           user_creature::CCreatureMgr::RenameCreature(char const*, int, int)
# range [0x08339b6e, 0x08339db9]
08339b6e +0x000:  push   %ebp
08339b6f +0x001:  mov    %esp,%ebp
08339b71 +0x003:  push   %esi
08339b72 +0x004:  push   %ebx
08339b73 +0x005:  sub    $0x50,%esp
08339b76 +0x008:  mov    0x8(%ebp),%eax
08339b79 +0x00b:  mov    0x1c(%eax),%eax
08339b7c +0x00e:  movl   $0x67,0xc(%esp)
08339b84 +0x016:  movl   $0x1,0x8(%esp)
08339b8c +0x01e:  mov    %eax,0x4(%esp)
08339b90 +0x022:  lea    -0x44(%ebp),%eax
08339b93 +0x025:  mov    %eax,(%esp)
08339b96 +0x028:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08339b9b +0x02d:  movl   $0x0,-0xc(%ebp)
08339ba2 +0x034:  mov    0x8(%ebp),%eax
08339ba5 +0x037:  mov    0x18(%eax),%eax
08339ba8 +0x03a:  test   %eax,%eax
08339baa +0x03c:  jne    08339bc9 <+0x5b>
08339bac +0x03e:  movl   $0x4,0x4(%esp)
08339bb4 +0x046:  lea    -0x44(%ebp),%eax
08339bb7 +0x049:  mov    %eax,(%esp)
08339bba +0x04c:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
08339bbf +0x051:  mov    $0x0,%ebx
08339bc4 +0x056:  jmp    08339da6 <+0x238>
08339bc9 +0x05b:  mov    0x8(%ebp),%eax
08339bcc +0x05e:  mov    0x1c(%eax),%eax
08339bcf +0x061:  mov    %eax,(%esp)
08339bd2 +0x064:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08339bd7 +0x069:  mov    0x14(%ebp),%edx
08339bda +0x06c:  mov    %edx,0xc(%esp)
08339bde +0x070:  movl   $0x1,0x8(%esp)
08339be6 +0x078:  mov    0x10(%ebp),%edx
08339be9 +0x07b:  mov    %edx,0x4(%esp)
08339bed +0x07f:  mov    %eax,(%esp)
08339bf0 +0x082:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
08339bf5 +0x087:  mov    %eax,-0xc(%ebp)
08339bf8 +0x08a:  cmpl   $0x0,-0xc(%ebp)
08339bfc +0x08e:  setne  %al
08339bff +0x091:  test   %al,%al
08339c01 +0x093:  je     08339c1f <+0xb1>
08339c03 +0x095:  mov    -0xc(%ebp),%eax
08339c06 +0x098:  mov    %eax,0x4(%esp)
08339c0a +0x09c:  lea    -0x44(%ebp),%eax
08339c0d +0x09f:  mov    %eax,(%esp)
08339c10 +0x0a2:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
08339c15 +0x0a7:  mov    $0x0,%ebx
08339c1a +0x0ac:  jmp    08339da6 <+0x238>
08339c1f +0x0b1:  mov    0x8(%ebp),%eax
08339c22 +0x0b4:  mov    0x18(%eax),%eax
08339c25 +0x0b7:  mov    0xc(%ebp),%edx
08339c28 +0x0ba:  mov    %edx,0x4(%esp)
08339c2c +0x0be:  mov    %eax,(%esp)
08339c2f +0x0c1:  call   083373aa <_ZN13user_creature9CCreature14RenameCreatureEPKc>  ; user_creature::CCreature::RenameCreature(char const*)
08339c34 +0x0c6:  mov    0xc(%ebp),%eax
08339c37 +0x0c9:  mov    %eax,(%esp)
08339c3a +0x0cc:  call   0807e3b0 <_init+0xca8>
08339c3f +0x0d1:  mov    %eax,0x8(%esp)
08339c43 +0x0d5:  mov    0xc(%ebp),%eax
08339c46 +0x0d8:  mov    %eax,0x4(%esp)
08339c4a +0x0dc:  lea    -0x44(%ebp),%eax
08339c4d +0x0df:  mov    %eax,(%esp)
08339c50 +0x0e2:  call   08340672 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x273f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x273f
08339c55 +0x0e7:  mov    0x8(%ebp),%eax
08339c58 +0x0ea:  mov    0x1c(%eax),%eax
08339c5b +0x0ed:  movl   $0x0,0x4(%esp)
08339c63 +0x0f5:  mov    %eax,(%esp)
08339c66 +0x0f8:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08339c6b +0x0fd:  mov    %eax,%ebx
08339c6d +0x0ff:  mov    0x8(%ebp),%eax
08339c70 +0x102:  mov    0x1c(%eax),%eax
08339c73 +0x105:  mov    %eax,(%esp)
08339c76 +0x108:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08339c7b +0x10d:  movsbl %al,%eax
08339c7e +0x110:  mov    %ebx,0x8(%esp)
08339c82 +0x114:  mov    %eax,0x4(%esp)
08339c86 +0x118:  lea    -0x44(%ebp),%eax
08339c89 +0x11b:  mov    %eax,(%esp)
08339c8c +0x11e:  call   08340404 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24d1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24d1
08339c91 +0x123:  mov    0x8(%ebp),%eax
08339c94 +0x126:  mov    0x1c(%eax),%eax
08339c97 +0x129:  mov    %eax,0x8(%esp)
08339c9b +0x12d:  movl   $0x8a,0x4(%esp)
08339ca3 +0x135:  lea    -0x24(%ebp),%eax
08339ca6 +0x138:  mov    %eax,(%esp)
08339ca9 +0x13b:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08339cae +0x140:  mov    0x8(%ebp),%eax
08339cb1 +0x143:  mov    0x18(%eax),%eax
08339cb4 +0x146:  mov    %eax,(%esp)
08339cb7 +0x149:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08339cbc +0x14e:  mov    0xc(%ebp),%edx
08339cbf +0x151:  mov    %edx,0x8(%esp)
08339cc3 +0x155:  mov    %eax,0x4(%esp)
08339cc7 +0x159:  lea    -0x24(%ebp),%eax
08339cca +0x15c:  mov    %eax,(%esp)
08339ccd +0x15f:  call   0833fbde <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1cab>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1cab
08339cd2 +0x164:  xor    $0x1,%eax
08339cd5 +0x167:  test   %al,%al
08339cd7 +0x169:  je     08339d3e <+0x1d0>
08339cd9 +0x16b:  mov    0x8(%ebp),%eax
08339cdc +0x16e:  mov    0x1c(%eax),%eax
08339cdf +0x171:  mov    %eax,(%esp)
08339ce2 +0x174:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08339ce7 +0x179:  movzwl %ax,%ebx
08339cea +0x17c:  movl   $0x5,0xc(%esp)
08339cf2 +0x184:  movl   $0xaa0,0x8(%esp)
08339cfa +0x18c:  movl   $&_ZZN13user_creature12CCreatureMgr14RenameCreatureEPKciiE19__PRETTY_FUNCTION__,0x4(%esp)
08339d02 +0x194:  lea    -0x1c(%ebp),%eax
08339d05 +0x197:  mov    %eax,(%esp)
08339d08 +0x19a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08339d0d +0x19f:  mov    %ebx,0x8(%esp)
08339d11 +0x1a3:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
08339d19 +0x1ab:  lea    -0x1c(%ebp),%eax
08339d1c +0x1ae:  mov    %eax,(%esp)
08339d1f +0x1b1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08339d24 +0x1b6:  movl   $0x2,0x4(%esp)
08339d2c +0x1be:  lea    -0x44(%ebp),%eax
08339d2f +0x1c1:  mov    %eax,(%esp)
08339d32 +0x1c4:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
08339d37 +0x1c9:  mov    $0x0,%ebx
08339d3c +0x1ce:  jmp    08339d7e <+0x210>
08339d3e +0x1d0:  lea    -0x24(%ebp),%eax
08339d41 +0x1d3:  mov    %eax,(%esp)
08339d44 +0x1d6:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08339d49 +0x1db:  mov    0x14(%ebp),%eax
08339d4c +0x1de:  mov    %eax,0x8(%esp)
08339d50 +0x1e2:  mov    0x10(%ebp),%eax
08339d53 +0x1e5:  mov    %eax,0x4(%esp)
08339d57 +0x1e9:  lea    -0x44(%ebp),%eax
08339d5a +0x1ec:  mov    %eax,(%esp)
08339d5d +0x1ef:  call   083405fa <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x26c7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x26c7
08339d62 +0x1f4:  mov    $0x1,%ebx
08339d67 +0x1f9:  jmp    08339d7e <+0x210>
08339d69 +0x1fb:  mov    %edx,%ebx
08339d6b +0x1fd:  mov    %eax,%esi
08339d6d +0x1ff:  lea    -0x24(%ebp),%eax
08339d70 +0x202:  mov    %eax,(%esp)
08339d73 +0x205:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08339d78 +0x20a:  mov    %esi,%eax
08339d7a +0x20c:  mov    %ebx,%edx
08339d7c +0x20e:  jmp    08339d8b <+0x21d>
08339d7e +0x210:  lea    -0x24(%ebp),%eax
08339d81 +0x213:  mov    %eax,(%esp)
08339d84 +0x216:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08339d89 +0x21b:  jmp    08339da6 <+0x238>
08339d8b +0x21d:  mov    %edx,%ebx
08339d8d +0x21f:  mov    %eax,%esi
08339d8f +0x221:  lea    -0x44(%ebp),%eax
08339d92 +0x224:  mov    %eax,(%esp)
08339d95 +0x227:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08339d9a +0x22c:  mov    %esi,%eax
08339d9c +0x22e:  mov    %ebx,%edx
08339d9e +0x230:  mov    %eax,(%esp)
08339da1 +0x233:  call   08ae3750 <_Unwind_Resume>
08339da6 +0x238:  lea    -0x44(%ebp),%eax
08339da9 +0x23b:  mov    %eax,(%esp)
08339dac +0x23e:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08339db1 +0x243:  mov    %ebx,%eax
08339db3 +0x245:  add    $0x50,%esp
08339db6 +0x248:  pop    %ebx
08339db7 +0x249:  pop    %esi
08339db8 +0x24a:  pop    %ebp
08339db9 +0x24b:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::RenameCreature @ 0x8339b6e

/* user_creature::CCreatureMgr::RenameCreature(char const*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::RenameCreature
          (CCreatureMgr *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  CInventory *this_00;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  CPacketRespondent local_48 [32];
  CDBMsgSender local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  CPacketRespondent::CPacketRespondent(local_48,*(CUser **)(this + 0x1c),1,0x67);
  local_10 = 0;
  if (*(int *)(this + 0x18) == 0) {
                    /* try { // try from 08339bba to 08339cad has its CatchHandler @ 08339d8b */
    CPacketRespondent::SetError(local_48,4);
    bVar5 = false;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x1c));
    local_10 = CInventory::use_item(this_00,param_2,1,param_3);
    if (local_10 == 0) {
      CCreature::RenameCreature(*(CCreature **)(this + 0x18),param_1);
      sVar2 = strlen(param_1);
      CPacketRespondent::MakeNotipacketRenameCreature(local_48,param_1,sVar2);
      iVar3 = CUser::get_area(*(CUser **)(this + 0x1c),false);
      cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x1c));
      CPacketRespondent::Broadcast(local_48,(int)cVar1,iVar3);
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
      iVar3 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339ccd to 08339d61 has its CatchHandler @ 08339d69 */
      cVar1 = CDBMsgSender::RenameCreatureItem(local_28,iVar3,param_1);
      bVar5 = cVar1 == '\x01';
      if (bVar5) {
        CDBMsgSender::Send(local_28);
        CPacketRespondent::MakeCmdpacketRenameCreature(local_48,param_2,param_3);
      }
      else {
        uVar4 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_20,
                           "bool user_creature::CCreatureMgr::RenameCreature(const char*, int, int)"
                           ,0xaa0,5);
        cMyTrace::operator()(local_20,"cannot write db uid(%d)\n",uVar4 & 0xffff);
        CPacketRespondent::SetError(local_48,2);
      }
                    /* try { // try from 08339d84 to 08339d88 has its CatchHandler @ 08339d8b */
      CDBMsgSender::~CDBMsgSender(local_28);
    }
    else {
      CPacketRespondent::SetError(local_48,local_10);
      bVar5 = false;
    }
  }
  CPacketRespondent::~CPacketRespondent(local_48);
  return bVar5;
}
```
