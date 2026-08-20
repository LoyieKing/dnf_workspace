# Evolute

`_ZN13user_creature9CCreature7EvoluteEP5CUser`

`user_creature::CCreature::Evolute(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083381ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083381ea  _ZN13user_creature9CCreature7EvoluteEP5CUser
#           user_creature::CCreature::Evolute(CUser*)
# range [0x083381ea, 0x08338477]
083381ea +0x000:  push   %ebp
083381eb +0x001:  mov    %esp,%ebp
083381ed +0x003:  push   %esi
083381ee +0x004:  push   %ebx
083381ef +0x005:  sub    $0x70,%esp
083381f2 +0x008:  mov    0x8(%ebp),%eax
083381f5 +0x00b:  mov    0x44(%eax),%eax
083381f8 +0x00e:  test   %eax,%eax
083381fa +0x010:  jne    0833825f <+0x75>
083381fc +0x012:  mov    0x8(%ebp),%eax
083381ff +0x015:  mov    %eax,(%esp)
08338202 +0x018:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338207 +0x01d:  mov    %eax,%ebx
08338209 +0x01f:  mov    0xc(%ebp),%eax
0833820c +0x022:  mov    %eax,(%esp)
0833820f +0x025:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08338214 +0x02a:  movzwl %ax,%esi
08338217 +0x02d:  movl   $0x5,0xc(%esp)
0833821f +0x035:  movl   $0x743,0x8(%esp)
08338227 +0x03d:  movl   $&_ZZN13user_creature9CCreature7EvoluteEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0833822f +0x045:  lea    -0x38(%ebp),%eax
08338232 +0x048:  mov    %eax,(%esp)
08338235 +0x04b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833823a +0x050:  mov    %ebx,0xc(%esp)
0833823e +0x054:  mov    %esi,0x8(%esp)
08338242 +0x058:  movl   $"cannot evolute because it haven't creature script uid(%d), creature id(%d) \n",0x4(%esp)
0833824a +0x060:  lea    -0x38(%ebp),%eax
0833824d +0x063:  mov    %eax,(%esp)
08338250 +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08338255 +0x06b:  mov    $0x0,%ebx
0833825a +0x070:  jmp    0833846f <+0x285>
0833825f +0x075:  mov    0x8(%ebp),%eax
08338262 +0x078:  mov    0x44(%eax),%eax
08338265 +0x07b:  mov    %eax,(%esp)
08338268 +0x07e:  call   0833f144 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1211>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1211
0833826d +0x083:  mov    %eax,-0x18(%ebp)
08338270 +0x086:  cmpl   $0x0,-0x18(%ebp)
08338274 +0x08a:  jne    08338280 <+0x96>
08338276 +0x08c:  mov    $0x0,%ebx
0833827b +0x091:  jmp    0833846f <+0x285>
08338280 +0x096:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
08338285 +0x09b:  mov    -0x18(%ebp),%edx
08338288 +0x09e:  mov    %edx,0x4(%esp)
0833828c +0x0a2:  mov    %eax,(%esp)
0833828f +0x0a5:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
08338294 +0x0aa:  mov    %eax,-0x14(%ebp)
08338297 +0x0ad:  cmpl   $0x0,-0x14(%ebp)
0833829b +0x0b1:  jne    083382a7 <+0xbd>
0833829d +0x0b3:  mov    $0x0,%ebx
083382a2 +0x0b8:  jmp    0833846f <+0x285>
083382a7 +0x0bd:  mov    -0x14(%ebp),%eax
083382aa +0x0c0:  mov    %eax,(%esp)
083382ad +0x0c3:  call   0833f128 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11f5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11f5
083382b2 +0x0c8:  mov    %eax,-0x10(%ebp)
083382b5 +0x0cb:  mov    -0x10(%ebp),%eax
083382b8 +0x0ce:  mov    %eax,0x4(%esp)
083382bc +0x0d2:  mov    0x8(%ebp),%eax
083382bf +0x0d5:  mov    %eax,(%esp)
083382c2 +0x0d8:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
083382c7 +0x0dd:  movl   $0x0,-0xc(%ebp)
083382ce +0x0e4:  mov    0xc(%ebp),%eax
083382d1 +0x0e7:  mov    %eax,(%esp)
083382d4 +0x0ea:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
083382d9 +0x0ef:  movl   $0x16,0x8(%esp)
083382e1 +0x0f7:  movl   $0x0,0x4(%esp)
083382e9 +0x0ff:  mov    %eax,(%esp)
083382ec +0x102:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
083382f1 +0x107:  mov    %eax,-0xc(%ebp)
083382f4 +0x10a:  cmpl   $0x0,-0xc(%ebp)
083382f8 +0x10e:  jne    08338304 <+0x11a>
083382fa +0x110:  mov    $0x0,%ebx
083382ff +0x115:  jmp    0833846f <+0x285>
08338304 +0x11a:  mov    0x8(%ebp),%eax
08338307 +0x11d:  mov    %eax,(%esp)
0833830a +0x120:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833830f +0x125:  mov    %eax,%edx
08338311 +0x127:  mov    -0xc(%ebp),%eax
08338314 +0x12a:  mov    %edx,0x2(%eax)
08338317 +0x12d:  mov    0xc(%ebp),%eax
0833831a +0x130:  mov    %eax,0x8(%esp)
0833831e +0x134:  movl   $0x8a,0x4(%esp)
08338326 +0x13c:  lea    -0x40(%ebp),%eax
08338329 +0x13f:  mov    %eax,(%esp)
0833832c +0x142:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08338331 +0x147:  mov    0x8(%ebp),%eax
08338334 +0x14a:  mov    %eax,(%esp)
08338337 +0x14d:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833833c +0x152:  mov    %eax,%ebx
0833833e +0x154:  mov    0x8(%ebp),%eax
08338341 +0x157:  mov    %eax,(%esp)
08338344 +0x15a:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08338349 +0x15f:  mov    %ebx,0x8(%esp)
0833834d +0x163:  mov    %eax,0x4(%esp)
08338351 +0x167:  lea    -0x40(%ebp),%eax
08338354 +0x16a:  mov    %eax,(%esp)
08338357 +0x16d:  call   0833fd74 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1e41>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1e41
0833835c +0x172:  xor    $0x1,%eax
0833835f +0x175:  test   %al,%al
08338361 +0x177:  je     083383b5 <+0x1cb>
08338363 +0x179:  mov    0xc(%ebp),%eax
08338366 +0x17c:  mov    %eax,(%esp)
08338369 +0x17f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833836e +0x184:  movzwl %ax,%ebx
08338371 +0x187:  movl   $0x5,0xc(%esp)
08338379 +0x18f:  movl   $0x763,0x8(%esp)
08338381 +0x197:  movl   $&_ZZN13user_creature9CCreature7EvoluteEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08338389 +0x19f:  lea    -0x28(%ebp),%eax
0833838c +0x1a2:  mov    %eax,(%esp)
0833838f +0x1a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08338394 +0x1aa:  mov    %ebx,0x8(%esp)
08338398 +0x1ae:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
083383a0 +0x1b6:  lea    -0x28(%ebp),%eax
083383a3 +0x1b9:  mov    %eax,(%esp)
083383a6 +0x1bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083383ab +0x1c1:  mov    $0x0,%ebx
083383b0 +0x1c6:  jmp    08338464 <+0x27a>
083383b5 +0x1cb:  lea    -0x40(%ebp),%eax
083383b8 +0x1ce:  mov    %eax,(%esp)
083383bb +0x1d1:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
083383c0 +0x1d6:  movl   $0x0,0xc(%esp)
083383c8 +0x1de:  movl   $0x0,0x8(%esp)
083383d0 +0x1e6:  mov    0xc(%ebp),%eax
083383d3 +0x1e9:  mov    %eax,0x4(%esp)
083383d7 +0x1ed:  lea    -0x60(%ebp),%eax
083383da +0x1f0:  mov    %eax,(%esp)
083383dd +0x1f3:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
083383e2 +0x1f8:  mov    -0x18(%ebp),%eax
083383e5 +0x1fb:  mov    %eax,0x4(%esp)
083383e9 +0x1ff:  lea    -0x60(%ebp),%eax
083383ec +0x202:  mov    %eax,(%esp)
083383ef +0x205:  call   08340842 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x290f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x290f
083383f4 +0x20a:  lea    -0x60(%ebp),%eax
083383f7 +0x20d:  mov    %eax,(%esp)
083383fa +0x210:  call   083404b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2585>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2585
083383ff +0x215:  movl   $0x16,0xc(%esp)
08338407 +0x21d:  movl   $0x3,0x8(%esp)
0833840f +0x225:  movl   $0x1,0x4(%esp)
08338417 +0x22d:  mov    0xc(%ebp),%eax
0833841a +0x230:  mov    %eax,(%esp)
0833841d +0x233:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08338422 +0x238:  mov    $0x1,%ebx
08338427 +0x23d:  lea    -0x60(%ebp),%eax
0833842a +0x240:  mov    %eax,(%esp)
0833842d +0x243:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338432 +0x248:  jmp    08338464 <+0x27a>
08338434 +0x24a:  mov    %edx,%ebx
08338436 +0x24c:  mov    %eax,%esi
08338438 +0x24e:  lea    -0x60(%ebp),%eax
0833843b +0x251:  mov    %eax,(%esp)
0833843e +0x254:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338443 +0x259:  mov    %esi,%eax
08338445 +0x25b:  mov    %ebx,%edx
08338447 +0x25d:  jmp    08338449 <+0x25f>
08338449 +0x25f:  mov    %edx,%ebx
0833844b +0x261:  mov    %eax,%esi
0833844d +0x263:  lea    -0x40(%ebp),%eax
08338450 +0x266:  mov    %eax,(%esp)
08338453 +0x269:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08338458 +0x26e:  mov    %esi,%eax
0833845a +0x270:  mov    %ebx,%edx
0833845c +0x272:  mov    %eax,(%esp)
0833845f +0x275:  call   08ae3750 <_Unwind_Resume>
08338464 +0x27a:  lea    -0x40(%ebp),%eax
08338467 +0x27d:  mov    %eax,(%esp)
0833846a +0x280:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833846f +0x285:  mov    %ebx,%eax
08338471 +0x287:  add    $0x70,%esp
08338474 +0x28a:  pop    %ebx
08338475 +0x28b:  pop    %esi
08338476 +0x28c:  pop    %ebp
08338477 +0x28d:  ret
```

## 反编译 C

```c
// user_creature::CCreature::Evolute @ 0x83381ea

/* user_creature::CCreature::Evolute(CUser*) */

bool __thiscall user_creature::CCreature::Evolute(CCreature *this,CUser *param_1)

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
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::Evolute(CUser*)",0x743,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = CCreatureScript::GetEvolutionCreatureId(*(CCreatureScript **)(this + 0x44));
    if (local_1c == 0) {
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
                    /* try { // try from 08338357 to 083383e1 has its CatchHandler @ 08338449 */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 083383ef to 08338421 has its CatchHandler @ 08338434 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 0833842d to 08338431 has its CatchHandler @ 08338449 */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::Evolute(CUser*)",0x763,5);
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
