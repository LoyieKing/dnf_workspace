# setInitQuestPoint

`_ZN5CUser17setInitQuestPointEv`

`CUser::setInitQuestPoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868adfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868adfc  _ZN5CUser17setInitQuestPointEv
#           CUser::setInitQuestPoint()
# range [0x0868adfc, 0x0868af2b]
0868adfc +0x000:  push   %ebp
0868adfd +0x001:  mov    %esp,%ebp
0868adff +0x003:  push   %ebx
0868ae00 +0x004:  sub    $0x24,%esp
0868ae03 +0x007:  mov    0x8(%ebp),%eax
0868ae06 +0x00a:  mov    %eax,(%esp)
0868ae09 +0x00d:  call   0868ad88 <_ZN5CUser19clearInitQuestPointEv>  ; CUser::clearInitQuestPoint()
0868ae0e +0x012:  mov    0x8(%ebp),%eax
0868ae11 +0x015:  mov    %eax,(%esp)
0868ae14 +0x018:  call   0868afd0 <_ZN5CUser15clearQuestPieceEv>  ; CUser::clearQuestPiece()
0868ae19 +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868ae1e +0x022:  mov    0x18(%eax),%eax
0868ae21 +0x025:  movl   $0x0,0x4(%esp)
0868ae29 +0x02d:  mov    %eax,(%esp)
0868ae2c +0x030:  call   08355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>  ; QuestList::getQuestNPCList(ENUM_QUEST_GRADE)
0868ae31 +0x035:  mov    %eax,-0x10(%ebp)
0868ae34 +0x038:  lea    -0x14(%ebp),%eax
0868ae37 +0x03b:  mov    -0x10(%ebp),%edx
0868ae3a +0x03e:  mov    %edx,0x4(%esp)
0868ae3e +0x042:  mov    %eax,(%esp)
0868ae41 +0x045:  call   0819afa4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xc8a>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xc8a
0868ae46 +0x04a:  sub    $0x4,%esp
0868ae49 +0x04d:  lea    -0x18(%ebp),%eax
0868ae4c +0x050:  mov    -0x10(%ebp),%edx
0868ae4f +0x053:  mov    %edx,0x4(%esp)
0868ae53 +0x057:  mov    %eax,(%esp)
0868ae56 +0x05a:  call   0819afca <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcb0>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcb0
0868ae5b +0x05f:  sub    $0x4,%esp
0868ae5e +0x062:  jmp    0868af0d <+0x111>
0868ae63 +0x067:  lea    -0x18(%ebp),%eax
0868ae66 +0x06a:  mov    %eax,(%esp)
0868ae69 +0x06d:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0868ae6e +0x072:  mov    0x4(%eax),%ebx
0868ae71 +0x075:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868ae76 +0x07a:  mov    %ebx,0x4(%esp)
0868ae7a +0x07e:  mov    %eax,(%esp)
0868ae7d +0x081:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0868ae82 +0x086:  mov    %eax,-0xc(%ebp)
0868ae85 +0x089:  cmpl   $0x0,-0xc(%ebp)
0868ae89 +0x08d:  je     0868af01 <+0x105>
0868ae8b +0x08f:  lea    -0x18(%ebp),%eax
0868ae8e +0x092:  mov    %eax,(%esp)
0868ae91 +0x095:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0868ae96 +0x09a:  mov    0x4(%eax),%eax
0868ae99 +0x09d:  mov    %eax,%ebx
0868ae9b +0x09f:  mov    0x8(%ebp),%eax
0868ae9e +0x0a2:  mov    %eax,(%esp)
0868aea1 +0x0a5:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0868aea6 +0x0aa:  add    $0x4,%eax
0868aea9 +0x0ad:  mov    %ebx,0x4(%esp)
0868aead +0x0b1:  mov    %eax,(%esp)
0868aeb0 +0x0b4:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
0868aeb5 +0x0b9:  test   %al,%al
0868aeb7 +0x0bb:  je     0868af02 <+0x106>
0868aeb9 +0x0bd:  mov    -0xc(%ebp),%eax
0868aebc +0x0c0:  movzwl 0x138(%eax),%eax
0868aec3 +0x0c7:  cwtl
0868aec4 +0x0c8:  mov    %eax,0x4(%esp)
0868aec8 +0x0cc:  mov    0x8(%ebp),%eax
0868aecb +0x0cf:  mov    %eax,(%esp)
0868aece +0x0d2:  call   0868adc2 <_ZN5CUser17incInitQuestPointEi>  ; CUser::incInitQuestPoint(int)
0868aed3 +0x0d7:  mov    -0xc(%ebp),%eax
0868aed6 +0x0da:  mov    0x4(%eax),%edx
0868aed9 +0x0dd:  mov    -0xc(%ebp),%eax
0868aedc +0x0e0:  movzwl 0x13a(%eax),%eax
0868aee3 +0x0e7:  cwtl
0868aee4 +0x0e8:  movl   $0x1,0xc(%esp)
0868aeec +0x0f0:  mov    %edx,0x8(%esp)
0868aef0 +0x0f4:  mov    %eax,0x4(%esp)
0868aef4 +0x0f8:  mov    0x8(%ebp),%eax
0868aef7 +0x0fb:  mov    %eax,(%esp)
0868aefa +0x0fe:  call   0868af66 <_ZN5CUser13incQuestPieceEiib>  ; CUser::incQuestPiece(int, int, bool)
0868aeff +0x103:  jmp    0868af02 <+0x106>
0868af01 +0x105:  nop
0868af02 +0x106:  lea    -0x18(%ebp),%eax
0868af05 +0x109:  mov    %eax,(%esp)
0868af08 +0x10c:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
0868af0d +0x111:  lea    -0x14(%ebp),%eax
0868af10 +0x114:  mov    %eax,0x4(%esp)
0868af14 +0x118:  lea    -0x18(%ebp),%eax
0868af17 +0x11b:  mov    %eax,(%esp)
0868af1a +0x11e:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
0868af1f +0x123:  test   %al,%al
0868af21 +0x125:  jne    0868ae63 <+0x67>
0868af27 +0x12b:  mov    -0x4(%ebp),%ebx
0868af2a +0x12e:  leave
0868af2b +0x12f:  ret
```

## 反编译 C

```c
// CUser::setInitQuestPoint @ 0x868adfc

/* CUser::setInitQuestPoint() */

void __thiscall CUser::setInitQuestPoint(CUser *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  undefined4 local_14;
  int local_10;
  
  clearInitQuestPoint(this);
  clearQuestPiece(this);
  iVar3 = G_CDataManager();
  local_14 = QuestList::getQuestNPCList(*(QuestList **)(iVar3 + 0x18),0);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_const_iterator *)local_18);
    if (cVar2 == '\0') break;
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
              ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c);
    iVar3 = G_CDataManager();
    local_10 = CDataManager::find_quest(iVar3);
    if (local_10 != 0) {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c);
      uVar1 = *(uint *)(iVar3 + 4);
      iVar3 = getCurCharacQuestR(this);
      cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
      if (cVar2 != '\0') {
        incInitQuestPoint(this,(int)*(short *)(local_10 + 0x138));
        incQuestPiece(this,(int)*(short *)(local_10 + 0x13a),*(int *)(local_10 + 4),true);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c);
  }
  return;
}
```
