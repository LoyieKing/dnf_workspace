# _processLevelReward

`_ZN5CUser19_processLevelRewardEjjc`

`CUser::_processLevelReward(unsigned int, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868745e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868745e  _ZN5CUser19_processLevelRewardEjjc
#           CUser::_processLevelReward(unsigned int, unsigned int, char)
# range [0x0868745e, 0x086876c7]
0868745e +0x000:  push   %ebp
0868745f +0x001:  mov    %esp,%ebp
08687461 +0x003:  push   %ebx
08687462 +0x004:  sub    $0x1c4,%esp
08687468 +0x00a:  mov    0x14(%ebp),%eax
0868746b +0x00d:  mov    %al,-0x18c(%ebp)
08687471 +0x013:  call   0837505b <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf027>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf027
08687476 +0x018:  mov    %eax,-0x28(%ebp)
08687479 +0x01b:  movl   $0x0,-0x24(%ebp)
08687480 +0x022:  mov    -0x28(%ebp),%eax
08687483 +0x025:  mov    %eax,(%esp)
08687486 +0x028:  call   08697792 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3fe7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3fe7
0868748b +0x02d:  xor    $0x1,%eax
0868748e +0x030:  test   %al,%al
08687490 +0x032:  jne    086876b4 <+0x256>
08687496 +0x038:  mov    -0x28(%ebp),%eax
08687499 +0x03b:  mov    %eax,(%esp)
0868749c +0x03e:  call   08687e62 <_ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREv>  ; CLevelRewardTableMgr::GetProperLevelRewardTableR() const
086874a1 +0x043:  mov    %eax,-0x24(%ebp)
086874a4 +0x046:  cmpl   $0x0,-0x24(%ebp)
086874a8 +0x04a:  je     086876be <+0x260>
086874ae +0x050:  movl   $0x0,-0x20(%ebp)
086874b5 +0x057:  movsbl -0x18c(%ebp),%eax
086874bc +0x05e:  mov    %eax,0x4(%esp)
086874c0 +0x062:  mov    -0x28(%ebp),%eax
086874c3 +0x065:  mov    %eax,(%esp)
086874c6 +0x068:  call   08687792 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc>  ; CLevelRewardTableMgr::IsChallengingJob(char)
086874cb +0x06d:  xor    $0x1,%eax
086874ce +0x070:  test   %al,%al
086874d0 +0x072:  jne    086876b7 <+0x259>
086874d6 +0x078:  movsbl -0x18c(%ebp),%eax
086874dd +0x07f:  mov    %eax,0x4(%esp)
086874e1 +0x083:  mov    -0x24(%ebp),%eax
086874e4 +0x086:  mov    %eax,(%esp)
086874e7 +0x089:  call   08687e78 <_ZN17CLevelRewardTable17GetProperJobIndexEc>  ; CLevelRewardTable::GetProperJobIndex(char)
086874ec +0x08e:  mov    %eax,-0x1c(%ebp)
086874ef +0x091:  mov    0xc(%ebp),%eax
086874f2 +0x094:  mov    %eax,0x4(%esp)
086874f6 +0x098:  mov    -0x24(%ebp),%eax
086874f9 +0x09b:  mov    %eax,(%esp)
086874fc +0x09e:  call   086876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>  ; CLevelRewardTable::GetProperLevelIndex(unsigned int)
08687501 +0x0a3:  mov    %eax,-0x18(%ebp)
08687504 +0x0a6:  cmpl   $0x0,-0x18(%ebp)
08687508 +0x0aa:  js     086876be <+0x260>
0868750e +0x0b0:  cmpl   $0x0,-0x1c(%ebp)
08687512 +0x0b4:  js     086876be <+0x260>
08687518 +0x0ba:  mov    -0x18(%ebp),%eax
0868751b +0x0bd:  mov    %eax,0x8(%esp)
0868751f +0x0c1:  mov    -0x1c(%ebp),%eax
08687522 +0x0c4:  mov    %eax,0x4(%esp)
08687526 +0x0c8:  mov    -0x24(%ebp),%eax
08687529 +0x0cb:  mov    %eax,(%esp)
0868752c +0x0ce:  call   086976f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f4b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f4b
08687531 +0x0d3:  mov    %eax,-0x20(%ebp)
08687534 +0x0d6:  mov    -0x18(%ebp),%eax
08687537 +0x0d9:  mov    %eax,0x8(%esp)
0868753b +0x0dd:  mov    -0x1c(%ebp),%eax
0868753e +0x0e0:  mov    %eax,0x4(%esp)
08687542 +0x0e4:  mov    -0x24(%ebp),%eax
08687545 +0x0e7:  mov    %eax,(%esp)
08687548 +0x0ea:  call   08697712 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f67>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f67
0868754d +0x0ef:  mov    %eax,-0x14(%ebp)
08687550 +0x0f2:  cmpl   $0x0,-0x14(%ebp)
08687554 +0x0f6:  js     086876ba <+0x25c>
0868755a +0x0fc:  mov    -0x18(%ebp),%eax
0868755d +0x0ff:  mov    %eax,0x4(%esp)
08687561 +0x103:  mov    -0x24(%ebp),%eax
08687564 +0x106:  mov    %eax,(%esp)
08687567 +0x109:  call   08697730 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f85>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f85
0868756c +0x10e:  movl   $0x14,0x8(%esp)
08687574 +0x116:  mov    %eax,0x4(%esp)
08687578 +0x11a:  lea    -0x3d(%ebp),%eax
0868757b +0x11d:  mov    %eax,(%esp)
0868757e +0x120:  call   0807d8d0 <_init+0x1c8>
08687583 +0x125:  mov    -0x18(%ebp),%eax
08687586 +0x128:  mov    %eax,0x4(%esp)
0868758a +0x12c:  mov    -0x24(%ebp),%eax
0868758d +0x12f:  mov    %eax,(%esp)
08687590 +0x132:  call   08697750 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3fa5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3fa5
08687595 +0x137:  movl   $0xff,0x8(%esp)
0868759d +0x13f:  mov    %eax,0x4(%esp)
086875a1 +0x143:  lea    -0x17a(%ebp),%eax
086875a7 +0x149:  mov    %eax,(%esp)
086875aa +0x14c:  call   0807d8d0 <_init+0x1c8>
086875af +0x151:  lea    -0x7a(%ebp),%eax
086875b2 +0x154:  mov    %eax,(%esp)
086875b5 +0x157:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086875ba +0x15c:  movl   $0x0,-0x10(%ebp)
086875c1 +0x163:  cmpl   $0x0,-0x20(%ebp)
086875c5 +0x167:  jne    086875cf <+0x171>
086875c7 +0x169:  mov    -0x14(%ebp),%eax
086875ca +0x16c:  mov    %eax,-0x10(%ebp)
086875cd +0x16f:  jmp    0868764b <+0x1ed>
086875cf +0x171:  cmpl   $0x1,-0x20(%ebp)
086875d3 +0x175:  jne    086875f9 <+0x19b>
086875d5 +0x177:  movl   $0x1,-0x78(%ebp)
086875dc +0x17e:  movb   $0x2,-0x79(%ebp)
086875e0 +0x182:  mov    -0x14(%ebp),%eax
086875e3 +0x185:  mov    %eax,-0x73(%ebp)
086875e6 +0x188:  movw   $0x1,-0x6f(%ebp)
086875ec +0x18e:  lea    -0x7a(%ebp),%eax
086875ef +0x191:  mov    %eax,(%esp)
086875f2 +0x194:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
086875f7 +0x199:  jmp    0868764b <+0x1ed>
086875f9 +0x19b:  mov    -0x20(%ebp),%ebx
086875fc +0x19e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08687601 +0x1a3:  mov    %ebx,0x4(%esp)
08687605 +0x1a7:  mov    %eax,(%esp)
08687608 +0x1aa:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868760d +0x1af:  mov    %eax,-0xc(%ebp)
08687610 +0x1b2:  cmpl   $0x0,-0xc(%ebp)
08687614 +0x1b6:  je     086876bd <+0x25f>
0868761a +0x1bc:  mov    -0x20(%ebp),%eax
0868761d +0x1bf:  mov    %eax,-0x78(%ebp)
08687620 +0x1c2:  mov    -0xc(%ebp),%eax
08687623 +0x1c5:  mov    (%eax),%eax
08687625 +0x1c7:  add    $0x8,%eax
08687628 +0x1ca:  mov    (%eax),%edx
0868762a +0x1cc:  lea    -0x7a(%ebp),%eax
0868762d +0x1cf:  mov    %eax,0x4(%esp)
08687631 +0x1d3:  mov    -0xc(%ebp),%eax
08687634 +0x1d6:  mov    %eax,(%esp)
08687637 +0x1d9:  call   *%edx
08687639 +0x1db:  mov    -0x14(%ebp),%eax
0868763c +0x1de:  mov    %eax,0x4(%esp)
08687640 +0x1e2:  lea    -0x7a(%ebp),%eax
08687643 +0x1e5:  mov    %eax,(%esp)
08687646 +0x1e8:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0868764b +0x1ed:  mov    0x8(%ebp),%eax
0868764e +0x1f0:  mov    %eax,(%esp)
08687651 +0x1f3:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08687656 +0x1f8:  mov    %eax,%ebx
08687658 +0x1fa:  lea    -0x17a(%ebp),%eax
0868765e +0x200:  mov    %eax,(%esp)
08687661 +0x203:  call   0807e3b0 <_init+0xca8>
08687666 +0x208:  mov    %eax,%edx
08687668 +0x20a:  mov    -0x10(%ebp),%eax
0868766b +0x20d:  movl   $0x0,0x24(%esp)
08687673 +0x215:  movl   $0x0,0x20(%esp)
0868767b +0x21d:  mov    %ebx,0x1c(%esp)
0868767f +0x221:  movl   $0x0,0x18(%esp)
08687687 +0x229:  mov    %edx,0x14(%esp)
0868768b +0x22d:  lea    -0x17a(%ebp),%edx
08687691 +0x233:  mov    %edx,0x10(%esp)
08687695 +0x237:  mov    0x10(%ebp),%edx
08687698 +0x23a:  mov    %edx,0xc(%esp)
0868769c +0x23e:  mov    %eax,0x8(%esp)
086876a0 +0x242:  lea    -0x7a(%ebp),%eax
086876a3 +0x245:  mov    %eax,0x4(%esp)
086876a7 +0x249:  lea    -0x3d(%ebp),%eax
086876aa +0x24c:  mov    %eax,(%esp)
086876ad +0x24f:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086876b2 +0x254:  jmp    086876be <+0x260>
086876b4 +0x256:  nop
086876b5 +0x257:  jmp    086876be <+0x260>
086876b7 +0x259:  nop
086876b8 +0x25a:  jmp    086876be <+0x260>
086876ba +0x25c:  nop
086876bb +0x25d:  jmp    086876be <+0x260>
086876bd +0x25f:  nop
086876be +0x260:  add    $0x1c4,%esp
086876c4 +0x266:  pop    %ebx
086876c5 +0x267:  pop    %ebp
086876c6 +0x268:  ret
086876c7 +0x269:  nop
```

## 反编译 C

```c
// CUser::_processLevelReward @ 0x868745e

/* CUser::_processLevelReward(unsigned int, unsigned int, char) */

void __thiscall CUser::_processLevelReward(CUser *this,uint param_1,uint param_2,char param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  size_t sVar5;
  char local_17e [256];
  Inven_Item local_7e;
  undefined1 local_7d;
  int local_7c;
  int local_77;
  undefined2 local_73;
  char local_41 [21];
  CLevelRewardTableMgr *local_2c;
  CLevelRewardTable *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_2c = (CLevelRewardTableMgr *)CLevelRewardTableMgr::GetInstance();
  local_28 = (CLevelRewardTable *)0x0;
  cVar2 = CLevelRewardTableMgr::IsOn(local_2c);
  if ((cVar2 == '\x01') &&
     (local_28 = (CLevelRewardTable *)CLevelRewardTableMgr::GetProperLevelRewardTableR(local_2c),
     local_28 != (CLevelRewardTable *)0x0)) {
    local_24 = 0;
    cVar2 = CLevelRewardTableMgr::IsChallengingJob(local_2c,param_3);
    if (cVar2 == '\x01') {
      local_20 = CLevelRewardTable::GetProperJobIndex(local_28,param_3);
      local_1c = CLevelRewardTable::GetProperLevelIndex(local_28,param_1);
      if ((-1 < local_1c) && (-1 < local_20)) {
        local_24 = CLevelRewardTable::GetRewardItemNo(local_28,local_20,local_1c);
        local_18 = CLevelRewardTable::GetItemCount(local_28,local_20,local_1c);
        if (-1 < local_18) {
          pcVar3 = (char *)CLevelRewardTable::GetMailTitle(local_28,local_1c);
          strncpy(local_41,pcVar3,0x14);
          pcVar3 = (char *)CLevelRewardTable::GetMailString(local_28,local_1c);
          strncpy(local_17e,pcVar3,0xff);
          Inven_Item::Inven_Item(&local_7e);
          iVar1 = local_24;
          local_14 = 0;
          if (local_24 == 0) {
            local_14 = local_18;
          }
          else if (local_24 == 1) {
            local_7c = 1;
            local_7d = 2;
            local_77 = local_18;
            local_73 = 1;
            Inven_Item::ResetItemAttr(&local_7e);
          }
          else {
            this_00 = (CDataManager *)G_CDataManager();
            local_10 = (int *)CDataManager::find_item(this_00,iVar1);
            if (local_10 == (int *)0x0) {
              return;
            }
            local_7c = local_24;
            (**(code **)(*local_10 + 8))(local_10,&local_7e);
            Inven_Item::set_add_info(&local_7e,local_18);
          }
          uVar4 = GetServerGroup(this);
          sVar5 = strlen(local_17e);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_41,&local_7e,local_14,param_2,local_17e,sVar5,0,uVar4,0,0);
        }
      }
    }
  }
  return;
}
```
