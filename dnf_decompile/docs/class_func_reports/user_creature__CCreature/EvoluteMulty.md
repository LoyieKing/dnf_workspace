# EvoluteMulty

`_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri`

`user_creature::CCreature::EvoluteMulty(CUser*, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338950  _ZN13user_creature9CCreature12EvoluteMultyEP5CUseri
#           user_creature::CCreature::EvoluteMulty(CUser*, int)
# range [0x08338950, 0x08338bf9]
08338950 +0x000:  push   %ebp
08338951 +0x001:  mov    %esp,%ebp
08338953 +0x003:  push   %esi
08338954 +0x004:  push   %ebx
08338955 +0x005:  sub    $0x70,%esp
08338958 +0x008:  mov    0x8(%ebp),%eax
0833895b +0x00b:  mov    0x44(%eax),%eax
0833895e +0x00e:  test   %eax,%eax
08338960 +0x010:  jne    083389c5 <+0x75>
08338962 +0x012:  mov    0x8(%ebp),%eax
08338965 +0x015:  mov    %eax,(%esp)
08338968 +0x018:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833896d +0x01d:  mov    %eax,%ebx
0833896f +0x01f:  mov    0xc(%ebp),%eax
08338972 +0x022:  mov    %eax,(%esp)
08338975 +0x025:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833897a +0x02a:  movzwl %ax,%esi
0833897d +0x02d:  movl   $0x5,0xc(%esp)
08338985 +0x035:  movl   $0x843,0x8(%esp)
0833898d +0x03d:  movl   $&_ZZN13user_creature9CCreature12EvoluteMultyEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08338995 +0x045:  lea    -0x38(%ebp),%eax
08338998 +0x048:  mov    %eax,(%esp)
0833899b +0x04b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083389a0 +0x050:  mov    %ebx,0xc(%esp)
083389a4 +0x054:  mov    %esi,0x8(%esp)
083389a8 +0x058:  movl   $"cannot evolute because it haven't creature script uid(%d), creature id(%d) \n",0x4(%esp)
083389b0 +0x060:  lea    -0x38(%ebp),%eax
083389b3 +0x063:  mov    %eax,(%esp)
083389b6 +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083389bb +0x06b:  mov    $0x0,%ebx
083389c0 +0x070:  jmp    08338bf0 <+0x2a0>
083389c5 +0x075:  mov    0x8(%ebp),%eax
083389c8 +0x078:  mov    0x44(%eax),%eax
083389cb +0x07b:  mov    0x10(%ebp),%edx
083389ce +0x07e:  mov    %edx,0x4(%esp)
083389d2 +0x082:  mov    %eax,(%esp)
083389d5 +0x085:  call   0833f1e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x12ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x12ad
083389da +0x08a:  xor    $0x1,%eax
083389dd +0x08d:  test   %al,%al
083389df +0x08f:  je     083389eb <+0x9b>
083389e1 +0x091:  mov    $0x0,%ebx
083389e6 +0x096:  jmp    08338bf0 <+0x2a0>
083389eb +0x09b:  mov    0x10(%ebp),%eax
083389ee +0x09e:  mov    %eax,-0x18(%ebp)
083389f1 +0x0a1:  cmpl   $0x0,-0x18(%ebp)
083389f5 +0x0a5:  jne    08338a01 <+0xb1>
083389f7 +0x0a7:  mov    $0x0,%ebx
083389fc +0x0ac:  jmp    08338bf0 <+0x2a0>
08338a01 +0x0b1:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
08338a06 +0x0b6:  mov    -0x18(%ebp),%edx
08338a09 +0x0b9:  mov    %edx,0x4(%esp)
08338a0d +0x0bd:  mov    %eax,(%esp)
08338a10 +0x0c0:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
08338a15 +0x0c5:  mov    %eax,-0x14(%ebp)
08338a18 +0x0c8:  cmpl   $0x0,-0x14(%ebp)
08338a1c +0x0cc:  jne    08338a28 <+0xd8>
08338a1e +0x0ce:  mov    $0x0,%ebx
08338a23 +0x0d3:  jmp    08338bf0 <+0x2a0>
08338a28 +0x0d8:  mov    -0x14(%ebp),%eax
08338a2b +0x0db:  mov    %eax,(%esp)
08338a2e +0x0de:  call   0833f128 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11f5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11f5
08338a33 +0x0e3:  mov    %eax,-0x10(%ebp)
08338a36 +0x0e6:  mov    -0x10(%ebp),%eax
08338a39 +0x0e9:  mov    %eax,0x4(%esp)
08338a3d +0x0ed:  mov    0x8(%ebp),%eax
08338a40 +0x0f0:  mov    %eax,(%esp)
08338a43 +0x0f3:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
08338a48 +0x0f8:  movl   $0x0,-0xc(%ebp)
08338a4f +0x0ff:  mov    0xc(%ebp),%eax
08338a52 +0x102:  mov    %eax,(%esp)
08338a55 +0x105:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08338a5a +0x10a:  movl   $0x16,0x8(%esp)
08338a62 +0x112:  movl   $0x0,0x4(%esp)
08338a6a +0x11a:  mov    %eax,(%esp)
08338a6d +0x11d:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08338a72 +0x122:  mov    %eax,-0xc(%ebp)
08338a75 +0x125:  cmpl   $0x0,-0xc(%ebp)
08338a79 +0x129:  jne    08338a85 <+0x135>
08338a7b +0x12b:  mov    $0x0,%ebx
08338a80 +0x130:  jmp    08338bf0 <+0x2a0>
08338a85 +0x135:  mov    0x8(%ebp),%eax
08338a88 +0x138:  mov    %eax,(%esp)
08338a8b +0x13b:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338a90 +0x140:  mov    %eax,%edx
08338a92 +0x142:  mov    -0xc(%ebp),%eax
08338a95 +0x145:  mov    %edx,0x2(%eax)
08338a98 +0x148:  mov    0xc(%ebp),%eax
08338a9b +0x14b:  mov    %eax,0x8(%esp)
08338a9f +0x14f:  movl   $0x8a,0x4(%esp)
08338aa7 +0x157:  lea    -0x40(%ebp),%eax
08338aaa +0x15a:  mov    %eax,(%esp)
08338aad +0x15d:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08338ab2 +0x162:  mov    0x8(%ebp),%eax
08338ab5 +0x165:  mov    %eax,(%esp)
08338ab8 +0x168:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338abd +0x16d:  mov    %eax,%ebx
08338abf +0x16f:  mov    0x8(%ebp),%eax
08338ac2 +0x172:  mov    %eax,(%esp)
08338ac5 +0x175:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08338aca +0x17a:  mov    %ebx,0x8(%esp)
08338ace +0x17e:  mov    %eax,0x4(%esp)
08338ad2 +0x182:  lea    -0x40(%ebp),%eax
08338ad5 +0x185:  mov    %eax,(%esp)
08338ad8 +0x188:  call   0833fd74 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1e41>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1e41
08338add +0x18d:  xor    $0x1,%eax
08338ae0 +0x190:  test   %al,%al
08338ae2 +0x192:  je     08338b36 <+0x1e6>
08338ae4 +0x194:  mov    0xc(%ebp),%eax
08338ae7 +0x197:  mov    %eax,(%esp)
08338aea +0x19a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08338aef +0x19f:  movzwl %ax,%ebx
08338af2 +0x1a2:  movl   $0x5,0xc(%esp)
08338afa +0x1aa:  movl   $0x866,0x8(%esp)
08338b02 +0x1b2:  movl   $&_ZZN13user_creature9CCreature12EvoluteMultyEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08338b0a +0x1ba:  lea    -0x28(%ebp),%eax
08338b0d +0x1bd:  mov    %eax,(%esp)
08338b10 +0x1c0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08338b15 +0x1c5:  mov    %ebx,0x8(%esp)
08338b19 +0x1c9:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
08338b21 +0x1d1:  lea    -0x28(%ebp),%eax
08338b24 +0x1d4:  mov    %eax,(%esp)
08338b27 +0x1d7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08338b2c +0x1dc:  mov    $0x0,%ebx
08338b31 +0x1e1:  jmp    08338be5 <+0x295>
08338b36 +0x1e6:  lea    -0x40(%ebp),%eax
08338b39 +0x1e9:  mov    %eax,(%esp)
08338b3c +0x1ec:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08338b41 +0x1f1:  movl   $0x0,0xc(%esp)
08338b49 +0x1f9:  movl   $0x0,0x8(%esp)
08338b51 +0x201:  mov    0xc(%ebp),%eax
08338b54 +0x204:  mov    %eax,0x4(%esp)
08338b58 +0x208:  lea    -0x60(%ebp),%eax
08338b5b +0x20b:  mov    %eax,(%esp)
08338b5e +0x20e:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08338b63 +0x213:  mov    -0x18(%ebp),%eax
08338b66 +0x216:  mov    %eax,0x4(%esp)
08338b6a +0x21a:  lea    -0x60(%ebp),%eax
08338b6d +0x21d:  mov    %eax,(%esp)
08338b70 +0x220:  call   08340842 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x290f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x290f
08338b75 +0x225:  lea    -0x60(%ebp),%eax
08338b78 +0x228:  mov    %eax,(%esp)
08338b7b +0x22b:  call   083404b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2585>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2585
08338b80 +0x230:  movl   $0x16,0xc(%esp)
08338b88 +0x238:  movl   $0x3,0x8(%esp)
08338b90 +0x240:  movl   $0x1,0x4(%esp)
08338b98 +0x248:  mov    0xc(%ebp),%eax
08338b9b +0x24b:  mov    %eax,(%esp)
08338b9e +0x24e:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08338ba3 +0x253:  mov    $0x1,%ebx
08338ba8 +0x258:  lea    -0x60(%ebp),%eax
08338bab +0x25b:  mov    %eax,(%esp)
08338bae +0x25e:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338bb3 +0x263:  jmp    08338be5 <+0x295>
08338bb5 +0x265:  mov    %edx,%ebx
08338bb7 +0x267:  mov    %eax,%esi
08338bb9 +0x269:  lea    -0x60(%ebp),%eax
08338bbc +0x26c:  mov    %eax,(%esp)
08338bbf +0x26f:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338bc4 +0x274:  mov    %esi,%eax
08338bc6 +0x276:  mov    %ebx,%edx
08338bc8 +0x278:  jmp    08338bca <+0x27a>
08338bca +0x27a:  mov    %edx,%ebx
08338bcc +0x27c:  mov    %eax,%esi
08338bce +0x27e:  lea    -0x40(%ebp),%eax
08338bd1 +0x281:  mov    %eax,(%esp)
08338bd4 +0x284:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08338bd9 +0x289:  mov    %esi,%eax
08338bdb +0x28b:  mov    %ebx,%edx
08338bdd +0x28d:  mov    %eax,(%esp)
08338be0 +0x290:  call   08ae3750 <_Unwind_Resume>
08338be5 +0x295:  lea    -0x40(%ebp),%eax
08338be8 +0x298:  mov    %eax,(%esp)
08338beb +0x29b:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08338bf0 +0x2a0:  mov    %ebx,%eax
08338bf2 +0x2a2:  add    $0x70,%esp
08338bf5 +0x2a5:  pop    %ebx
08338bf6 +0x2a6:  pop    %esi
08338bf7 +0x2a7:  pop    %ebp
08338bf8 +0x2a8:  ret
08338bf9 +0x2a9:  nop
```

## 反编译 C

```c
// user_creature::CCreature::EvoluteMulty @ 0x8338950

/* user_creature::CCreature::EvoluteMulty(CUser*, int) */

bool __thiscall user_creature::CCreature::EvoluteMulty(CCreature *this,CUser *param_1,int param_2)

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
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::EvoluteMulty(CUser*, int)",0x843,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    cVar1 = CCreatureScript::isEvoluationCreature(*(CCreatureScript **)(this + 0x44),param_2);
    if (cVar1 == '\x01') {
      local_1c = param_2;
      if (param_2 == 0) {
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
                    /* try { // try from 08338ad8 to 08338b62 has its CatchHandler @ 08338bca */
            cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
            bVar6 = cVar1 == '\x01';
            if (bVar6) {
              CDBMsgSender::Send(local_44);
              CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338b70 to 08338ba2 has its CatchHandler @ 08338bb5 */
              CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
              CPacketRespondent::SendAccordingToPlace(local_64);
              CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 08338bae to 08338bb2 has its CatchHandler @ 08338bca */
              CPacketRespondent::~CPacketRespondent(local_64);
            }
            else {
              uVar3 = CUser::get_unique_id(param_1);
              cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::EvoluteMulty(CUser*, int)"
                                 ,0x866,5);
              cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
            }
            CDBMsgSender::~CDBMsgSender(local_44);
          }
        }
      }
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}
```
