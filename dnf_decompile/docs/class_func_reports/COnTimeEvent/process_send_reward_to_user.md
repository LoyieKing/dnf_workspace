# process_send_reward_to_user

`_ZN12COnTimeEvent27process_send_reward_to_userEv`

`COnTimeEvent::process_send_reward_to_user()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bbd46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bbd46  _ZN12COnTimeEvent27process_send_reward_to_userEv
#           COnTimeEvent::process_send_reward_to_user()
# range [0x081bbd46, 0x081bbf25]
081bbd46 +0x000:  push   %ebp
081bbd47 +0x001:  mov    %esp,%ebp
081bbd49 +0x003:  push   %esi
081bbd4a +0x004:  push   %ebx
081bbd4b +0x005:  sub    $0x30,%esp
081bbd4e +0x008:  lea    -0x24(%ebp),%eax
081bbd51 +0x00b:  mov    %eax,(%esp)
081bbd54 +0x00e:  call   081bc468 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x502>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x502
081bbd59 +0x013:  movl   $0x0,-0x10(%ebp)
081bbd60 +0x01a:  movl   $0x0,-0xc(%ebp)
081bbd67 +0x021:  jmp    081bbefb <+0x1b5>
081bbd6c +0x026:  mov    0x8(%ebp),%eax
081bbd6f +0x029:  add    $0x2c,%eax
081bbd72 +0x02c:  mov    %eax,(%esp)
081bbd75 +0x02f:  call   081bc496 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x530>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x530
081bbd7a +0x034:  mov    0x8(%ebp),%edx
081bbd7d +0x037:  lea    0x14(%edx),%ecx
081bbd80 +0x03a:  lea    -0x1c(%ebp),%edx
081bbd83 +0x03d:  mov    %eax,0x8(%esp)
081bbd87 +0x041:  mov    %ecx,0x4(%esp)
081bbd8b +0x045:  mov    %edx,(%esp)
081bbd8e +0x048:  call   081bc3d0 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x46a>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x46a
081bbd93 +0x04d:  sub    $0x4,%esp
081bbd96 +0x050:  lea    -0x1c(%ebp),%eax
081bbd99 +0x053:  mov    %eax,0x4(%esp)
081bbd9d +0x057:  lea    -0x20(%ebp),%eax
081bbda0 +0x05a:  mov    %eax,(%esp)
081bbda3 +0x05d:  call   081bc3fc <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x496>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x496
081bbda8 +0x062:  mov    -0x20(%ebp),%eax
081bbdab +0x065:  mov    %eax,-0x24(%ebp)
081bbdae +0x068:  mov    0x8(%ebp),%eax
081bbdb1 +0x06b:  lea    0x14(%eax),%edx
081bbdb4 +0x06e:  lea    -0x14(%ebp),%eax
081bbdb7 +0x071:  mov    %edx,0x4(%esp)
081bbdbb +0x075:  mov    %eax,(%esp)
081bbdbe +0x078:  call   081bc40c <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4a6>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4a6
081bbdc3 +0x07d:  sub    $0x4,%esp
081bbdc6 +0x080:  lea    -0x14(%ebp),%eax
081bbdc9 +0x083:  mov    %eax,0x4(%esp)
081bbdcd +0x087:  lea    -0x18(%ebp),%eax
081bbdd0 +0x08a:  mov    %eax,(%esp)
081bbdd3 +0x08d:  call   081bc3fc <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x496>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x496
081bbdd8 +0x092:  lea    -0x18(%ebp),%eax
081bbddb +0x095:  mov    %eax,0x4(%esp)
081bbddf +0x099:  lea    -0x24(%ebp),%eax
081bbde2 +0x09c:  mov    %eax,(%esp)
081bbde5 +0x09f:  call   081bc4be <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x558>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x558
081bbdea +0x0a4:  test   %al,%al
081bbdec +0x0a6:  je     081bbee3 <+0x19d>
081bbdf2 +0x0ac:  lea    -0x24(%ebp),%eax
081bbdf5 +0x0af:  mov    %eax,(%esp)
081bbdf8 +0x0b2:  call   081bc4d2 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x56c>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x56c
081bbdfd +0x0b7:  movzbl 0xc(%eax),%eax
081bbe01 +0x0bb:  xor    $0x1,%eax
081bbe04 +0x0be:  test   %al,%al
081bbe06 +0x0c0:  je     081bbee3 <+0x19d>
081bbe0c +0x0c6:  lea    -0x24(%ebp),%eax
081bbe0f +0x0c9:  mov    %eax,(%esp)
081bbe12 +0x0cc:  call   081bc4d2 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x56c>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x56c
081bbe17 +0x0d1:  mov    (%eax),%ebx
081bbe19 +0x0d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081bbe1e +0x0d8:  mov    %ebx,0x4(%esp)
081bbe22 +0x0dc:  mov    %eax,(%esp)
081bbe25 +0x0df:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081bbe2a +0x0e4:  mov    %eax,-0x10(%ebp)
081bbe2d +0x0e7:  cmpl   $0x0,-0x10(%ebp)
081bbe31 +0x0eb:  setne  %al
081bbe34 +0x0ee:  test   %al,%al
081bbe36 +0x0f0:  je     081bbee3 <+0x19d>
081bbe3c +0x0f6:  movl   $0xffffffff,0x4(%esp)
081bbe44 +0x0fe:  mov    -0x10(%ebp),%eax
081bbe47 +0x101:  mov    %eax,(%esp)
081bbe4a +0x104:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081bbe4f +0x109:  mov    %eax,%ebx
081bbe51 +0x10b:  lea    -0x24(%ebp),%eax
081bbe54 +0x10e:  mov    %eax,(%esp)
081bbe57 +0x111:  call   081bc4d2 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x56c>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x56c
081bbe5c +0x116:  mov    0x4(%eax),%eax
081bbe5f +0x119:  cmp    %eax,%ebx
081bbe61 +0x11b:  jne    081bbe7a <+0x134>
081bbe63 +0x11d:  mov    -0x10(%ebp),%eax
081bbe66 +0x120:  mov    %eax,(%esp)
081bbe69 +0x123:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081bbe6e +0x128:  cmp    $0x2,%eax
081bbe71 +0x12b:  jle    081bbe7a <+0x134>
081bbe73 +0x12d:  mov    $0x1,%eax
081bbe78 +0x132:  jmp    081bbe7f <+0x139>
081bbe7a +0x134:  mov    $0x0,%eax
081bbe7f +0x139:  test   %al,%al
081bbe81 +0x13b:  je     081bbee3 <+0x19d>
081bbe83 +0x13d:  mov    0x8(%ebp),%eax
081bbe86 +0x140:  mov    %eax,(%esp)
081bbe89 +0x143:  call   081bc112 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ac>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ac
081bbe8e +0x148:  mov    %eax,%ebx
081bbe90 +0x14a:  mov    0x8(%ebp),%eax
081bbe93 +0x14d:  mov    %eax,(%esp)
081bbe96 +0x150:  call   081bc106 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1a0>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1a0
081bbe9b +0x155:  mov    %ebx,0x8(%esp)
081bbe9f +0x159:  mov    %eax,0x4(%esp)
081bbea3 +0x15d:  mov    -0x10(%ebp),%eax
081bbea6 +0x160:  mov    %eax,(%esp)
081bbea9 +0x163:  call   08681c30 <_ZN5CUser23InsertOnTimeEventRewardEjj>  ; CUser::InsertOnTimeEventReward(unsigned int, unsigned int)
081bbeae +0x168:  mov    0x8(%ebp),%eax
081bbeb1 +0x16b:  mov    %eax,(%esp)
081bbeb4 +0x16e:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbeb9 +0x173:  mov    %eax,%ebx
081bbebb +0x175:  lea    -0x24(%ebp),%eax
081bbebe +0x178:  mov    %eax,(%esp)
081bbec1 +0x17b:  call   081bc4d2 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x56c>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x56c
081bbec6 +0x180:  mov    (%eax),%esi
081bbec8 +0x182:  mov    -0x10(%ebp),%eax
081bbecb +0x185:  mov    %eax,(%esp)
081bbece +0x188:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081bbed3 +0x18d:  mov    %ebx,0x8(%esp)
081bbed7 +0x191:  mov    %esi,0x4(%esp)
081bbedb +0x195:  mov    %eax,(%esp)
081bbede +0x198:  call   08442b7a <_ZN28DB_InsertOnTimeRewardUserLog11makeRequestEiji>  ; DB_InsertOnTimeRewardUserLog::makeRequest(int, unsigned int, int)
081bbee3 +0x19d:  addl   $0x1,-0xc(%ebp)
081bbee7 +0x1a1:  mov    0x8(%ebp),%eax
081bbeea +0x1a4:  add    $0x2c,%eax
081bbeed +0x1a7:  mov    %eax,(%esp)
081bbef0 +0x1aa:  call   081bc4e0 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x57a>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x57a
081bbef5 +0x1af:  cmpl   $0x32,-0xc(%ebp)
081bbef9 +0x1b3:  jg     081bbf16 <+0x1d0>
081bbefb +0x1b5:  mov    0x8(%ebp),%eax
081bbefe +0x1b8:  add    $0x2c,%eax
081bbf01 +0x1bb:  mov    %eax,(%esp)
081bbf04 +0x1be:  call   081bc476 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x510>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x510
081bbf09 +0x1c3:  xor    $0x1,%eax
081bbf0c +0x1c6:  test   %al,%al
081bbf0e +0x1c8:  jne    081bbd6c <+0x26>
081bbf14 +0x1ce:  jmp    081bbf17 <+0x1d1>
081bbf16 +0x1d0:  nop
081bbf17 +0x1d1:  mov    $0x1,%eax
081bbf1c +0x1d6:  lea    -0x8(%ebp),%esp
081bbf1f +0x1d9:  add    $0x0,%esp
081bbf22 +0x1dc:  pop    %ebx
081bbf23 +0x1dd:  pop    %esi
081bbf24 +0x1de:  pop    %ebp
081bbf25 +0x1df:  ret
```

## 反编译 C

```c
// COnTimeEvent::process_send_reward_to_user @ 0x81bbd46

/* COnTimeEvent::process_send_reward_to_user() */

undefined4 __thiscall COnTimeEvent::process_send_reward_to_user(COnTimeEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  GameWorld *this_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  _Rb_tree_iterator local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_1c [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_18 [4];
  CUser *local_14;
  int local_10;
  
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)&local_28);
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    cVar2 = std::deque<unsigned_int,std::allocator<unsigned_int>>::empty
                      ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x2c));
    if (cVar2 == '\x01') {
      return 1;
    }
    std::deque<unsigned_int,std::allocator<unsigned_int>>::front();
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::find((uint *)local_20);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)&local_24,
               local_20);
    local_28 = local_24;
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::end(local_18);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
    _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_18);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                       &local_28,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 != '\0') &&
       (iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                           &local_28), *(char *)(iVar3 + 0xc) != '\x01')) {
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                       operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>
                                   *)&local_28);
      uVar6 = *puVar4;
      this_00 = (GameWorld *)G_GameWorld();
      local_14 = (CUser *)GameWorld::find_user_from_world_byaccid(this_00,uVar6);
      if (local_14 != (CUser *)0x0) {
        iVar3 = CUser::get_charac_no(local_14,-1);
        iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                           &local_28);
        if ((iVar3 == *(int *)(iVar5 + 4)) && (iVar3 = CUser::get_state(local_14), 2 < iVar3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = get_ontime_reward_item_count(this);
          uVar7 = get_ontime_reward_item_no(this);
          CUser::InsertOnTimeEventReward(local_14,uVar7,uVar6);
          iVar3 = get_ontime_id(this);
          puVar4 = (uint *)std::
                           _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                           operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>
                                       *)&local_28);
          uVar6 = *puVar4;
          iVar5 = CUser::GetUID(local_14);
          DB_InsertOnTimeRewardUserLog::makeRequest(iVar5,uVar6,iVar3);
        }
      }
    }
    local_10 = local_10 + 1;
    std::deque<unsigned_int,std::allocator<unsigned_int>>::pop_front
              ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x2c));
  } while (local_10 < 0x33);
  return 1;
}
```
