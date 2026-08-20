# getBoosterResult

`_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::getBoosterResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084af9d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084af9d6  _ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::getBoosterResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084af9d6, 0x084afba7]
084af9d6 +0x000:  push   %ebp
084af9d7 +0x001:  mov    %esp,%ebp
084af9d9 +0x003:  push   %esi
084af9da +0x004:  push   %ebx
084af9db +0x005:  sub    $0x60,%esp
084af9de +0x008:  mov    0xc(%ebp),%eax
084af9e1 +0x00b:  mov    %eax,-0x10(%ebp)
084af9e4 +0x00e:  lea    -0x4c(%ebp),%eax
084af9e7 +0x011:  mov    %eax,(%esp)
084af9ea +0x014:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
084af9ef +0x019:  movl   $0x0,-0xc(%ebp)
084af9f6 +0x020:  jmp    084afb62 <+0x18c>
084af9fb +0x025:  lea    -0x4c(%ebp),%eax
084af9fe +0x028:  mov    %eax,0x4(%esp)
084afa02 +0x02c:  mov    -0x10(%ebp),%eax
084afa05 +0x02f:  mov    %eax,(%esp)
084afa08 +0x032:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
084afa0d +0x037:  lea    -0x40(%ebp),%eax
084afa10 +0x03a:  lea    -0x4c(%ebp),%edx
084afa13 +0x03d:  mov    %edx,0x4(%esp)
084afa17 +0x041:  mov    %eax,(%esp)
084afa1a +0x044:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
084afa1f +0x049:  sub    $0x4,%esp
084afa22 +0x04c:  lea    -0x40(%ebp),%eax
084afa25 +0x04f:  mov    %eax,0x4(%esp)
084afa29 +0x053:  lea    -0x50(%ebp),%eax
084afa2c +0x056:  mov    %eax,(%esp)
084afa2f +0x059:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
084afa34 +0x05e:  lea    -0x3c(%ebp),%eax
084afa37 +0x061:  lea    -0x4c(%ebp),%edx
084afa3a +0x064:  mov    %edx,0x4(%esp)
084afa3e +0x068:  mov    %eax,(%esp)
084afa41 +0x06b:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
084afa46 +0x070:  sub    $0x4,%esp
084afa49 +0x073:  lea    -0x3c(%ebp),%eax
084afa4c +0x076:  mov    %eax,0x4(%esp)
084afa50 +0x07a:  lea    -0x54(%ebp),%eax
084afa53 +0x07d:  mov    %eax,(%esp)
084afa56 +0x080:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
084afa5b +0x085:  jmp    084afb39 <+0x163>
084afa60 +0x08a:  lea    -0x50(%ebp),%eax
084afa63 +0x08d:  mov    %eax,(%esp)
084afa66 +0x090:  call   084b4a16 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xac9>  ; global constructors keyed to game_master::CMacro::Reset()+0xac9
084afa6b +0x095:  mov    (%eax),%eax
084afa6d +0x097:  mov    %eax,-0x38(%ebp)
084afa70 +0x09a:  lea    -0x58(%ebp),%eax
084afa73 +0x09d:  lea    -0x38(%ebp),%edx
084afa76 +0x0a0:  mov    %edx,0x8(%esp)
084afa7a +0x0a4:  mov    0x10(%ebp),%edx
084afa7d +0x0a7:  mov    %edx,0x4(%esp)
084afa81 +0x0ab:  mov    %eax,(%esp)
084afa84 +0x0ae:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084afa89 +0x0b3:  sub    $0x4,%esp
084afa8c +0x0b6:  lea    -0x34(%ebp),%eax
084afa8f +0x0b9:  mov    0x10(%ebp),%edx
084afa92 +0x0bc:  mov    %edx,0x4(%esp)
084afa96 +0x0c0:  mov    %eax,(%esp)
084afa99 +0x0c3:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084afa9e +0x0c8:  sub    $0x4,%esp
084afaa1 +0x0cb:  lea    -0x34(%ebp),%eax
084afaa4 +0x0ce:  mov    %eax,0x4(%esp)
084afaa8 +0x0d2:  lea    -0x58(%ebp),%eax
084afaab +0x0d5:  mov    %eax,(%esp)
084afaae +0x0d8:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084afab3 +0x0dd:  test   %al,%al
084afab5 +0x0df:  je     084afacd <+0xf7>
084afab7 +0x0e1:  lea    -0x58(%ebp),%eax
084afaba +0x0e4:  mov    %eax,(%esp)
084afabd +0x0e7:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084afac2 +0x0ec:  mov    0x4(%eax),%edx
084afac5 +0x0ef:  add    $0x1,%edx
084afac8 +0x0f2:  mov    %edx,0x4(%eax)
084afacb +0x0f5:  jmp    084afb2e <+0x158>
084afacd +0x0f7:  movl   $0x1,-0x18(%ebp)
084afad4 +0x0fe:  lea    -0x50(%ebp),%eax
084afad7 +0x101:  mov    %eax,(%esp)
084afada +0x104:  call   084b4a16 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xac9>  ; global constructors keyed to game_master::CMacro::Reset()+0xac9
084afadf +0x109:  mov    (%eax),%eax
084afae1 +0x10b:  mov    %eax,-0x14(%ebp)
084afae4 +0x10e:  lea    -0x20(%ebp),%eax
084afae7 +0x111:  lea    -0x18(%ebp),%edx
084afaea +0x114:  mov    %edx,0x8(%esp)
084afaee +0x118:  lea    -0x14(%ebp),%edx
084afaf1 +0x11b:  mov    %edx,0x4(%esp)
084afaf5 +0x11f:  mov    %eax,(%esp)
084afaf8 +0x122:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084afafd +0x127:  sub    $0x4,%esp
084afb00 +0x12a:  lea    -0x20(%ebp),%eax
084afb03 +0x12d:  mov    %eax,0x4(%esp)
084afb07 +0x131:  lea    -0x28(%ebp),%eax
084afb0a +0x134:  mov    %eax,(%esp)
084afb0d +0x137:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084afb12 +0x13c:  lea    -0x30(%ebp),%eax
084afb15 +0x13f:  lea    -0x28(%ebp),%edx
084afb18 +0x142:  mov    %edx,0x8(%esp)
084afb1c +0x146:  mov    0x10(%ebp),%edx
084afb1f +0x149:  mov    %edx,0x4(%esp)
084afb23 +0x14d:  mov    %eax,(%esp)
084afb26 +0x150:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084afb2b +0x155:  sub    $0x4,%esp
084afb2e +0x158:  lea    -0x50(%ebp),%eax
084afb31 +0x15b:  mov    %eax,(%esp)
084afb34 +0x15e:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
084afb39 +0x163:  lea    -0x54(%ebp),%eax
084afb3c +0x166:  mov    %eax,0x4(%esp)
084afb40 +0x16a:  lea    -0x50(%ebp),%eax
084afb43 +0x16d:  mov    %eax,(%esp)
084afb46 +0x170:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
084afb4b +0x175:  test   %al,%al
084afb4d +0x177:  jne    084afa60 <+0x8a>
084afb53 +0x17d:  lea    -0x4c(%ebp),%eax
084afb56 +0x180:  mov    %eax,(%esp)
084afb59 +0x183:  call   084b4a20 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xad3>  ; global constructors keyed to game_master::CMacro::Reset()+0xad3
084afb5e +0x188:  addl   $0x1,-0xc(%ebp)
084afb62 +0x18c:  mov    0x8(%ebp),%eax
084afb65 +0x18f:  mov    0xc(%eax),%eax
084afb68 +0x192:  cmp    -0xc(%ebp),%eax
084afb6b +0x195:  setg   %al
084afb6e +0x198:  test   %al,%al
084afb70 +0x19a:  jne    084af9fb <+0x25>
084afb76 +0x1a0:  jmp    084afb93 <+0x1bd>
084afb78 +0x1a2:  mov    %edx,%ebx
084afb7a +0x1a4:  mov    %eax,%esi
084afb7c +0x1a6:  lea    -0x4c(%ebp),%eax
084afb7f +0x1a9:  mov    %eax,(%esp)
084afb82 +0x1ac:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
084afb87 +0x1b1:  mov    %esi,%eax
084afb89 +0x1b3:  mov    %ebx,%edx
084afb8b +0x1b5:  mov    %eax,(%esp)
084afb8e +0x1b8:  call   08ae3750 <_Unwind_Resume>
084afb93 +0x1bd:  lea    -0x4c(%ebp),%eax
084afb96 +0x1c0:  mov    %eax,(%esp)
084afb99 +0x1c3:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
084afb9e +0x1c8:  lea    -0x8(%ebp),%esp
084afba1 +0x1cb:  add    $0x0,%esp
084afba4 +0x1ce:  pop    %ebx
084afba5 +0x1cf:  pop    %esi
084afba6 +0x1d0:  pop    %ebp
084afba7 +0x1d1:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::getBoosterResult @ 0x84af9d6

/* game_master::CBoosterTest::getBoosterResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getBoosterResult(CItem *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_iterator<std::pair<int_const,int>> local_5c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_58 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_54 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator local_40 [4];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  map *local_14;
  int local_10;
  
  local_14 = param_2;
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            (local_50);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
                    /* try { // try from 084afa08 to 084afb5d has its CatchHandler @ 084afb78 */
    CStackableItem::getBoosterItem((CStackableItem *)local_14,(vector *)local_50);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_54,local_44);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_58,local_40);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_54,local_58);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
               ::operator*(local_54);
      local_3c = *puVar3;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_5c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_5c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                        ::operator*(local_54);
        local_18 = *piVar5;
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_5c);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator++(local_54);
    }
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::clear
              (local_50);
  }
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            (local_50);
  return;
}
```
