# dispatch_sig

`_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci`

`Inter_RequestTagCharacInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_RequestTagCharacInfo` | `0x084e79f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e79f2  _ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci
#           Inter_RequestTagCharacInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e79f2, 0x084e7b83]
084e79f2 +0x000:  push   %ebp
084e79f3 +0x001:  mov    %esp,%ebp
084e79f5 +0x003:  sub    $0x28,%esp
084e79f8 +0x006:  mov    0x10(%ebp),%eax
084e79fb +0x009:  mov    %eax,-0x14(%ebp)
084e79fe +0x00c:  cmpl   $0x0,0xc(%ebp)
084e7a02 +0x010:  jne    084e7a0e <+0x1c>
084e7a04 +0x012:  mov    $0x0,%eax
084e7a09 +0x017:  jmp    084e7b82 <+0x190>
084e7a0e +0x01c:  mov    0xc(%ebp),%eax
084e7a11 +0x01f:  mov    %eax,(%esp)
084e7a14 +0x022:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e7a19 +0x027:  cmp    $0x2,%eax
084e7a1c +0x02a:  setle  %al
084e7a1f +0x02d:  test   %al,%al
084e7a21 +0x02f:  je     084e7a2d <+0x3b>
084e7a23 +0x031:  mov    $0x0,%eax
084e7a28 +0x036:  jmp    084e7b82 <+0x190>
084e7a2d +0x03b:  mov    -0x14(%ebp),%eax
084e7a30 +0x03e:  mov    (%eax),%eax
084e7a32 +0x040:  mov    %eax,0x4(%esp)
084e7a36 +0x044:  mov    0xc(%ebp),%eax
084e7a39 +0x047:  mov    %eax,(%esp)
084e7a3c +0x04a:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084e7a41 +0x04f:  mov    %eax,-0x10(%ebp)
084e7a44 +0x052:  cmpl   $0xffffffff,-0x10(%ebp)
084e7a48 +0x056:  jne    084e7a54 <+0x62>
084e7a4a +0x058:  mov    $0x0,%eax
084e7a4f +0x05d:  jmp    084e7b82 <+0x190>
084e7a54 +0x062:  mov    -0x10(%ebp),%eax
084e7a57 +0x065:  mov    0xc(%ebp),%edx
084e7a5a +0x068:  add    $0x796e8,%edx
084e7a60 +0x06e:  mov    %eax,0x4(%esp)
084e7a64 +0x072:  mov    %edx,(%esp)
084e7a67 +0x075:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e7a6c +0x07a:  mov    0xc(%ebp),%edx
084e7a6f +0x07d:  mov    %eax,0x4(%esp)
084e7a73 +0x081:  mov    %edx,(%esp)
084e7a76 +0x084:  call   0864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>  ; CUserCharacInfo::setTagCharac(_Charac_info*)
084e7a7b +0x089:  mov    0xc(%ebp),%eax
084e7a7e +0x08c:  mov    %eax,(%esp)
084e7a81 +0x08f:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
084e7a86 +0x094:  mov    0xc(%ebp),%edx
084e7a89 +0x097:  mov    %edx,0x4(%esp)
084e7a8d +0x09b:  mov    %eax,(%esp)
084e7a90 +0x09e:  call   0822d6c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d70>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d70
084e7a95 +0x0a3:  mov    0xc(%ebp),%eax
084e7a98 +0x0a6:  mov    %eax,(%esp)
084e7a9b +0x0a9:  call   0822f120 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ca
084e7aa0 +0x0ae:  mov    0xc(%ebp),%edx
084e7aa3 +0x0b1:  mov    %edx,0x4(%esp)
084e7aa7 +0x0b5:  mov    %eax,(%esp)
084e7aaa +0x0b8:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
084e7aaf +0x0bd:  mov    -0x14(%ebp),%eax
084e7ab2 +0x0c0:  lea    0x5(%eax),%edx
084e7ab5 +0x0c3:  mov    -0x14(%ebp),%eax
084e7ab8 +0x0c6:  mov    (%eax),%eax
084e7aba +0x0c8:  mov    %edx,0xc(%esp)
084e7abe +0x0cc:  mov    %eax,0x8(%esp)
084e7ac2 +0x0d0:  mov    -0x10(%ebp),%eax
084e7ac5 +0x0d3:  mov    %eax,0x4(%esp)
084e7ac9 +0x0d7:  mov    0xc(%ebp),%eax
084e7acc +0x0da:  mov    %eax,(%esp)
084e7acf +0x0dd:  call   08690098 <_ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA>  ; CUser::setTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*)
084e7ad4 +0x0e2:  mov    -0x14(%ebp),%eax
084e7ad7 +0x0e5:  add    $0x7d,%eax
084e7ada +0x0e8:  mov    %eax,0x4(%esp)
084e7ade +0x0ec:  mov    0xc(%ebp),%eax
084e7ae1 +0x0ef:  mov    %eax,(%esp)
084e7ae4 +0x0f2:  call   08690226 <_ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA>  ; CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*)
084e7ae9 +0x0f7:  movl   $0xb,0x4(%esp)
084e7af1 +0x0ff:  mov    0xc(%ebp),%eax
084e7af4 +0x102:  mov    %eax,(%esp)
084e7af7 +0x105:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084e7afc +0x10a:  mov    %eax,-0xc(%ebp)
084e7aff +0x10d:  mov    -0x14(%ebp),%eax
084e7b02 +0x110:  add    $0x40a1,%eax
084e7b07 +0x115:  mov    %eax,0x4(%esp)
084e7b0b +0x119:  mov    -0xc(%ebp),%eax
084e7b0e +0x11c:  mov    %eax,(%esp)
084e7b11 +0x11f:  call   085efdc0 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA>  ; CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*)
084e7b16 +0x124:  mov    -0x14(%ebp),%eax
084e7b19 +0x127:  mov    (%eax),%edx
084e7b1b +0x129:  mov    0xc(%ebp),%eax
084e7b1e +0x12c:  mov    %edx,0x4(%esp)
084e7b22 +0x130:  mov    %eax,(%esp)
084e7b25 +0x133:  call   0822f0e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x478e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x478e
084e7b2a +0x138:  mov    -0x14(%ebp),%eax
084e7b2d +0x13b:  movzbl 0x4(%eax),%eax
084e7b31 +0x13f:  movzbl %al,%edx
084e7b34 +0x142:  mov    0xc(%ebp),%eax
084e7b37 +0x145:  mov    %edx,0x4(%esp)
084e7b3b +0x149:  mov    %eax,(%esp)
084e7b3e +0x14c:  call   0822f0b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x475a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x475a
084e7b43 +0x151:  mov    0xc(%ebp),%eax
084e7b46 +0x154:  add    $0x796f4,%eax
084e7b4b +0x159:  mov    %eax,(%esp)
084e7b4e +0x15c:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
084e7b53 +0x161:  mov    -0x10(%ebp),%eax
084e7b56 +0x164:  mov    0xc(%ebp),%edx
084e7b59 +0x167:  add    $0x796e8,%edx
084e7b5f +0x16d:  mov    %eax,0x4(%esp)
084e7b63 +0x171:  mov    %edx,(%esp)
084e7b66 +0x174:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e7b6b +0x179:  movb   $0x1,0x14bc(%eax)
084e7b72 +0x180:  mov    0xc(%ebp),%eax
084e7b75 +0x183:  mov    %eax,(%esp)
084e7b78 +0x186:  call   086903f8 <_ZN5CUser17SendTagCharacInfoEv>  ; CUser::SendTagCharacInfo()
084e7b7d +0x18b:  mov    $0x0,%eax
084e7b82 +0x190:  leave
084e7b83 +0x191:  ret
```

## 反编译 C

```c
// Inter_RequestTagCharacInfo::dispatch_sig @ 0x84e79f2

/* Inter_RequestTagCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestTagCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  _Charac_info *p_Var3;
  CInventory *this;
  SkillSlot *this_00;
  CQuestShop *this_01;
  
  if (((param_2 != (char *)0x0) && (iVar1 = CUser::get_state((CUser *)param_2), 2 < iVar1)) &&
     (uVar2 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3), uVar2 != 0xffffffff)) {
    p_Var3 = (_Charac_info *)
             std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                       ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                        uVar2);
    CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_2,p_Var3);
    this = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::set_parent(this,(CUser *)param_2);
    this_00 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)param_2);
    SkillSlot::set_parent(this_00,(CUser *)param_2);
    CUser::setTagCharacInfo
              ((CUser *)param_2,uVar2,*(uint *)param_3,(TAG_CHARAC_DATA *)(param_3 + 5));
    CUser::setTagCharacInven((CUser *)param_2,(TAG_CHARAC_INVEN_DATA *)(param_3 + 0x7d));
    this_01 = (CQuestShop *)CUser::GetCharacExpandData((CUser *)param_2,0xb);
    CQuestShop::SetTagCharacQuestShopData(this_01,(CHARAC_QUEST_SHOP_DATA *)(param_3 + 0x40a1));
    CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_2,*(uint *)param_3);
    CUserCharacInfo::setCurCharacStrikerSkillIndex
              ((CUserCharacInfo *)param_2,*(uchar *)(param_3 + 4));
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_2 + 0x796f4));
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar2);
    *(undefined1 *)(iVar1 + 0x14bc) = 1;
    CUser::SendTagCharacInfo((CUser *)param_2);
  }
  return 0;
}
```
