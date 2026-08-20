# checkAllRentalItemScript

`_ZN22RentalMachineDimension24checkAllRentalItemScriptEv`

`RentalMachineDimension::checkAllRentalItemScript()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f022  _ZN22RentalMachineDimension24checkAllRentalItemScriptEv
#           RentalMachineDimension::checkAllRentalItemScript()
# range [0x0826f022, 0x0826f14d]
0826f022 +0x000:  push   %ebp
0826f023 +0x001:  mov    %esp,%ebp
0826f025 +0x003:  sub    $0x38,%esp
0826f028 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f02d +0x00b:  lea    0x4b40(%eax),%edx
0826f033 +0x011:  lea    -0x1c(%ebp),%eax
0826f036 +0x014:  mov    %edx,0x4(%esp)
0826f03a +0x018:  mov    %eax,(%esp)
0826f03d +0x01b:  call   0826fbf8 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1fa>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1fa
0826f042 +0x020:  sub    $0x4,%esp
0826f045 +0x023:  jmp    0826f086 <+0x64>
0826f047 +0x025:  lea    -0x1c(%ebp),%eax
0826f04a +0x028:  mov    %eax,(%esp)
0826f04d +0x02b:  call   0826fc76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x278>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x278
0826f052 +0x030:  add    $0x4,%eax
0826f055 +0x033:  mov    %eax,-0x10(%ebp)
0826f058 +0x036:  mov    -0x10(%ebp),%eax
0826f05b +0x039:  mov    %eax,0x4(%esp)
0826f05f +0x03d:  mov    0x8(%ebp),%eax
0826f062 +0x040:  mov    %eax,(%esp)
0826f065 +0x043:  call   0826f14e <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE>  ; RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> > > > const&)
0826f06a +0x048:  xor    $0x1,%eax
0826f06d +0x04b:  test   %al,%al
0826f06f +0x04d:  je     0826f07b <+0x59>
0826f071 +0x04f:  mov    $0x0,%eax
0826f076 +0x054:  jmp    0826f14c <+0x12a>
0826f07b +0x059:  lea    -0x1c(%ebp),%eax
0826f07e +0x05c:  mov    %eax,(%esp)
0826f081 +0x05f:  call   0826fc58 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x25a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x25a
0826f086 +0x064:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f08b +0x069:  lea    0x4b40(%eax),%edx
0826f091 +0x06f:  lea    -0x18(%ebp),%eax
0826f094 +0x072:  mov    %edx,0x4(%esp)
0826f098 +0x076:  mov    %eax,(%esp)
0826f09b +0x079:  call   0826fc1e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x220>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x220
0826f0a0 +0x07e:  sub    $0x4,%esp
0826f0a3 +0x081:  lea    -0x18(%ebp),%eax
0826f0a6 +0x084:  mov    %eax,0x4(%esp)
0826f0aa +0x088:  lea    -0x1c(%ebp),%eax
0826f0ad +0x08b:  mov    %eax,(%esp)
0826f0b0 +0x08e:  call   0826fc44 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x246>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x246
0826f0b5 +0x093:  test   %al,%al
0826f0b7 +0x095:  jne    0826f047 <+0x25>
0826f0b9 +0x097:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f0be +0x09c:  lea    0x4b58(%eax),%edx
0826f0c4 +0x0a2:  lea    -0x20(%ebp),%eax
0826f0c7 +0x0a5:  mov    %edx,0x4(%esp)
0826f0cb +0x0a9:  mov    %eax,(%esp)
0826f0ce +0x0ac:  call   0826fc84 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x286>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x286
0826f0d3 +0x0b1:  sub    $0x4,%esp
0826f0d6 +0x0b4:  jmp    0826f114 <+0xf2>
0826f0d8 +0x0b6:  lea    -0x20(%ebp),%eax
0826f0db +0x0b9:  mov    %eax,(%esp)
0826f0de +0x0bc:  call   0826fd02 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x304>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x304
0826f0e3 +0x0c1:  add    $0x8,%eax
0826f0e6 +0x0c4:  mov    %eax,-0xc(%ebp)
0826f0e9 +0x0c7:  mov    -0xc(%ebp),%eax
0826f0ec +0x0ca:  mov    %eax,0x4(%esp)
0826f0f0 +0x0ce:  mov    0x8(%ebp),%eax
0826f0f3 +0x0d1:  mov    %eax,(%esp)
0826f0f6 +0x0d4:  call   0826f14e <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE>  ; RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> > > > const&)
0826f0fb +0x0d9:  xor    $0x1,%eax
0826f0fe +0x0dc:  test   %al,%al
0826f100 +0x0de:  je     0826f109 <+0xe7>
0826f102 +0x0e0:  mov    $0x0,%eax
0826f107 +0x0e5:  jmp    0826f14c <+0x12a>
0826f109 +0x0e7:  lea    -0x20(%ebp),%eax
0826f10c +0x0ea:  mov    %eax,(%esp)
0826f10f +0x0ed:  call   0826fce4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x2e6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x2e6
0826f114 +0x0f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f119 +0x0f7:  lea    0x4b58(%eax),%edx
0826f11f +0x0fd:  lea    -0x14(%ebp),%eax
0826f122 +0x100:  mov    %edx,0x4(%esp)
0826f126 +0x104:  mov    %eax,(%esp)
0826f129 +0x107:  call   0826fcaa <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x2ac>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x2ac
0826f12e +0x10c:  sub    $0x4,%esp
0826f131 +0x10f:  lea    -0x14(%ebp),%eax
0826f134 +0x112:  mov    %eax,0x4(%esp)
0826f138 +0x116:  lea    -0x20(%ebp),%eax
0826f13b +0x119:  mov    %eax,(%esp)
0826f13e +0x11c:  call   0826fcd0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x2d2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x2d2
0826f143 +0x121:  test   %al,%al
0826f145 +0x123:  jne    0826f0d8 <+0xb6>
0826f147 +0x125:  mov    $0x1,%eax
0826f14c +0x12a:  leave
0826f14d +0x12b:  ret
```

## 反编译 C

```c
// RentalMachineDimension::checkAllRentalItemScript @ 0x826f022

/* RentalMachineDimension::checkAllRentalItemScript() */

undefined4 __thiscall RentalMachineDimension::checkAllRentalItemScript(RentalMachineDimension *this)

{
  char cVar1;
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_24 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_20 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_1c [4];
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::begin(local_20);
  while( true ) {
    G_CDataManager();
    std::
    map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                          *)local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
      G_CDataManager();
      std::
      map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
      ::begin(local_24);
      while( true ) {
        G_CDataManager();
        std::
        map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
        ::end(local_18);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                              *)local_24,(_Rb_tree_iterator *)local_18);
        if (cVar1 == '\0') {
          return 1;
        }
        local_10 = std::
                   _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                   ::operator*((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                                *)local_24);
        local_10 = local_10 + 8;
        cVar1 = checkSelectionListScript((vector *)this);
        if (cVar1 != '\x01') break;
        std::
        _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
        ::operator++((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                      *)local_24);
      }
      return 0;
    }
    local_14 = std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                            *)local_20);
    local_14 = local_14 + 4;
    cVar1 = checkSelectionListScript((vector *)this);
    if (cVar1 != '\x01') break;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                  *)local_20);
  }
  return 0;
}
```
