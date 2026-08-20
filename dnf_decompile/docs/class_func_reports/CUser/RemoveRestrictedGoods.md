# RemoveRestrictedGoods

`_ZN5CUser21RemoveRestrictedGoodsEi`

`CUser::RemoveRestrictedGoods(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d90a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d90a  _ZN5CUser21RemoveRestrictedGoodsEi
#           CUser::RemoveRestrictedGoods(int)
# range [0x0864d90a, 0x0864d9a3]
0864d90a +0x00:  push   %ebp
0864d90b +0x01:  mov    %esp,%ebp
0864d90d +0x03:  sub    $0x28,%esp
0864d910 +0x06:  mov    0x8(%ebp),%eax
0864d913 +0x09:  lea    0x711ec(%eax),%edx
0864d919 +0x0f:  lea    -0x10(%ebp),%eax
0864d91c +0x12:  mov    %edx,0x4(%esp)
0864d920 +0x16:  mov    %eax,(%esp)
0864d923 +0x19:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0864d928 +0x1e:  sub    $0x4,%esp
0864d92b +0x21:  mov    0x8(%ebp),%eax
0864d92e +0x24:  lea    0x711ec(%eax),%edx
0864d934 +0x2a:  lea    -0x14(%ebp),%eax
0864d937 +0x2d:  mov    %edx,0x4(%esp)
0864d93b +0x31:  mov    %eax,(%esp)
0864d93e +0x34:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0864d943 +0x39:  sub    $0x4,%esp
0864d946 +0x3c:  lea    -0x18(%ebp),%eax
0864d949 +0x3f:  lea    0xc(%ebp),%edx
0864d94c +0x42:  mov    %edx,0xc(%esp)
0864d950 +0x46:  mov    -0x14(%ebp),%edx
0864d953 +0x49:  mov    %edx,0x8(%esp)
0864d957 +0x4d:  mov    -0x10(%ebp),%edx
0864d95a +0x50:  mov    %edx,0x4(%esp)
0864d95e +0x54:  mov    %eax,(%esp)
0864d961 +0x57:  call   08698bec <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5441>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5441
0864d966 +0x5c:  sub    $0x4,%esp
0864d969 +0x5f:  lea    -0x14(%ebp),%eax
0864d96c +0x62:  mov    %eax,0x4(%esp)
0864d970 +0x66:  lea    -0x18(%ebp),%eax
0864d973 +0x69:  mov    %eax,(%esp)
0864d976 +0x6c:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0864d97b +0x71:  test   %al,%al
0864d97d +0x73:  je     0864d9a1 <+0x97>
0864d97f +0x75:  mov    0x8(%ebp),%eax
0864d982 +0x78:  lea    0x711ec(%eax),%ecx
0864d988 +0x7e:  lea    -0xc(%ebp),%eax
0864d98b +0x81:  mov    -0x18(%ebp),%edx
0864d98e +0x84:  mov    %edx,0x8(%esp)
0864d992 +0x88:  mov    %ecx,0x4(%esp)
0864d996 +0x8c:  mov    %eax,(%esp)
0864d999 +0x8f:  call   083c088c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x5a858>  ; global constructors keyed to CServerEvent::m_nExpRate+0x5a858
0864d99e +0x94:  sub    $0x4,%esp
0864d9a1 +0x97:  leave
0864d9a2 +0x98:  ret
0864d9a3 +0x99:  nop
```

## 反编译 C

```c
// CUser::RemoveRestrictedGoods @ 0x864d90a

/* CUser::RemoveRestrictedGoods(int) */

void CUser::RemoveRestrictedGoods(int param_1)

{
  char cVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  std::list<int,std::allocator<int>>::begin();
  std::list<int,std::allocator<int>>::end();
  std::find<std::_List_iterator<int>,int>(&local_1c,local_14,local_18,&stack0x00000008);
  cVar1 = std::_List_iterator<int>::operator!=
                    ((_List_iterator<int> *)&local_1c,(_List_iterator *)&local_18);
  if (cVar1 != '\0') {
    std::list<int,std::allocator<int>>::erase(local_10,param_1 + 0x711ec,local_1c);
  }
  return;
}
```
