# GetConditionRewardInfo

`_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc`

`CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x083353a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083353a0  _ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc
#           CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)
# range [0x083353a0, 0x083354ef]
083353a0 +0x000:  push   %ebp
083353a1 +0x001:  mov    %esp,%ebp
083353a3 +0x003:  sub    $0x58,%esp
083353a6 +0x006:  mov    0xc(%ebp),%ecx
083353a9 +0x009:  mov    0x14(%ebp),%edx
083353ac +0x00c:  mov    0x18(%ebp),%eax
083353af +0x00f:  mov    %cl,-0x3c(%ebp)
083353b2 +0x012:  mov    %dx,-0x40(%ebp)
083353b6 +0x016:  mov    %al,-0x44(%ebp)
083353b9 +0x019:  mov    &_ZN10GlobalData15s_event_managerE,%eax
083353be +0x01e:  movl   $0x71,0x4(%esp)
083353c6 +0x026:  mov    %eax,(%esp)
083353c9 +0x029:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
083353ce +0x02e:  mov    (%eax),%edx
083353d0 +0x030:  add    $0x34,%edx
083353d3 +0x033:  mov    (%edx),%edx
083353d5 +0x035:  movl   $0x0,0x4(%esp)
083353dd +0x03d:  mov    %eax,(%esp)
083353e0 +0x040:  call   *%edx
083353e2 +0x042:  xor    $0x1,%eax
083353e5 +0x045:  test   %al,%al
083353e7 +0x047:  jne    083354e9 <+0x149>
083353ed +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083353f2 +0x052:  mov    0x4d98(%eax),%eax
083353f8 +0x058:  mov    %eax,-0x10(%ebp)
083353fb +0x05b:  movswl -0x40(%ebp),%eax
083353ff +0x05f:  cmp    -0x10(%ebp),%eax
08335402 +0x062:  jne    083354ec <+0x14c>
08335408 +0x068:  mov    0x10(%ebp),%eax
0833540b +0x06b:  mov    %eax,(%esp)
0833540e +0x06e:  call   08335dd0 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x276>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x276
08335413 +0x073:  cmpb   $0x0,-0x3c(%ebp)
08335417 +0x077:  jne    08335428 <+0x88>
08335419 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833541e +0x07e:  add    $0x4db8,%eax
08335423 +0x083:  mov    %eax,-0xc(%ebp)
08335426 +0x086:  jmp    08335435 <+0x95>
08335428 +0x088:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833542d +0x08d:  add    $0x4dd0,%eax
08335432 +0x092:  mov    %eax,-0xc(%ebp)
08335435 +0x095:  movsbl -0x44(%ebp),%eax
08335439 +0x099:  mov    %eax,-0x1c(%ebp)
0833543c +0x09c:  lea    -0x20(%ebp),%eax
0833543f +0x09f:  lea    -0x1c(%ebp),%edx
08335442 +0x0a2:  mov    %edx,0x8(%esp)
08335446 +0x0a6:  mov    -0xc(%ebp),%edx
08335449 +0x0a9:  mov    %edx,0x4(%esp)
0833544d +0x0ad:  mov    %eax,(%esp)
08335450 +0x0b0:  call   08335dec <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x292>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x292
08335455 +0x0b5:  sub    $0x4,%esp
08335458 +0x0b8:  movsbl -0x44(%ebp),%eax
0833545c +0x0bc:  mov    %eax,-0x18(%ebp)
0833545f +0x0bf:  lea    -0x24(%ebp),%eax
08335462 +0x0c2:  lea    -0x18(%ebp),%edx
08335465 +0x0c5:  mov    %edx,0x8(%esp)
08335469 +0x0c9:  mov    -0xc(%ebp),%edx
0833546c +0x0cc:  mov    %edx,0x4(%esp)
08335470 +0x0d0:  mov    %eax,(%esp)
08335473 +0x0d3:  call   08335e18 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x2be>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x2be
08335478 +0x0d8:  sub    $0x4,%esp
0833547b +0x0db:  mov    -0x20(%ebp),%eax
0833547e +0x0de:  mov    %eax,-0x28(%ebp)
08335481 +0x0e1:  jmp    083354d1 <+0x131>
08335483 +0x0e3:  lea    -0x28(%ebp),%eax
08335486 +0x0e6:  mov    %eax,(%esp)
08335489 +0x0e9:  call   08335e58 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x2fe>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x2fe
0833548e +0x0ee:  mov    0x4(%eax),%edx
08335491 +0x0f1:  mov    %edx,-0x34(%ebp)
08335494 +0x0f4:  mov    0x8(%eax),%edx
08335497 +0x0f7:  mov    %edx,-0x30(%ebp)
0833549a +0x0fa:  movzwl 0xc(%eax),%eax
0833549e +0x0fe:  mov    %ax,-0x2c(%ebp)
083354a2 +0x102:  lea    -0x34(%ebp),%eax
083354a5 +0x105:  mov    %eax,0x4(%esp)
083354a9 +0x109:  mov    0x10(%ebp),%eax
083354ac +0x10c:  mov    %eax,(%esp)
083354af +0x10f:  call   08335e66 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x30c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x30c
083354b4 +0x114:  lea    -0x14(%ebp),%eax
083354b7 +0x117:  movl   $0x0,0x8(%esp)
083354bf +0x11f:  lea    -0x28(%ebp),%edx
083354c2 +0x122:  mov    %edx,0x4(%esp)
083354c6 +0x126:  mov    %eax,(%esp)
083354c9 +0x129:  call   08335eda <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x380>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x380
083354ce +0x12e:  sub    $0x4,%esp
083354d1 +0x131:  lea    -0x24(%ebp),%eax
083354d4 +0x134:  mov    %eax,0x4(%esp)
083354d8 +0x138:  lea    -0x28(%ebp),%eax
083354db +0x13b:  mov    %eax,(%esp)
083354de +0x13e:  call   08335e44 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x2ea>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x2ea
083354e3 +0x143:  test   %al,%al
083354e5 +0x145:  jne    08335483 <+0xe3>
083354e7 +0x147:  jmp    083354ed <+0x14d>
083354e9 +0x149:  nop
083354ea +0x14a:  jmp    083354ed <+0x14d>
083354ec +0x14c:  nop
083354ed +0x14d:  leave
083354ee +0x14e:  ret
083354ef +0x14f:  nop
```

## 反编译 C

```c
// CConditionEventManager::GetConditionRewardInfo @ 0x83353a0

/* CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&, short, char) */

void __thiscall
CConditionEventManager::GetConditionRewardInfo
          (CConditionEventManager *this,char param_1,vector *param_2,short param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
  local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  _Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>> local_18 [4];
  int local_14;
  int *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar3 = G_CDataManager();
    local_14 = *(int *)(iVar3 + 0x4d98);
    if (param_3 == local_14) {
      std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::clear
                ((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> *)
                 param_2);
      if (param_1 == '\0') {
        iVar3 = G_CDataManager();
        local_10 = (int *)(iVar3 + 0x4db8);
      }
      else {
        iVar3 = G_CDataManager();
        local_10 = (int *)(iVar3 + 0x4dd0);
      }
      local_20 = (int)param_4;
      std::
      multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
      ::lower_bound((multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
                     *)&local_24,local_10);
      local_1c = (int)param_4;
      std::
      multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
      ::upper_bound(local_28,local_10);
      local_2c = local_24;
      while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::
                     operator!=((_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>
                                 *)&local_2c,(_Rb_tree_iterator *)local_28), cVar1 != '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>> *)
                           &local_2c);
        local_38 = *(undefined4 *)(iVar3 + 4);
        local_34 = *(undefined4 *)(iVar3 + 8);
        local_30 = *(undefined2 *)(iVar3 + 0xc);
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
        push_back((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> *)
                  param_2,(stConditionEventRewardInfo *)&local_38);
        std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::operator++
                  (local_18,(int)&local_2c);
      }
    }
  }
  return;
}
```
