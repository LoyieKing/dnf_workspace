# getUsableItemType

`_ZNK14CStackableItem17getUsableItemTypeEi`

`CStackableItem::getUsableItemType(int) const`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850d780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850d780  _ZNK14CStackableItem17getUsableItemTypeEi
#           CStackableItem::getUsableItemType(int) const
# range [0x0850d780, 0x0850d81d]
0850d780 +0x00:  push   %ebp
0850d781 +0x01:  mov    %esp,%ebp
0850d783 +0x03:  sub    $0x28,%esp
0850d786 +0x06:  mov    0x8(%ebp),%eax
0850d789 +0x09:  lea    0x2c0(%eax),%edx
0850d78f +0x0f:  lea    -0x14(%ebp),%eax
0850d792 +0x12:  mov    %edx,0x4(%esp)
0850d796 +0x16:  mov    %eax,(%esp)
0850d799 +0x19:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0850d79e +0x1e:  sub    $0x4,%esp
0850d7a1 +0x21:  mov    0x8(%ebp),%eax
0850d7a4 +0x24:  lea    0x2c0(%eax),%edx
0850d7aa +0x2a:  lea    -0x10(%ebp),%eax
0850d7ad +0x2d:  mov    %edx,0x4(%esp)
0850d7b1 +0x31:  mov    %eax,(%esp)
0850d7b4 +0x34:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0850d7b9 +0x39:  sub    $0x4,%esp
0850d7bc +0x3c:  lea    -0x18(%ebp),%eax
0850d7bf +0x3f:  lea    0xc(%ebp),%edx
0850d7c2 +0x42:  mov    %edx,0xc(%esp)
0850d7c6 +0x46:  mov    -0x14(%ebp),%edx
0850d7c9 +0x49:  mov    %edx,0x8(%esp)
0850d7cd +0x4d:  mov    -0x10(%ebp),%edx
0850d7d0 +0x50:  mov    %edx,0x4(%esp)
0850d7d4 +0x54:  mov    %eax,(%esp)
0850d7d7 +0x57:  call   08394b33 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x245d3>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x245d3
0850d7dc +0x5c:  sub    $0x4,%esp
0850d7df +0x5f:  mov    0x8(%ebp),%eax
0850d7e2 +0x62:  lea    0x2c0(%eax),%edx
0850d7e8 +0x68:  lea    -0xc(%ebp),%eax
0850d7eb +0x6b:  mov    %edx,0x4(%esp)
0850d7ef +0x6f:  mov    %eax,(%esp)
0850d7f2 +0x72:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0850d7f7 +0x77:  sub    $0x4,%esp
0850d7fa +0x7a:  lea    -0xc(%ebp),%eax
0850d7fd +0x7d:  mov    %eax,0x4(%esp)
0850d801 +0x81:  lea    -0x18(%ebp),%eax
0850d804 +0x84:  mov    %eax,(%esp)
0850d807 +0x87:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0850d80c +0x8c:  test   %al,%al
0850d80e +0x8e:  je     0850d817 <+0x97>
0850d810 +0x90:  mov    $0x1,%eax
0850d815 +0x95:  jmp    0850d81c <+0x9c>
0850d817 +0x97:  mov    $0x0,%eax
0850d81c +0x9c:  leave
0850d81d +0x9d:  ret
```

## 反编译 C

```c
// CStackableItem::getUsableItemType @ 0x850d780

/* CStackableItem::getUsableItemType(int) const */

bool CStackableItem::getUsableItemType(int param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  return bVar1;
}
```
