# send_reward_from_recv_level

`_ZN13EventClassify14CLevelUpReward27send_reward_from_recv_levelEP5CUserii`

`EventClassify::CLevelUpReward::send_reward_from_recv_level(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e51a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e51a  _ZN13EventClassify14CLevelUpReward27send_reward_from_recv_levelEP5CUserii
#           EventClassify::CLevelUpReward::send_reward_from_recv_level(CUser*, int, int)
# range [0x0810e51a, 0x0810e75b]
0810e51a +0x000:  push   %ebp
0810e51b +0x001:  mov    %esp,%ebp
0810e51d +0x003:  push   %esi
0810e51e +0x004:  push   %ebx
0810e51f +0x005:  sub    $0x30,%esp
0810e522 +0x008:  mov    0xc(%ebp),%eax
0810e525 +0x00b:  mov    %eax,(%esp)
0810e528 +0x00e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0810e52d +0x013:  mov    %eax,-0x18(%ebp)
0810e530 +0x016:  mov    0xc(%ebp),%eax
0810e533 +0x019:  mov    %eax,(%esp)
0810e536 +0x01c:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0810e53b +0x021:  movsbl %al,%eax
0810e53e +0x024:  mov    %eax,-0x10(%ebp)
0810e541 +0x027:  mov    0x8(%ebp),%eax
0810e544 +0x02a:  mov    0x1c(%eax),%eax
0810e547 +0x02d:  lea    0x10(%eax),%ecx
0810e54a +0x030:  lea    -0x1c(%ebp),%eax
0810e54d +0x033:  lea    -0x18(%ebp),%edx
0810e550 +0x036:  mov    %edx,0x8(%esp)
0810e554 +0x03a:  mov    %ecx,0x4(%esp)
0810e558 +0x03e:  mov    %eax,(%esp)
0810e55b +0x041:  call   08111c3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1150>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1150
0810e560 +0x046:  sub    $0x4,%esp
0810e563 +0x049:  mov    0x8(%ebp),%eax
0810e566 +0x04c:  mov    0x1c(%eax),%eax
0810e569 +0x04f:  lea    0x10(%eax),%edx
0810e56c +0x052:  lea    -0x14(%ebp),%eax
0810e56f +0x055:  mov    %edx,0x4(%esp)
0810e573 +0x059:  mov    %eax,(%esp)
0810e576 +0x05c:  call   08111c6a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x117c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x117c
0810e57b +0x061:  sub    $0x4,%esp
0810e57e +0x064:  lea    -0x14(%ebp),%eax
0810e581 +0x067:  mov    %eax,0x4(%esp)
0810e585 +0x06b:  lea    -0x1c(%ebp),%eax
0810e588 +0x06e:  mov    %eax,(%esp)
0810e58b +0x071:  call   08111c90 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11a2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11a2
0810e590 +0x076:  test   %al,%al
0810e592 +0x078:  je     0810e74c <+0x232>
0810e598 +0x07e:  lea    -0x1c(%ebp),%eax
0810e59b +0x081:  mov    %eax,(%esp)
0810e59e +0x084:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e5a3 +0x089:  movzbl 0x5(%eax),%eax
0810e5a7 +0x08d:  cmp    $0xff,%al
0810e5a9 +0x08f:  je     0810e5c2 <+0xa8>
0810e5ab +0x091:  lea    -0x1c(%ebp),%eax
0810e5ae +0x094:  mov    %eax,(%esp)
0810e5b1 +0x097:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e5b6 +0x09c:  movzbl 0x5(%eax),%eax
0810e5ba +0x0a0:  movsbl %al,%eax
0810e5bd +0x0a3:  cmp    -0x10(%ebp),%eax
0810e5c0 +0x0a6:  jne    0810e5c9 <+0xaf>
0810e5c2 +0x0a8:  mov    $0x1,%eax
0810e5c7 +0x0ad:  jmp    0810e5ce <+0xb4>
0810e5c9 +0x0af:  mov    $0x0,%eax
0810e5ce +0x0b4:  test   %al,%al
0810e5d0 +0x0b6:  je     0810e74c <+0x232>
0810e5d6 +0x0bc:  movl   $0x0,-0xc(%ebp)
0810e5dd +0x0c3:  jmp    0810e728 <+0x20e>
0810e5e2 +0x0c8:  mov    -0xc(%ebp),%ebx
0810e5e5 +0x0cb:  lea    -0x1c(%ebp),%eax
0810e5e8 +0x0ce:  mov    %eax,(%esp)
0810e5eb +0x0d1:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e5f0 +0x0d6:  add    $0x8,%eax
0810e5f3 +0x0d9:  mov    %ebx,0x4(%esp)
0810e5f7 +0x0dd:  mov    %eax,(%esp)
0810e5fa +0x0e0:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e5ff +0x0e5:  mov    (%eax),%eax
0810e601 +0x0e7:  cmp    0x14(%ebp),%eax
0810e604 +0x0ea:  jle    0810e631 <+0x117>
0810e606 +0x0ec:  mov    -0xc(%ebp),%ebx
0810e609 +0x0ef:  lea    -0x1c(%ebp),%eax
0810e60c +0x0f2:  mov    %eax,(%esp)
0810e60f +0x0f5:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e614 +0x0fa:  add    $0x8,%eax
0810e617 +0x0fd:  mov    %ebx,0x4(%esp)
0810e61b +0x101:  mov    %eax,(%esp)
0810e61e +0x104:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e623 +0x109:  mov    (%eax),%eax
0810e625 +0x10b:  cmp    0x10(%ebp),%eax
0810e628 +0x10e:  jg     0810e631 <+0x117>
0810e62a +0x110:  mov    $0x1,%eax
0810e62f +0x115:  jmp    0810e636 <+0x11c>
0810e631 +0x117:  mov    $0x0,%eax
0810e636 +0x11c:  test   %al,%al
0810e638 +0x11e:  je     0810e724 <+0x20a>
0810e63e +0x124:  mov    0x8(%ebp),%eax
0810e641 +0x127:  mov    0x1c(%eax),%eax
0810e644 +0x12a:  add    $0x28,%eax
0810e647 +0x12d:  mov    %eax,(%esp)
0810e64a +0x130:  call   080ec026 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x1d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x1d
0810e64f +0x135:  mov    -0xc(%ebp),%ebx
0810e652 +0x138:  lea    -0x1c(%ebp),%eax
0810e655 +0x13b:  mov    %eax,(%esp)
0810e658 +0x13e:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e65d +0x143:  add    $0x8,%eax
0810e660 +0x146:  mov    %ebx,0x4(%esp)
0810e664 +0x14a:  mov    %eax,(%esp)
0810e667 +0x14d:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e66c +0x152:  mov    0x8(%eax),%ebx
0810e66f +0x155:  mov    -0xc(%ebp),%esi
0810e672 +0x158:  lea    -0x1c(%ebp),%eax
0810e675 +0x15b:  mov    %eax,(%esp)
0810e678 +0x15e:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e67d +0x163:  add    $0x8,%eax
0810e680 +0x166:  mov    %esi,0x4(%esp)
0810e684 +0x16a:  mov    %eax,(%esp)
0810e687 +0x16d:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e68c +0x172:  mov    0x4(%eax),%eax
0810e68f +0x175:  mov    0x8(%ebp),%edx
0810e692 +0x178:  mov    0x1c(%edx),%edx
0810e695 +0x17b:  add    $0x28,%edx
0810e698 +0x17e:  mov    %ebx,0x8(%esp)
0810e69c +0x182:  mov    %eax,0x4(%esp)
0810e6a0 +0x186:  mov    %edx,(%esp)
0810e6a3 +0x189:  call   080ec08c <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x83>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x83
0810e6a8 +0x18e:  mov    -0xc(%ebp),%ebx
0810e6ab +0x191:  lea    -0x1c(%ebp),%eax
0810e6ae +0x194:  mov    %eax,(%esp)
0810e6b1 +0x197:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e6b6 +0x19c:  add    $0x8,%eax
0810e6b9 +0x19f:  mov    %ebx,0x4(%esp)
0810e6bd +0x1a3:  mov    %eax,(%esp)
0810e6c0 +0x1a6:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e6c5 +0x1ab:  lea    0xc(%eax),%edx
0810e6c8 +0x1ae:  mov    0x8(%ebp),%eax
0810e6cb +0x1b1:  mov    0x1c(%eax),%eax
0810e6ce +0x1b4:  add    $0x58,%eax
0810e6d1 +0x1b7:  mov    %edx,0x4(%esp)
0810e6d5 +0x1bb:  mov    %eax,(%esp)
0810e6d8 +0x1be:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810e6dd +0x1c3:  mov    -0xc(%ebp),%ebx
0810e6e0 +0x1c6:  lea    -0x1c(%ebp),%eax
0810e6e3 +0x1c9:  mov    %eax,(%esp)
0810e6e6 +0x1cc:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e6eb +0x1d1:  add    $0x8,%eax
0810e6ee +0x1d4:  mov    %ebx,0x4(%esp)
0810e6f2 +0x1d8:  mov    %eax,(%esp)
0810e6f5 +0x1db:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e6fa +0x1e0:  lea    0x10(%eax),%edx
0810e6fd +0x1e3:  mov    0x8(%ebp),%eax
0810e700 +0x1e6:  mov    0x1c(%eax),%eax
0810e703 +0x1e9:  add    $0x5c,%eax
0810e706 +0x1ec:  mov    %edx,0x4(%esp)
0810e70a +0x1f0:  mov    %eax,(%esp)
0810e70d +0x1f3:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810e712 +0x1f8:  mov    0xc(%ebp),%eax
0810e715 +0x1fb:  mov    %eax,0x4(%esp)
0810e719 +0x1ff:  mov    0x8(%ebp),%eax
0810e71c +0x202:  mov    %eax,(%esp)
0810e71f +0x205:  call   0810e4ea <_ZN13EventClassify14CLevelUpReward9do_actionEP5CUser>  ; EventClassify::CLevelUpReward::do_action(CUser*)
0810e724 +0x20a:  addl   $0x1,-0xc(%ebp)
0810e728 +0x20e:  lea    -0x1c(%ebp),%eax
0810e72b +0x211:  mov    %eax,(%esp)
0810e72e +0x214:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e733 +0x219:  add    $0x8,%eax
0810e736 +0x21c:  mov    %eax,(%esp)
0810e739 +0x21f:  call   08111cb2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11c4
0810e73e +0x224:  cmp    -0xc(%ebp),%eax
0810e741 +0x227:  setg   %al
0810e744 +0x22a:  test   %al,%al
0810e746 +0x22c:  jne    0810e5e2 <+0xc8>
0810e74c +0x232:  mov    $0x1,%eax
0810e751 +0x237:  lea    -0x8(%ebp),%esp
0810e754 +0x23a:  add    $0x0,%esp
0810e757 +0x23d:  pop    %ebx
0810e758 +0x23e:  pop    %esi
0810e759 +0x23f:  pop    %ebp
0810e75a +0x240:  ret
0810e75b +0x241:  nop
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::send_reward_from_recv_level @ 0x810e51a

/* EventClassify::CLevelUpReward::send_reward_from_recv_level(CUser*, int, int) */

undefined4 __thiscall
EventClassify::CLevelUpReward::send_reward_from_recv_level
          (CLevelUpReward *this,CUser *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  _Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>> local_20 [4];
  undefined4 local_1c;
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  local_1c = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  local_14 = (int)cVar3;
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  find((int *)local_20);
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  end(local_18);
  cVar3 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_18);
  if (cVar3 == '\0') {
    return 1;
  }
  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20);
  if ((*(char *)(iVar4 + 5) == -1) ||
     (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20),
     *(char *)(iVar4 + 5) == local_14)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_10 = 0;
    while( true ) {
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20);
      iVar4 = std::
              vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
              ::size((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                      *)(iVar4 + 8));
      uVar2 = local_10;
      if (iVar4 <= (int)local_10) break;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20);
      piVar5 = (int *)std::
                      vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                      ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                    *)(iVar4 + 8),uVar2);
      uVar2 = local_10;
      if (param_3 < *piVar5) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20)
        ;
        piVar5 = (int *)std::
                        vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                        ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                      *)(iVar4 + 8),uVar2);
        if (param_2 < *piVar5) goto LAB_0810e631;
        bVar1 = true;
      }
      else {
LAB_0810e631:
        bVar1 = false;
      }
      if (bVar1) {
        Action_SendMail::reset((Action_SendMail *)(*(int *)(this + 0x1c) + 0x28));
        uVar2 = local_10;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20)
        ;
        iVar4 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                              *)(iVar4 + 8),uVar2);
        uVar2 = local_10;
        iVar4 = *(int *)(iVar4 + 8);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20)
        ;
        iVar6 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                              *)(iVar6 + 8),uVar2);
        Action_SendMail::set_item
                  ((Action_SendMail *)(*(int *)(this + 0x1c) + 0x28),*(int *)(iVar6 + 4),iVar4);
        uVar2 = local_10;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20)
        ;
        iVar4 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                              *)(iVar4 + 8),uVar2);
        std::string::operator=((string *)(*(int *)(this + 0x1c) + 0x58),(string *)(iVar4 + 0xc));
        uVar2 = local_10;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_20)
        ;
        iVar4 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                              *)(iVar4 + 8),uVar2);
        std::string::operator=((string *)(*(int *)(this + 0x1c) + 0x5c),(string *)(iVar4 + 0x10));
        do_action(this,param_1);
      }
      local_10 = local_10 + 1;
    }
  }
  return 1;
}
```
