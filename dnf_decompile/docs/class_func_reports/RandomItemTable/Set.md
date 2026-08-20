# Set

`_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE`

`RandomItemTable::Set(std::vector<int, std::allocator<int> >*)`

| 类 | 地址 |
|---|---|
| `RandomItemTable` | `0x089bba40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089bba40  _ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE
#           RandomItemTable::Set(std::vector<int, std::allocator<int> >*)
# range [0x089bba40, 0x089bbb6b]
089bba40 +0x000:  push   %ebp
089bba41 +0x001:  mov    %esp,%ebp
089bba43 +0x003:  sub    $0x38,%esp
089bba46 +0x006:  mov    0x8(%ebp),%eax
089bba49 +0x009:  add    $0x4,%eax
089bba4c +0x00c:  mov    %eax,(%esp)
089bba4f +0x00f:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
089bba54 +0x014:  mov    0x8(%ebp),%eax
089bba57 +0x017:  movl   $0x0,(%eax)
089bba5d +0x01d:  lea    -0x1c(%ebp),%eax
089bba60 +0x020:  mov    0xc(%ebp),%edx
089bba63 +0x023:  mov    %edx,0x4(%esp)
089bba67 +0x027:  mov    %eax,(%esp)
089bba6a +0x02a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
089bba6f +0x02f:  sub    $0x4,%esp
089bba72 +0x032:  jmp    089bbb37 <+0xf7>
089bba77 +0x037:  lea    -0x24(%ebp),%eax
089bba7a +0x03a:  mov    %eax,(%esp)
089bba7d +0x03d:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
089bba82 +0x042:  lea    -0x1c(%ebp),%eax
089bba85 +0x045:  mov    %eax,(%esp)
089bba88 +0x048:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
089bba8d +0x04d:  mov    (%eax),%eax
089bba8f +0x04f:  mov    %eax,-0x24(%ebp)
089bba92 +0x052:  lea    -0x14(%ebp),%eax
089bba95 +0x055:  movl   $0x0,0x8(%esp)
089bba9d +0x05d:  lea    -0x1c(%ebp),%edx
089bbaa0 +0x060:  mov    %edx,0x4(%esp)
089bbaa4 +0x064:  mov    %eax,(%esp)
089bbaa7 +0x067:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
089bbaac +0x06c:  sub    $0x4,%esp
089bbaaf +0x06f:  lea    -0x10(%ebp),%eax
089bbab2 +0x072:  mov    0xc(%ebp),%edx
089bbab5 +0x075:  mov    %edx,0x4(%esp)
089bbab9 +0x079:  mov    %eax,(%esp)
089bbabc +0x07c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
089bbac1 +0x081:  sub    $0x4,%esp
089bbac4 +0x084:  lea    -0x10(%ebp),%eax
089bbac7 +0x087:  mov    %eax,0x4(%esp)
089bbacb +0x08b:  lea    -0x1c(%ebp),%eax
089bbace +0x08e:  mov    %eax,(%esp)
089bbad1 +0x091:  call   082688da <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x26b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x26b
089bbad6 +0x096:  test   %al,%al
089bbad8 +0x098:  jne    089bbb68 <+0x128>
089bbade +0x09e:  lea    -0x1c(%ebp),%eax
089bbae1 +0x0a1:  mov    %eax,(%esp)
089bbae4 +0x0a4:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
089bbae9 +0x0a9:  mov    (%eax),%eax
089bbaeb +0x0ab:  mov    %eax,-0x20(%ebp)
089bbaee +0x0ae:  mov    0x8(%ebp),%eax
089bbaf1 +0x0b1:  mov    (%eax),%edx
089bbaf3 +0x0b3:  mov    -0x20(%ebp),%eax
089bbaf6 +0x0b6:  add    %eax,%edx
089bbaf8 +0x0b8:  mov    0x8(%ebp),%eax
089bbafb +0x0bb:  mov    %edx,(%eax)
089bbafd +0x0bd:  mov    0x8(%ebp),%eax
089bbb00 +0x0c0:  mov    (%eax),%eax
089bbb02 +0x0c2:  mov    %eax,-0x20(%ebp)
089bbb05 +0x0c5:  mov    0x8(%ebp),%eax
089bbb08 +0x0c8:  lea    0x4(%eax),%edx
089bbb0b +0x0cb:  lea    -0x24(%ebp),%eax
089bbb0e +0x0ce:  mov    %eax,0x4(%esp)
089bbb12 +0x0d2:  mov    %edx,(%esp)
089bbb15 +0x0d5:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
089bbb1a +0x0da:  lea    -0xc(%ebp),%eax
089bbb1d +0x0dd:  movl   $0x0,0x8(%esp)
089bbb25 +0x0e5:  lea    -0x1c(%ebp),%edx
089bbb28 +0x0e8:  mov    %edx,0x4(%esp)
089bbb2c +0x0ec:  mov    %eax,(%esp)
089bbb2f +0x0ef:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
089bbb34 +0x0f4:  sub    $0x4,%esp
089bbb37 +0x0f7:  lea    -0x18(%ebp),%eax
089bbb3a +0x0fa:  mov    0xc(%ebp),%edx
089bbb3d +0x0fd:  mov    %edx,0x4(%esp)
089bbb41 +0x101:  mov    %eax,(%esp)
089bbb44 +0x104:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
089bbb49 +0x109:  sub    $0x4,%esp
089bbb4c +0x10c:  lea    -0x18(%ebp),%eax
089bbb4f +0x10f:  mov    %eax,0x4(%esp)
089bbb53 +0x113:  lea    -0x1c(%ebp),%eax
089bbb56 +0x116:  mov    %eax,(%esp)
089bbb59 +0x119:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
089bbb5e +0x11e:  test   %al,%al
089bbb60 +0x120:  jne    089bba77 <+0x37>
089bbb66 +0x126:  jmp    089bbb69 <+0x129>
089bbb68 +0x128:  nop
089bbb69 +0x129:  leave
089bbb6a +0x12a:  ret
089bbb6b +0x12b:  nop
```

## 反编译 C

```c
// RandomItemTable::Set @ 0x89bba40

/* RandomItemTable::Set(std::vector<int, std::allocator<int> >*) */

void RandomItemTable::Set(vector *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(param_1 + 4));
  *(undefined4 *)param_1 = 0;
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
    if (!bVar1) {
      return;
    }
    std::pair<int,int>::pair((pair<int,int> *)&local_28);
    puVar2 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       (local_20);
    local_28 = *puVar2;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_20);
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator==(local_20,local_14);
    if (bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    *(int *)param_1 = *(int *)param_1 + *piVar3;
    local_24 = *(undefined4 *)param_1;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(param_1 + 4),
               (pair *)&local_28);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_10,(int)local_20);
  }
  return;
}
```
