# calc_quest_stat

`_ZN5CUser15calc_quest_statER15_Additioal_info`

`CUser::calc_quest_stat(_Additioal_info&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664c50  _ZN5CUser15calc_quest_statER15_Additioal_info
#           CUser::calc_quest_stat(_Additioal_info&)
# range [0x08664c50, 0x08664dcd]
08664c50 +0x000:  push   %ebp
08664c51 +0x001:  mov    %esp,%ebp
08664c53 +0x003:  push   %esi
08664c54 +0x004:  push   %ebx
08664c55 +0x005:  sub    $0x50,%esp
08664c58 +0x008:  lea    -0x1c(%ebp),%eax
08664c5b +0x00b:  mov    %eax,(%esp)
08664c5e +0x00e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08664c63 +0x013:  movl   $0x0,-0x10(%ebp)
08664c6a +0x01a:  jmp    08664c8a <+0x3a>
08664c6c +0x01c:  mov    -0x10(%ebp),%eax
08664c6f +0x01f:  shl    $0x2,%eax
08664c72 +0x022:  add    $&_ZL14elixir_item_id,%eax
08664c77 +0x027:  mov    %eax,0x4(%esp)
08664c7b +0x02b:  lea    -0x1c(%ebp),%eax
08664c7e +0x02e:  mov    %eax,(%esp)
08664c81 +0x031:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08664c86 +0x036:  addl   $0x1,-0x10(%ebp)
08664c8a +0x03a:  cmpl   $0x7,-0x10(%ebp)
08664c8e +0x03e:  setle  %al
08664c91 +0x041:  test   %al,%al
08664c93 +0x043:  jne    08664c6c <+0x1c>
08664c95 +0x045:  lea    -0x28(%ebp),%eax
08664c98 +0x048:  mov    %eax,(%esp)
08664c9b +0x04b:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08664ca0 +0x050:  lea    -0x28(%ebp),%eax
08664ca3 +0x053:  mov    %eax,0x8(%esp)
08664ca7 +0x057:  lea    -0x1c(%ebp),%eax
08664caa +0x05a:  mov    %eax,0x4(%esp)
08664cae +0x05e:  mov    0x8(%ebp),%eax
08664cb1 +0x061:  mov    %eax,(%esp)
08664cb4 +0x064:  call   0866514a <_ZN5CUser20count_specific_itemsERSt6vectorIiSaIiEERS0_ISt4pairIiiESaIS5_EE>  ; CUser::count_specific_items(std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08664cb9 +0x069:  lea    -0x34(%ebp),%eax
08664cbc +0x06c:  mov    %eax,(%esp)
08664cbf +0x06f:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08664cc4 +0x074:  mov    0x8(%ebp),%eax
08664cc7 +0x077:  mov    %eax,(%esp)
08664cca +0x07a:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08664ccf +0x07f:  lea    0x4(%eax),%edx
08664cd2 +0x082:  lea    -0x34(%ebp),%eax
08664cd5 +0x085:  mov    %eax,0x10(%esp)
08664cd9 +0x089:  lea    -0x1c(%ebp),%eax
08664cdc +0x08c:  mov    %eax,0xc(%esp)
08664ce0 +0x090:  mov    0x8(%ebp),%eax
08664ce3 +0x093:  mov    %eax,0x8(%esp)
08664ce7 +0x097:  movl   $&_ZN5CUser17_fnStatQuestClearEjPc,0x4(%esp)
08664cef +0x09f:  mov    %edx,(%esp)
08664cf2 +0x0a2:  call   0808bb88 <_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz>  ; WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const
08664cf7 +0x0a7:  lea    -0x28(%ebp),%eax
08664cfa +0x0aa:  mov    %eax,0x8(%esp)
08664cfe +0x0ae:  lea    -0x34(%ebp),%eax
08664d01 +0x0b1:  mov    %eax,0x4(%esp)
08664d05 +0x0b5:  mov    0x8(%ebp),%eax
08664d08 +0x0b8:  mov    %eax,(%esp)
08664d0b +0x0bb:  call   08664dce <_ZN5CUser20complete_reward_listERSt6vectorISt4pairIiiESaIS2_EES5_>  ; CUser::complete_reward_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08664d10 +0x0c0:  movl   $0x0,-0xc(%ebp)
08664d17 +0x0c7:  jmp    08664d45 <+0xf5>
08664d19 +0x0c9:  mov    -0xc(%ebp),%eax
08664d1c +0x0cc:  mov    %eax,0x4(%esp)
08664d20 +0x0d0:  lea    -0x34(%ebp),%eax
08664d23 +0x0d3:  mov    %eax,(%esp)
08664d26 +0x0d6:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08664d2b +0x0db:  mov    %eax,0x8(%esp)
08664d2f +0x0df:  mov    0xc(%ebp),%eax
08664d32 +0x0e2:  mov    %eax,0x4(%esp)
08664d36 +0x0e6:  mov    0x8(%ebp),%eax
08664d39 +0x0e9:  mov    %eax,(%esp)
08664d3c +0x0ec:  call   08665274 <_ZN5CUser17apply_elixir_itemER15_Additioal_infoRSt4pairIiiE>  ; CUser::apply_elixir_item(_Additioal_info&, std::pair<int, int>&)
08664d41 +0x0f1:  addl   $0x1,-0xc(%ebp)
08664d45 +0x0f5:  lea    -0x34(%ebp),%eax
08664d48 +0x0f8:  mov    %eax,(%esp)
08664d4b +0x0fb:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08664d50 +0x100:  cmp    -0xc(%ebp),%eax
08664d53 +0x103:  seta   %al
08664d56 +0x106:  test   %al,%al
08664d58 +0x108:  jne    08664d19 <+0xc9>
08664d5a +0x10a:  jmp    08664d71 <+0x121>
08664d5c +0x10c:  mov    %edx,%ebx
08664d5e +0x10e:  mov    %eax,%esi
08664d60 +0x110:  lea    -0x34(%ebp),%eax
08664d63 +0x113:  mov    %eax,(%esp)
08664d66 +0x116:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08664d6b +0x11b:  mov    %esi,%eax
08664d6d +0x11d:  mov    %ebx,%edx
08664d6f +0x11f:  jmp    08664d7e <+0x12e>
08664d71 +0x121:  lea    -0x34(%ebp),%eax
08664d74 +0x124:  mov    %eax,(%esp)
08664d77 +0x127:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08664d7c +0x12c:  jmp    08664d93 <+0x143>
08664d7e +0x12e:  mov    %edx,%ebx
08664d80 +0x130:  mov    %eax,%esi
08664d82 +0x132:  lea    -0x28(%ebp),%eax
08664d85 +0x135:  mov    %eax,(%esp)
08664d88 +0x138:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08664d8d +0x13d:  mov    %esi,%eax
08664d8f +0x13f:  mov    %ebx,%edx
08664d91 +0x141:  jmp    08664da0 <+0x150>
08664d93 +0x143:  lea    -0x28(%ebp),%eax
08664d96 +0x146:  mov    %eax,(%esp)
08664d99 +0x149:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08664d9e +0x14e:  jmp    08664dbb <+0x16b>
08664da0 +0x150:  mov    %edx,%ebx
08664da2 +0x152:  mov    %eax,%esi
08664da4 +0x154:  lea    -0x1c(%ebp),%eax
08664da7 +0x157:  mov    %eax,(%esp)
08664daa +0x15a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08664daf +0x15f:  mov    %esi,%eax
08664db1 +0x161:  mov    %ebx,%edx
08664db3 +0x163:  mov    %eax,(%esp)
08664db6 +0x166:  call   08ae3750 <_Unwind_Resume>
08664dbb +0x16b:  lea    -0x1c(%ebp),%eax
08664dbe +0x16e:  mov    %eax,(%esp)
08664dc1 +0x171:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08664dc6 +0x176:  add    $0x50,%esp
08664dc9 +0x179:  pop    %ebx
08664dca +0x17a:  pop    %esi
08664dcb +0x17b:  pop    %ebp
08664dcc +0x17c:  ret
08664dcd +0x17d:  nop
```

## 反编译 C

```c
// CUser::calc_quest_stat @ 0x8664c50

/* CUser::calc_quest_stat(_Additioal_info&) */

void __thiscall CUser::calc_quest_stat(CUser *this,_Additioal_info *param_1)

{
  int iVar1;
  pair *ppVar2;
  uint uVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_2c [12];
  vector<int,std::allocator<int>> local_20 [12];
  int local_14;
  uint local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_20);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
                    /* try { // try from 08664c81 to 08664c9f has its CatchHandler @ 08664da0 */
    std::vector<int,std::allocator<int>>::push_back
              (local_20,(int *)(::elixir_item_id + local_14 * 4));
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_2c);
                    /* try { // try from 08664cb4 to 08664cc3 has its CatchHandler @ 08664d7e */
  count_specific_items(this,(vector *)local_20,(vector *)local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_38);
  iVar1 = getCurCharacQuestR(this);
                    /* try { // try from 08664cf2 to 08664d0f has its CatchHandler @ 08664d5c */
  WongWork::CQuestClear::enumQuestClear
            ((CQuestClear *)(iVar1 + 4),_fnStatQuestClear,this,local_20,local_38);
  complete_reward_list(this,(vector *)local_38,(vector *)local_2c);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_38);
    if (uVar3 <= local_10) break;
    ppVar2 = (pair *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                               (local_38,local_10);
    apply_elixir_item(this,param_1,ppVar2);
    local_10 = local_10 + 1;
  }
                    /* try { // try from 08664d77 to 08664d7b has its CatchHandler @ 08664d7e */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_38);
                    /* try { // try from 08664d99 to 08664d9d has its CatchHandler @ 08664da0 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_2c);
  std::vector<int,std::allocator<int>>::~vector(local_20);
  return;
}
```
