# get_ingame_event_record_type_list

`_ZN13EventClassify15CEventScriptMng33get_ingame_event_record_type_listERSt6vectorIiSaIiEE`

`EventClassify::CEventScriptMng::get_ingame_event_record_type_list(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c6e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c6e2  _ZN13EventClassify15CEventScriptMng33get_ingame_event_record_type_listERSt6vectorIiSaIiEE
#           EventClassify::CEventScriptMng::get_ingame_event_record_type_list(std::vector<int, std::allocator<int> >&)
# range [0x0810c6e2, 0x0810c75b]
0810c6e2 +0x00:  push   %ebp
0810c6e3 +0x01:  mov    %esp,%ebp
0810c6e5 +0x03:  sub    $0x28,%esp
0810c6e8 +0x06:  mov    0xc(%ebp),%eax
0810c6eb +0x09:  mov    %eax,(%esp)
0810c6ee +0x0c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0810c6f3 +0x11:  mov    0x8(%ebp),%edx
0810c6f6 +0x14:  lea    -0xc(%ebp),%eax
0810c6f9 +0x17:  mov    %edx,0x4(%esp)
0810c6fd +0x1b:  mov    %eax,(%esp)
0810c700 +0x1e:  call   081117ba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xccc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xccc
0810c705 +0x23:  sub    $0x4,%esp
0810c708 +0x26:  mov    0x8(%ebp),%edx
0810c70b +0x29:  lea    -0x10(%ebp),%eax
0810c70e +0x2c:  mov    %edx,0x4(%esp)
0810c712 +0x30:  mov    %eax,(%esp)
0810c715 +0x33:  call   081117e0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xcf2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xcf2
0810c71a +0x38:  sub    $0x4,%esp
0810c71d +0x3b:  jmp    0810c744 <+0x62>
0810c71f +0x3d:  lea    -0xc(%ebp),%eax
0810c722 +0x40:  mov    %eax,(%esp)
0810c725 +0x43:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810c72a +0x48:  mov    %eax,0x4(%esp)
0810c72e +0x4c:  mov    0xc(%ebp),%eax
0810c731 +0x4f:  mov    %eax,(%esp)
0810c734 +0x52:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0810c739 +0x57:  lea    -0xc(%ebp),%eax
0810c73c +0x5a:  mov    %eax,(%esp)
0810c73f +0x5d:  call   08111828 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd3a
0810c744 +0x62:  lea    -0x10(%ebp),%eax
0810c747 +0x65:  mov    %eax,0x4(%esp)
0810c74b +0x69:  lea    -0xc(%ebp),%eax
0810c74e +0x6c:  mov    %eax,(%esp)
0810c751 +0x6f:  call   08111806 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd18
0810c756 +0x74:  test   %al,%al
0810c758 +0x76:  jne    0810c71f <+0x3d>
0810c75a +0x78:  leave
0810c75b +0x79:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_ingame_event_record_type_list @ 0x810c6e2

/* EventClassify::CEventScriptMng::get_ingame_event_record_type_list(std::vector<int,
   std::allocator<int> >&) */

void __thiscall
EventClassify::CEventScriptMng::get_ingame_event_record_type_list
          (CEventScriptMng *this,vector *param_1)

{
  char cVar1;
  int *piVar2;
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_14 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_10 [12];
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_1);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::begin(local_10);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_1,piVar2);
    std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10);
  }
  return;
}
```
