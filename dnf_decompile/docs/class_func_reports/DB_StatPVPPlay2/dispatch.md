# dispatch

`_ZN15DB_StatPVPPlay28dispatchEiiP6Stream`

`DB_StatPVPPlay2::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatPVPPlay2` | `0x0841ba96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841ba96  _ZN15DB_StatPVPPlay28dispatchEiiP6Stream
#           DB_StatPVPPlay2::dispatch(int, int, Stream*)
# range [0x0841ba96, 0x0841bce3]
0841ba96 +0x000:  push   %ebp
0841ba97 +0x001:  mov    %esp,%ebp
0841ba99 +0x003:  push   %edi
0841ba9a +0x004:  push   %esi
0841ba9b +0x005:  push   %ebx
0841ba9c +0x006:  sub    $0x7c,%esp
0841ba9f +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841baa4 +0x00e:  mov    %eax,(%esp)
0841baa7 +0x011:  call   0844dc40 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x856>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x856
0841baac +0x016:  mov    %eax,(%esp)
0841baaf +0x019:  call   0844d524 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x13a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x13a
0841bab4 +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841bab9 +0x023:  movl   $0x0,0x8(%esp)
0841bac1 +0x02b:  movl   $0x4,0x4(%esp)
0841bac9 +0x033:  mov    %eax,(%esp)
0841bacc +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841bad1 +0x03b:  mov    %eax,-0x28(%ebp)
0841bad4 +0x03e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841bad9 +0x043:  mov    %eax,(%esp)
0841badc +0x046:  call   0844dc40 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x856>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x856
0841bae1 +0x04b:  lea    0x18(%eax),%edx
0841bae4 +0x04e:  lea    -0x4c(%ebp),%eax
0841bae7 +0x051:  mov    %edx,0x4(%esp)
0841baeb +0x055:  mov    %eax,(%esp)
0841baee +0x058:  call   08451214 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3e2a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3e2a
0841baf3 +0x05d:  sub    $0x4,%esp
0841baf6 +0x060:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841bafb +0x065:  mov    %eax,(%esp)
0841bafe +0x068:  call   0844dc40 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x856>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x856
0841bb03 +0x06d:  lea    0x18(%eax),%edx
0841bb06 +0x070:  lea    -0x50(%ebp),%eax
0841bb09 +0x073:  mov    %edx,0x4(%esp)
0841bb0d +0x077:  mov    %eax,(%esp)
0841bb10 +0x07a:  call   0845123a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3e50>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3e50
0841bb15 +0x07f:  sub    $0x4,%esp
0841bb18 +0x082:  jmp    0841bca5 <+0x20f>
0841bb1d +0x087:  lea    -0x4c(%ebp),%eax
0841bb20 +0x08a:  mov    %eax,(%esp)
0841bb23 +0x08d:  call   08451292 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3ea8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3ea8
0841bb28 +0x092:  mov    %eax,-0x24(%ebp)
0841bb2b +0x095:  lea    -0x4c(%ebp),%eax
0841bb2e +0x098:  mov    %eax,(%esp)
0841bb31 +0x09b:  call   08451292 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3ea8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3ea8
0841bb36 +0x0a0:  add    $0x8,%eax
0841bb39 +0x0a3:  mov    %eax,-0x20(%ebp)
0841bb3c +0x0a6:  mov    -0x20(%ebp),%eax
0841bb3f +0x0a9:  mov    0x8(%eax),%ebx
0841bb42 +0x0ac:  mov    -0x20(%ebp),%eax
0841bb45 +0x0af:  mov    0xc(%eax),%ecx
0841bb48 +0x0b2:  mov    -0x24(%ebp),%eax
0841bb4b +0x0b5:  mov    0x4(%eax),%edx
0841bb4e +0x0b8:  mov    -0x24(%ebp),%eax
0841bb51 +0x0bb:  mov    (%eax),%eax
0841bb53 +0x0bd:  mov    %ebx,0x14(%esp)
0841bb57 +0x0c1:  mov    %ecx,0x10(%esp)
0841bb5b +0x0c5:  mov    %edx,0xc(%esp)
0841bb5f +0x0c9:  mov    %eax,0x8(%esp)
0841bb63 +0x0cd:  movl   $"inSert into pvp_status(occ_date,room_number,play_type,no_participants,occ_count) values(cast(now() as date),%d,%d,%d,%d)",0x4(%esp)
0841bb6b +0x0d5:  mov    -0x28(%ebp),%eax
0841bb6e +0x0d8:  mov    %eax,(%esp)
0841bb71 +0x0db:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841bb76 +0x0e0:  movl   $0x1,0x4(%esp)
0841bb7e +0x0e8:  mov    -0x28(%ebp),%eax
0841bb81 +0x0eb:  mov    %eax,(%esp)
0841bb84 +0x0ee:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841bb89 +0x0f3:  mov    %al,-0x1a(%ebp)
0841bb8c +0x0f6:  movzbl -0x1a(%ebp),%eax
0841bb90 +0x0fa:  xor    $0x1,%eax
0841bb93 +0x0fd:  test   %al,%al
0841bb95 +0x0ff:  je     0841bc37 <+0x1a1>
0841bb9b +0x105:  mov    -0x24(%ebp),%eax
0841bb9e +0x108:  mov    0x4(%eax),%ebx
0841bba1 +0x10b:  mov    -0x24(%ebp),%eax
0841bba4 +0x10e:  mov    (%eax),%ecx
0841bba6 +0x110:  mov    -0x20(%ebp),%eax
0841bba9 +0x113:  mov    0xc(%eax),%edx
0841bbac +0x116:  mov    -0x20(%ebp),%eax
0841bbaf +0x119:  mov    0x8(%eax),%eax
0841bbb2 +0x11c:  mov    %ebx,0x14(%esp)
0841bbb6 +0x120:  mov    %ecx,0x10(%esp)
0841bbba +0x124:  mov    %edx,0xc(%esp)
0841bbbe +0x128:  mov    %eax,0x8(%esp)
0841bbc2 +0x12c:  movl   $"upDate pvp_status set occ_count = occ_count + %d , no_participants = no_participants + %d where occ_date = cast(now() as date) and room_number = %d and play_type = %d",0x4(%esp)
0841bbca +0x134:  mov    -0x28(%ebp),%eax
0841bbcd +0x137:  mov    %eax,(%esp)
0841bbd0 +0x13a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841bbd5 +0x13f:  movl   $0x1,0x4(%esp)
0841bbdd +0x147:  mov    -0x28(%ebp),%eax
0841bbe0 +0x14a:  mov    %eax,(%esp)
0841bbe3 +0x14d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841bbe8 +0x152:  mov    %al,-0x19(%ebp)
0841bbeb +0x155:  movzbl -0x19(%ebp),%eax
0841bbef +0x159:  xor    $0x1,%eax
0841bbf2 +0x15c:  test   %al,%al
0841bbf4 +0x15e:  je     0841bc37 <+0x1a1>
0841bbf6 +0x160:  mov    -0x24(%ebp),%eax
0841bbf9 +0x163:  mov    (%eax),%ebx
0841bbfb +0x165:  movl   $0x5,0xc(%esp)
0841bc03 +0x16d:  movl   $0x4ed8,0x8(%esp)
0841bc0b +0x175:  movl   $&_ZZN15DB_StatPVPPlay28dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841bc13 +0x17d:  lea    -0x48(%ebp),%eax
0841bc16 +0x180:  mov    %eax,(%esp)
0841bc19 +0x183:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841bc1e +0x188:  mov    %ebx,0x8(%esp)
0841bc22 +0x18c:  movl   $"upDate pvp_status failed at %d",0x4(%esp)
0841bc2a +0x194:  lea    -0x48(%ebp),%eax
0841bc2d +0x197:  mov    %eax,(%esp)
0841bc30 +0x19a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841bc35 +0x19f:  jmp    0841bc9a <+0x204>
0841bc37 +0x1a1:  mov    -0x20(%ebp),%eax
0841bc3a +0x1a4:  mov    0x8(%eax),%eax
0841bc3d +0x1a7:  mov    %eax,-0x5c(%ebp)
0841bc40 +0x1aa:  mov    -0x20(%ebp),%eax
0841bc43 +0x1ad:  mov    0xc(%eax),%edi
0841bc46 +0x1b0:  mov    -0x24(%ebp),%eax
0841bc49 +0x1b3:  mov    0x4(%eax),%esi
0841bc4c +0x1b6:  mov    -0x24(%ebp),%eax
0841bc4f +0x1b9:  mov    (%eax),%ebx
0841bc51 +0x1bb:  movl   $0x5,0xc(%esp)
0841bc59 +0x1c3:  movl   $0x4edc,0x8(%esp)
0841bc61 +0x1cb:  movl   $&_ZZN15DB_StatPVPPlay28dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841bc69 +0x1d3:  lea    -0x38(%ebp),%eax
0841bc6c +0x1d6:  mov    %eax,(%esp)
0841bc6f +0x1d9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841bc74 +0x1de:  mov    -0x5c(%ebp),%eax
0841bc77 +0x1e1:  mov    %eax,0x14(%esp)
0841bc7b +0x1e5:  mov    %edi,0x10(%esp)
0841bc7f +0x1e9:  mov    %esi,0xc(%esp)
0841bc83 +0x1ed:  mov    %ebx,0x8(%esp)
0841bc87 +0x1f1:  movl   $"pvp_status : %d ROOM %d TYPE %d Players %d Count ",0x4(%esp)
0841bc8f +0x1f9:  lea    -0x38(%ebp),%eax
0841bc92 +0x1fc:  mov    %eax,(%esp)
0841bc95 +0x1ff:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841bc9a +0x204:  lea    -0x4c(%ebp),%eax
0841bc9d +0x207:  mov    %eax,(%esp)
0841bca0 +0x20a:  call   08451274 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3e8a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3e8a
0841bca5 +0x20f:  lea    -0x50(%ebp),%eax
0841bca8 +0x212:  mov    %eax,0x4(%esp)
0841bcac +0x216:  lea    -0x4c(%ebp),%eax
0841bcaf +0x219:  mov    %eax,(%esp)
0841bcb2 +0x21c:  call   08451260 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3e76>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3e76
0841bcb7 +0x221:  test   %al,%al
0841bcb9 +0x223:  jne    0841bb1d <+0x87>
0841bcbf +0x229:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841bcc4 +0x22e:  mov    %eax,(%esp)
0841bcc7 +0x231:  call   0844dc40 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x856>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x856
0841bccc +0x236:  mov    %eax,(%esp)
0841bccf +0x239:  call   0844d538 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x14e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x14e
0841bcd4 +0x23e:  mov    $0x1,%eax
0841bcd9 +0x243:  lea    -0xc(%ebp),%esp
0841bcdc +0x246:  add    $0x0,%esp
0841bcdf +0x249:  pop    %ebx
0841bce0 +0x24a:  pop    %esi
0841bce1 +0x24b:  pop    %edi
0841bce2 +0x24c:  pop    %ebp
0841bce3 +0x24d:  ret
```

## 反编译 C

```c
// DB_StatPVPPlay2::dispatch @ 0x841ba96

/* DB_StatPVPPlay2::dispatch(int, int, Stream*) */

undefined4 DB_StatPVPPlay2::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  GameWorld *pGVar6;
  StatisticsPvP *pSVar7;
  int iVar8;
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_54 [4];
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  MySQL *local_2c;
  undefined4 *local_28;
  int local_24;
  char local_1e;
  char local_1d;
  
  pGVar6 = (GameWorld *)G_GameWorld();
  pSVar7 = (StatisticsPvP *)GameWorld::getStatisticsPvP(pGVar6);
  StatisticsPvP::lock(pSVar7);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar6 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsPvP(pGVar6);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::begin(local_50);
  pGVar6 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsPvP(pGVar6);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::end(local_54);
  do {
    cVar5 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                          *)local_50,(_Rb_tree_iterator *)local_54);
    if (cVar5 == '\0') {
      pGVar6 = (GameWorld *)G_GameWorld();
      pSVar7 = (StatisticsPvP *)GameWorld::getStatisticsPvP(pGVar6);
      StatisticsPvP::unlock(pSVar7);
      return 1;
    }
    local_28 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
               operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                          *)local_50);
    iVar8 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                         *)local_50);
    local_24 = iVar8 + 8;
    MySQL::set_query(local_2c,
                     "inSert into pvp_status(occ_date,room_number,play_type,no_participants,occ_count) values(cast(now() as date),%d,%d,%d,%d)"
                     ,*local_28,local_28[1],*(undefined4 *)(iVar8 + 0x14),
                     *(undefined4 *)(iVar8 + 0x10));
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e == '\x01') {
LAB_0841bc37:
      uVar1 = *(undefined4 *)(local_24 + 8);
      uVar2 = *(undefined4 *)(local_24 + 0xc);
      uVar3 = local_28[1];
      uVar4 = *local_28;
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_StatPVPPlay2::dispatch(int, int, Stream*)",0x4edc
                         ,5);
      cMyTrace::operator()
                (local_3c,"pvp_status : %d ROOM %d TYPE %d Players %d Count ",uVar4,uVar3,uVar2,
                 uVar1);
    }
    else {
      MySQL::set_query(local_2c,
                       "upDate pvp_status set occ_count = occ_count + %d , no_participants = no_participants + %d where occ_date = cast(now() as date) and room_number = %d and play_type = %d"
                       ,*(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),*local_28,
                       local_28[1]);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d == '\x01') goto LAB_0841bc37;
      uVar1 = *local_28;
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_StatPVPPlay2::dispatch(int, int, Stream*)",0x4ed8
                         ,5);
      cMyTrace::operator()(local_4c,"upDate pvp_status failed at %d",uVar1);
    }
    std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
    operator++((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>> *
               )local_50);
  } while( true );
}
```
