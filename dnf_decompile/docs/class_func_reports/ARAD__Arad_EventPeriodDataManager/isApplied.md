# isApplied

`_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj`

`ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x081956b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081956b0  _ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj
#           ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)
# range [0x081956b0, 0x08195793]
081956b0 +0x00:  push   %ebp
081956b1 +0x01:  mov    %esp,%ebp
081956b3 +0x03:  sub    $0x38,%esp
081956b6 +0x06:  mov    0xc(%ebp),%eax
081956b9 +0x09:  mov    %eax,0x4(%esp)
081956bd +0x0d:  lea    -0x1c(%ebp),%eax
081956c0 +0x10:  mov    %eax,(%esp)
081956c3 +0x13:  call   08195d72 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x132>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x132
081956c8 +0x18:  mov    0x8(%ebp),%eax
081956cb +0x1b:  lea    0xc(%eax),%edx
081956ce +0x1e:  lea    -0x18(%ebp),%eax
081956d1 +0x21:  mov    %edx,0x4(%esp)
081956d5 +0x25:  mov    %eax,(%esp)
081956d8 +0x28:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
081956dd +0x2d:  sub    $0x4,%esp
081956e0 +0x30:  mov    0x8(%ebp),%eax
081956e3 +0x33:  lea    0xc(%eax),%edx
081956e6 +0x36:  lea    -0x14(%ebp),%eax
081956e9 +0x39:  mov    %edx,0x4(%esp)
081956ed +0x3d:  mov    %eax,(%esp)
081956f0 +0x40:  call   08195f72 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x332>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x332
081956f5 +0x45:  sub    $0x4,%esp
081956f8 +0x48:  lea    -0x20(%ebp),%eax
081956fb +0x4b:  mov    -0x1c(%ebp),%edx
081956fe +0x4e:  mov    %edx,0xc(%esp)
08195702 +0x52:  mov    -0x18(%ebp),%edx
08195705 +0x55:  mov    %edx,0x8(%esp)
08195709 +0x59:  mov    -0x14(%ebp),%edx
0819570c +0x5c:  mov    %edx,0x4(%esp)
08195710 +0x60:  mov    %eax,(%esp)
08195713 +0x63:  call   08195fbc <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x37c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x37c
08195718 +0x68:  sub    $0x4,%esp
0819571b +0x6b:  mov    0x8(%ebp),%eax
0819571e +0x6e:  lea    0xc(%eax),%edx
08195721 +0x71:  lea    -0x10(%ebp),%eax
08195724 +0x74:  mov    %edx,0x4(%esp)
08195728 +0x78:  mov    %eax,(%esp)
0819572b +0x7b:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
08195730 +0x80:  sub    $0x4,%esp
08195733 +0x83:  lea    -0x10(%ebp),%eax
08195736 +0x86:  mov    %eax,0x4(%esp)
0819573a +0x8a:  lea    -0x20(%ebp),%eax
0819573d +0x8d:  mov    %eax,(%esp)
08195740 +0x90:  call   08196010 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3d0>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3d0
08195745 +0x95:  test   %al,%al
08195747 +0x97:  je     0819578c <+0xdc>
08195749 +0x99:  mov    0x10(%ebp),%eax
0819574c +0x9c:  mov    %eax,-0xc(%ebp)
0819574f +0x9f:  lea    -0x20(%ebp),%eax
08195752 +0xa2:  mov    %eax,(%esp)
08195755 +0xa5:  call   0819603c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3fc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3fc
0819575a +0xaa:  mov    0x4(%eax),%eax
0819575d +0xad:  cmp    -0xc(%ebp),%eax
08195760 +0xb0:  ja     0819577c <+0xcc>
08195762 +0xb2:  lea    -0x20(%ebp),%eax
08195765 +0xb5:  mov    %eax,(%esp)
08195768 +0xb8:  call   0819603c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3fc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3fc
0819576d +0xbd:  mov    0x8(%eax),%eax
08195770 +0xc0:  cmp    -0xc(%ebp),%eax
08195773 +0xc3:  jbe    0819577c <+0xcc>
08195775 +0xc5:  mov    $0x1,%eax
0819577a +0xca:  jmp    08195781 <+0xd1>
0819577c +0xcc:  mov    $0x0,%eax
08195781 +0xd1:  test   %al,%al
08195783 +0xd3:  je     0819578c <+0xdc>
08195785 +0xd5:  mov    $0x1,%eax
0819578a +0xda:  jmp    08195791 <+0xe1>
0819578c +0xdc:  mov    $0x0,%eax
08195791 +0xe1:  leave
08195792 +0xe2:  ret
08195793 +0xe3:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::isApplied @ 0x81956b0

/* ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int) */

undefined4 __thiscall
ARAD::Arad_EventPeriodDataManager::isApplied(undefined4 this,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  SearchEventPeriod::SearchEventPeriod((SearchEventPeriod *)&local_20,param_2);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::begin
            ();
  std::
  find_if<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SearchEventPeriod>
            (local_24,local_18,local_1c,local_20);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  bVar1 = __gnu_cxx::operator!=(local_24,local_14);
  if (bVar1) {
    local_10 = param_3;
    iVar2 = __gnu_cxx::
            __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
            ::operator->(local_24);
    if ((local_10 < *(uint *)(iVar2 + 4)) ||
       (iVar2 = __gnu_cxx::
                __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
                ::operator->(local_24), *(uint *)(iVar2 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}
```
