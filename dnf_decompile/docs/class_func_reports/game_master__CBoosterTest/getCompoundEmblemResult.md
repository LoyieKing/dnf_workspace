# getCompoundEmblemResult

`_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::getCompoundEmblemResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084af0d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084af0d6  _ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::getCompoundEmblemResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084af0d6, 0x084af3b1]
084af0d6 +0x000:  push   %ebp
084af0d7 +0x001:  mov    %esp,%ebp
084af0d9 +0x003:  push   %esi
084af0da +0x004:  push   %ebx
084af0db +0x005:  sub    $0x70,%esp
084af0de +0x008:  mov    0xc(%ebp),%eax
084af0e1 +0x00b:  mov    %eax,-0x28(%ebp)
084af0e4 +0x00e:  mov    0xc(%ebp),%eax
084af0e7 +0x011:  mov    %eax,-0x24(%ebp)
084af0ea +0x014:  movl   $0x2,-0x20(%ebp)
084af0f1 +0x01b:  mov    -0x28(%ebp),%eax
084af0f4 +0x01e:  mov    %eax,(%esp)
084af0f7 +0x021:  call   0822ca28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20d2
084af0fc +0x026:  mov    %ax,-0x48(%ebp)
084af100 +0x02a:  mov    -0x24(%ebp),%eax
084af103 +0x02d:  mov    %eax,(%esp)
084af106 +0x030:  call   0822ca28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20d2
084af10b +0x035:  mov    %ax,-0x46(%ebp)
084af10f +0x039:  movl   $0xffffffff,-0x1c(%ebp)
084af116 +0x040:  lea    -0x48(%ebp),%eax
084af119 +0x043:  mov    %eax,0x8(%esp)
084af11d +0x047:  movl   $0x2,0x4(%esp)
084af125 +0x04f:  mov    0x8(%ebp),%eax
084af128 +0x052:  mov    %eax,(%esp)
084af12b +0x055:  call   084af3b2 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt>  ; game_master::CBoosterTest::_selectJewelTypeIndex(unsigned int, unsigned short const*) const
084af130 +0x05a:  mov    %eax,-0x1c(%ebp)
084af133 +0x05d:  cmpl   $0xffffffff,-0x1c(%ebp)
084af137 +0x061:  sete   %al
084af13a +0x064:  test   %al,%al
084af13c +0x066:  je     084af148 <+0x72>
084af13e +0x068:  mov    $0x0,%eax
084af143 +0x06d:  jmp    084af3a7 <+0x2d1>
084af148 +0x072:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084af14d +0x077:  mov    %eax,%ebx
084af14f +0x079:  mov    -0x28(%ebp),%eax
084af152 +0x07c:  mov    %eax,(%esp)
084af155 +0x07f:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084af15a +0x084:  mov    %eax,%edx
084af15c +0x086:  mov    -0x1c(%ebp),%ecx
084af15f +0x089:  mov    %edx,%eax
084af161 +0x08b:  add    %eax,%eax
084af163 +0x08d:  add    %edx,%eax
084af165 +0x08f:  add    %eax,%eax
084af167 +0x091:  add    %ecx,%eax
084af169 +0x093:  add    $0x208,%eax
084af16e +0x098:  mov    0xc(%ebx,%eax,4),%eax
084af172 +0x09c:  mov    %eax,-0x18(%ebp)
084af175 +0x09f:  mov    -0x18(%ebp),%ebx
084af178 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084af17d +0x0a7:  mov    %ebx,0x4(%esp)
084af181 +0x0ab:  mov    %eax,(%esp)
084af184 +0x0ae:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084af189 +0x0b3:  mov    %eax,-0x14(%ebp)
084af18c +0x0b6:  cmpl   $0x0,-0x14(%ebp)
084af190 +0x0ba:  je     084af1a9 <+0xd3>
084af192 +0x0bc:  mov    -0x14(%ebp),%eax
084af195 +0x0bf:  mov    (%eax),%eax
084af197 +0x0c1:  add    $0xc,%eax
084af19a +0x0c4:  mov    (%eax),%edx
084af19c +0x0c6:  mov    -0x14(%ebp),%eax
084af19f +0x0c9:  mov    %eax,(%esp)
084af1a2 +0x0cc:  call   *%edx
084af1a4 +0x0ce:  cmp    $0x10,%eax
084af1a7 +0x0d1:  je     084af1b0 <+0xda>
084af1a9 +0x0d3:  mov    $0x1,%eax
084af1ae +0x0d8:  jmp    084af1b5 <+0xdf>
084af1b0 +0x0da:  mov    $0x0,%eax
084af1b5 +0x0df:  test   %al,%al
084af1b7 +0x0e1:  je     084af1c3 <+0xed>
084af1b9 +0x0e3:  mov    $0x0,%eax
084af1be +0x0e8:  jmp    084af3a7 <+0x2d1>
084af1c3 +0x0ed:  movl   $0x0,-0x10(%ebp)
084af1ca +0x0f4:  jmp    084af38e <+0x2b8>
084af1cf +0x0f9:  lea    -0x54(%ebp),%eax
084af1d2 +0x0fc:  mov    %eax,(%esp)
084af1d5 +0x0ff:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
084af1da +0x104:  mov    -0x14(%ebp),%eax
084af1dd +0x107:  lea    -0x54(%ebp),%edx
084af1e0 +0x10a:  mov    %edx,0x4(%esp)
084af1e4 +0x10e:  mov    %eax,(%esp)
084af1e7 +0x111:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
084af1ec +0x116:  lea    -0x44(%ebp),%eax
084af1ef +0x119:  lea    -0x54(%ebp),%edx
084af1f2 +0x11c:  mov    %edx,0x4(%esp)
084af1f6 +0x120:  mov    %eax,(%esp)
084af1f9 +0x123:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
084af1fe +0x128:  sub    $0x4,%esp
084af201 +0x12b:  lea    -0x44(%ebp),%eax
084af204 +0x12e:  mov    %eax,0x4(%esp)
084af208 +0x132:  lea    -0x58(%ebp),%eax
084af20b +0x135:  mov    %eax,(%esp)
084af20e +0x138:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
084af213 +0x13d:  lea    -0x40(%ebp),%eax
084af216 +0x140:  lea    -0x54(%ebp),%edx
084af219 +0x143:  mov    %edx,0x4(%esp)
084af21d +0x147:  mov    %eax,(%esp)
084af220 +0x14a:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
084af225 +0x14f:  sub    $0x4,%esp
084af228 +0x152:  lea    -0x40(%ebp),%eax
084af22b +0x155:  mov    %eax,0x4(%esp)
084af22f +0x159:  lea    -0x5c(%ebp),%eax
084af232 +0x15c:  mov    %eax,(%esp)
084af235 +0x15f:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
084af23a +0x164:  jmp    084af348 <+0x272>
084af23f +0x169:  lea    -0x58(%ebp),%eax
084af242 +0x16c:  mov    %eax,(%esp)
084af245 +0x16f:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af24a +0x174:  mov    (%eax),%eax
084af24c +0x176:  mov    %eax,%ebx
084af24e +0x178:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084af253 +0x17d:  mov    %ebx,0x4(%esp)
084af257 +0x181:  mov    %eax,(%esp)
084af25a +0x184:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084af25f +0x189:  mov    %eax,-0xc(%ebp)
084af262 +0x18c:  cmpl   $0x0,-0xc(%ebp)
084af266 +0x190:  je     084af33c <+0x266>
084af26c +0x196:  lea    -0x58(%ebp),%eax
084af26f +0x199:  mov    %eax,(%esp)
084af272 +0x19c:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af277 +0x1a1:  mov    (%eax),%eax
084af279 +0x1a3:  mov    %eax,-0x38(%ebp)
084af27c +0x1a6:  lea    -0x3c(%ebp),%eax
084af27f +0x1a9:  lea    -0x38(%ebp),%edx
084af282 +0x1ac:  mov    %edx,0x8(%esp)
084af286 +0x1b0:  mov    0x10(%ebp),%edx
084af289 +0x1b3:  mov    %edx,0x4(%esp)
084af28d +0x1b7:  mov    %eax,(%esp)
084af290 +0x1ba:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084af295 +0x1bf:  sub    $0x4,%esp
084af298 +0x1c2:  lea    -0x34(%ebp),%eax
084af29b +0x1c5:  mov    0x10(%ebp),%edx
084af29e +0x1c8:  mov    %edx,0x4(%esp)
084af2a2 +0x1cc:  mov    %eax,(%esp)
084af2a5 +0x1cf:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084af2aa +0x1d4:  sub    $0x4,%esp
084af2ad +0x1d7:  lea    -0x3c(%ebp),%eax
084af2b0 +0x1da:  mov    %eax,0x4(%esp)
084af2b4 +0x1de:  lea    -0x34(%ebp),%eax
084af2b7 +0x1e1:  mov    %eax,(%esp)
084af2ba +0x1e4:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084af2bf +0x1e9:  test   %al,%al
084af2c1 +0x1eb:  je     084af302 <+0x22c>
084af2c3 +0x1ed:  lea    -0x58(%ebp),%eax
084af2c6 +0x1f0:  mov    %eax,(%esp)
084af2c9 +0x1f3:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af2ce +0x1f8:  mov    (%eax),%eax
084af2d0 +0x1fa:  mov    %eax,-0x30(%ebp)
084af2d3 +0x1fd:  lea    -0x30(%ebp),%eax
084af2d6 +0x200:  mov    %eax,0x4(%esp)
084af2da +0x204:  mov    0x10(%ebp),%eax
084af2dd +0x207:  mov    %eax,(%esp)
084af2e0 +0x20a:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
084af2e5 +0x20f:  mov    %eax,%ebx
084af2e7 +0x211:  mov    (%ebx),%esi
084af2e9 +0x213:  lea    -0x58(%ebp),%eax
084af2ec +0x216:  mov    %eax,(%esp)
084af2ef +0x219:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af2f4 +0x21e:  movzwl 0x8(%eax),%eax
084af2f8 +0x222:  movzwl %ax,%eax
084af2fb +0x225:  lea    (%esi,%eax,1),%eax
084af2fe +0x228:  mov    %eax,(%ebx)
084af300 +0x22a:  jmp    084af33d <+0x267>
084af302 +0x22c:  lea    -0x58(%ebp),%eax
084af305 +0x22f:  mov    %eax,(%esp)
084af308 +0x232:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af30d +0x237:  mov    (%eax),%eax
084af30f +0x239:  mov    %eax,-0x2c(%ebp)
084af312 +0x23c:  lea    -0x2c(%ebp),%eax
084af315 +0x23f:  mov    %eax,0x4(%esp)
084af319 +0x243:  mov    0x10(%ebp),%eax
084af31c +0x246:  mov    %eax,(%esp)
084af31f +0x249:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
084af324 +0x24e:  mov    %eax,%ebx
084af326 +0x250:  lea    -0x58(%ebp),%eax
084af329 +0x253:  mov    %eax,(%esp)
084af32c +0x256:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
084af331 +0x25b:  movzwl 0x8(%eax),%eax
084af335 +0x25f:  movzwl %ax,%eax
084af338 +0x262:  mov    %eax,(%ebx)
084af33a +0x264:  jmp    084af33d <+0x267>
084af33c +0x266:  nop
084af33d +0x267:  lea    -0x58(%ebp),%eax
084af340 +0x26a:  mov    %eax,(%esp)
084af343 +0x26d:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
084af348 +0x272:  lea    -0x5c(%ebp),%eax
084af34b +0x275:  mov    %eax,0x4(%esp)
084af34f +0x279:  lea    -0x58(%ebp),%eax
084af352 +0x27c:  mov    %eax,(%esp)
084af355 +0x27f:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
084af35a +0x284:  test   %al,%al
084af35c +0x286:  jne    084af23f <+0x169>
084af362 +0x28c:  jmp    084af37f <+0x2a9>
084af364 +0x28e:  mov    %edx,%ebx
084af366 +0x290:  mov    %eax,%esi
084af368 +0x292:  lea    -0x54(%ebp),%eax
084af36b +0x295:  mov    %eax,(%esp)
084af36e +0x298:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
084af373 +0x29d:  mov    %esi,%eax
084af375 +0x29f:  mov    %ebx,%edx
084af377 +0x2a1:  mov    %eax,(%esp)
084af37a +0x2a4:  call   08ae3750 <_Unwind_Resume>
084af37f +0x2a9:  lea    -0x54(%ebp),%eax
084af382 +0x2ac:  mov    %eax,(%esp)
084af385 +0x2af:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
084af38a +0x2b4:  addl   $0x1,-0x10(%ebp)
084af38e +0x2b8:  mov    0x8(%ebp),%eax
084af391 +0x2bb:  mov    0xc(%eax),%eax
084af394 +0x2be:  cmp    -0x10(%ebp),%eax
084af397 +0x2c1:  setg   %al
084af39a +0x2c4:  test   %al,%al
084af39c +0x2c6:  jne    084af1cf <+0xf9>
084af3a2 +0x2cc:  mov    $0x1,%eax
084af3a7 +0x2d1:  lea    -0x8(%ebp),%esp
084af3aa +0x2d4:  add    $0x0,%esp
084af3ad +0x2d7:  pop    %ebx
084af3ae +0x2d8:  pop    %esi
084af3af +0x2d9:  pop    %ebp
084af3b0 +0x2da:  ret
084af3b1 +0x2db:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::getCompoundEmblemResult @ 0x84af0d6

/* game_master::CBoosterTest::getCompoundEmblemResult(CItem const*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

undefined4 __thiscall
game_master::CBoosterTest::getCompoundEmblemResult(CBoosterTest *this,CItem *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_60 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_58 [12];
  ushort local_4c;
  undefined2 local_4a;
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  _Rb_tree_iterator local_40 [4];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  int local_34;
  int local_30;
  CItem *local_2c;
  CItem *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  CStackableItem *local_18;
  int local_14;
  int local_10;
  
  local_2c = param_1;
  local_28 = param_1;
  local_24 = 2;
  local_4c = CStackableItem::getJewelTargetSocket((CStackableItem *)param_1);
  local_4a = CStackableItem::getJewelTargetSocket((CStackableItem *)local_28);
  local_20 = 0xffffffff;
  local_20 = _selectJewelTypeIndex(this,2,&local_4c);
  if (local_20 != -1) {
    iVar3 = G_CDataManager();
    iVar4 = CItem::get_grade(local_2c);
    iVar3 = *(int *)(iVar3 + (iVar4 * 6 + local_20) * 4 + 0x82c);
    local_1c = iVar3;
    pCVar5 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(pCVar5,iVar3);
    if ((local_18 == (CStackableItem *)0x0) ||
       (iVar3 = (**(code **)(*(int *)local_18 + 0xc))(local_18), iVar3 != 0x10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar6 = 0;
    }
    else {
      for (local_14 = 0; local_14 < *(int *)(this + 0xc); local_14 = local_14 + 1) {
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        vector(local_58);
                    /* try { // try from 084af1e7 to 084af359 has its CatchHandler @ 084af364 */
        CStackableItem::getBoosterItem(local_18,(vector *)local_58);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_48);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_60,local_44);
        while (bVar2 = __gnu_cxx::operator!=(local_5c,local_60), bVar2) {
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_5c);
          iVar3 = *piVar7;
          pCVar5 = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::find_item(pCVar5,iVar3);
          if (local_10 != 0) {
            puVar8 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                     ::operator->(local_5c);
            local_3c = *puVar8;
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                      ((int *)local_40);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38)
            ;
            cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38,local_40);
            if (cVar1 == '\0') {
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              local_30 = *piVar7;
              puVar9 = (uint *)std::
                               map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                             *)param_2,&local_30);
              iVar3 = __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_5c);
              *puVar9 = (uint)*(ushort *)(iVar3 + 8);
            }
            else {
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              local_34 = *piVar7;
              piVar7 = (int *)std::
                              map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                              operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                          *)param_2,&local_34);
              iVar3 = *piVar7;
              iVar4 = __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_5c);
              *piVar7 = iVar3 + (uint)*(ushort *)(iVar4 + 8);
            }
          }
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_5c);
        }
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        ~vector(local_58);
      }
      uVar6 = 1;
    }
    return uVar6;
  }
  return 0;
}
```
