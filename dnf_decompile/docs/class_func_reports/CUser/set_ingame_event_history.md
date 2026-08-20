# set_ingame_event_history

`_ZN5CUser24set_ingame_event_historyEiii`

`CUser::set_ingame_event_history(int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d580  _ZN5CUser24set_ingame_event_historyEiii
#           CUser::set_ingame_event_history(int, int, int)
# range [0x0868d580, 0x0868d663]
0868d580 +0x00:  push   %ebp
0868d581 +0x01:  mov    %esp,%ebp
0868d583 +0x03:  sub    $0x48,%esp
0868d586 +0x06:  mov    0x8(%ebp),%eax
0868d589 +0x09:  lea    0x8eb68(%eax),%ecx
0868d58f +0x0f:  lea    -0x24(%ebp),%eax
0868d592 +0x12:  lea    0xc(%ebp),%edx
0868d595 +0x15:  mov    %edx,0x8(%esp)
0868d599 +0x19:  mov    %ecx,0x4(%esp)
0868d59d +0x1d:  mov    %eax,(%esp)
0868d5a0 +0x20:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
0868d5a5 +0x25:  sub    $0x4,%esp
0868d5a8 +0x28:  mov    0x8(%ebp),%eax
0868d5ab +0x2b:  lea    0x8eb68(%eax),%edx
0868d5b1 +0x31:  lea    -0x20(%ebp),%eax
0868d5b4 +0x34:  mov    %edx,0x4(%esp)
0868d5b8 +0x38:  mov    %eax,(%esp)
0868d5bb +0x3b:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
0868d5c0 +0x40:  sub    $0x4,%esp
0868d5c3 +0x43:  lea    -0x20(%ebp),%eax
0868d5c6 +0x46:  mov    %eax,0x4(%esp)
0868d5ca +0x4a:  lea    -0x24(%ebp),%eax
0868d5cd +0x4d:  mov    %eax,(%esp)
0868d5d0 +0x50:  call   081b47d4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x48>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x48
0868d5d5 +0x55:  test   %al,%al
0868d5d7 +0x57:  je     0868d5fd <+0x7d>
0868d5d9 +0x59:  lea    -0x24(%ebp),%eax
0868d5dc +0x5c:  mov    %eax,(%esp)
0868d5df +0x5f:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
0868d5e4 +0x64:  mov    0x10(%ebp),%edx
0868d5e7 +0x67:  mov    %edx,0x4(%eax)
0868d5ea +0x6a:  lea    -0x24(%ebp),%eax
0868d5ed +0x6d:  mov    %eax,(%esp)
0868d5f0 +0x70:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
0868d5f5 +0x75:  mov    0x14(%ebp),%edx
0868d5f8 +0x78:  mov    %edx,0x8(%eax)
0868d5fb +0x7b:  jmp    0868d64f <+0xcf>
0868d5fd +0x7d:  lea    -0x2c(%ebp),%eax
0868d600 +0x80:  mov    %eax,(%esp)
0868d603 +0x83:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0868d608 +0x88:  mov    0x10(%ebp),%eax
0868d60b +0x8b:  mov    %eax,-0x2c(%ebp)
0868d60e +0x8e:  mov    0x14(%ebp),%eax
0868d611 +0x91:  mov    %eax,-0x28(%ebp)
0868d614 +0x94:  lea    -0x2c(%ebp),%eax
0868d617 +0x97:  mov    %eax,0x8(%esp)
0868d61b +0x9b:  lea    0xc(%ebp),%eax
0868d61e +0x9e:  mov    %eax,0x4(%esp)
0868d622 +0xa2:  lea    -0x14(%ebp),%eax
0868d625 +0xa5:  mov    %eax,(%esp)
0868d628 +0xa8:  call   0869ca08 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x925d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x925d
0868d62d +0xad:  mov    0x8(%ebp),%eax
0868d630 +0xb0:  lea    0x8eb68(%eax),%ecx
0868d636 +0xb6:  lea    -0x1c(%ebp),%eax
0868d639 +0xb9:  lea    -0x14(%ebp),%edx
0868d63c +0xbc:  mov    %edx,0x8(%esp)
0868d640 +0xc0:  mov    %ecx,0x4(%esp)
0868d644 +0xc4:  mov    %eax,(%esp)
0868d647 +0xc7:  call   0869ca3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9291
0868d64c +0xcc:  sub    $0x4,%esp
0868d64f +0xcf:  mov    0xc(%ebp),%eax
0868d652 +0xd2:  mov    %eax,0x4(%esp)
0868d656 +0xd6:  mov    0x8(%ebp),%eax
0868d659 +0xd9:  mov    %eax,(%esp)
0868d65c +0xdc:  call   0868d72c <_ZN5CUser27update_ingame_event_historyEi>  ; CUser::update_ingame_event_history(int)
0868d661 +0xe1:  leave
0868d662 +0xe2:  ret
0868d663 +0xe3:  nop
```

## 反编译 C

```c
// CUser::set_ingame_event_history @ 0x868d580

/* CUser::set_ingame_event_history(int, int, int) */

void __thiscall CUser::set_ingame_event_history(CUser *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_30;
  int local_2c;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_28 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_24 [4];
  pair local_20 [8];
  pair<int_const,std::pair<int,int>> local_18 [20];
  
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_28);
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                    (local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    std::pair<int,int>::pair((pair<int,int> *)&local_30);
    local_30 = param_2;
    local_2c = param_3;
    std::pair<int_const,std::pair<int,int>>::pair<int_const&,std::pair<int,int>&>
              (local_18,&param_1,(pair *)&local_30);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::insert(local_20);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    *(int *)(iVar2 + 4) = param_2;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    *(int *)(iVar2 + 8) = param_3;
  }
  update_ingame_event_history((int)this);
  return;
}
```
