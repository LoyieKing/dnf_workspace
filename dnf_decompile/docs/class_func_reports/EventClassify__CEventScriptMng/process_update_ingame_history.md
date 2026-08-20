# process_update_ingame_history

`_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser`

`EventClassify::CEventScriptMng::process_update_ingame_history(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c82e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c82e  _ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser
#           EventClassify::CEventScriptMng::process_update_ingame_history(CUser*)
# range [0x0810c82e, 0x0810c973]
0810c82e +0x000:  push   %ebp
0810c82f +0x001:  mov    %esp,%ebp
0810c831 +0x003:  push   %edi
0810c832 +0x004:  push   %esi
0810c833 +0x005:  push   %ebx
0810c834 +0x006:  sub    $0x2c,%esp
0810c837 +0x009:  cmpl   $0x0,0xc(%ebp)
0810c83b +0x00d:  je     0810c967 <+0x139>
0810c841 +0x013:  mov    0xc(%ebp),%eax
0810c844 +0x016:  mov    %eax,(%esp)
0810c847 +0x019:  call   0868d4fe <_ZN5CUser31get_ingame_event_history_updateEv>  ; CUser::get_ingame_event_history_update()
0810c84c +0x01e:  lea    -0x24(%ebp),%edx
0810c84f +0x021:  mov    %eax,0x4(%esp)
0810c853 +0x025:  mov    %edx,(%esp)
0810c856 +0x028:  call   081118d0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xde2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xde2
0810c85b +0x02d:  sub    $0x4,%esp
0810c85e +0x030:  jmp    0810c92e <+0x100>
0810c863 +0x035:  lea    -0x24(%ebp),%eax
0810c866 +0x038:  mov    %eax,(%esp)
0810c869 +0x03b:  call   08111930 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe42>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe42
0810c86e +0x040:  movzbl 0x4(%eax),%eax
0810c872 +0x044:  test   %al,%al
0810c874 +0x046:  je     0810c92e <+0x100>
0810c87a +0x04c:  lea    -0x24(%ebp),%eax
0810c87d +0x04f:  mov    %eax,(%esp)
0810c880 +0x052:  call   08111930 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe42>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe42
0810c885 +0x057:  mov    %eax,%ebx
0810c887 +0x059:  mov    0xc(%ebp),%eax
0810c88a +0x05c:  mov    %eax,(%esp)
0810c88d +0x05f:  call   0868d4f0 <_ZN5CUser24get_ingame_event_historyEv>  ; CUser::get_ingame_event_history()
0810c892 +0x064:  lea    -0x28(%ebp),%edx
0810c895 +0x067:  mov    %ebx,0x8(%esp)
0810c899 +0x06b:  mov    %eax,0x4(%esp)
0810c89d +0x06f:  mov    %edx,(%esp)
0810c8a0 +0x072:  call   0811193e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe50>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe50
0810c8a5 +0x077:  sub    $0x4,%esp
0810c8a8 +0x07a:  mov    0xc(%ebp),%eax
0810c8ab +0x07d:  mov    %eax,(%esp)
0810c8ae +0x080:  call   0868d4f0 <_ZN5CUser24get_ingame_event_historyEv>  ; CUser::get_ingame_event_history()
0810c8b3 +0x085:  lea    -0x1c(%ebp),%edx
0810c8b6 +0x088:  mov    %eax,0x4(%esp)
0810c8ba +0x08c:  mov    %edx,(%esp)
0810c8bd +0x08f:  call   0811196a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe7c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe7c
0810c8c2 +0x094:  sub    $0x4,%esp
0810c8c5 +0x097:  lea    -0x1c(%ebp),%eax
0810c8c8 +0x09a:  mov    %eax,0x4(%esp)
0810c8cc +0x09e:  lea    -0x28(%ebp),%eax
0810c8cf +0x0a1:  mov    %eax,(%esp)
0810c8d2 +0x0a4:  call   08111990 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xea2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xea2
0810c8d7 +0x0a9:  test   %al,%al
0810c8d9 +0x0ab:  je     0810c923 <+0xf5>
0810c8db +0x0ad:  lea    -0x28(%ebp),%eax
0810c8de +0x0b0:  mov    %eax,(%esp)
0810c8e1 +0x0b3:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810c8e6 +0x0b8:  mov    0x8(%eax),%edi
0810c8e9 +0x0bb:  lea    -0x28(%ebp),%eax
0810c8ec +0x0be:  mov    %eax,(%esp)
0810c8ef +0x0c1:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810c8f4 +0x0c6:  mov    0x4(%eax),%esi
0810c8f7 +0x0c9:  lea    -0x24(%ebp),%eax
0810c8fa +0x0cc:  mov    %eax,(%esp)
0810c8fd +0x0cf:  call   08111930 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe42>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe42
0810c902 +0x0d4:  mov    (%eax),%ebx
0810c904 +0x0d6:  mov    0xc(%ebp),%eax
0810c907 +0x0d9:  mov    %eax,(%esp)
0810c90a +0x0dc:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810c90f +0x0e1:  mov    %edi,0xc(%esp)
0810c913 +0x0e5:  mov    %esi,0x8(%esp)
0810c917 +0x0e9:  mov    %ebx,0x4(%esp)
0810c91b +0x0ed:  mov    %eax,(%esp)
0810c91e +0x0f0:  call   08444ac4 <_ZN27DB_UpdateInGameEventHistory11makeRequestEjiii>  ; DB_UpdateInGameEventHistory::makeRequest(unsigned int, int, int, int)
0810c923 +0x0f5:  lea    -0x24(%ebp),%eax
0810c926 +0x0f8:  mov    %eax,(%esp)
0810c929 +0x0fb:  call   081119b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xec4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xec4
0810c92e +0x100:  mov    0xc(%ebp),%eax
0810c931 +0x103:  mov    %eax,(%esp)
0810c934 +0x106:  call   0868d4fe <_ZN5CUser31get_ingame_event_history_updateEv>  ; CUser::get_ingame_event_history_update()
0810c939 +0x10b:  lea    -0x20(%ebp),%edx
0810c93c +0x10e:  mov    %eax,0x4(%esp)
0810c940 +0x112:  mov    %edx,(%esp)
0810c943 +0x115:  call   081118f6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe08>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe08
0810c948 +0x11a:  sub    $0x4,%esp
0810c94b +0x11d:  lea    -0x20(%ebp),%eax
0810c94e +0x120:  mov    %eax,0x4(%esp)
0810c952 +0x124:  lea    -0x24(%ebp),%eax
0810c955 +0x127:  mov    %eax,(%esp)
0810c958 +0x12a:  call   0811191c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe2e
0810c95d +0x12f:  test   %al,%al
0810c95f +0x131:  jne    0810c863 <+0x35>
0810c965 +0x137:  jmp    0810c968 <+0x13a>
0810c967 +0x139:  nop
0810c968 +0x13a:  lea    -0xc(%ebp),%esp
0810c96b +0x13d:  add    $0x0,%esp
0810c96e +0x140:  pop    %ebx
0810c96f +0x141:  pop    %esi
0810c970 +0x142:  pop    %edi
0810c971 +0x143:  pop    %ebp
0810c972 +0x144:  ret
0810c973 +0x145:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_update_ingame_history @ 0x810c82e

/* EventClassify::CEventScriptMng::process_update_ingame_history(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::process_update_ingame_history(CEventScriptMng *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_2c [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_28 [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_24 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [16];
  
  if (param_1 != (CUser *)0x0) {
    CUser::get_ingame_event_history_update(param_1);
    std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::begin(local_28);
    while( true ) {
      CUser::get_ingame_event_history_update(param_1);
      std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::end(local_24);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28,
                         (_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
      if (*(char *)(iVar3 + 4) != '\0') {
        std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                  ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
        CUser::get_ingame_event_history(param_1);
        std::
        map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
        ::find((int *)local_2c);
        CUser::get_ingame_event_history(param_1);
        std::
        map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
        ::end(local_20);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                          (local_2c,(_Rb_tree_const_iterator *)local_20);
        if (cVar2 != '\0') {
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                            (local_2c);
          iVar3 = *(int *)(iVar3 + 8);
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                            (local_2c);
          iVar4 = *(int *)(iVar4 + 4);
          piVar5 = (int *)std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                                    ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28)
          ;
          iVar1 = *piVar5;
          uVar6 = CUser::get_acc_id(param_1);
          DB_UpdateInGameEventHistory::makeRequest(uVar6,iVar1,iVar4,iVar3);
        }
        std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
      }
    }
  }
  return;
}
```
