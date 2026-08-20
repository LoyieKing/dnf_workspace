# checkCreateTime

`_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj`

`ARAD::Arad_EventPeriodDataManager::checkCreateTime(ENUM_REPEAT_EVENT_CODE, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195794  _ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj
#           ARAD::Arad_EventPeriodDataManager::checkCreateTime(ENUM_REPEAT_EVENT_CODE, unsigned int, unsigned int)
# range [0x08195794, 0x0819589d]
08195794 +0x000:  push   %ebp
08195795 +0x001:  mov    %esp,%ebp
08195797 +0x003:  sub    $0x38,%esp
0819579a +0x006:  mov    0xc(%ebp),%eax
0819579d +0x009:  mov    %eax,0x4(%esp)
081957a1 +0x00d:  lea    -0x24(%ebp),%eax
081957a4 +0x010:  mov    %eax,(%esp)
081957a7 +0x013:  call   08195d72 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x132>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x132
081957ac +0x018:  mov    0x8(%ebp),%eax
081957af +0x01b:  lea    0xc(%eax),%edx
081957b2 +0x01e:  lea    -0x20(%ebp),%eax
081957b5 +0x021:  mov    %edx,0x4(%esp)
081957b9 +0x025:  mov    %eax,(%esp)
081957bc +0x028:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
081957c1 +0x02d:  sub    $0x4,%esp
081957c4 +0x030:  mov    0x8(%ebp),%eax
081957c7 +0x033:  lea    0xc(%eax),%edx
081957ca +0x036:  lea    -0x1c(%ebp),%eax
081957cd +0x039:  mov    %edx,0x4(%esp)
081957d1 +0x03d:  mov    %eax,(%esp)
081957d4 +0x040:  call   08195f72 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x332>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x332
081957d9 +0x045:  sub    $0x4,%esp
081957dc +0x048:  lea    -0x28(%ebp),%eax
081957df +0x04b:  mov    -0x24(%ebp),%edx
081957e2 +0x04e:  mov    %edx,0xc(%esp)
081957e6 +0x052:  mov    -0x20(%ebp),%edx
081957e9 +0x055:  mov    %edx,0x8(%esp)
081957ed +0x059:  mov    -0x1c(%ebp),%edx
081957f0 +0x05c:  mov    %edx,0x4(%esp)
081957f4 +0x060:  mov    %eax,(%esp)
081957f7 +0x063:  call   08195fbc <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x37c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x37c
081957fc +0x068:  sub    $0x4,%esp
081957ff +0x06b:  mov    0x8(%ebp),%eax
08195802 +0x06e:  lea    0xc(%eax),%edx
08195805 +0x071:  lea    -0x18(%ebp),%eax
08195808 +0x074:  mov    %edx,0x4(%esp)
0819580c +0x078:  mov    %eax,(%esp)
0819580f +0x07b:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
08195814 +0x080:  sub    $0x4,%esp
08195817 +0x083:  lea    -0x18(%ebp),%eax
0819581a +0x086:  mov    %eax,0x4(%esp)
0819581e +0x08a:  lea    -0x28(%ebp),%eax
08195821 +0x08d:  mov    %eax,(%esp)
08195824 +0x090:  call   08196010 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3d0>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3d0
08195829 +0x095:  test   %al,%al
0819582b +0x097:  je     08195896 <+0x102>
0819582d +0x099:  movb   $0x0,-0x11(%ebp)
08195831 +0x09d:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08195836 +0x0a2:  mov    0x14(%ebp),%edx
08195839 +0x0a5:  mov    %edx,0x4(%esp)
0819583d +0x0a9:  mov    %eax,(%esp)
08195840 +0x0ac:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
08195845 +0x0b1:  test   %al,%al
08195847 +0x0b3:  je     0819584d <+0xb9>
08195849 +0x0b5:  movb   $0x1,-0x11(%ebp)
0819584d +0x0b9:  cmpb   $0x0,-0x11(%ebp)
08195851 +0x0bd:  je     08195866 <+0xd2>
08195853 +0x0bf:  mov    0x8(%ebp),%eax
08195856 +0x0c2:  mov    0x8(%eax),%eax
08195859 +0x0c5:  imul   $0xfffeae80,%eax,%eax
0819585f +0x0cb:  add    $0x5005d250,%eax
08195864 +0x0d0:  jmp    0819586b <+0xd7>
08195866 +0x0d2:  mov    $0x5005d250,%eax
0819586b +0x0d7:  mov    %eax,-0x10(%ebp)
0819586e +0x0da:  lea    -0x28(%ebp),%eax
08195871 +0x0dd:  mov    %eax,(%esp)
08195874 +0x0e0:  call   0819603c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3fc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3fc
08195879 +0x0e5:  mov    0x8(%eax),%eax
0819587c +0x0e8:  mov    %eax,-0xc(%ebp)
0819587f +0x0eb:  mov    -0x10(%ebp),%eax
08195882 +0x0ee:  cmp    0x10(%ebp),%eax
08195885 +0x0f1:  ja     08195896 <+0x102>
08195887 +0x0f3:  mov    0x10(%ebp),%eax
0819588a +0x0f6:  cmp    -0xc(%ebp),%eax
0819588d +0x0f9:  jae    08195896 <+0x102>
0819588f +0x0fb:  mov    $0x1,%eax
08195894 +0x100:  jmp    0819589b <+0x107>
08195896 +0x102:  mov    $0x0,%eax
0819589b +0x107:  leave
0819589c +0x108:  ret
0819589d +0x109:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::checkCreateTime @ 0x8195794

/* ARAD::Arad_EventPeriodDataManager::checkCreateTime(ENUM_REPEAT_EVENT_CODE, unsigned int, unsigned
   int) */

undefined4 __thiscall
ARAD::Arad_EventPeriodDataManager::checkCreateTime
          (Arad_EventPeriodDataManager *this,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
  local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  __normal_iterator local_1c [7];
  char local_15;
  uint local_14;
  
  SearchEventPeriod::SearchEventPeriod((SearchEventPeriod *)&local_28,param_2);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::begin
            ();
  std::
  find_if<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SearchEventPeriod>
            (local_2c,local_20,local_24,local_28);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  bVar1 = __gnu_cxx::operator!=(local_2c,local_1c);
  if (bVar1) {
    local_15 = '\0';
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_4);
    if (cVar2 != '\0') {
      local_15 = '\x01';
    }
    if (local_15 == '\0') {
      local_14 = 0x5005d250;
    }
    else {
      local_14 = *(int *)(this + 8) * -0x15180 + 0x5005d250;
    }
    iVar3 = __gnu_cxx::
            __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
            ::operator->(local_2c);
    if ((local_14 <= param_3) && (param_3 < *(uint *)(iVar3 + 8))) {
      return 1;
    }
  }
  return 0;
}
```
