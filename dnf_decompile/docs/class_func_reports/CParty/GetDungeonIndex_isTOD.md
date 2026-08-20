# GetDungeonIndex_isTOD

`_ZN6CParty21GetDungeonIndex_isTODERiS0_`

`CParty::GetDungeonIndex_isTOD(int&, int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bacc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bacc0  _ZN6CParty21GetDungeonIndex_isTODERiS0_
#           CParty::GetDungeonIndex_isTOD(int&, int&)
# range [0x085bacc0, 0x085bae6d]
085bacc0 +0x000:  push   %ebp
085bacc1 +0x001:  mov    %esp,%ebp
085bacc3 +0x003:  push   %ebx
085bacc4 +0x004:  sub    $0x144,%esp
085bacca +0x00a:  movb   $0x0,-0x19(%ebp)
085bacce +0x00e:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
085bacd3 +0x013:  mov    %eax,-0x18(%ebp)
085bacd6 +0x016:  cmpl   $0x0,-0x18(%ebp)
085bacda +0x01a:  jne    085bad0d <+0x4d>
085bacdc +0x01c:  mov    0xc(%ebp),%eax
085bacdf +0x01f:  mov    (%eax),%ebx
085bace1 +0x021:  lea    -0x2d(%ebp),%eax
085bace4 +0x024:  mov    %eax,(%esp)
085bace7 +0x027:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
085bacec +0x02c:  mov    %ebx,0x8(%esp)
085bacf0 +0x030:  movl   $"Error : DungeonIndex : %d",0x4(%esp)
085bacf8 +0x038:  lea    -0x2d(%ebp),%eax
085bacfb +0x03b:  mov    %eax,(%esp)
085bacfe +0x03e:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
085bad03 +0x043:  mov    $0x13,%eax
085bad08 +0x048:  jmp    085bae68 <+0x1a8>
085bad0d +0x04d:  mov    -0x18(%ebp),%eax
085bad10 +0x050:  mov    %eax,(%esp)
085bad13 +0x053:  call   086440a0 <_ZN17TowerOfDespairMgr17GetBaseLayerIndexEv>  ; TowerOfDespairMgr::GetBaseLayerIndex()
085bad18 +0x058:  mov    0xc(%ebp),%edx
085bad1b +0x05b:  mov    (%edx),%edx
085bad1d +0x05d:  cmp    %edx,%eax
085bad1f +0x05f:  sete   %al
085bad22 +0x062:  test   %al,%al
085bad24 +0x064:  je     085bae63 <+0x1a3>
085bad2a +0x06a:  movb   $0x1,-0x19(%ebp)
085bad2e +0x06e:  mov    0x8(%ebp),%eax
085bad31 +0x071:  mov    0x74(%eax),%eax
085bad34 +0x074:  mov    %eax,-0x14(%ebp)
085bad37 +0x077:  cmpl   $0x0,-0x14(%ebp)
085bad3b +0x07b:  jne    085bad7d <+0xbd>
085bad3d +0x07d:  movl   $0x5,0xc(%esp)
085bad45 +0x085:  movl   $0x41bb,0x8(%esp)
085bad4d +0x08d:  movl   $&_ZZN6CParty21GetDungeonIndex_isTODERiS0_E19__PRETTY_FUNCTION__,0x4(%esp)
085bad55 +0x095:  lea    -0x2c(%ebp),%eax
085bad58 +0x098:  mov    %eax,(%esp)
085bad5b +0x09b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085bad60 +0x0a0:  movl   $"TOD no Dungeon Manager!",0x4(%esp)
085bad68 +0x0a8:  lea    -0x2c(%ebp),%eax
085bad6b +0x0ab:  mov    %eax,(%esp)
085bad6e +0x0ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085bad73 +0x0b3:  mov    $0x13,%eax
085bad78 +0x0b8:  jmp    085bae68 <+0x1a8>
085bad7d +0x0bd:  movl   $0xd,0x4(%esp)
085bad85 +0x0c5:  mov    -0x14(%ebp),%eax
085bad88 +0x0c8:  mov    %eax,(%esp)
085bad8b +0x0cb:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085bad90 +0x0d0:  mov    %eax,-0x10(%ebp)
085bad93 +0x0d3:  lea    -0x30(%ebp),%eax
085bad96 +0x0d6:  mov    -0x10(%ebp),%edx
085bad99 +0x0d9:  mov    %edx,0x4(%esp)
085bad9d +0x0dd:  mov    %eax,(%esp)
085bada0 +0x0e0:  call   0864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>  ; TOD_UserState::getTodayEnterLayer() const
085bada5 +0x0e5:  sub    $0x4,%esp
085bada8 +0x0e8:  lea    -0x30(%ebp),%eax
085badab +0x0eb:  mov    %eax,(%esp)
085badae +0x0ee:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085badb3 +0x0f3:  movzwl %ax,%eax
085badb6 +0x0f6:  mov    %eax,0x4(%esp)
085badba +0x0fa:  mov    -0x18(%ebp),%eax
085badbd +0x0fd:  mov    %eax,(%esp)
085badc0 +0x100:  call   08643d76 <_ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj>  ; TowerOfDespairMgr::Get_DungeonIndexByLayer(unsigned int)
085badc5 +0x105:  mov    0xc(%ebp),%edx
085badc8 +0x108:  mov    %eax,(%edx)
085badca +0x10a:  mov    0xc(%ebp),%eax
085badcd +0x10d:  mov    (%eax),%ebx
085badcf +0x10f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085badd4 +0x114:  mov    %ebx,0x4(%esp)
085badd8 +0x118:  mov    %eax,(%esp)
085baddb +0x11b:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085bade0 +0x120:  mov    %eax,0x8(%esp)
085bade4 +0x124:  mov    -0x14(%ebp),%eax
085bade7 +0x127:  mov    %eax,0x4(%esp)
085badeb +0x12b:  mov    -0x18(%ebp),%eax
085badee +0x12e:  mov    %eax,(%esp)
085badf1 +0x131:  call   086440ee <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon>  ; TowerOfDespairMgr::CheckEnterable(CUser*, CDungeon const*)
085badf6 +0x136:  mov    %eax,-0xc(%ebp)
085badf9 +0x139:  cmpl   $0x0,-0xc(%ebp)
085badfd +0x13d:  je     085bae04 <+0x144>
085badff +0x13f:  mov    -0xc(%ebp),%eax
085bae02 +0x142:  jmp    085bae68 <+0x1a8>
085bae04 +0x144:  lea    -0x30(%ebp),%eax
085bae07 +0x147:  mov    %eax,(%esp)
085bae0a +0x14a:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085bae0f +0x14f:  movzwl %ax,%eax
085bae12 +0x152:  mov    %eax,0x4(%esp)
085bae16 +0x156:  mov    -0x18(%ebp),%eax
085bae19 +0x159:  mov    %eax,(%esp)
085bae1c +0x15c:  call   08643d9c <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj>  ; TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int)
085bae21 +0x161:  mov    0x10(%ebp),%edx
085bae24 +0x164:  mov    %eax,(%edx)
085bae26 +0x166:  lea    -0x30(%ebp),%eax
085bae29 +0x169:  mov    %eax,(%esp)
085bae2c +0x16c:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085bae31 +0x171:  movzwl %ax,%eax
085bae34 +0x174:  mov    %eax,0x8(%esp)
085bae38 +0x178:  movl   $"Enter Layer : %d",0x4(%esp)
085bae40 +0x180:  lea    -0x130(%ebp),%eax
085bae46 +0x186:  mov    %eax,(%esp)
085bae49 +0x189:  call   0807e440 <_init+0xd38>
085bae4e +0x18e:  lea    -0x130(%ebp),%eax
085bae54 +0x194:  mov    %eax,0x4(%esp)
085bae58 +0x198:  mov    -0x14(%ebp),%eax
085bae5b +0x19b:  mov    %eax,(%esp)
085bae5e +0x19e:  call   08644366 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc>  ; TowerOfDespairMgr::SendMessageToCUser(CUser*, char*)
085bae63 +0x1a3:  mov    $0x0,%eax
085bae68 +0x1a8:  mov    -0x4(%ebp),%ebx
085bae6b +0x1ab:  leave
085bae6c +0x1ac:  ret
085bae6d +0x1ad:  nop
```

## 反编译 C

```c
// CParty::GetDungeonIndex_isTOD @ 0x85bacc0

/* CParty::GetDungeonIndex_isTOD(int&, int&) */

int __thiscall CParty::GetDungeonIndex_isTOD(CParty *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  CDungeon *pCVar3;
  char local_134 [256];
  TOD_Layer local_34 [3];
  cMyTraceNoop local_31;
  cMyTrace local_30 [19];
  undefined1 local_1d;
  TowerOfDespairMgr *local_1c;
  CUser *local_18;
  undefined4 local_14;
  int local_10;
  
  local_1d = 0;
  local_1c = GlobalData::s_pTowerOfDespairMgr;
  if (GlobalData::s_pTowerOfDespairMgr == (TowerOfDespairMgr *)0x0) {
    iVar1 = *param_1;
    cMyTraceNoop::cMyTraceNoop(&local_31);
    cMyTraceNoop::operator()((char *)&local_31,"Error : DungeonIndex : %d",iVar1);
    return 0x13;
  }
  iVar1 = TowerOfDespairMgr::GetBaseLayerIndex(GlobalData::s_pTowerOfDespairMgr);
  if (iVar1 == *param_1) {
    local_1d = 1;
    local_18 = *(CUser **)(this + 0x74);
    if (local_18 == (CUser *)0x0) {
      cMyTrace::cMyTrace(local_30,"int CParty::GetDungeonIndex_isTOD(int&, int&)",0x41bb,5);
      cMyTrace::operator()(local_30,"TOD no Dungeon Manager!");
      return 0x13;
    }
    local_14 = CUser::GetCharacExpandData(local_18,0xd);
    TOD_UserState::getTodayEnterLayer();
    uVar2 = TOD_Layer::GetLayer(local_34);
    iVar1 = TowerOfDespairMgr::Get_DungeonIndexByLayer(local_1c,uVar2 & 0xffff);
    *param_1 = iVar1;
    iVar1 = G_CDataManager();
    pCVar3 = (CDungeon *)CDataManager::find_dungeon(iVar1);
    local_10 = TowerOfDespairMgr::CheckEnterable(local_1c,local_18,pCVar3);
    if (local_10 != 0) {
      return local_10;
    }
    uVar2 = TOD_Layer::GetLayer(local_34);
    iVar1 = TowerOfDespairMgr::Get_APCIndexByLayer(local_1c,uVar2 & 0xffff);
    *param_2 = iVar1;
    uVar2 = TOD_Layer::GetLayer(local_34);
    sprintf(local_134,"Enter Layer : %d",uVar2 & 0xffff);
    TowerOfDespairMgr::SendMessageToCUser(local_18,local_134);
  }
  return 0;
}
```
