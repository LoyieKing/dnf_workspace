# IsRestrictedGoods

`_ZN5CUser17IsRestrictedGoodsEi`

`CUser::IsRestrictedGoods(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d878  _ZN5CUser17IsRestrictedGoodsEi
#           CUser::IsRestrictedGoods(int)
# range [0x0864d878, 0x0864d909]
0864d878 +0x00:  push   %ebp
0864d879 +0x01:  mov    %esp,%ebp
0864d87b +0x03:  sub    $0x28,%esp
0864d87e +0x06:  cmpl   $0x0,0xc(%ebp)
0864d882 +0x0a:  jne    0864d88b <+0x13>
0864d884 +0x0c:  mov    $0x0,%eax
0864d889 +0x11:  jmp    0864d907 <+0x8f>
0864d88b +0x13:  mov    0x8(%ebp),%eax
0864d88e +0x16:  lea    0x711ec(%eax),%edx
0864d894 +0x1c:  lea    -0xc(%ebp),%eax
0864d897 +0x1f:  mov    %edx,0x4(%esp)
0864d89b +0x23:  mov    %eax,(%esp)
0864d89e +0x26:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0864d8a3 +0x2b:  sub    $0x4,%esp
0864d8a6 +0x2e:  mov    0x8(%ebp),%eax
0864d8a9 +0x31:  lea    0x711ec(%eax),%edx
0864d8af +0x37:  lea    -0x10(%ebp),%eax
0864d8b2 +0x3a:  mov    %edx,0x4(%esp)
0864d8b6 +0x3e:  mov    %eax,(%esp)
0864d8b9 +0x41:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0864d8be +0x46:  sub    $0x4,%esp
0864d8c1 +0x49:  jmp    0864d8ec <+0x74>
0864d8c3 +0x4b:  lea    -0xc(%ebp),%eax
0864d8c6 +0x4e:  mov    %eax,(%esp)
0864d8c9 +0x51:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0864d8ce +0x56:  mov    (%eax),%eax
0864d8d0 +0x58:  cmp    0xc(%ebp),%eax
0864d8d3 +0x5b:  sete   %al
0864d8d6 +0x5e:  test   %al,%al
0864d8d8 +0x60:  je     0864d8e1 <+0x69>
0864d8da +0x62:  mov    $0x1,%eax
0864d8df +0x67:  jmp    0864d907 <+0x8f>
0864d8e1 +0x69:  lea    -0xc(%ebp),%eax
0864d8e4 +0x6c:  mov    %eax,(%esp)
0864d8e7 +0x6f:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
0864d8ec +0x74:  lea    -0x10(%ebp),%eax
0864d8ef +0x77:  mov    %eax,0x4(%esp)
0864d8f3 +0x7b:  lea    -0xc(%ebp),%eax
0864d8f6 +0x7e:  mov    %eax,(%esp)
0864d8f9 +0x81:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0864d8fe +0x86:  test   %al,%al
0864d900 +0x88:  jne    0864d8c3 <+0x4b>
0864d902 +0x8a:  mov    $0x0,%eax
0864d907 +0x8f:  leave
0864d908 +0x90:  ret
0864d909 +0x91:  nop
```

## 反编译 C

```c
// CUser::IsRestrictedGoods @ 0x864d878

/* CUser::IsRestrictedGoods(int) */

undefined4 __thiscall CUser::IsRestrictedGoods(CUser *this,int param_1)

{
  char cVar1;
  int *piVar2;
  _List_iterator local_14 [4];
  _List_iterator<int> local_10 [12];
  
  if (param_1 != 0) {
    std::list<int,std::allocator<int>>::begin();
    std::list<int,std::allocator<int>>::end();
    while (cVar1 = std::_List_iterator<int>::operator!=(local_10,local_14), cVar1 != '\0') {
      piVar2 = (int *)std::_List_iterator<int>::operator*(local_10);
      if (*piVar2 == param_1) {
        return 1;
      }
      std::_List_iterator<int>::operator++(local_10);
    }
  }
  return 0;
}
```
