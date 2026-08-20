# makeFileGoldContents

`_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CMonsterDropTest::makeFileGoldContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ad6d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ad6d6  _ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CMonsterDropTest::makeFileGoldContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084ad6d6, 0x084ad829]
084ad6d6 +0x000:  push   %ebp
084ad6d7 +0x001:  mov    %esp,%ebp
084ad6d9 +0x003:  push   %edi
084ad6da +0x004:  push   %ebx
084ad6db +0x005:  sub    $0x430,%esp
084ad6e1 +0x00b:  lea    -0x414(%ebp),%ebx
084ad6e7 +0x011:  mov    $0x0,%eax
084ad6ec +0x016:  mov    $0x100,%edx
084ad6f1 +0x01b:  mov    %ebx,%edi
084ad6f3 +0x01d:  mov    %edx,%ecx
084ad6f5 +0x01f:  rep stos %eax,%es:(%edi)
084ad6f7 +0x021:  lea    -0x14(%ebp),%eax
084ad6fa +0x024:  mov    0x10(%ebp),%edx
084ad6fd +0x027:  mov    %edx,0x4(%esp)
084ad701 +0x02b:  mov    %eax,(%esp)
084ad704 +0x02e:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084ad709 +0x033:  sub    $0x4,%esp
084ad70c +0x036:  jmp    084ad7f1 <+0x11b>
084ad711 +0x03b:  lea    -0x14(%ebp),%eax
084ad714 +0x03e:  mov    %eax,(%esp)
084ad717 +0x041:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad71c +0x046:  mov    0x4(%eax),%ebx
084ad71f +0x049:  lea    -0x14(%ebp),%eax
084ad722 +0x04c:  mov    %eax,(%esp)
084ad725 +0x04f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad72a +0x054:  mov    (%eax),%eax
084ad72c +0x056:  mov    %ebx,0x10(%esp)
084ad730 +0x05a:  mov    %eax,0xc(%esp)
084ad734 +0x05e:  movl   $"gold",0x8(%esp)
084ad73c +0x066:  movl   $"\"%s\"\t%d\t%d\n",0x4(%esp)
084ad744 +0x06e:  lea    -0x414(%ebp),%eax
084ad74a +0x074:  mov    %eax,(%esp)
084ad74d +0x077:  call   0807e440 <_init+0xd38>
084ad752 +0x07c:  mov    0xc(%ebp),%eax
084ad755 +0x07f:  mov    %eax,(%esp)
084ad758 +0x082:  call   0807e3b0 <_init+0xca8>
084ad75d +0x087:  mov    %eax,%ebx
084ad75f +0x089:  lea    -0x414(%ebp),%eax
084ad765 +0x08f:  mov    %eax,(%esp)
084ad768 +0x092:  call   0807e3b0 <_init+0xca8>
084ad76d +0x097:  lea    (%ebx,%eax,1),%eax
084ad770 +0x09a:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
084ad775 +0x09f:  jbe    084ad78f <+0xb9>
084ad777 +0x0a1:  movl   $"결과 파일 이어붙힘",0x4(%esp)
084ad77f +0x0a9:  mov    0x8(%ebp),%eax
084ad782 +0x0ac:  mov    %eax,(%esp)
084ad785 +0x0af:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084ad78a +0x0b4:  jmp    084ad820 <+0x14a>
084ad78f +0x0b9:  lea    -0x414(%ebp),%eax
084ad795 +0x0bf:  mov    %eax,0x4(%esp)
084ad799 +0x0c3:  mov    0xc(%ebp),%eax
084ad79c +0x0c6:  mov    %eax,(%esp)
084ad79f +0x0c9:  call   0807dd60 <_init+0x658>
084ad7a4 +0x0ce:  movl   $0x400,0x8(%esp)
084ad7ac +0x0d6:  movl   $0x0,0x4(%esp)
084ad7b4 +0x0de:  lea    -0x414(%ebp),%eax
084ad7ba +0x0e4:  mov    %eax,(%esp)
084ad7bd +0x0e7:  call   0807dcc0 <_init+0x5b8>
084ad7c2 +0x0ec:  lea    -0xc(%ebp),%eax
084ad7c5 +0x0ef:  movl   $0x0,0x8(%esp)
084ad7cd +0x0f7:  lea    -0x14(%ebp),%edx
084ad7d0 +0x0fa:  mov    %edx,0x4(%esp)
084ad7d4 +0x0fe:  mov    %eax,(%esp)
084ad7d7 +0x101:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
084ad7dc +0x106:  sub    $0x4,%esp
084ad7df +0x109:  mov    -0xc(%ebp),%eax
084ad7e2 +0x10c:  mov    %eax,0x4(%esp)
084ad7e6 +0x110:  mov    0x10(%ebp),%eax
084ad7e9 +0x113:  mov    %eax,(%esp)
084ad7ec +0x116:  call   08311fda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bbf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bbf
084ad7f1 +0x11b:  lea    -0x10(%ebp),%eax
084ad7f4 +0x11e:  mov    0x10(%ebp),%edx
084ad7f7 +0x121:  mov    %edx,0x4(%esp)
084ad7fb +0x125:  mov    %eax,(%esp)
084ad7fe +0x128:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ad803 +0x12d:  sub    $0x4,%esp
084ad806 +0x130:  lea    -0x10(%ebp),%eax
084ad809 +0x133:  mov    %eax,0x4(%esp)
084ad80d +0x137:  lea    -0x14(%ebp),%eax
084ad810 +0x13a:  mov    %eax,(%esp)
084ad813 +0x13d:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ad818 +0x142:  test   %al,%al
084ad81a +0x144:  jne    084ad711 <+0x3b>
084ad820 +0x14a:  lea    -0x8(%ebp),%esp
084ad823 +0x14d:  add    $0x0,%esp
084ad826 +0x150:  pop    %ebx
084ad827 +0x151:  pop    %edi
084ad828 +0x152:  pop    %ebp
084ad829 +0x153:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::makeFileGoldContents @ 0x84ad6d6

/* game_master::CMonsterDropTest::makeFileGoldContents(CUser*, char*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CMonsterDropTest::makeFileGoldContents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char local_418 [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  undefined4 local_10;
  
  pcVar6 = local_418;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return;
    }
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    uVar7 = *(undefined4 *)(iVar5 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    sprintf(local_418,"\"%s\"\t%d\t%d\n",&DAT_08c7fd3b,*puVar2,uVar7);
    sVar3 = strlen(param_2);
    sVar4 = strlen(local_418);
    if (89999 < sVar3 + sVar4) break;
    strcat(param_2,local_418);
    memset(local_418,0,0x400);
    uVar7 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_10,(int)local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_10,uVar7);
  }
  CBoosterTest::SendChatMsg(param_1,&DAT_08c7ff03);
  return;
}
```
