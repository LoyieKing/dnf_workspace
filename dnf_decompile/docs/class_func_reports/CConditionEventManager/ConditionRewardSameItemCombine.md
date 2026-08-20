# ConditionRewardSameItemCombine

`_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`CConditionEventManager::ConditionRewardSameItemCombine(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08335264` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335264  _ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           CConditionEventManager::ConditionRewardSameItemCombine(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x08335264, 0x0833539f]
08335264 +0x000:  push   %ebp
08335265 +0x001:  mov    %esp,%ebp
08335267 +0x003:  push   %esi
08335268 +0x004:  push   %ebx
08335269 +0x005:  sub    $0x40,%esp
0833526c +0x008:  lea    -0x2c(%ebp),%eax
0833526f +0x00b:  mov    0xc(%ebp),%edx
08335272 +0x00e:  mov    %edx,0x4(%esp)
08335276 +0x012:  mov    %eax,(%esp)
08335279 +0x015:  call   08335d3a <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1e0>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1e0
0833527e +0x01a:  sub    $0x4,%esp
08335281 +0x01d:  jmp    08335367 <+0x103>
08335286 +0x022:  lea    -0x2c(%ebp),%eax
08335289 +0x025:  mov    %eax,(%esp)
0833528c +0x028:  call   08335dc6 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x26c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x26c
08335291 +0x02d:  mov    %eax,%edx
08335293 +0x02f:  lea    -0x30(%ebp),%eax
08335296 +0x032:  mov    %edx,0x8(%esp)
0833529a +0x036:  mov    0x10(%ebp),%edx
0833529d +0x039:  mov    %edx,0x4(%esp)
083352a1 +0x03d:  mov    %eax,(%esp)
083352a4 +0x040:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
083352a9 +0x045:  sub    $0x4,%esp
083352ac +0x048:  lea    -0x24(%ebp),%eax
083352af +0x04b:  mov    0x10(%ebp),%edx
083352b2 +0x04e:  mov    %edx,0x4(%esp)
083352b6 +0x052:  mov    %eax,(%esp)
083352b9 +0x055:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
083352be +0x05a:  sub    $0x4,%esp
083352c1 +0x05d:  lea    -0x24(%ebp),%eax
083352c4 +0x060:  mov    %eax,0x4(%esp)
083352c8 +0x064:  lea    -0x30(%ebp),%eax
083352cb +0x067:  mov    %eax,(%esp)
083352ce +0x06a:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
083352d3 +0x06f:  test   %al,%al
083352d5 +0x071:  je     08335338 <+0xd4>
083352d7 +0x073:  lea    -0x2c(%ebp),%eax
083352da +0x076:  mov    %eax,(%esp)
083352dd +0x079:  call   08335dc6 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x26c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x26c
083352e2 +0x07e:  lea    0x4(%eax),%ebx
083352e5 +0x081:  lea    -0x2c(%ebp),%eax
083352e8 +0x084:  mov    %eax,(%esp)
083352eb +0x087:  call   08335dc6 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x26c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x26c
083352f0 +0x08c:  mov    %eax,%edx
083352f2 +0x08e:  lea    -0x10(%ebp),%eax
083352f5 +0x091:  mov    %ebx,0x8(%esp)
083352f9 +0x095:  mov    %edx,0x4(%esp)
083352fd +0x099:  mov    %eax,(%esp)
08335300 +0x09c:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08335305 +0x0a1:  sub    $0x4,%esp
08335308 +0x0a4:  lea    -0x10(%ebp),%eax
0833530b +0x0a7:  mov    %eax,0x4(%esp)
0833530f +0x0ab:  lea    -0x18(%ebp),%eax
08335312 +0x0ae:  mov    %eax,(%esp)
08335315 +0x0b1:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0833531a +0x0b6:  lea    -0x20(%ebp),%eax
0833531d +0x0b9:  lea    -0x18(%ebp),%edx
08335320 +0x0bc:  mov    %edx,0x8(%esp)
08335324 +0x0c0:  mov    0x10(%ebp),%edx
08335327 +0x0c3:  mov    %edx,0x4(%esp)
0833532b +0x0c7:  mov    %eax,(%esp)
0833532e +0x0ca:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08335333 +0x0cf:  sub    $0x4,%esp
08335336 +0x0d2:  jmp    0833535c <+0xf8>
08335338 +0x0d4:  lea    -0x30(%ebp),%eax
0833533b +0x0d7:  mov    %eax,(%esp)
0833533e +0x0da:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08335343 +0x0df:  mov    %eax,%ebx
08335345 +0x0e1:  mov    0x4(%ebx),%esi
08335348 +0x0e4:  lea    -0x2c(%ebp),%eax
0833534b +0x0e7:  mov    %eax,(%esp)
0833534e +0x0ea:  call   08335dc6 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x26c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x26c
08335353 +0x0ef:  mov    0x4(%eax),%eax
08335356 +0x0f2:  lea    (%esi,%eax,1),%eax
08335359 +0x0f5:  mov    %eax,0x4(%ebx)
0833535c +0x0f8:  lea    -0x2c(%ebp),%eax
0833535f +0x0fb:  mov    %eax,(%esp)
08335362 +0x0fe:  call   08335db0 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x256>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x256
08335367 +0x103:  lea    -0x28(%ebp),%eax
0833536a +0x106:  mov    0xc(%ebp),%edx
0833536d +0x109:  mov    %edx,0x4(%esp)
08335371 +0x10d:  mov    %eax,(%esp)
08335374 +0x110:  call   08335d5e <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x204>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x204
08335379 +0x115:  sub    $0x4,%esp
0833537c +0x118:  lea    -0x28(%ebp),%eax
0833537f +0x11b:  mov    %eax,0x4(%esp)
08335383 +0x11f:  lea    -0x2c(%ebp),%eax
08335386 +0x122:  mov    %eax,(%esp)
08335389 +0x125:  call   08335d84 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x22a>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x22a
0833538e +0x12a:  test   %al,%al
08335390 +0x12c:  jne    08335286 <+0x22>
08335396 +0x132:  lea    -0x8(%ebp),%esp
08335399 +0x135:  add    $0x0,%esp
0833539c +0x138:  pop    %ebx
0833539d +0x139:  pop    %esi
0833539e +0x13a:  pop    %ebp
0833539f +0x13b:  ret
```

## 反编译 C

```c
// CConditionEventManager::ConditionRewardSameItemCombine @ 0x8335264

/* CConditionEventManager::ConditionRewardSameItemCombine(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void CConditionEventManager::ConditionRewardSameItemCombine(vector *param_1,map *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [2];
  
  std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::begin();
  while( true ) {
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::end();
    bVar3 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar3) break;
    __gnu_cxx::
    __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
    ::operator->(local_30);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_34)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
      iVar1 = *(int *)(iVar5 + 4);
      iVar6 = __gnu_cxx::
              __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
              ::operator->(local_30);
      *(int *)(iVar5 + 4) = iVar1 + *(int *)(iVar6 + 4);
    }
    else {
      __gnu_cxx::
      __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
      ::operator->(local_30);
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
                      ::operator->(local_30);
      std::make_pair<int&,int&>(local_14,piVar4);
      std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
    }
    __gnu_cxx::
    __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
    ::operator++(local_30);
  }
  return;
}
```
