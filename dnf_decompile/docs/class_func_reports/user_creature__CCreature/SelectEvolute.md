# SelectEvolute

`_ZN13user_creature9CCreature13SelectEvoluteEP5CUser`

`user_creature::CCreature::SelectEvolute(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337e48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337e48  _ZN13user_creature9CCreature13SelectEvoluteEP5CUser
#           user_creature::CCreature::SelectEvolute(CUser*)
# range [0x08337e48, 0x083380fb]
08337e48 +0x000:  push   %ebp
08337e49 +0x001:  mov    %esp,%ebp
08337e4b +0x003:  push   %esi
08337e4c +0x004:  push   %ebx
08337e4d +0x005:  sub    $0x70,%esp
08337e50 +0x008:  mov    0x8(%ebp),%eax
08337e53 +0x00b:  mov    0x44(%eax),%eax
08337e56 +0x00e:  test   %eax,%eax
08337e58 +0x010:  jne    08337ebd <+0x75>
08337e5a +0x012:  mov    0x8(%ebp),%eax
08337e5d +0x015:  mov    %eax,(%esp)
08337e60 +0x018:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08337e65 +0x01d:  mov    %eax,%ebx
08337e67 +0x01f:  mov    0xc(%ebp),%eax
08337e6a +0x022:  mov    %eax,(%esp)
08337e6d +0x025:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08337e72 +0x02a:  movzwl %ax,%esi
08337e75 +0x02d:  movl   $0x5,0xc(%esp)
08337e7d +0x035:  movl   $0x6a2,0x8(%esp)
08337e85 +0x03d:  movl   $&_ZZN13user_creature9CCreature13SelectEvoluteEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08337e8d +0x045:  lea    -0x38(%ebp),%eax
08337e90 +0x048:  mov    %eax,(%esp)
08337e93 +0x04b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08337e98 +0x050:  mov    %ebx,0xc(%esp)
08337e9c +0x054:  mov    %esi,0x8(%esp)
08337ea0 +0x058:  movl   $"cannot selectevolute because it haven't creature script uid(%d), creature id(%d) \n",0x4(%esp)
08337ea8 +0x060:  lea    -0x38(%ebp),%eax
08337eab +0x063:  mov    %eax,(%esp)
08337eae +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08337eb3 +0x06b:  mov    $0x0,%ebx
08337eb8 +0x070:  jmp    083380f2 <+0x2aa>
08337ebd +0x075:  movl   $0x0,-0x18(%ebp)
08337ec4 +0x07c:  mov    0x8(%ebp),%eax
08337ec7 +0x07f:  movzbl 0x4d(%eax),%eax
08337ecb +0x083:  cmp    $0x4,%al
08337ecd +0x085:  jbe    08337ee2 <+0x9a>
08337ecf +0x087:  mov    0x8(%ebp),%eax
08337ed2 +0x08a:  mov    0x44(%eax),%eax
08337ed5 +0x08d:  mov    %eax,(%esp)
08337ed8 +0x090:  call   0833f362 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x142f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x142f
08337edd +0x095:  mov    %eax,-0x18(%ebp)
08337ee0 +0x098:  jmp    08337ef3 <+0xab>
08337ee2 +0x09a:  mov    0x8(%ebp),%eax
08337ee5 +0x09d:  mov    0x44(%eax),%eax
08337ee8 +0x0a0:  mov    %eax,(%esp)
08337eeb +0x0a3:  call   0833f36e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x143b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x143b
08337ef0 +0x0a8:  mov    %eax,-0x18(%ebp)
08337ef3 +0x0ab:  cmpl   $0xffffffff,-0x18(%ebp)
08337ef7 +0x0af:  jne    08337f03 <+0xbb>
08337ef9 +0x0b1:  mov    $0x0,%ebx
08337efe +0x0b6:  jmp    083380f2 <+0x2aa>
08337f03 +0x0bb:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
08337f08 +0x0c0:  mov    -0x18(%ebp),%edx
08337f0b +0x0c3:  mov    %edx,0x4(%esp)
08337f0f +0x0c7:  mov    %eax,(%esp)
08337f12 +0x0ca:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
08337f17 +0x0cf:  mov    %eax,-0x14(%ebp)
08337f1a +0x0d2:  cmpl   $0x0,-0x14(%ebp)
08337f1e +0x0d6:  jne    08337f2a <+0xe2>
08337f20 +0x0d8:  mov    $0x0,%ebx
08337f25 +0x0dd:  jmp    083380f2 <+0x2aa>
08337f2a +0x0e2:  mov    -0x14(%ebp),%eax
08337f2d +0x0e5:  mov    %eax,(%esp)
08337f30 +0x0e8:  call   0833f128 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11f5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11f5
08337f35 +0x0ed:  mov    %eax,-0x10(%ebp)
08337f38 +0x0f0:  mov    -0x10(%ebp),%eax
08337f3b +0x0f3:  mov    %eax,0x4(%esp)
08337f3f +0x0f7:  mov    0x8(%ebp),%eax
08337f42 +0x0fa:  mov    %eax,(%esp)
08337f45 +0x0fd:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
08337f4a +0x102:  movl   $0x0,-0xc(%ebp)
08337f51 +0x109:  mov    0xc(%ebp),%eax
08337f54 +0x10c:  mov    %eax,(%esp)
08337f57 +0x10f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08337f5c +0x114:  movl   $0x16,0x8(%esp)
08337f64 +0x11c:  movl   $0x0,0x4(%esp)
08337f6c +0x124:  mov    %eax,(%esp)
08337f6f +0x127:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08337f74 +0x12c:  mov    %eax,-0xc(%ebp)
08337f77 +0x12f:  cmpl   $0x0,-0xc(%ebp)
08337f7b +0x133:  jne    08337f87 <+0x13f>
08337f7d +0x135:  mov    $0x0,%ebx
08337f82 +0x13a:  jmp    083380f2 <+0x2aa>
08337f87 +0x13f:  mov    0x8(%ebp),%eax
08337f8a +0x142:  mov    %eax,(%esp)
08337f8d +0x145:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08337f92 +0x14a:  mov    %eax,%edx
08337f94 +0x14c:  mov    -0xc(%ebp),%eax
08337f97 +0x14f:  mov    %edx,0x2(%eax)
08337f9a +0x152:  mov    0xc(%ebp),%eax
08337f9d +0x155:  mov    %eax,0x8(%esp)
08337fa1 +0x159:  movl   $0x8a,0x4(%esp)
08337fa9 +0x161:  lea    -0x40(%ebp),%eax
08337fac +0x164:  mov    %eax,(%esp)
08337faf +0x167:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08337fb4 +0x16c:  mov    0x8(%ebp),%eax
08337fb7 +0x16f:  mov    %eax,(%esp)
08337fba +0x172:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08337fbf +0x177:  mov    %eax,%ebx
08337fc1 +0x179:  mov    0x8(%ebp),%eax
08337fc4 +0x17c:  mov    %eax,(%esp)
08337fc7 +0x17f:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08337fcc +0x184:  mov    %ebx,0x8(%esp)
08337fd0 +0x188:  mov    %eax,0x4(%esp)
08337fd4 +0x18c:  lea    -0x40(%ebp),%eax
08337fd7 +0x18f:  mov    %eax,(%esp)
08337fda +0x192:  call   0833fd74 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1e41>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1e41
08337fdf +0x197:  xor    $0x1,%eax
08337fe2 +0x19a:  test   %al,%al
08337fe4 +0x19c:  je     08338038 <+0x1f0>
08337fe6 +0x19e:  mov    0xc(%ebp),%eax
08337fe9 +0x1a1:  mov    %eax,(%esp)
08337fec +0x1a4:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08337ff1 +0x1a9:  movzwl %ax,%ebx
08337ff4 +0x1ac:  movl   $0x5,0xc(%esp)
08337ffc +0x1b4:  movl   $0x6c9,0x8(%esp)
08338004 +0x1bc:  movl   $&_ZZN13user_creature9CCreature13SelectEvoluteEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0833800c +0x1c4:  lea    -0x28(%ebp),%eax
0833800f +0x1c7:  mov    %eax,(%esp)
08338012 +0x1ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08338017 +0x1cf:  mov    %ebx,0x8(%esp)
0833801b +0x1d3:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
08338023 +0x1db:  lea    -0x28(%ebp),%eax
08338026 +0x1de:  mov    %eax,(%esp)
08338029 +0x1e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833802e +0x1e6:  mov    $0x0,%ebx
08338033 +0x1eb:  jmp    083380e7 <+0x29f>
08338038 +0x1f0:  lea    -0x40(%ebp),%eax
0833803b +0x1f3:  mov    %eax,(%esp)
0833803e +0x1f6:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08338043 +0x1fb:  movl   $0x0,0xc(%esp)
0833804b +0x203:  movl   $0x0,0x8(%esp)
08338053 +0x20b:  mov    0xc(%ebp),%eax
08338056 +0x20e:  mov    %eax,0x4(%esp)
0833805a +0x212:  lea    -0x60(%ebp),%eax
0833805d +0x215:  mov    %eax,(%esp)
08338060 +0x218:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08338065 +0x21d:  mov    -0x18(%ebp),%eax
08338068 +0x220:  mov    %eax,0x4(%esp)
0833806c +0x224:  lea    -0x60(%ebp),%eax
0833806f +0x227:  mov    %eax,(%esp)
08338072 +0x22a:  call   08340842 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x290f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x290f
08338077 +0x22f:  lea    -0x60(%ebp),%eax
0833807a +0x232:  mov    %eax,(%esp)
0833807d +0x235:  call   083404b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2585>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2585
08338082 +0x23a:  movl   $0x16,0xc(%esp)
0833808a +0x242:  movl   $0x3,0x8(%esp)
08338092 +0x24a:  movl   $0x1,0x4(%esp)
0833809a +0x252:  mov    0xc(%ebp),%eax
0833809d +0x255:  mov    %eax,(%esp)
083380a0 +0x258:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
083380a5 +0x25d:  mov    $0x1,%ebx
083380aa +0x262:  lea    -0x60(%ebp),%eax
083380ad +0x265:  mov    %eax,(%esp)
083380b0 +0x268:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
083380b5 +0x26d:  jmp    083380e7 <+0x29f>
083380b7 +0x26f:  mov    %edx,%ebx
083380b9 +0x271:  mov    %eax,%esi
083380bb +0x273:  lea    -0x60(%ebp),%eax
083380be +0x276:  mov    %eax,(%esp)
083380c1 +0x279:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
083380c6 +0x27e:  mov    %esi,%eax
083380c8 +0x280:  mov    %ebx,%edx
083380ca +0x282:  jmp    083380cc <+0x284>
083380cc +0x284:  mov    %edx,%ebx
083380ce +0x286:  mov    %eax,%esi
083380d0 +0x288:  lea    -0x40(%ebp),%eax
083380d3 +0x28b:  mov    %eax,(%esp)
083380d6 +0x28e:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
083380db +0x293:  mov    %esi,%eax
083380dd +0x295:  mov    %ebx,%edx
083380df +0x297:  mov    %eax,(%esp)
083380e2 +0x29a:  call   08ae3750 <_Unwind_Resume>
083380e7 +0x29f:  lea    -0x40(%ebp),%eax
083380ea +0x2a2:  mov    %eax,(%esp)
083380ed +0x2a5:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
083380f2 +0x2aa:  mov    %ebx,%eax
083380f4 +0x2ac:  add    $0x70,%esp
083380f7 +0x2af:  pop    %ebx
083380f8 +0x2b0:  pop    %esi
083380f9 +0x2b1:  pop    %ebp
083380fa +0x2b2:  ret
083380fb +0x2b3:  nop
```

## 反编译 C

```c
// user_creature::CCreature::SelectEvolute @ 0x8337e48

/* user_creature::CCreature::SelectEvolute(CUser*) */

bool __thiscall user_creature::CCreature::SelectEvolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  bool bVar6;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CCreatureScript *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::SelectEvolute(CUser*)",0x6a2,5);
    cMyTrace::operator()
              (local_3c,
               "cannot selectevolute because it haven\'t creature script uid(%d), creature id(%d) \n"
               ,uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = 0;
    if ((byte)this[0x4d] < 5) {
      local_1c = CCreatureScript::GET_BTypeCreature(*(CCreatureScript **)(this + 0x44));
    }
    else {
      local_1c = CCreatureScript::GET_ATypeCreature(*(CCreatureScript **)(this + 0x44));
    }
    if (local_1c == -1) {
      bVar6 = false;
    }
    else {
      iVar4 = GetInstanceCreatureScriptMgr();
      local_18 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
      if (local_18 == (CCreatureScript *)0x0) {
        bVar6 = false;
      }
      else {
        local_14 = CCreatureScript::GetItemId(local_18);
        SetItemId(this,local_14);
        local_10 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_10 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_10 == 0) {
          bVar6 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_10 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_44,0x8a,param_1);
          iVar4 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar5 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 08337fda to 08338064 has its CatchHandler @ 083380cc */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338072 to 083380a4 has its CatchHandler @ 083380b7 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 083380b0 to 083380b4 has its CatchHandler @ 083380cc */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::SelectEvolute(CUser*)",0x6c9
                               ,5);
            cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_44);
        }
      }
    }
  }
  return bVar6;
}
```
