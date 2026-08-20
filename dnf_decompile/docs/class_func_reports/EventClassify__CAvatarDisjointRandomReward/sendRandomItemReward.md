# sendRandomItemReward

`_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE`

`EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f88c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f88c  _ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE
#           EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810f88c, 0x0810f95d]
0810f88c +0x00:  push   %ebp
0810f88d +0x01:  mov    %esp,%ebp
0810f88f +0x03:  push   %ebx
0810f890 +0x04:  sub    $0x24,%esp
0810f893 +0x07:  movl   $0x0,-0xc(%ebp)
0810f89a +0x0e:  lea    -0x18(%ebp),%eax
0810f89d +0x11:  mov    0x10(%ebp),%edx
0810f8a0 +0x14:  mov    %edx,0x4(%esp)
0810f8a4 +0x18:  mov    %eax,(%esp)
0810f8a7 +0x1b:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0810f8ac +0x20:  sub    $0x4,%esp
0810f8af +0x23:  jmp    0810f925 <+0x99>
0810f8b1 +0x25:  lea    -0x18(%ebp),%eax
0810f8b4 +0x28:  mov    %eax,(%esp)
0810f8b7 +0x2b:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f8bc +0x30:  mov    0x4(%eax),%ebx
0810f8bf +0x33:  lea    -0x18(%ebp),%eax
0810f8c2 +0x36:  mov    %eax,(%esp)
0810f8c5 +0x39:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f8ca +0x3e:  mov    (%eax),%eax
0810f8cc +0x40:  mov    0x8(%ebp),%edx
0810f8cf +0x43:  mov    0x1c(%edx),%edx
0810f8d2 +0x46:  add    $0x20,%edx
0810f8d5 +0x49:  mov    %ebx,0x8(%esp)
0810f8d9 +0x4d:  mov    %eax,0x4(%esp)
0810f8dd +0x51:  mov    %edx,(%esp)
0810f8e0 +0x54:  call   080ec08c <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x83>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x83
0810f8e5 +0x59:  mov    0x8(%ebp),%eax
0810f8e8 +0x5c:  mov    0x1c(%eax),%eax
0810f8eb +0x5f:  add    $0x20,%eax
0810f8ee +0x62:  movl   $0x0,0xc(%esp)
0810f8f6 +0x6a:  mov    %eax,0x8(%esp)
0810f8fa +0x6e:  mov    0xc(%ebp),%eax
0810f8fd +0x71:  mov    %eax,0x4(%esp)
0810f901 +0x75:  lea    -0x11(%ebp),%eax
0810f904 +0x78:  mov    %eax,(%esp)
0810f907 +0x7b:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810f90c +0x80:  mov    %eax,-0xc(%ebp)
0810f90f +0x83:  cmpl   $0x0,-0xc(%ebp)
0810f913 +0x87:  je     0810f91a <+0x8e>
0810f915 +0x89:  mov    -0xc(%ebp),%eax
0810f918 +0x8c:  jmp    0810f959 <+0xcd>
0810f91a +0x8e:  lea    -0x18(%ebp),%eax
0810f91d +0x91:  mov    %eax,(%esp)
0810f920 +0x94:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0810f925 +0x99:  lea    -0x10(%ebp),%eax
0810f928 +0x9c:  mov    0x10(%ebp),%edx
0810f92b +0x9f:  mov    %edx,0x4(%esp)
0810f92f +0xa3:  mov    %eax,(%esp)
0810f932 +0xa6:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0810f937 +0xab:  sub    $0x4,%esp
0810f93a +0xae:  lea    -0x10(%ebp),%eax
0810f93d +0xb1:  mov    %eax,0x4(%esp)
0810f941 +0xb5:  lea    -0x18(%ebp),%eax
0810f944 +0xb8:  mov    %eax,(%esp)
0810f947 +0xbb:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0810f94c +0xc0:  test   %al,%al
0810f94e +0xc2:  jne    0810f8b1 <+0x25>
0810f954 +0xc8:  mov    $0x0,%eax
0810f959 +0xcd:  mov    -0x4(%ebp),%ebx
0810f95c +0xd0:  leave
0810f95d +0xd1:  ret
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward @ 0x810f88c

/* EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

int EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser *param_1,vector *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [7];
  CEventActionMng local_15;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    iVar2 = *(int *)(iVar2 + 4);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_1c);
    Action_SendMail::set_item((Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0x20),*piVar3,iVar2);
    local_10 = CEventActionMng::process_action_send_mail
                         (&local_15,(CUser *)param_2,
                          (Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0x20),false);
    if (local_10 != 0) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return local_10;
}
```
