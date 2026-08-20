# getRandomboxResult

`_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::getRandomboxResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084afe3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084afe3a  _ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::getRandomboxResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084afe3a, 0x084b0031]
084afe3a +0x000:  push   %ebp
084afe3b +0x001:  mov    %esp,%ebp
084afe3d +0x003:  push   %esi
084afe3e +0x004:  push   %ebx
084afe3f +0x005:  sub    $0x90,%esp
084afe45 +0x00b:  lea    -0x85(%ebp),%eax
084afe4b +0x011:  mov    %eax,(%esp)
084afe4e +0x014:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084afe53 +0x019:  lea    -0x44(%ebp),%eax
084afe56 +0x01c:  mov    %eax,(%esp)
084afe59 +0x01f:  call   084b4a3c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xaef>  ; global constructors keyed to game_master::CMacro::Reset()+0xaef
084afe5e +0x024:  movl   $0x0,-0x10(%ebp)
084afe65 +0x02b:  jmp    084affec <+0x1b2>
084afe6a +0x030:  lea    -0x44(%ebp),%eax
084afe6d +0x033:  mov    %eax,(%esp)
084afe70 +0x036:  call   084b4aae <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb61>  ; global constructors keyed to game_master::CMacro::Reset()+0xb61
084afe75 +0x03b:  mov    0xc(%ebp),%eax
084afe78 +0x03e:  lea    -0x44(%ebp),%edx
084afe7b +0x041:  mov    %edx,0x4(%esp)
084afe7f +0x045:  mov    %eax,(%esp)
084afe82 +0x048:  call   0850edda <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
084afe87 +0x04d:  movl   $0x0,-0xc(%ebp)
084afe8e +0x054:  jmp    084affcf <+0x195>
084afe93 +0x059:  mov    -0xc(%ebp),%eax
084afe96 +0x05c:  mov    %eax,0x4(%esp)
084afe9a +0x060:  lea    -0x44(%ebp),%eax
084afe9d +0x063:  mov    %eax,(%esp)
084afea0 +0x066:  call   084b4aea <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb9d>  ; global constructors keyed to game_master::CMacro::Reset()+0xb9d
084afea5 +0x06b:  mov    (%eax),%edx
084afea7 +0x06d:  mov    %edx,-0x85(%ebp)
084afead +0x073:  mov    0x4(%eax),%edx
084afeb0 +0x076:  mov    %edx,-0x81(%ebp)
084afeb6 +0x07c:  mov    0x8(%eax),%edx
084afeb9 +0x07f:  mov    %edx,-0x7d(%ebp)
084afebc +0x082:  mov    0xc(%eax),%edx
084afebf +0x085:  mov    %edx,-0x79(%ebp)
084afec2 +0x088:  mov    0x10(%eax),%edx
084afec5 +0x08b:  mov    %edx,-0x75(%ebp)
084afec8 +0x08e:  mov    0x14(%eax),%edx
084afecb +0x091:  mov    %edx,-0x71(%ebp)
084afece +0x094:  mov    0x18(%eax),%edx
084afed1 +0x097:  mov    %edx,-0x6d(%ebp)
084afed4 +0x09a:  mov    0x1c(%eax),%edx
084afed7 +0x09d:  mov    %edx,-0x69(%ebp)
084afeda +0x0a0:  mov    0x20(%eax),%edx
084afedd +0x0a3:  mov    %edx,-0x65(%ebp)
084afee0 +0x0a6:  mov    0x24(%eax),%edx
084afee3 +0x0a9:  mov    %edx,-0x61(%ebp)
084afee6 +0x0ac:  mov    0x28(%eax),%edx
084afee9 +0x0af:  mov    %edx,-0x5d(%ebp)
084afeec +0x0b2:  mov    0x2c(%eax),%edx
084afeef +0x0b5:  mov    %edx,-0x59(%ebp)
084afef2 +0x0b8:  mov    0x30(%eax),%edx
084afef5 +0x0bb:  mov    %edx,-0x55(%ebp)
084afef8 +0x0be:  mov    0x34(%eax),%edx
084afefb +0x0c1:  mov    %edx,-0x51(%ebp)
084afefe +0x0c4:  mov    0x38(%eax),%edx
084aff01 +0x0c7:  mov    %edx,-0x4d(%ebp)
084aff04 +0x0ca:  movzbl 0x3c(%eax),%eax
084aff08 +0x0ce:  mov    %al,-0x49(%ebp)
084aff0b +0x0d1:  mov    -0x83(%ebp),%eax
084aff11 +0x0d7:  mov    %eax,-0x38(%ebp)
084aff14 +0x0da:  lea    -0x48(%ebp),%eax
084aff17 +0x0dd:  lea    -0x38(%ebp),%edx
084aff1a +0x0e0:  mov    %edx,0x8(%esp)
084aff1e +0x0e4:  mov    0x10(%ebp),%edx
084aff21 +0x0e7:  mov    %edx,0x4(%esp)
084aff25 +0x0eb:  mov    %eax,(%esp)
084aff28 +0x0ee:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084aff2d +0x0f3:  sub    $0x4,%esp
084aff30 +0x0f6:  lea    -0x34(%ebp),%eax
084aff33 +0x0f9:  mov    0x10(%ebp),%edx
084aff36 +0x0fc:  mov    %edx,0x4(%esp)
084aff3a +0x100:  mov    %eax,(%esp)
084aff3d +0x103:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084aff42 +0x108:  sub    $0x4,%esp
084aff45 +0x10b:  lea    -0x34(%ebp),%eax
084aff48 +0x10e:  mov    %eax,0x4(%esp)
084aff4c +0x112:  lea    -0x48(%ebp),%eax
084aff4f +0x115:  mov    %eax,(%esp)
084aff52 +0x118:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084aff57 +0x11d:  test   %al,%al
084aff59 +0x11f:  je     084aff71 <+0x137>
084aff5b +0x121:  lea    -0x48(%ebp),%eax
084aff5e +0x124:  mov    %eax,(%esp)
084aff61 +0x127:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084aff66 +0x12c:  mov    0x4(%eax),%edx
084aff69 +0x12f:  add    $0x1,%edx
084aff6c +0x132:  mov    %edx,0x4(%eax)
084aff6f +0x135:  jmp    084affcb <+0x191>
084aff71 +0x137:  movl   $0x1,-0x18(%ebp)
084aff78 +0x13e:  mov    -0x83(%ebp),%eax
084aff7e +0x144:  mov    %eax,-0x14(%ebp)
084aff81 +0x147:  lea    -0x20(%ebp),%eax
084aff84 +0x14a:  lea    -0x18(%ebp),%edx
084aff87 +0x14d:  mov    %edx,0x8(%esp)
084aff8b +0x151:  lea    -0x14(%ebp),%edx
084aff8e +0x154:  mov    %edx,0x4(%esp)
084aff92 +0x158:  mov    %eax,(%esp)
084aff95 +0x15b:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084aff9a +0x160:  sub    $0x4,%esp
084aff9d +0x163:  lea    -0x20(%ebp),%eax
084affa0 +0x166:  mov    %eax,0x4(%esp)
084affa4 +0x16a:  lea    -0x28(%ebp),%eax
084affa7 +0x16d:  mov    %eax,(%esp)
084affaa +0x170:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084affaf +0x175:  lea    -0x30(%ebp),%eax
084affb2 +0x178:  lea    -0x28(%ebp),%edx
084affb5 +0x17b:  mov    %edx,0x8(%esp)
084affb9 +0x17f:  mov    0x10(%ebp),%edx
084affbc +0x182:  mov    %edx,0x4(%esp)
084affc0 +0x186:  mov    %eax,(%esp)
084affc3 +0x189:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084affc8 +0x18e:  sub    $0x4,%esp
084affcb +0x191:  addl   $0x1,-0xc(%ebp)
084affcf +0x195:  lea    -0x44(%ebp),%eax
084affd2 +0x198:  mov    %eax,(%esp)
084affd5 +0x19b:  call   084b4aca <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb7d>  ; global constructors keyed to game_master::CMacro::Reset()+0xb7d
084affda +0x1a0:  cmp    -0xc(%ebp),%eax
084affdd +0x1a3:  seta   %al
084affe0 +0x1a6:  test   %al,%al
084affe2 +0x1a8:  jne    084afe93 <+0x59>
084affe8 +0x1ae:  addl   $0x1,-0x10(%ebp)
084affec +0x1b2:  mov    0x8(%ebp),%eax
084affef +0x1b5:  mov    0xc(%eax),%eax
084afff2 +0x1b8:  cmp    -0x10(%ebp),%eax
084afff5 +0x1bb:  setg   %al
084afff8 +0x1be:  test   %al,%al
084afffa +0x1c0:  jne    084afe6a <+0x30>
084b0000 +0x1c6:  jmp    084b001d <+0x1e3>
084b0002 +0x1c8:  mov    %edx,%ebx
084b0004 +0x1ca:  mov    %eax,%esi
084b0006 +0x1cc:  lea    -0x44(%ebp),%eax
084b0009 +0x1cf:  mov    %eax,(%esp)
084b000c +0x1d2:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
084b0011 +0x1d7:  mov    %esi,%eax
084b0013 +0x1d9:  mov    %ebx,%edx
084b0015 +0x1db:  mov    %eax,(%esp)
084b0018 +0x1de:  call   08ae3750 <_Unwind_Resume>
084b001d +0x1e3:  lea    -0x44(%ebp),%eax
084b0020 +0x1e6:  mov    %eax,(%esp)
084b0023 +0x1e9:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
084b0028 +0x1ee:  lea    -0x8(%ebp),%esp
084b002b +0x1f1:  add    $0x0,%esp
084b002e +0x1f4:  pop    %ebx
084b002f +0x1f5:  pop    %esi
084b0030 +0x1f6:  pop    %ebp
084b0031 +0x1f7:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::getRandomboxResult @ 0x84afe3a

/* game_master::CBoosterTest::getRandomboxResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getRandomboxResult(CItem *param_1,map *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_89;
  undefined2 uStack_87;
  undefined2 local_85;
  undefined2 uStack_83;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  _Rb_tree_iterator<std::pair<int_const,int>> local_4c [4];
  vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> local_48 [12];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_89);
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::vector
            (local_48);
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0xc); local_14 = local_14 + 1) {
                    /* try { // try from 084afe70 to 084affc7 has its CatchHandler @ 084b0002 */
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::clear
              (local_48);
    CStackableItem::get_multibox_lottery_item((CStackableItem *)param_2,(vector *)local_48);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
              size(local_48);
      if (uVar4 <= local_10) break;
      puVar2 = (undefined4 *)
               std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
               operator[](local_48,local_10);
      local_89 = (undefined2)*puVar2;
      uStack_87 = (undefined2)((uint)*puVar2 >> 0x10);
      local_85 = (undefined2)puVar2[1];
      uStack_83 = (undefined2)((uint)puVar2[1] >> 0x10);
      local_81 = puVar2[2];
      local_7d = puVar2[3];
      local_79 = puVar2[4];
      local_75 = puVar2[5];
      local_71 = puVar2[6];
      local_6d = puVar2[7];
      local_69 = puVar2[8];
      local_65 = puVar2[9];
      local_61 = puVar2[10];
      local_5d = puVar2[0xb];
      local_59 = puVar2[0xc];
      local_55 = puVar2[0xd];
      local_51 = puVar2[0xe];
      local_4d = *(undefined1 *)(puVar2 + 0xf);
      local_3c = CONCAT22(local_85,uStack_87);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_4c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_4c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        local_18 = CONCAT22(local_85,uStack_87);
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_4c);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      local_10 = local_10 + 1;
    }
  }
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::~vector
            (local_48);
  return;
}
```
