# enumDungeonClear

`_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz`

`WongWork::CDungeonClear::enumDungeonClear(CUser*, bool (*)(short, char, char*), ...) const`

| 类 | 地址 |
|---|---|
| `WongWork::CDungeonClear` | `0x084846e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084846e2  _ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz
#           WongWork::CDungeonClear::enumDungeonClear(CUser*, bool (*)(short, char, char*), ...) const
# range [0x084846e2, 0x084847f6]
084846e2 +0x000:  push   %ebp
084846e3 +0x001:  mov    %esp,%ebp
084846e5 +0x003:  push   %ebx
084846e6 +0x004:  sub    $0x34,%esp
084846e9 +0x007:  lea    0x14(%ebp),%eax
084846ec +0x00a:  mov    %eax,-0x20(%ebp)
084846ef +0x00d:  mov    0x8(%ebp),%edx
084846f2 +0x010:  lea    -0x24(%ebp),%eax
084846f5 +0x013:  mov    %edx,0x4(%esp)
084846f9 +0x017:  mov    %eax,(%esp)
084846fc +0x01a:  call   084848de <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xa7>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xa7
08484701 +0x01f:  sub    $0x4,%esp
08484704 +0x022:  mov    0x8(%ebp),%edx
08484707 +0x025:  lea    -0x28(%ebp),%eax
0848470a +0x028:  mov    %edx,0x4(%esp)
0848470e +0x02c:  mov    %eax,(%esp)
08484711 +0x02f:  call   08484860 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x29>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x29
08484716 +0x034:  sub    $0x4,%esp
08484719 +0x037:  jmp    084847d5 <+0xf3>
0848471e +0x03c:  lea    -0x24(%ebp),%eax
08484721 +0x03f:  mov    %eax,(%esp)
08484724 +0x042:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
08484729 +0x047:  movzwl (%eax),%eax
0848472c +0x04a:  cwtl
0848472d +0x04b:  mov    %eax,-0x1c(%ebp)
08484730 +0x04e:  lea    -0x24(%ebp),%eax
08484733 +0x051:  mov    %eax,(%esp)
08484736 +0x054:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
0848473b +0x059:  movzbl 0x2(%eax),%eax
0848473f +0x05d:  mov    %al,-0x15(%ebp)
08484742 +0x060:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08484747 +0x065:  mov    -0x1c(%ebp),%edx
0848474a +0x068:  mov    %edx,0x4(%esp)
0848474e +0x06c:  mov    %eax,(%esp)
08484751 +0x06f:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08484756 +0x074:  mov    %eax,-0x14(%ebp)
08484759 +0x077:  movb   $0x0,-0xd(%ebp)
0848475d +0x07b:  movl   $0x0,-0xc(%ebp)
08484764 +0x082:  cmpl   $0x0,-0x14(%ebp)
08484768 +0x086:  je     08484778 <+0x96>
0848476a +0x088:  mov    -0x14(%ebp),%eax
0848476d +0x08b:  mov    %eax,(%esp)
08484770 +0x08e:  call   08484854 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x1d>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1d
08484775 +0x093:  mov    %eax,-0xc(%ebp)
08484778 +0x096:  cmpl   $0x0,-0xc(%ebp)
0848477c +0x09a:  je     084847a8 <+0xc6>
0848477e +0x09c:  mov    -0xc(%ebp),%ebx
08484781 +0x09f:  mov    0xc(%ebp),%eax
08484784 +0x0a2:  mov    %eax,(%esp)
08484787 +0x0a5:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0848478c +0x0aa:  add    $0x4,%eax
0848478f +0x0ad:  mov    %ebx,0x4(%esp)
08484793 +0x0b1:  mov    %eax,(%esp)
08484796 +0x0b4:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
0848479b +0x0b9:  mov    %al,-0xd(%ebp)
0848479e +0x0bc:  cmpb   $0x0,-0xd(%ebp)
084847a2 +0x0c0:  je     084847a8 <+0xc6>
084847a4 +0x0c2:  movb   $0x4,-0x15(%ebp)
084847a8 +0x0c6:  mov    -0x20(%ebp),%ecx
084847ab +0x0c9:  movsbl -0x15(%ebp),%edx
084847af +0x0cd:  mov    -0x1c(%ebp),%eax
084847b2 +0x0d0:  cwtl
084847b3 +0x0d1:  mov    %ecx,0x8(%esp)
084847b7 +0x0d5:  mov    %edx,0x4(%esp)
084847bb +0x0d9:  mov    %eax,(%esp)
084847be +0x0dc:  mov    0x10(%ebp),%eax
084847c1 +0x0df:  call   *%eax
084847c3 +0x0e1:  xor    $0x1,%eax
084847c6 +0x0e4:  test   %al,%al
084847c8 +0x0e6:  jne    084847f1 <+0x10f>
084847ca +0x0e8:  lea    -0x24(%ebp),%eax
084847cd +0x0eb:  mov    %eax,(%esp)
084847d0 +0x0ee:  call   08484904 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xcd>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xcd
084847d5 +0x0f3:  lea    -0x28(%ebp),%eax
084847d8 +0x0f6:  mov    %eax,0x4(%esp)
084847dc +0x0fa:  lea    -0x24(%ebp),%eax
084847df +0x0fd:  mov    %eax,(%esp)
084847e2 +0x100:  call   08484922 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xeb>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xeb
084847e7 +0x105:  test   %al,%al
084847e9 +0x107:  jne    0848471e <+0x3c>
084847ef +0x10d:  jmp    084847f2 <+0x110>
084847f1 +0x10f:  nop
084847f2 +0x110:  mov    -0x4(%ebp),%ebx
084847f5 +0x113:  leave
084847f6 +0x114:  ret
```

## 反编译 C

```c
// WongWork::CDungeonClear::enumDungeonClear @ 0x84846e2

/* WongWork::CDungeonClear::enumDungeonClear(CUser*, bool (*)(short, char, char*), ...) const */

void __thiscall
WongWork::CDungeonClear::enumDungeonClear
          (CDungeonClear *this,CUser *param_1,_func_bool_short_char_char_ptr *param_2,...)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  short *psVar4;
  int iVar5;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_2c [4];
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_28 [4];
  char *local_24;
  int local_20;
  char local_19;
  CDungeon *local_18;
  char local_11;
  uint local_10;
  
  local_24 = &stack0x00000010;
  std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::begin(local_28)
  ;
  std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_2c);
  while( true ) {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28,
                       (_Rb_tree_const_iterator *)local_2c);
    if (cVar3 == '\0') {
      return;
    }
    psVar4 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
    local_20 = (int)*psVar4;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
    local_19 = *(char *)(iVar5 + 2);
    iVar5 = G_CDataManager();
    local_18 = (CDungeon *)CDataManager::find_dungeon(iVar5);
    local_11 = '\0';
    local_10 = 0;
    if (local_18 != (CDungeon *)0x0) {
      local_10 = CDungeon::getHeroesRequiredQuest(local_18);
    }
    uVar1 = local_10;
    if (local_10 != 0) {
      iVar5 = CUser::getCurCharacQuestR(param_1);
      local_11 = CQuestClear::isClearedQuest((CQuestClear *)(iVar5 + 4),uVar1);
      if (local_11 != '\0') {
        local_19 = '\x04';
      }
    }
    bVar2 = (*param_2)((short)local_20,local_19,local_24);
    if (!bVar2) break;
    std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
              ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
  }
  return;
}
```
