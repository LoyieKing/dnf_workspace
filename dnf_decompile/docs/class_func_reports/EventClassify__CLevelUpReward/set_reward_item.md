# set_reward_item

`_ZN13EventClassify14CLevelUpReward15set_reward_itemEiii`

`EventClassify::CLevelUpReward::set_reward_item(int, int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e302` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e302  _ZN13EventClassify14CLevelUpReward15set_reward_itemEiii
#           EventClassify::CLevelUpReward::set_reward_item(int, int, int)
# range [0x0810e302, 0x0810e4e9]
0810e302 +0x000:  push   %ebp
0810e303 +0x001:  mov    %esp,%ebp
0810e305 +0x003:  push   %esi
0810e306 +0x004:  push   %ebx
0810e307 +0x005:  sub    $0x20,%esp
0810e30a +0x008:  mov    0x8(%ebp),%eax
0810e30d +0x00b:  mov    0x1c(%eax),%eax
0810e310 +0x00e:  lea    0x10(%eax),%ecx
0810e313 +0x011:  lea    -0x14(%ebp),%eax
0810e316 +0x014:  lea    0x10(%ebp),%edx
0810e319 +0x017:  mov    %edx,0x8(%esp)
0810e31d +0x01b:  mov    %ecx,0x4(%esp)
0810e321 +0x01f:  mov    %eax,(%esp)
0810e324 +0x022:  call   08111c3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1150>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1150
0810e329 +0x027:  sub    $0x4,%esp
0810e32c +0x02a:  mov    0x8(%ebp),%eax
0810e32f +0x02d:  mov    0x1c(%eax),%eax
0810e332 +0x030:  lea    0x10(%eax),%edx
0810e335 +0x033:  lea    -0x10(%ebp),%eax
0810e338 +0x036:  mov    %edx,0x4(%esp)
0810e33c +0x03a:  mov    %eax,(%esp)
0810e33f +0x03d:  call   08111c6a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x117c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x117c
0810e344 +0x042:  sub    $0x4,%esp
0810e347 +0x045:  lea    -0x10(%ebp),%eax
0810e34a +0x048:  mov    %eax,0x4(%esp)
0810e34e +0x04c:  lea    -0x14(%ebp),%eax
0810e351 +0x04f:  mov    %eax,(%esp)
0810e354 +0x052:  call   08111c90 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11a2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11a2
0810e359 +0x057:  test   %al,%al
0810e35b +0x059:  je     0810e4db <+0x1d9>
0810e361 +0x05f:  lea    -0x14(%ebp),%eax
0810e364 +0x062:  mov    %eax,(%esp)
0810e367 +0x065:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e36c +0x06a:  movzbl 0x5(%eax),%eax
0810e370 +0x06e:  cmp    $0xff,%al
0810e372 +0x070:  je     0810e38b <+0x89>
0810e374 +0x072:  lea    -0x14(%ebp),%eax
0810e377 +0x075:  mov    %eax,(%esp)
0810e37a +0x078:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e37f +0x07d:  movzbl 0x5(%eax),%eax
0810e383 +0x081:  movsbl %al,%eax
0810e386 +0x084:  cmp    0x14(%ebp),%eax
0810e389 +0x087:  jne    0810e392 <+0x90>
0810e38b +0x089:  mov    $0x1,%eax
0810e390 +0x08e:  jmp    0810e397 <+0x95>
0810e392 +0x090:  mov    $0x0,%eax
0810e397 +0x095:  test   %al,%al
0810e399 +0x097:  je     0810e4db <+0x1d9>
0810e39f +0x09d:  movl   $0x0,-0xc(%ebp)
0810e3a6 +0x0a4:  jmp    0810e4b7 <+0x1b5>
0810e3ab +0x0a9:  mov    -0xc(%ebp),%ebx
0810e3ae +0x0ac:  lea    -0x14(%ebp),%eax
0810e3b1 +0x0af:  mov    %eax,(%esp)
0810e3b4 +0x0b2:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e3b9 +0x0b7:  add    $0x8,%eax
0810e3bc +0x0ba:  mov    %ebx,0x4(%esp)
0810e3c0 +0x0be:  mov    %eax,(%esp)
0810e3c3 +0x0c1:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e3c8 +0x0c6:  mov    (%eax),%eax
0810e3ca +0x0c8:  cmp    0xc(%ebp),%eax
0810e3cd +0x0cb:  sete   %al
0810e3d0 +0x0ce:  test   %al,%al
0810e3d2 +0x0d0:  je     0810e4b3 <+0x1b1>
0810e3d8 +0x0d6:  mov    0x8(%ebp),%eax
0810e3db +0x0d9:  mov    0x1c(%eax),%eax
0810e3de +0x0dc:  add    $0x28,%eax
0810e3e1 +0x0df:  mov    %eax,(%esp)
0810e3e4 +0x0e2:  call   080ec026 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x1d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x1d
0810e3e9 +0x0e7:  mov    -0xc(%ebp),%ebx
0810e3ec +0x0ea:  lea    -0x14(%ebp),%eax
0810e3ef +0x0ed:  mov    %eax,(%esp)
0810e3f2 +0x0f0:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e3f7 +0x0f5:  add    $0x8,%eax
0810e3fa +0x0f8:  mov    %ebx,0x4(%esp)
0810e3fe +0x0fc:  mov    %eax,(%esp)
0810e401 +0x0ff:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e406 +0x104:  mov    0x8(%eax),%ebx
0810e409 +0x107:  mov    -0xc(%ebp),%esi
0810e40c +0x10a:  lea    -0x14(%ebp),%eax
0810e40f +0x10d:  mov    %eax,(%esp)
0810e412 +0x110:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e417 +0x115:  add    $0x8,%eax
0810e41a +0x118:  mov    %esi,0x4(%esp)
0810e41e +0x11c:  mov    %eax,(%esp)
0810e421 +0x11f:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e426 +0x124:  mov    0x4(%eax),%eax
0810e429 +0x127:  mov    0x8(%ebp),%edx
0810e42c +0x12a:  mov    0x1c(%edx),%edx
0810e42f +0x12d:  add    $0x28,%edx
0810e432 +0x130:  mov    %ebx,0x8(%esp)
0810e436 +0x134:  mov    %eax,0x4(%esp)
0810e43a +0x138:  mov    %edx,(%esp)
0810e43d +0x13b:  call   080ec08c <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x83>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x83
0810e442 +0x140:  mov    -0xc(%ebp),%ebx
0810e445 +0x143:  lea    -0x14(%ebp),%eax
0810e448 +0x146:  mov    %eax,(%esp)
0810e44b +0x149:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e450 +0x14e:  add    $0x8,%eax
0810e453 +0x151:  mov    %ebx,0x4(%esp)
0810e457 +0x155:  mov    %eax,(%esp)
0810e45a +0x158:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e45f +0x15d:  lea    0xc(%eax),%edx
0810e462 +0x160:  mov    0x8(%ebp),%eax
0810e465 +0x163:  mov    0x1c(%eax),%eax
0810e468 +0x166:  add    $0x58,%eax
0810e46b +0x169:  mov    %edx,0x4(%esp)
0810e46f +0x16d:  mov    %eax,(%esp)
0810e472 +0x170:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810e477 +0x175:  mov    -0xc(%ebp),%ebx
0810e47a +0x178:  lea    -0x14(%ebp),%eax
0810e47d +0x17b:  mov    %eax,(%esp)
0810e480 +0x17e:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e485 +0x183:  add    $0x8,%eax
0810e488 +0x186:  mov    %ebx,0x4(%esp)
0810e48c +0x18a:  mov    %eax,(%esp)
0810e48f +0x18d:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e494 +0x192:  lea    0x10(%eax),%edx
0810e497 +0x195:  mov    0x8(%ebp),%eax
0810e49a +0x198:  mov    0x1c(%eax),%eax
0810e49d +0x19b:  add    $0x5c,%eax
0810e4a0 +0x19e:  mov    %edx,0x4(%esp)
0810e4a4 +0x1a2:  mov    %eax,(%esp)
0810e4a7 +0x1a5:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810e4ac +0x1aa:  mov    $0x1,%eax
0810e4b1 +0x1af:  jmp    0810e4e0 <+0x1de>
0810e4b3 +0x1b1:  addl   $0x1,-0xc(%ebp)
0810e4b7 +0x1b5:  lea    -0x14(%ebp),%eax
0810e4ba +0x1b8:  mov    %eax,(%esp)
0810e4bd +0x1bb:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e4c2 +0x1c0:  add    $0x8,%eax
0810e4c5 +0x1c3:  mov    %eax,(%esp)
0810e4c8 +0x1c6:  call   08111cb2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11c4
0810e4cd +0x1cb:  cmp    -0xc(%ebp),%eax
0810e4d0 +0x1ce:  setg   %al
0810e4d3 +0x1d1:  test   %al,%al
0810e4d5 +0x1d3:  jne    0810e3ab <+0xa9>
0810e4db +0x1d9:  mov    $0x0,%eax
0810e4e0 +0x1de:  lea    -0x8(%ebp),%esp
0810e4e3 +0x1e1:  add    $0x0,%esp
0810e4e6 +0x1e4:  pop    %ebx
0810e4e7 +0x1e5:  pop    %esi
0810e4e8 +0x1e6:  pop    %ebp
0810e4e9 +0x1e7:  ret
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::set_reward_item @ 0x810e302

/* EventClassify::CLevelUpReward::set_reward_item(int, int, int) */

undefined4 __thiscall
EventClassify::CLevelUpReward::set_reward_item
          (CLevelUpReward *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  _Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>> local_18 [4];
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>
  local_14 [4];
  uint local_10;
  
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  find((int *)local_18);
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  end(local_14);
  cVar3 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar3 != '\0') {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18);
    if ((*(char *)(iVar4 + 5) == -1) ||
       (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18)
       , *(char *)(iVar4 + 5) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_10 = 0;
      while( true ) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18)
        ;
        iVar4 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::size((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                        *)(iVar4 + 8));
        uVar2 = local_10;
        if (iVar4 <= (int)local_10) break;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18)
        ;
        piVar5 = (int *)std::
                        vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                        ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                      *)(iVar4 + 8),uVar2);
        if (*piVar5 == param_1) {
          Action_SendMail::reset((Action_SendMail *)(*(int *)(this + 0x1c) + 0x28));
          uVar2 = local_10;
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          iVar4 = std::
                  vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                  ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                *)(iVar4 + 8),uVar2);
          uVar2 = local_10;
          iVar4 = *(int *)(iVar4 + 8);
          iVar6 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          iVar6 = std::
                  vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                  ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                *)(iVar6 + 8),uVar2);
          Action_SendMail::set_item
                    ((Action_SendMail *)(*(int *)(this + 0x1c) + 0x28),*(int *)(iVar6 + 4),iVar4);
          uVar2 = local_10;
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          iVar4 = std::
                  vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                  ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                *)(iVar4 + 8),uVar2);
          std::string::operator=((string *)(*(int *)(this + 0x1c) + 0x58),(string *)(iVar4 + 0xc));
          uVar2 = local_10;
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          iVar4 = std::
                  vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                  ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                *)(iVar4 + 8),uVar2);
          std::string::operator=((string *)(*(int *)(this + 0x1c) + 0x5c),(string *)(iVar4 + 0x10));
          return 1;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 0;
}
```
