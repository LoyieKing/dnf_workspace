# GetAveragePrice

`_ZNK20CAuctionAveragePrice15GetAveragePriceEih`

`CAuctionAveragePrice::GetAveragePrice(int, unsigned char) const`

| 类 | 地址 |
|---|---|
| `CAuctionAveragePrice` | `0x082f5da8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f5da8  _ZNK20CAuctionAveragePrice15GetAveragePriceEih
#           CAuctionAveragePrice::GetAveragePrice(int, unsigned char) const
# range [0x082f5da8, 0x082f5ec2]
082f5da8 +0x000:  push   %ebp
082f5da9 +0x001:  mov    %esp,%ebp
082f5dab +0x003:  sub    $0x48,%esp
082f5dae +0x006:  mov    0x10(%ebp),%eax
082f5db1 +0x009:  mov    %al,-0x2c(%ebp)
082f5db4 +0x00c:  mov    0x8(%ebp),%edx
082f5db7 +0x00f:  lea    -0x20(%ebp),%eax
082f5dba +0x012:  lea    0xc(%ebp),%ecx
082f5dbd +0x015:  mov    %ecx,0x8(%esp)
082f5dc1 +0x019:  mov    %edx,0x4(%esp)
082f5dc5 +0x01d:  mov    %eax,(%esp)
082f5dc8 +0x020:  call   082f6158 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x255>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x255
082f5dcd +0x025:  sub    $0x4,%esp
082f5dd0 +0x028:  mov    0x8(%ebp),%edx
082f5dd3 +0x02b:  lea    -0x1c(%ebp),%eax
082f5dd6 +0x02e:  mov    %edx,0x4(%esp)
082f5dda +0x032:  mov    %eax,(%esp)
082f5ddd +0x035:  call   082f6184 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x281>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x281
082f5de2 +0x03a:  sub    $0x4,%esp
082f5de5 +0x03d:  lea    -0x1c(%ebp),%eax
082f5de8 +0x040:  mov    %eax,0x4(%esp)
082f5dec +0x044:  lea    -0x20(%ebp),%eax
082f5def +0x047:  mov    %eax,(%esp)
082f5df2 +0x04a:  call   082f61aa <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2a7>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2a7
082f5df7 +0x04f:  test   %al,%al
082f5df9 +0x051:  je     082f5ebc <+0x114>
082f5dff +0x057:  movzbl -0x2c(%ebp),%eax
082f5e03 +0x05b:  mov    %eax,0x4(%esp)
082f5e07 +0x05f:  lea    -0x15(%ebp),%eax
082f5e0a +0x062:  mov    %eax,(%esp)
082f5e0d +0x065:  call   082f5f20 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x1d>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x1d
082f5e12 +0x06a:  lea    -0x20(%ebp),%eax
082f5e15 +0x06d:  mov    %eax,(%esp)
082f5e18 +0x070:  call   082f61be <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2bb>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2bb
082f5e1d +0x075:  lea    0x4(%eax),%edx
082f5e20 +0x078:  lea    -0x14(%ebp),%eax
082f5e23 +0x07b:  mov    %edx,0x4(%esp)
082f5e27 +0x07f:  mov    %eax,(%esp)
082f5e2a +0x082:  call   082f61f8 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2f5>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2f5
082f5e2f +0x087:  sub    $0x4,%esp
082f5e32 +0x08a:  lea    -0x20(%ebp),%eax
082f5e35 +0x08d:  mov    %eax,(%esp)
082f5e38 +0x090:  call   082f61be <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2bb>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2bb
082f5e3d +0x095:  lea    0x4(%eax),%edx
082f5e40 +0x098:  lea    -0x10(%ebp),%eax
082f5e43 +0x09b:  mov    %edx,0x4(%esp)
082f5e47 +0x09f:  mov    %eax,(%esp)
082f5e4a +0x0a2:  call   082f61cc <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2c9>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2c9
082f5e4f +0x0a7:  sub    $0x4,%esp
082f5e52 +0x0aa:  lea    -0x24(%ebp),%eax
082f5e55 +0x0ad:  movzbl -0x15(%ebp),%edx
082f5e59 +0x0b1:  mov    %dl,0xc(%esp)
082f5e5d +0x0b5:  mov    -0x14(%ebp),%edx
082f5e60 +0x0b8:  mov    %edx,0x8(%esp)
082f5e64 +0x0bc:  mov    -0x10(%ebp),%edx
082f5e67 +0x0bf:  mov    %edx,0x4(%esp)
082f5e6b +0x0c3:  mov    %eax,(%esp)
082f5e6e +0x0c6:  call   082f6224 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x321>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x321
082f5e73 +0x0cb:  sub    $0x4,%esp
082f5e76 +0x0ce:  lea    -0x20(%ebp),%eax
082f5e79 +0x0d1:  mov    %eax,(%esp)
082f5e7c +0x0d4:  call   082f61be <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2bb>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2bb
082f5e81 +0x0d9:  lea    0x4(%eax),%edx
082f5e84 +0x0dc:  lea    -0xc(%ebp),%eax
082f5e87 +0x0df:  mov    %edx,0x4(%esp)
082f5e8b +0x0e3:  mov    %eax,(%esp)
082f5e8e +0x0e6:  call   082f61f8 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x2f5>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x2f5
082f5e93 +0x0eb:  sub    $0x4,%esp
082f5e96 +0x0ee:  lea    -0xc(%ebp),%eax
082f5e99 +0x0f1:  mov    %eax,0x4(%esp)
082f5e9d +0x0f5:  lea    -0x24(%ebp),%eax
082f5ea0 +0x0f8:  mov    %eax,(%esp)
082f5ea3 +0x0fb:  call   082f6279 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x376>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x376
082f5ea8 +0x100:  test   %al,%al
082f5eaa +0x102:  je     082f5ebc <+0x114>
082f5eac +0x104:  lea    -0x24(%ebp),%eax
082f5eaf +0x107:  mov    %eax,(%esp)
082f5eb2 +0x10a:  call   082f62a6 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x3a3>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x3a3
082f5eb7 +0x10f:  mov    0x4(%eax),%eax
082f5eba +0x112:  jmp    082f5ec1 <+0x119>
082f5ebc +0x114:  mov    $0x0,%eax
082f5ec1 +0x119:  leave
082f5ec2 +0x11a:  ret
```

## 反编译 C

```c
// CAuctionAveragePrice::GetAveragePrice @ 0x82f5da8

/* CAuctionAveragePrice::GetAveragePrice(int, unsigned char) const */

undefined4 __thiscall
CAuctionAveragePrice::GetAveragePrice(CAuctionAveragePrice *this,int param_1,uchar param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  __normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
  local_24 [4];
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  local_20 [7];
  FindPrice local_19;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::find((int *)local_24);
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::end(local_20);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
          ::operator!=(local_24,(_Rb_tree_const_iterator *)local_20);
  if (cVar1 != '\0') {
    FindPrice::FindPrice(&local_19,param_2);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::end();
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::begin();
    std::
    find_if<__gnu_cxx::__normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>,FindPrice>
              (local_28,local_14,local_18,local_19);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_28,local_10);
    if (bVar2) {
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
              ::operator->(local_28);
      return *(undefined4 *)(iVar3 + 4);
    }
  }
  return 0;
}
```
