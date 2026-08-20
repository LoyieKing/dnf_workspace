# makeFileContents

`_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084af504` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084af504  _ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084af504, 0x084af7fb]
084af504 +0x000:  push   %ebp
084af505 +0x001:  mov    %esp,%ebp
084af507 +0x003:  push   %edi
084af508 +0x004:  push   %esi
084af509 +0x005:  push   %ebx
084af50a +0x006:  sub    $0x45c,%esp
084af510 +0x00c:  lea    -0x428(%ebp),%ebx
084af516 +0x012:  mov    $0x0,%eax
084af51b +0x017:  mov    $0x100,%edx
084af520 +0x01c:  mov    %ebx,%edi
084af522 +0x01e:  mov    %edx,%ecx
084af524 +0x020:  rep stos %eax,%es:(%edi)
084af526 +0x022:  lea    -0x28(%ebp),%eax
084af529 +0x025:  mov    0x10(%ebp),%edx
084af52c +0x028:  mov    %edx,0x4(%esp)
084af530 +0x02c:  mov    %eax,(%esp)
084af533 +0x02f:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084af538 +0x034:  sub    $0x4,%esp
084af53b +0x037:  jmp    084af7c1 <+0x2bd>
084af540 +0x03c:  lea    -0x28(%ebp),%eax
084af543 +0x03f:  mov    %eax,(%esp)
084af546 +0x042:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af54b +0x047:  mov    (%eax),%ebx
084af54d +0x049:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084af552 +0x04e:  mov    %ebx,0x4(%esp)
084af556 +0x052:  mov    %eax,(%esp)
084af559 +0x055:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084af55e +0x05a:  mov    %eax,-0x1c(%ebp)
084af561 +0x05d:  lea    -0x28(%ebp),%eax
084af564 +0x060:  mov    %eax,(%esp)
084af567 +0x063:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af56c +0x068:  mov    (%eax),%eax
084af56e +0x06a:  test   %eax,%eax
084af570 +0x06c:  je     084af57c <+0x78>
084af572 +0x06e:  cmp    $0x1,%eax
084af575 +0x071:  je     084af5ca <+0xc6>
084af577 +0x073:  jmp    084af618 <+0x114>
084af57c +0x078:  lea    -0x28(%ebp),%eax
084af57f +0x07b:  mov    %eax,(%esp)
084af582 +0x07e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af587 +0x083:  mov    0x4(%eax),%ebx
084af58a +0x086:  lea    -0x28(%ebp),%eax
084af58d +0x089:  mov    %eax,(%esp)
084af590 +0x08c:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af595 +0x091:  mov    (%eax),%eax
084af597 +0x093:  mov    %ebx,0x14(%esp)
084af59b +0x097:  movl   $"unknown",0x10(%esp)
084af5a3 +0x09f:  movl   $"gold",0xc(%esp)
084af5ab +0x0a7:  mov    %eax,0x8(%esp)
084af5af +0x0ab:  movl   $"%d\t\"%s\"\t\"%s\"\t%u\n",0x4(%esp)
084af5b7 +0x0b3:  lea    -0x428(%ebp),%eax
084af5bd +0x0b9:  mov    %eax,(%esp)
084af5c0 +0x0bc:  call   0807e440 <_init+0xd38>
084af5c5 +0x0c1:  jmp    084af722 <+0x21e>
084af5ca +0x0c6:  lea    -0x28(%ebp),%eax
084af5cd +0x0c9:  mov    %eax,(%esp)
084af5d0 +0x0cc:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af5d5 +0x0d1:  mov    0x4(%eax),%ebx
084af5d8 +0x0d4:  lea    -0x28(%ebp),%eax
084af5db +0x0d7:  mov    %eax,(%esp)
084af5de +0x0da:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af5e3 +0x0df:  mov    (%eax),%eax
084af5e5 +0x0e1:  mov    %ebx,0x14(%esp)
084af5e9 +0x0e5:  movl   $"unknown",0x10(%esp)
084af5f1 +0x0ed:  movl   $"coin",0xc(%esp)
084af5f9 +0x0f5:  mov    %eax,0x8(%esp)
084af5fd +0x0f9:  movl   $"%d\t\"%s\"\t\"%s\"\t%u\n",0x4(%esp)
084af605 +0x101:  lea    -0x428(%ebp),%eax
084af60b +0x107:  mov    %eax,(%esp)
084af60e +0x10a:  call   0807e440 <_init+0xd38>
084af613 +0x10f:  jmp    084af722 <+0x21e>
084af618 +0x114:  cmpl   $0x0,-0x1c(%ebp)
084af61c +0x118:  jne    084af66c <+0x168>
084af61e +0x11a:  lea    -0x28(%ebp),%eax
084af621 +0x11d:  mov    %eax,(%esp)
084af624 +0x120:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af629 +0x125:  mov    0x4(%eax),%ebx
084af62c +0x128:  lea    -0x28(%ebp),%eax
084af62f +0x12b:  mov    %eax,(%esp)
084af632 +0x12e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af637 +0x133:  mov    (%eax),%eax
084af639 +0x135:  mov    %ebx,0x14(%esp)
084af63d +0x139:  movl   $"unknown",0x10(%esp)
084af645 +0x141:  movl   $"unknown",0xc(%esp)
084af64d +0x149:  mov    %eax,0x8(%esp)
084af651 +0x14d:  movl   $"%d\t\"%s\"\t\"%s\"\t%u\n",0x4(%esp)
084af659 +0x155:  lea    -0x428(%ebp),%eax
084af65f +0x15b:  mov    %eax,(%esp)
084af662 +0x15e:  call   0807e440 <_init+0xd38>
084af667 +0x163:  jmp    084af722 <+0x21e>
084af66c +0x168:  mov    -0x1c(%ebp),%eax
084af66f +0x16b:  mov    %eax,(%esp)
084af672 +0x16e:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
084af677 +0x173:  mov    %eax,-0x434(%ebp)
084af67d +0x179:  mov    -0x1c(%ebp),%eax
084af680 +0x17c:  mov    %eax,(%esp)
084af683 +0x17f:  call   08473612 <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x5d>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x5d
084af688 +0x184:  mov    %eax,-0x430(%ebp)
084af68e +0x18a:  mov    -0x1c(%ebp),%eax
084af691 +0x18d:  mov    %eax,(%esp)
084af694 +0x190:  call   0822c84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ef4
084af699 +0x195:  mov    %eax,%edi
084af69b +0x197:  lea    -0x28(%ebp),%eax
084af69e +0x19a:  mov    %eax,(%esp)
084af6a1 +0x19d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af6a6 +0x1a2:  mov    0x4(%eax),%eax
084af6a9 +0x1a5:  mov    %eax,-0x42c(%ebp)
084af6af +0x1ab:  mov    -0x1c(%ebp),%eax
084af6b2 +0x1ae:  mov    %eax,(%esp)
084af6b5 +0x1b1:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084af6ba +0x1b6:  mov    %eax,(%esp)
084af6bd +0x1b9:  call   084aea80 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY>  ; game_master::CBoosterTest::getRarityStr(ENUM_RARITY)
084af6c2 +0x1be:  mov    %eax,%esi
084af6c4 +0x1c0:  mov    -0x1c(%ebp),%eax
084af6c7 +0x1c3:  mov    %eax,(%esp)
084af6ca +0x1c6:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084af6cf +0x1cb:  mov    %eax,%ebx
084af6d1 +0x1cd:  lea    -0x28(%ebp),%eax
084af6d4 +0x1d0:  mov    %eax,(%esp)
084af6d7 +0x1d3:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af6dc +0x1d8:  mov    (%eax),%eax
084af6de +0x1da:  mov    -0x434(%ebp),%edx
084af6e4 +0x1e0:  mov    %edx,0x20(%esp)
084af6e8 +0x1e4:  mov    -0x430(%ebp),%ecx
084af6ee +0x1ea:  mov    %ecx,0x1c(%esp)
084af6f2 +0x1ee:  mov    %edi,0x18(%esp)
084af6f6 +0x1f2:  mov    -0x42c(%ebp),%edi
084af6fc +0x1f8:  mov    %edi,0x14(%esp)
084af700 +0x1fc:  mov    %esi,0x10(%esp)
084af704 +0x200:  mov    %ebx,0xc(%esp)
084af708 +0x204:  mov    %eax,0x8(%esp)
084af70c +0x208:  movl   $"%d\t\"%s\"\t\"%s\"\t%u\t%d\t%d\t%d\n",0x4(%esp)
084af714 +0x210:  lea    -0x428(%ebp),%eax
084af71a +0x216:  mov    %eax,(%esp)
084af71d +0x219:  call   0807e440 <_init+0xd38>
084af722 +0x21e:  mov    0xc(%ebp),%eax
084af725 +0x221:  mov    %eax,(%esp)
084af728 +0x224:  call   0807e3b0 <_init+0xca8>
084af72d +0x229:  mov    %eax,%ebx
084af72f +0x22b:  lea    -0x428(%ebp),%eax
084af735 +0x231:  mov    %eax,(%esp)
084af738 +0x234:  call   0807e3b0 <_init+0xca8>
084af73d +0x239:  lea    (%ebx,%eax,1),%eax
084af740 +0x23c:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
084af745 +0x241:  jbe    084af75f <+0x25b>
084af747 +0x243:  movl   $"결과 파일 이어붙힘",0x4(%esp)
084af74f +0x24b:  mov    0x8(%ebp),%eax
084af752 +0x24e:  mov    %eax,(%esp)
084af755 +0x251:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084af75a +0x256:  jmp    084af7f0 <+0x2ec>
084af75f +0x25b:  lea    -0x428(%ebp),%eax
084af765 +0x261:  mov    %eax,0x4(%esp)
084af769 +0x265:  mov    0xc(%ebp),%eax
084af76c +0x268:  mov    %eax,(%esp)
084af76f +0x26b:  call   0807dd60 <_init+0x658>
084af774 +0x270:  movl   $0x400,0x8(%esp)
084af77c +0x278:  movl   $0x0,0x4(%esp)
084af784 +0x280:  lea    -0x428(%ebp),%eax
084af78a +0x286:  mov    %eax,(%esp)
084af78d +0x289:  call   0807dcc0 <_init+0x5b8>
084af792 +0x28e:  lea    -0x20(%ebp),%eax
084af795 +0x291:  movl   $0x0,0x8(%esp)
084af79d +0x299:  lea    -0x28(%ebp),%edx
084af7a0 +0x29c:  mov    %edx,0x4(%esp)
084af7a4 +0x2a0:  mov    %eax,(%esp)
084af7a7 +0x2a3:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
084af7ac +0x2a8:  sub    $0x4,%esp
084af7af +0x2ab:  mov    -0x20(%ebp),%eax
084af7b2 +0x2ae:  mov    %eax,0x4(%esp)
084af7b6 +0x2b2:  mov    0x10(%ebp),%eax
084af7b9 +0x2b5:  mov    %eax,(%esp)
084af7bc +0x2b8:  call   08311fda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bbf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bbf
084af7c1 +0x2bd:  lea    -0x24(%ebp),%eax
084af7c4 +0x2c0:  mov    0x10(%ebp),%edx
084af7c7 +0x2c3:  mov    %edx,0x4(%esp)
084af7cb +0x2c7:  mov    %eax,(%esp)
084af7ce +0x2ca:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084af7d3 +0x2cf:  sub    $0x4,%esp
084af7d6 +0x2d2:  lea    -0x24(%ebp),%eax
084af7d9 +0x2d5:  mov    %eax,0x4(%esp)
084af7dd +0x2d9:  lea    -0x28(%ebp),%eax
084af7e0 +0x2dc:  mov    %eax,(%esp)
084af7e3 +0x2df:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084af7e8 +0x2e4:  test   %al,%al
084af7ea +0x2e6:  jne    084af540 <+0x3c>
084af7f0 +0x2ec:  lea    -0xc(%ebp),%esp
084af7f3 +0x2ef:  add    $0x0,%esp
084af7f6 +0x2f2:  pop    %ebx
084af7f7 +0x2f3:  pop    %esi
084af7f8 +0x2f4:  pop    %edi
084af7f9 +0x2f5:  pop    %ebp
084af7fa +0x2f6:  ret
084af7fb +0x2f7:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::makeFileContents @ 0x84af504

/* game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::makeFileContents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  int *piVar2;
  CDataManager *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  char local_42c [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  undefined4 local_24;
  CItem *local_20;
  
  pcVar12 = local_42c;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_2c);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c,
                       (_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') {
      return;
    }
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
    iVar11 = *piVar2;
    this = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this,iVar11);
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
    if (*piVar2 == 0) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,&DAT_08c7fd3b,"unknown",uVar13);
    }
    else if (*piVar2 == 1) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,&DAT_08c80199,"unknown",uVar13);
    }
    else if (local_20 == (CItem *)0x0) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,"unknown","unknown",uVar13);
    }
    else {
      uVar4 = CItem::getUsableLevel(local_20);
      uVar5 = CItem::GetSellPrice(local_20);
      uVar6 = CItem::get_price(local_20);
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      uVar7 = CItem::get_rarity(local_20);
      uVar7 = getRarityStr(uVar7);
      uVar8 = CItem::GetItemName(local_20);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\t%d\t%d\t%d\n",*puVar3,uVar8,uVar7,uVar13,uVar6,
              uVar5,uVar4);
    }
    sVar9 = strlen(param_2);
    sVar10 = strlen(local_42c);
    if (89999 < sVar9 + sVar10) break;
    strcat(param_2,local_42c);
    memset(local_42c,0,0x400);
    uVar13 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_24,(int)local_2c);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_24,uVar13);
  }
  SendChatMsg(param_1,&DAT_08c7ff03);
  return;
}
```
