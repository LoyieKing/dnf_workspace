# sendRandomItemReward

`_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh`

`EventClassify::CExchangeRandomItemReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, unsigned char&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CExchangeRandomItemReward` | `0x0810f26e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f26e  _ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh
#           EventClassify::CExchangeRandomItemReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, unsigned char&)
# range [0x0810f26e, 0x0810f379]
0810f26e +0x000:  push   %ebp
0810f26f +0x001:  mov    %esp,%ebp
0810f271 +0x003:  push   %ebx
0810f272 +0x004:  sub    $0x24,%esp
0810f275 +0x007:  movl   $0x0,-0xc(%ebp)
0810f27c +0x00e:  lea    -0x18(%ebp),%eax
0810f27f +0x011:  mov    0x10(%ebp),%edx
0810f282 +0x014:  mov    %edx,0x4(%esp)
0810f286 +0x018:  mov    %eax,(%esp)
0810f289 +0x01b:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0810f28e +0x020:  sub    $0x4,%esp
0810f291 +0x023:  jmp    0810f318 <+0xaa>
0810f296 +0x028:  lea    -0x18(%ebp),%eax
0810f299 +0x02b:  mov    %eax,(%esp)
0810f29c +0x02e:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f2a1 +0x033:  mov    0x4(%eax),%ebx
0810f2a4 +0x036:  lea    -0x18(%ebp),%eax
0810f2a7 +0x039:  mov    %eax,(%esp)
0810f2aa +0x03c:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f2af +0x041:  mov    (%eax),%eax
0810f2b1 +0x043:  mov    0x8(%ebp),%edx
0810f2b4 +0x046:  mov    0x1c(%edx),%edx
0810f2b7 +0x049:  add    $0x24,%edx
0810f2ba +0x04c:  mov    %ebx,0x8(%esp)
0810f2be +0x050:  mov    %eax,0x4(%esp)
0810f2c2 +0x054:  mov    %edx,(%esp)
0810f2c5 +0x057:  call   080ec08c <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x83>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x83
0810f2ca +0x05c:  mov    0x8(%ebp),%eax
0810f2cd +0x05f:  mov    0x1c(%eax),%eax
0810f2d0 +0x062:  add    $0x24,%eax
0810f2d3 +0x065:  movl   $0x1,0xc(%esp)
0810f2db +0x06d:  mov    %eax,0x8(%esp)
0810f2df +0x071:  mov    0xc(%ebp),%eax
0810f2e2 +0x074:  mov    %eax,0x4(%esp)
0810f2e6 +0x078:  lea    -0x11(%ebp),%eax
0810f2e9 +0x07b:  mov    %eax,(%esp)
0810f2ec +0x07e:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810f2f1 +0x083:  mov    %eax,-0xc(%ebp)
0810f2f4 +0x086:  cmpl   $0x0,-0xc(%ebp)
0810f2f8 +0x08a:  je     0810f2ff <+0x91>
0810f2fa +0x08c:  mov    -0xc(%ebp),%eax
0810f2fd +0x08f:  jmp    0810f375 <+0x107>
0810f2ff +0x091:  mov    0x18(%ebp),%eax
0810f302 +0x094:  movzbl (%eax),%eax
0810f305 +0x097:  lea    0x1(%eax),%edx
0810f308 +0x09a:  mov    0x18(%ebp),%eax
0810f30b +0x09d:  mov    %dl,(%eax)
0810f30d +0x09f:  lea    -0x18(%ebp),%eax
0810f310 +0x0a2:  mov    %eax,(%esp)
0810f313 +0x0a5:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0810f318 +0x0aa:  lea    -0x10(%ebp),%eax
0810f31b +0x0ad:  mov    0x10(%ebp),%edx
0810f31e +0x0b0:  mov    %edx,0x4(%esp)
0810f322 +0x0b4:  mov    %eax,(%esp)
0810f325 +0x0b7:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0810f32a +0x0bc:  sub    $0x4,%esp
0810f32d +0x0bf:  lea    -0x10(%ebp),%eax
0810f330 +0x0c2:  mov    %eax,0x4(%esp)
0810f334 +0x0c6:  lea    -0x18(%ebp),%eax
0810f337 +0x0c9:  mov    %eax,(%esp)
0810f33a +0x0cc:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0810f33f +0x0d1:  test   %al,%al
0810f341 +0x0d3:  jne    0810f296 <+0x28>
0810f347 +0x0d9:  mov    0x8(%ebp),%eax
0810f34a +0x0dc:  mov    0x1c(%eax),%eax
0810f34d +0x0df:  add    $0x5c,%eax
0810f350 +0x0e2:  mov    %eax,0x4(%esp)
0810f354 +0x0e6:  mov    0x14(%ebp),%eax
0810f357 +0x0e9:  mov    %eax,(%esp)
0810f35a +0x0ec:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0810f35f +0x0f1:  mov    0x8(%ebp),%eax
0810f362 +0x0f4:  mov    0x1c(%eax),%eax
0810f365 +0x0f7:  add    $0x5c,%eax
0810f368 +0x0fa:  mov    %eax,(%esp)
0810f36b +0x0fd:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0810f370 +0x102:  mov    $0x0,%eax
0810f375 +0x107:  mov    -0x4(%ebp),%ebx
0810f378 +0x10a:  leave
0810f379 +0x10b:  ret
```

## 反编译 C

```c
// EventClassify::CExchangeRandomItemReward::sendRandomItemReward @ 0x810f26e

/* EventClassify::CExchangeRandomItemReward::sendRandomItemReward(CUser*, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, unsigned
   char&) */

int __thiscall
EventClassify::CExchangeRandomItemReward::sendRandomItemReward
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3,
          uchar *param_4)

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
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)param_3,(vector *)(*(int *)(this + 0x1c) + 0x5c)
                );
      std::vector<int,std::allocator<int>>::clear
                ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x5c));
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    iVar2 = *(int *)(iVar2 + 4);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_1c);
    Action_SendMail::set_item((Action_SendMail *)(*(int *)(this + 0x1c) + 0x24),*piVar3,iVar2);
    local_10 = CEventActionMng::process_action_send_mail
                         (&local_15,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x24),true);
    if (local_10 != 0) break;
    *param_4 = *param_4 + '\x01';
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return local_10;
}
```
