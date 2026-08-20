# getUserQuestRewardItem

`_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_`

`CUser::getUserQuestRewardItem(Quest const*, CUser const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866e914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866e914  _ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_
#           CUser::getUserQuestRewardItem(Quest const*, CUser const*)
# range [0x0866e914, 0x0866ea91]
0866e914 +0x000:  push   %ebp
0866e915 +0x001:  mov    %esp,%ebp
0866e917 +0x003:  push   %ebx
0866e918 +0x004:  sub    $0x24,%esp
0866e91b +0x007:  mov    0x8(%ebp),%eax
0866e91e +0x00a:  add    $0xdc,%eax
0866e923 +0x00f:  mov    %eax,(%esp)
0866e926 +0x012:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0866e92b +0x017:  xor    $0x1,%eax
0866e92e +0x01a:  test   %al,%al
0866e930 +0x01c:  je     0866ea84 <+0x170>
0866e936 +0x022:  mov    0x8(%ebp),%eax
0866e939 +0x025:  mov    0xe8(%eax),%eax
0866e93f +0x02b:  cmp    $0x1,%eax
0866e942 +0x02e:  je     0866e9f6 <+0xe2>
0866e948 +0x034:  mov    0x8(%ebp),%eax
0866e94b +0x037:  lea    0xdc(%eax),%edx
0866e951 +0x03d:  lea    -0xc(%ebp),%eax
0866e954 +0x040:  mov    %edx,0x4(%esp)
0866e958 +0x044:  mov    %eax,(%esp)
0866e95b +0x047:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0866e960 +0x04c:  sub    $0x4,%esp
0866e963 +0x04f:  mov    0x8(%ebp),%eax
0866e966 +0x052:  lea    0xdc(%eax),%edx
0866e96c +0x058:  lea    -0x10(%ebp),%eax
0866e96f +0x05b:  mov    %edx,0x4(%esp)
0866e973 +0x05f:  mov    %eax,(%esp)
0866e976 +0x062:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0866e97b +0x067:  sub    $0x4,%esp
0866e97e +0x06a:  jmp    0866e9b6 <+0xa2>
0866e980 +0x06c:  lea    -0xc(%ebp),%eax
0866e983 +0x06f:  mov    %eax,(%esp)
0866e986 +0x072:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0866e98b +0x077:  mov    (%eax),%ebx
0866e98d +0x079:  mov    0xc(%ebp),%eax
0866e990 +0x07c:  mov    %eax,(%esp)
0866e993 +0x07f:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866e998 +0x084:  mov    %ebx,0x4(%esp)
0866e99c +0x088:  mov    %eax,(%esp)
0866e99f +0x08b:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
0866e9a4 +0x090:  xor    $0x1,%eax
0866e9a7 +0x093:  test   %al,%al
0866e9a9 +0x095:  jne    0866e9ce <+0xba>
0866e9ab +0x097:  lea    -0xc(%ebp),%eax
0866e9ae +0x09a:  mov    %eax,(%esp)
0866e9b1 +0x09d:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0866e9b6 +0x0a2:  lea    -0x10(%ebp),%eax
0866e9b9 +0x0a5:  mov    %eax,0x4(%esp)
0866e9bd +0x0a9:  lea    -0xc(%ebp),%eax
0866e9c0 +0x0ac:  mov    %eax,(%esp)
0866e9c3 +0x0af:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0866e9c8 +0x0b4:  test   %al,%al
0866e9ca +0x0b6:  jne    0866e980 <+0x6c>
0866e9cc +0x0b8:  jmp    0866e9cf <+0xbb>
0866e9ce +0x0ba:  nop
0866e9cf +0x0bb:  lea    -0x10(%ebp),%eax
0866e9d2 +0x0be:  mov    %eax,0x4(%esp)
0866e9d6 +0x0c2:  lea    -0xc(%ebp),%eax
0866e9d9 +0x0c5:  mov    %eax,(%esp)
0866e9dc +0x0c8:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
0866e9e1 +0x0cd:  test   %al,%al
0866e9e3 +0x0cf:  je     0866ea83 <+0x16f>
0866e9e9 +0x0d5:  mov    0x8(%ebp),%eax
0866e9ec +0x0d8:  add    $0xec,%eax
0866e9f1 +0x0dd:  jmp    0866ea8c <+0x178>
0866e9f6 +0x0e2:  mov    0x8(%ebp),%eax
0866e9f9 +0x0e5:  lea    0xdc(%eax),%edx
0866e9ff +0x0eb:  lea    -0x14(%ebp),%eax
0866ea02 +0x0ee:  mov    %edx,0x4(%esp)
0866ea06 +0x0f2:  mov    %eax,(%esp)
0866ea09 +0x0f5:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0866ea0e +0x0fa:  sub    $0x4,%esp
0866ea11 +0x0fd:  mov    0x8(%ebp),%eax
0866ea14 +0x100:  lea    0xdc(%eax),%edx
0866ea1a +0x106:  lea    -0x18(%ebp),%eax
0866ea1d +0x109:  mov    %edx,0x4(%esp)
0866ea21 +0x10d:  mov    %eax,(%esp)
0866ea24 +0x110:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0866ea29 +0x115:  sub    $0x4,%esp
0866ea2c +0x118:  jmp    0866ea6b <+0x157>
0866ea2e +0x11a:  lea    -0x14(%ebp),%eax
0866ea31 +0x11d:  mov    %eax,(%esp)
0866ea34 +0x120:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0866ea39 +0x125:  mov    (%eax),%ebx
0866ea3b +0x127:  mov    0xc(%ebp),%eax
0866ea3e +0x12a:  mov    %eax,(%esp)
0866ea41 +0x12d:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866ea46 +0x132:  mov    %ebx,0x4(%esp)
0866ea4a +0x136:  mov    %eax,(%esp)
0866ea4d +0x139:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
0866ea52 +0x13e:  test   %al,%al
0866ea54 +0x140:  je     0866ea60 <+0x14c>
0866ea56 +0x142:  mov    0x8(%ebp),%eax
0866ea59 +0x145:  add    $0xec,%eax
0866ea5e +0x14a:  jmp    0866ea8c <+0x178>
0866ea60 +0x14c:  lea    -0x14(%ebp),%eax
0866ea63 +0x14f:  mov    %eax,(%esp)
0866ea66 +0x152:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0866ea6b +0x157:  lea    -0x18(%ebp),%eax
0866ea6e +0x15a:  mov    %eax,0x4(%esp)
0866ea72 +0x15e:  lea    -0x14(%ebp),%eax
0866ea75 +0x161:  mov    %eax,(%esp)
0866ea78 +0x164:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0866ea7d +0x169:  test   %al,%al
0866ea7f +0x16b:  jne    0866ea2e <+0x11a>
0866ea81 +0x16d:  jmp    0866ea84 <+0x170>
0866ea83 +0x16f:  nop
0866ea84 +0x170:  mov    0x8(%ebp),%eax
0866ea87 +0x173:  add    $0xc4,%eax
0866ea8c +0x178:  mov    -0x4(%ebp),%ebx
0866ea8f +0x17b:  leave
0866ea90 +0x17c:  ret
0866ea91 +0x17d:  nop
```

## 反编译 C

```c
// CUser::getUserQuestRewardItem @ 0x866e914

/* CUser::getUserQuestRewardItem(Quest const*, CUser const*) */

Quest * CUser::getUserQuestRewardItem(Quest *param_1,CUser *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  UserQuest *pUVar5;
  __normal_iterator local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_10 [8];
  
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    if (*(int *)(param_1 + 0xe8) == 1) {
      std::vector<int,std::allocator<int>>::begin();
      std::vector<int,std::allocator<int>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_18,local_1c), bVar3) {
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_18);
        iVar1 = *piVar4;
        pUVar5 = (UserQuest *)getCurCharacQuestR(param_2);
        cVar2 = UserQuest::isClearQuest(pUVar5,iVar1);
        if (cVar2 != '\0') {
          return param_1 + 0xec;
        }
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18);
      }
    }
    else {
      std::vector<int,std::allocator<int>>::begin();
      std::vector<int,std::allocator<int>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_10,local_14), bVar3) {
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_10);
        iVar1 = *piVar4;
        pUVar5 = (UserQuest *)getCurCharacQuestR(param_2);
        cVar2 = UserQuest::isClearQuest(pUVar5,iVar1);
        if (cVar2 != '\x01') break;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_10);
      }
      bVar3 = __gnu_cxx::operator==(local_10,local_14);
      if (bVar3) {
        return param_1 + 0xec;
      }
    }
  }
  return param_1 + 0xc4;
}
```
