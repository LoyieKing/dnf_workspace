# ItemEvolute

`_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri`

`user_creature::CCreature::ItemEvolute(CUser*, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338ca0  _ZN13user_creature9CCreature11ItemEvoluteEP5CUseri
#           user_creature::CCreature::ItemEvolute(CUser*, int)
# range [0x08338ca0, 0x08338f35]
08338ca0 +0x000:  push   %ebp
08338ca1 +0x001:  mov    %esp,%ebp
08338ca3 +0x003:  push   %esi
08338ca4 +0x004:  push   %ebx
08338ca5 +0x005:  sub    $0x70,%esp
08338ca8 +0x008:  mov    0x8(%ebp),%eax
08338cab +0x00b:  mov    0x44(%eax),%eax
08338cae +0x00e:  test   %eax,%eax
08338cb0 +0x010:  jne    08338d15 <+0x75>
08338cb2 +0x012:  mov    0x8(%ebp),%eax
08338cb5 +0x015:  mov    %eax,(%esp)
08338cb8 +0x018:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338cbd +0x01d:  mov    %eax,%ebx
08338cbf +0x01f:  mov    0xc(%ebp),%eax
08338cc2 +0x022:  mov    %eax,(%esp)
08338cc5 +0x025:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08338cca +0x02a:  movzwl %ax,%esi
08338ccd +0x02d:  movl   $0x5,0xc(%esp)
08338cd5 +0x035:  movl   $0x89b,0x8(%esp)
08338cdd +0x03d:  movl   $&_ZZN13user_creature9CCreature11ItemEvoluteEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08338ce5 +0x045:  lea    -0x38(%ebp),%eax
08338ce8 +0x048:  mov    %eax,(%esp)
08338ceb +0x04b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08338cf0 +0x050:  mov    %ebx,0xc(%esp)
08338cf4 +0x054:  mov    %esi,0x8(%esp)
08338cf8 +0x058:  movl   $"cannot evolute because it haven't creature script uid(%d), creature id(%d) \n",0x4(%esp)
08338d00 +0x060:  lea    -0x38(%ebp),%eax
08338d03 +0x063:  mov    %eax,(%esp)
08338d06 +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08338d0b +0x06b:  mov    $0x0,%ebx
08338d10 +0x070:  jmp    08338f2c <+0x28c>
08338d15 +0x075:  mov    0x8(%ebp),%eax
08338d18 +0x078:  mov    0x44(%eax),%eax
08338d1b +0x07b:  mov    0x10(%ebp),%edx
08338d1e +0x07e:  mov    %edx,0x4(%esp)
08338d22 +0x082:  mov    %eax,(%esp)
08338d25 +0x085:  call   0833cad8 <_ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi>  ; user_creature::CCreatureScript::GetItemEvolutionCreatureId(int)
08338d2a +0x08a:  mov    %eax,-0x18(%ebp)
08338d2d +0x08d:  cmpl   $0x0,-0x18(%ebp)
08338d31 +0x091:  jne    08338d3d <+0x9d>
08338d33 +0x093:  mov    $0x0,%ebx
08338d38 +0x098:  jmp    08338f2c <+0x28c>
08338d3d +0x09d:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
08338d42 +0x0a2:  mov    -0x18(%ebp),%edx
08338d45 +0x0a5:  mov    %edx,0x4(%esp)
08338d49 +0x0a9:  mov    %eax,(%esp)
08338d4c +0x0ac:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
08338d51 +0x0b1:  mov    %eax,-0x14(%ebp)
08338d54 +0x0b4:  cmpl   $0x0,-0x14(%ebp)
08338d58 +0x0b8:  jne    08338d64 <+0xc4>
08338d5a +0x0ba:  mov    $0x0,%ebx
08338d5f +0x0bf:  jmp    08338f2c <+0x28c>
08338d64 +0x0c4:  mov    -0x14(%ebp),%eax
08338d67 +0x0c7:  mov    %eax,(%esp)
08338d6a +0x0ca:  call   0833f128 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11f5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11f5
08338d6f +0x0cf:  mov    %eax,-0x10(%ebp)
08338d72 +0x0d2:  mov    -0x10(%ebp),%eax
08338d75 +0x0d5:  mov    %eax,0x4(%esp)
08338d79 +0x0d9:  mov    0x8(%ebp),%eax
08338d7c +0x0dc:  mov    %eax,(%esp)
08338d7f +0x0df:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
08338d84 +0x0e4:  movl   $0x0,-0xc(%ebp)
08338d8b +0x0eb:  mov    0xc(%ebp),%eax
08338d8e +0x0ee:  mov    %eax,(%esp)
08338d91 +0x0f1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08338d96 +0x0f6:  movl   $0x16,0x8(%esp)
08338d9e +0x0fe:  movl   $0x0,0x4(%esp)
08338da6 +0x106:  mov    %eax,(%esp)
08338da9 +0x109:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08338dae +0x10e:  mov    %eax,-0xc(%ebp)
08338db1 +0x111:  cmpl   $0x0,-0xc(%ebp)
08338db5 +0x115:  jne    08338dc1 <+0x121>
08338db7 +0x117:  mov    $0x0,%ebx
08338dbc +0x11c:  jmp    08338f2c <+0x28c>
08338dc1 +0x121:  mov    0x8(%ebp),%eax
08338dc4 +0x124:  mov    %eax,(%esp)
08338dc7 +0x127:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338dcc +0x12c:  mov    %eax,%edx
08338dce +0x12e:  mov    -0xc(%ebp),%eax
08338dd1 +0x131:  mov    %edx,0x2(%eax)
08338dd4 +0x134:  mov    0xc(%ebp),%eax
08338dd7 +0x137:  mov    %eax,0x8(%esp)
08338ddb +0x13b:  movl   $0x8a,0x4(%esp)
08338de3 +0x143:  lea    -0x40(%ebp),%eax
08338de6 +0x146:  mov    %eax,(%esp)
08338de9 +0x149:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08338dee +0x14e:  mov    0x8(%ebp),%eax
08338df1 +0x151:  mov    %eax,(%esp)
08338df4 +0x154:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338df9 +0x159:  mov    %eax,%ebx
08338dfb +0x15b:  mov    0x8(%ebp),%eax
08338dfe +0x15e:  mov    %eax,(%esp)
08338e01 +0x161:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08338e06 +0x166:  mov    %ebx,0x8(%esp)
08338e0a +0x16a:  mov    %eax,0x4(%esp)
08338e0e +0x16e:  lea    -0x40(%ebp),%eax
08338e11 +0x171:  mov    %eax,(%esp)
08338e14 +0x174:  call   0833fd74 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1e41>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1e41
08338e19 +0x179:  xor    $0x1,%eax
08338e1c +0x17c:  test   %al,%al
08338e1e +0x17e:  je     08338e72 <+0x1d2>
08338e20 +0x180:  mov    0xc(%ebp),%eax
08338e23 +0x183:  mov    %eax,(%esp)
08338e26 +0x186:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08338e2b +0x18b:  movzwl %ax,%ebx
08338e2e +0x18e:  movl   $0x5,0xc(%esp)
08338e36 +0x196:  movl   $0x8bb,0x8(%esp)
08338e3e +0x19e:  movl   $&_ZZN13user_creature9CCreature11ItemEvoluteEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08338e46 +0x1a6:  lea    -0x28(%ebp),%eax
08338e49 +0x1a9:  mov    %eax,(%esp)
08338e4c +0x1ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08338e51 +0x1b1:  mov    %ebx,0x8(%esp)
08338e55 +0x1b5:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
08338e5d +0x1bd:  lea    -0x28(%ebp),%eax
08338e60 +0x1c0:  mov    %eax,(%esp)
08338e63 +0x1c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08338e68 +0x1c8:  mov    $0x0,%ebx
08338e6d +0x1cd:  jmp    08338f21 <+0x281>
08338e72 +0x1d2:  lea    -0x40(%ebp),%eax
08338e75 +0x1d5:  mov    %eax,(%esp)
08338e78 +0x1d8:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08338e7d +0x1dd:  movl   $0x0,0xc(%esp)
08338e85 +0x1e5:  movl   $0x0,0x8(%esp)
08338e8d +0x1ed:  mov    0xc(%ebp),%eax
08338e90 +0x1f0:  mov    %eax,0x4(%esp)
08338e94 +0x1f4:  lea    -0x60(%ebp),%eax
08338e97 +0x1f7:  mov    %eax,(%esp)
08338e9a +0x1fa:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08338e9f +0x1ff:  mov    -0x18(%ebp),%eax
08338ea2 +0x202:  mov    %eax,0x4(%esp)
08338ea6 +0x206:  lea    -0x60(%ebp),%eax
08338ea9 +0x209:  mov    %eax,(%esp)
08338eac +0x20c:  call   08340842 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x290f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x290f
08338eb1 +0x211:  lea    -0x60(%ebp),%eax
08338eb4 +0x214:  mov    %eax,(%esp)
08338eb7 +0x217:  call   083404b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2585>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2585
08338ebc +0x21c:  movl   $0x16,0xc(%esp)
08338ec4 +0x224:  movl   $0x3,0x8(%esp)
08338ecc +0x22c:  movl   $0x1,0x4(%esp)
08338ed4 +0x234:  mov    0xc(%ebp),%eax
08338ed7 +0x237:  mov    %eax,(%esp)
08338eda +0x23a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08338edf +0x23f:  mov    $0x1,%ebx
08338ee4 +0x244:  lea    -0x60(%ebp),%eax
08338ee7 +0x247:  mov    %eax,(%esp)
08338eea +0x24a:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338eef +0x24f:  jmp    08338f21 <+0x281>
08338ef1 +0x251:  mov    %edx,%ebx
08338ef3 +0x253:  mov    %eax,%esi
08338ef5 +0x255:  lea    -0x60(%ebp),%eax
08338ef8 +0x258:  mov    %eax,(%esp)
08338efb +0x25b:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08338f00 +0x260:  mov    %esi,%eax
08338f02 +0x262:  mov    %ebx,%edx
08338f04 +0x264:  jmp    08338f06 <+0x266>
08338f06 +0x266:  mov    %edx,%ebx
08338f08 +0x268:  mov    %eax,%esi
08338f0a +0x26a:  lea    -0x40(%ebp),%eax
08338f0d +0x26d:  mov    %eax,(%esp)
08338f10 +0x270:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08338f15 +0x275:  mov    %esi,%eax
08338f17 +0x277:  mov    %ebx,%edx
08338f19 +0x279:  mov    %eax,(%esp)
08338f1c +0x27c:  call   08ae3750 <_Unwind_Resume>
08338f21 +0x281:  lea    -0x40(%ebp),%eax
08338f24 +0x284:  mov    %eax,(%esp)
08338f27 +0x287:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08338f2c +0x28c:  mov    %ebx,%eax
08338f2e +0x28e:  add    $0x70,%esp
08338f31 +0x291:  pop    %ebx
08338f32 +0x292:  pop    %esi
08338f33 +0x293:  pop    %ebp
08338f34 +0x294:  ret
08338f35 +0x295:  nop
```

## 反编译 C

```c
// user_creature::CCreature::ItemEvolute @ 0x8338ca0

/* user_creature::CCreature::ItemEvolute(CUser*, int) */

bool __thiscall user_creature::CCreature::ItemEvolute(CCreature *this,CUser *param_1,int param_2)

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
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::ItemEvolute(CUser*, int)",0x89b,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = CCreatureScript::GetItemEvolutionCreatureId
                         (*(CCreatureScript **)(this + 0x44),param_2);
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
                    /* try { // try from 08338e14 to 08338e9e has its CatchHandler @ 08338f06 */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338eac to 08338ede has its CatchHandler @ 08338ef1 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 08338eea to 08338eee has its CatchHandler @ 08338f06 */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::ItemEvolute(CUser*, int)",
                               0x8bb,5);
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
