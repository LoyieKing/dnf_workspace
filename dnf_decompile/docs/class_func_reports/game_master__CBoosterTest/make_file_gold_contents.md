# make_file_gold_contents

`_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::make_file_gold_contents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084af7fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084af7fc  _ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::make_file_gold_contents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084af7fc, 0x084af9d5]
084af7fc +0x000:  push   %ebp
084af7fd +0x001:  mov    %esp,%ebp
084af7ff +0x003:  push   %edi
084af800 +0x004:  push   %ebx
084af801 +0x005:  sub    $0x430,%esp
084af807 +0x00b:  movl   $0x0,-0x10(%ebp)
084af80e +0x012:  movl   $0x0,-0xc(%ebp)
084af815 +0x019:  lea    -0x41c(%ebp),%ebx
084af81b +0x01f:  mov    $0x0,%eax
084af820 +0x024:  mov    $0x100,%edx
084af825 +0x029:  mov    %ebx,%edi
084af827 +0x02b:  mov    %edx,%ecx
084af829 +0x02d:  rep stos %eax,%es:(%edi)
084af82b +0x02f:  lea    -0x1c(%ebp),%eax
084af82e +0x032:  mov    0x10(%ebp),%edx
084af831 +0x035:  mov    %edx,0x4(%esp)
084af835 +0x039:  mov    %eax,(%esp)
084af838 +0x03c:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084af83d +0x041:  sub    $0x4,%esp
084af840 +0x044:  jmp    084af946 <+0x14a>
084af845 +0x049:  lea    -0x1c(%ebp),%eax
084af848 +0x04c:  mov    %eax,(%esp)
084af84b +0x04f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af850 +0x054:  mov    0x4(%eax),%ebx
084af853 +0x057:  lea    -0x1c(%ebp),%eax
084af856 +0x05a:  mov    %eax,(%esp)
084af859 +0x05d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af85e +0x062:  mov    (%eax),%eax
084af860 +0x064:  mov    %ebx,0xc(%esp)
084af864 +0x068:  mov    %eax,0x8(%esp)
084af868 +0x06c:  movl   $"%d gold count = %d \n",0x4(%esp)
084af870 +0x074:  lea    -0x41c(%ebp),%eax
084af876 +0x07a:  mov    %eax,(%esp)
084af879 +0x07d:  call   0807e440 <_init+0xd38>
084af87e +0x082:  lea    -0x1c(%ebp),%eax
084af881 +0x085:  mov    %eax,(%esp)
084af884 +0x088:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af889 +0x08d:  mov    (%eax),%ebx
084af88b +0x08f:  lea    -0x1c(%ebp),%eax
084af88e +0x092:  mov    %eax,(%esp)
084af891 +0x095:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084af896 +0x09a:  mov    0x4(%eax),%eax
084af899 +0x09d:  imul   %ebx,%eax
084af89c +0x0a0:  mov    %eax,%edx
084af89e +0x0a2:  sar    $0x1f,%edx
084af8a1 +0x0a5:  add    %eax,-0x10(%ebp)
084af8a4 +0x0a8:  adc    %edx,-0xc(%ebp)
084af8a7 +0x0ab:  mov    0xc(%ebp),%eax
084af8aa +0x0ae:  mov    %eax,(%esp)
084af8ad +0x0b1:  call   0807e3b0 <_init+0xca8>
084af8b2 +0x0b6:  mov    %eax,%ebx
084af8b4 +0x0b8:  lea    -0x41c(%ebp),%eax
084af8ba +0x0be:  mov    %eax,(%esp)
084af8bd +0x0c1:  call   0807e3b0 <_init+0xca8>
084af8c2 +0x0c6:  lea    (%ebx,%eax,1),%eax
084af8c5 +0x0c9:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
084af8ca +0x0ce:  jbe    084af8e4 <+0xe8>
084af8cc +0x0d0:  movl   $"결과 파일 이어붙힘",0x4(%esp)
084af8d4 +0x0d8:  mov    0x8(%ebp),%eax
084af8d7 +0x0db:  mov    %eax,(%esp)
084af8da +0x0de:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084af8df +0x0e3:  jmp    084af975 <+0x179>
084af8e4 +0x0e8:  lea    -0x41c(%ebp),%eax
084af8ea +0x0ee:  mov    %eax,0x4(%esp)
084af8ee +0x0f2:  mov    0xc(%ebp),%eax
084af8f1 +0x0f5:  mov    %eax,(%esp)
084af8f4 +0x0f8:  call   0807dd60 <_init+0x658>
084af8f9 +0x0fd:  movl   $0x400,0x8(%esp)
084af901 +0x105:  movl   $0x0,0x4(%esp)
084af909 +0x10d:  lea    -0x41c(%ebp),%eax
084af90f +0x113:  mov    %eax,(%esp)
084af912 +0x116:  call   0807dcc0 <_init+0x5b8>
084af917 +0x11b:  lea    -0x14(%ebp),%eax
084af91a +0x11e:  movl   $0x0,0x8(%esp)
084af922 +0x126:  lea    -0x1c(%ebp),%edx
084af925 +0x129:  mov    %edx,0x4(%esp)
084af929 +0x12d:  mov    %eax,(%esp)
084af92c +0x130:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
084af931 +0x135:  sub    $0x4,%esp
084af934 +0x138:  mov    -0x14(%ebp),%eax
084af937 +0x13b:  mov    %eax,0x4(%esp)
084af93b +0x13f:  mov    0x10(%ebp),%eax
084af93e +0x142:  mov    %eax,(%esp)
084af941 +0x145:  call   08311fda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bbf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bbf
084af946 +0x14a:  lea    -0x18(%ebp),%eax
084af949 +0x14d:  mov    0x10(%ebp),%edx
084af94c +0x150:  mov    %edx,0x4(%esp)
084af950 +0x154:  mov    %eax,(%esp)
084af953 +0x157:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084af958 +0x15c:  sub    $0x4,%esp
084af95b +0x15f:  lea    -0x18(%ebp),%eax
084af95e +0x162:  mov    %eax,0x4(%esp)
084af962 +0x166:  lea    -0x1c(%ebp),%eax
084af965 +0x169:  mov    %eax,(%esp)
084af968 +0x16c:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084af96d +0x171:  test   %al,%al
084af96f +0x173:  jne    084af845 <+0x49>
084af975 +0x179:  mov    -0x10(%ebp),%eax
084af978 +0x17c:  mov    -0xc(%ebp),%edx
084af97b +0x17f:  mov    %eax,0x8(%esp)
084af97f +0x183:  mov    %edx,0xc(%esp)
084af983 +0x187:  movl   $"max gold = %I64u \n",0x4(%esp)
084af98b +0x18f:  lea    -0x41c(%ebp),%eax
084af991 +0x195:  mov    %eax,(%esp)
084af994 +0x198:  call   0807e440 <_init+0xd38>
084af999 +0x19d:  lea    -0x41c(%ebp),%eax
084af99f +0x1a3:  mov    %eax,0x4(%esp)
084af9a3 +0x1a7:  mov    0xc(%ebp),%eax
084af9a6 +0x1aa:  mov    %eax,(%esp)
084af9a9 +0x1ad:  call   0807dd60 <_init+0x658>
084af9ae +0x1b2:  movl   $0x400,0x8(%esp)
084af9b6 +0x1ba:  movl   $0x0,0x4(%esp)
084af9be +0x1c2:  lea    -0x41c(%ebp),%eax
084af9c4 +0x1c8:  mov    %eax,(%esp)
084af9c7 +0x1cb:  call   0807dcc0 <_init+0x5b8>
084af9cc +0x1d0:  lea    -0x8(%ebp),%esp
084af9cf +0x1d3:  add    $0x0,%esp
084af9d2 +0x1d6:  pop    %ebx
084af9d3 +0x1d7:  pop    %edi
084af9d4 +0x1d8:  pop    %ebp
084af9d5 +0x1d9:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::make_file_gold_contents @ 0x84af7fc

/* game_master::CBoosterTest::make_file_gold_contents(CUser*, char*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::make_file_gold_contents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  size_t sVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  char local_420 [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  pcVar9 = local_420;
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_20);
  do {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
LAB_084af975:
      sprintf(local_420,"max gold = %I64u \n",local_14,local_10);
      strcat(param_2,local_420);
      memset(local_420,0,0x400);
      return;
    }
    iVar8 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    uVar11 = *(undefined4 *)(iVar8 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    sprintf(local_420,"%d gold count = %d \n",*puVar2,uVar11);
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    iVar8 = *piVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    uVar5 = *(int *)(iVar4 + 4) * iVar8;
    bVar10 = CARRY4(local_14,uVar5);
    local_14 = local_14 + uVar5;
    local_10 = local_10 + ((int)uVar5 >> 0x1f) + (uint)bVar10;
    sVar6 = strlen(param_2);
    sVar7 = strlen(local_420);
    if (89999 < sVar6 + sVar7) {
      SendChatMsg(param_1,&DAT_08c7ff03);
      goto LAB_084af975;
    }
    strcat(param_2,local_420);
    memset(local_420,0,0x400);
    uVar11 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,(int)local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_18,uVar11);
  } while( true );
}
```
