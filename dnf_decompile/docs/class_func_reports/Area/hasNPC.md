# hasNPC

`_ZNK4Area6hasNPCEj`

`Area::hasNPC(unsigned int) const`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c214c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c214c  _ZNK4Area6hasNPCEj
#           Area::hasNPC(unsigned int) const
# range [0x086c214c, 0x086c21e1]
086c214c +0x00:  push   %ebp
086c214d +0x01:  mov    %esp,%ebp
086c214f +0x03:  sub    $0x28,%esp
086c2152 +0x06:  mov    0x8(%ebp),%eax
086c2155 +0x09:  lea    0x5c(%eax),%edx
086c2158 +0x0c:  lea    -0x14(%ebp),%eax
086c215b +0x0f:  mov    %edx,0x4(%esp)
086c215f +0x13:  mov    %eax,(%esp)
086c2162 +0x16:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
086c2167 +0x1b:  sub    $0x4,%esp
086c216a +0x1e:  mov    0x8(%ebp),%eax
086c216d +0x21:  lea    0x5c(%eax),%edx
086c2170 +0x24:  lea    -0x10(%ebp),%eax
086c2173 +0x27:  mov    %edx,0x4(%esp)
086c2177 +0x2b:  mov    %eax,(%esp)
086c217a +0x2e:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
086c217f +0x33:  sub    $0x4,%esp
086c2182 +0x36:  lea    -0x18(%ebp),%eax
086c2185 +0x39:  lea    0xc(%ebp),%edx
086c2188 +0x3c:  mov    %edx,0xc(%esp)
086c218c +0x40:  mov    -0x14(%ebp),%edx
086c218f +0x43:  mov    %edx,0x8(%esp)
086c2193 +0x47:  mov    -0x10(%ebp),%edx
086c2196 +0x4a:  mov    %edx,0x4(%esp)
086c219a +0x4e:  mov    %eax,(%esp)
086c219d +0x51:  call   08235b21 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb1cb>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb1cb
086c21a2 +0x56:  sub    $0x4,%esp
086c21a5 +0x59:  mov    0x8(%ebp),%eax
086c21a8 +0x5c:  lea    0x5c(%eax),%edx
086c21ab +0x5f:  lea    -0xc(%ebp),%eax
086c21ae +0x62:  mov    %edx,0x4(%esp)
086c21b2 +0x66:  mov    %eax,(%esp)
086c21b5 +0x69:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
086c21ba +0x6e:  sub    $0x4,%esp
086c21bd +0x71:  lea    -0xc(%ebp),%eax
086c21c0 +0x74:  mov    %eax,0x4(%esp)
086c21c4 +0x78:  lea    -0x18(%ebp),%eax
086c21c7 +0x7b:  mov    %eax,(%esp)
086c21ca +0x7e:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
086c21cf +0x83:  test   %al,%al
086c21d1 +0x85:  je     086c21da <+0x8e>
086c21d3 +0x87:  mov    $0x0,%eax
086c21d8 +0x8c:  jmp    086c21df <+0x93>
086c21da +0x8e:  mov    $0x1,%eax
086c21df +0x93:  leave
086c21e0 +0x94:  ret
086c21e1 +0x95:  nop
```

## 反编译 C

```c
// Area::hasNPC @ 0x86c214c

/* Area::hasNPC(unsigned int) const */

bool Area::hasNPC(uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,unsigned_int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_1c,local_10);
  return !bVar1;
}
```
