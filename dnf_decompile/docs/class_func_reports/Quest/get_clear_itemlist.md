# get_clear_itemlist

`_ZNK5Quest18get_clear_itemlistEi`

`Quest::get_clear_itemlist(int) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08353404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353404  _ZNK5Quest18get_clear_itemlistEi
#           Quest::get_clear_itemlist(int) const
# range [0x08353404, 0x083535d5]
08353404 +0x000:  push   %ebp
08353405 +0x001:  mov    %esp,%ebp
08353407 +0x003:  push   %edi
08353408 +0x004:  push   %esi
08353409 +0x005:  push   %ebx
0835340a +0x006:  sub    $0x6c,%esp
0835340d +0x009:  mov    0x8(%ebp),%ebx
08353410 +0x00c:  lea    -0x44(%ebp),%eax
08353413 +0x00f:  mov    %eax,(%esp)
08353416 +0x012:  call   0836de02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7dce>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7dce
0835341b +0x017:  mov    %ebx,%eax
0835341d +0x019:  mov    %eax,(%esp)
08353420 +0x01c:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08353425 +0x021:  lea    -0x4c(%ebp),%eax
08353428 +0x024:  mov    %eax,(%esp)
0835342b +0x027:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08353430 +0x02c:  movl   $0x0,-0x2c(%ebp)
08353437 +0x033:  movl   $0x0,-0x28(%ebp)
0835343e +0x03a:  movl   $0x0,-0x24(%ebp)
08353445 +0x041:  jmp    0835358f <+0x18b>
0835344a +0x046:  mov    -0x24(%ebp),%eax
0835344d +0x049:  mov    0xc(%ebp),%edx
08353450 +0x04c:  add    $0x48,%edx
08353453 +0x04f:  mov    %eax,0x4(%esp)
08353457 +0x053:  mov    %edx,(%esp)
0835345a +0x056:  call   08390e90 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20930>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20930
0835345f +0x05b:  mov    (%eax),%edx
08353461 +0x05d:  mov    %edx,-0x44(%ebp)
08353464 +0x060:  mov    0x4(%eax),%edx
08353467 +0x063:  mov    %edx,-0x40(%ebp)
0835346a +0x066:  mov    0x8(%eax),%edx
0835346d +0x069:  mov    %edx,-0x3c(%ebp)
08353470 +0x06c:  mov    0xc(%eax),%edx
08353473 +0x06f:  mov    %edx,-0x38(%ebp)
08353476 +0x072:  mov    0x10(%eax),%edx
08353479 +0x075:  mov    %edx,-0x34(%ebp)
0835347c +0x078:  mov    0x14(%eax),%eax
0835347f +0x07b:  mov    %eax,-0x30(%ebp)
08353482 +0x07e:  mov    -0x44(%ebp),%eax
08353485 +0x081:  cmp    0x10(%ebp),%eax
08353488 +0x084:  jne    0835358a <+0x186>
0835348e +0x08a:  mov    -0x3c(%ebp),%esi
08353491 +0x08d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08353496 +0x092:  mov    %esi,0x4(%esp)
0835349a +0x096:  mov    %eax,(%esp)
0835349d +0x099:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083534a2 +0x09e:  mov    %eax,-0x2c(%ebp)
083534a5 +0x0a1:  cmpl   $0x0,-0x2c(%ebp)
083534a9 +0x0a5:  jne    083534e3 <+0xdf>
083534ab +0x0a7:  mov    -0x3c(%ebp),%eax
083534ae +0x0aa:  mov    %eax,0x14(%esp)
083534b2 +0x0ae:  movl   $"G_CDataManager()->find_item(%d)",0x10(%esp)
083534ba +0x0b6:  movl   $0x1279,0xc(%esp)
083534c2 +0x0be:  movl   $&_ZZNK5Quest18get_clear_itemlistEiE19__PRETTY_FUNCTION__,0x8(%esp)
083534ca +0x0c6:  movl   $"data_manager.cpp",0x4(%esp)
083534d2 +0x0ce:  movl   $0x1,(%esp)
083534d9 +0x0d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083534de +0x0da:  jmp    0835358b <+0x187>
083534e3 +0x0df:  mov    -0x2c(%ebp),%eax
083534e6 +0x0e2:  mov    %eax,(%esp)
083534e9 +0x0e5:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
083534ee +0x0ea:  test   %al,%al
083534f0 +0x0ec:  je     08353553 <+0x14f>
083534f2 +0x0ee:  movl   $0x0,-0x20(%ebp)
083534f9 +0x0f5:  movl   $0x0,-0x1c(%ebp)
08353500 +0x0fc:  jmp    08353521 <+0x11d>
08353502 +0x0fe:  movl   $0x64,(%esp)
08353509 +0x105:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0835350e +0x10a:  mov    %eax,-0x28(%ebp)
08353511 +0x10d:  mov    -0x34(%ebp),%eax
08353514 +0x110:  cmp    -0x28(%ebp),%eax
08353517 +0x113:  jl     0835351d <+0x119>
08353519 +0x115:  addl   $0x1,-0x20(%ebp)
0835351d +0x119:  addl   $0x1,-0x1c(%ebp)
08353521 +0x11d:  mov    -0x38(%ebp),%eax
08353524 +0x120:  cmp    -0x1c(%ebp),%eax
08353527 +0x123:  setg   %al
0835352a +0x126:  test   %al,%al
0835352c +0x128:  jne    08353502 <+0xfe>
0835352e +0x12a:  cmpl   $0x0,-0x20(%ebp)
08353532 +0x12e:  jle    0835358b <+0x187>
08353534 +0x130:  mov    -0x3c(%ebp),%eax
08353537 +0x133:  mov    %eax,-0x4c(%ebp)
0835353a +0x136:  mov    -0x20(%ebp),%eax
0835353d +0x139:  mov    %eax,-0x48(%ebp)
08353540 +0x13c:  mov    %ebx,%eax
08353542 +0x13e:  lea    -0x4c(%ebp),%edx
08353545 +0x141:  mov    %edx,0x4(%esp)
08353549 +0x145:  mov    %eax,(%esp)
0835354c +0x148:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08353551 +0x14d:  jmp    0835358b <+0x187>
08353553 +0x14f:  movl   $0x64,(%esp)
0835355a +0x156:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0835355f +0x15b:  mov    %eax,-0x28(%ebp)
08353562 +0x15e:  mov    -0x34(%ebp),%eax
08353565 +0x161:  cmp    -0x28(%ebp),%eax
08353568 +0x164:  jl     0835358b <+0x187>
0835356a +0x166:  mov    -0x3c(%ebp),%eax
0835356d +0x169:  mov    %eax,-0x4c(%ebp)
08353570 +0x16c:  movl   $0x1,-0x48(%ebp)
08353577 +0x173:  mov    %ebx,%eax
08353579 +0x175:  lea    -0x4c(%ebp),%edx
0835357c +0x178:  mov    %edx,0x4(%esp)
08353580 +0x17c:  mov    %eax,(%esp)
08353583 +0x17f:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08353588 +0x184:  jmp    0835358b <+0x187>
0835358a +0x186:  nop
0835358b +0x187:  addl   $0x1,-0x24(%ebp)
0835358f +0x18b:  mov    0xc(%ebp),%eax
08353592 +0x18e:  add    $0x48,%eax
08353595 +0x191:  mov    %eax,(%esp)
08353598 +0x194:  call   08390e6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2090e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2090e
0835359d +0x199:  cmp    -0x24(%ebp),%eax
083535a0 +0x19c:  setg   %al
083535a3 +0x19f:  test   %al,%al
083535a5 +0x1a1:  jne    0835344a <+0x46>
083535ab +0x1a7:  jmp    083535c7 <+0x1c3>
083535ad +0x1a9:  mov    %edx,%esi
083535af +0x1ab:  mov    %eax,%edi
083535b1 +0x1ad:  mov    %ebx,%eax
083535b3 +0x1af:  mov    %eax,(%esp)
083535b6 +0x1b2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083535bb +0x1b7:  mov    %edi,%eax
083535bd +0x1b9:  mov    %esi,%edx
083535bf +0x1bb:  mov    %eax,(%esp)
083535c2 +0x1be:  call   08ae3750 <_Unwind_Resume>
083535c7 +0x1c3:  mov    %ebx,%eax
083535c9 +0x1c5:  mov    %ebx,%eax
083535cb +0x1c7:  add    $0x6c,%esp
083535ce +0x1ca:  pop    %ebx
083535cf +0x1cb:  pop    %esi
083535d0 +0x1cc:  pop    %edi
083535d1 +0x1cd:  pop    %ebp
083535d2 +0x1ce:  ret    $0x4
083535d5 +0x1d1:  nop
```

## 反编译 C

```c
// Quest::get_clear_itemlist @ 0x8353404

/* Quest::get_clear_itemlist(int) const */

int Quest::get_clear_itemlist(int param_1)

{
  char cVar1;
  int *piVar2;
  CDataManager *this;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CItem *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  DungeonClearItem::DungeonClearItem((DungeonClearItem *)&local_48);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  std::pair<int,int>::pair((pair<int,int> *)&local_50);
  local_30 = (CItem *)0x0;
  local_2c = 0;
  local_28 = 0;
  while( true ) {
    iVar3 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                      ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                       (in_stack_00000008 + 0x48));
    if (iVar3 <= (int)local_28) break;
                    /* try { // try from 0835345a to 08353587 has its CatchHandler @ 083535ad */
    piVar2 = (int *)std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::at
                              ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                               (in_stack_00000008 + 0x48),local_28);
    local_48 = *piVar2;
    local_44 = piVar2[1];
    iVar3 = piVar2[2];
    local_3c = piVar2[3];
    local_38 = piVar2[4];
    local_34 = piVar2[5];
    local_40 = iVar3;
    if (local_48 == in_stack_0000000c) {
      this = (CDataManager *)G_CDataManager();
      local_30 = (CItem *)CDataManager::find_item(this,iVar3);
      if (local_30 == (CItem *)0x0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","IntPairVector Quest::get_clear_itemlist(int) const",0x1279,
                   "G_CDataManager()->find_item(%d)",local_40);
      }
      else {
        cVar1 = CItem::is_stackable(local_30);
        if (cVar1 == '\0') {
          local_2c = get_rand_int(100);
          if (local_2c <= local_38) {
            local_50 = local_40;
            local_4c = 1;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                       (pair *)&local_50);
          }
        }
        else {
          local_24 = 0;
          for (local_20 = 0; local_20 < local_3c; local_20 = local_20 + 1) {
            local_2c = get_rand_int(100);
            if (local_2c <= local_38) {
              local_24 = local_24 + 1;
            }
          }
          if (0 < local_24) {
            local_50 = local_40;
            local_4c = local_24;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                       (pair *)&local_50);
          }
        }
      }
    }
    local_28 = local_28 + 1;
  }
  return param_1;
}
```
