# _isMatchedItem

`_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE`

`CTitleBook::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x0864306e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864306e  _ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE
#           CTitleBook::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0864306e, 0x086430ee]
0864306e +0x00:  push   %ebp
0864306f +0x01:  mov    %esp,%ebp
08643071 +0x03:  sub    $0x28,%esp
08643074 +0x06:  lea    -0xc(%ebp),%eax
08643077 +0x09:  mov    0x10(%ebp),%edx
0864307a +0x0c:  mov    %edx,0x4(%esp)
0864307e +0x10:  mov    %eax,(%esp)
08643081 +0x13:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08643086 +0x18:  sub    $0x4,%esp
08643089 +0x1b:  lea    -0x10(%ebp),%eax
0864308c +0x1e:  mov    0x10(%ebp),%edx
0864308f +0x21:  mov    %edx,0x4(%esp)
08643093 +0x25:  mov    %eax,(%esp)
08643096 +0x28:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0864309b +0x2d:  sub    $0x4,%esp
0864309e +0x30:  jmp    086430d2 <+0x64>
086430a0 +0x32:  lea    -0xc(%ebp),%eax
086430a3 +0x35:  mov    %eax,(%esp)
086430a6 +0x38:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086430ab +0x3d:  mov    (%eax),%eax
086430ad +0x3f:  cmp    0xc(%ebp),%eax
086430b0 +0x42:  sete   %al
086430b3 +0x45:  test   %al,%al
086430b5 +0x47:  je     086430c7 <+0x59>
086430b7 +0x49:  lea    -0xc(%ebp),%eax
086430ba +0x4c:  mov    %eax,(%esp)
086430bd +0x4f:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086430c2 +0x54:  mov    0x4(%eax),%eax
086430c5 +0x57:  jmp    086430ed <+0x7f>
086430c7 +0x59:  lea    -0xc(%ebp),%eax
086430ca +0x5c:  mov    %eax,(%esp)
086430cd +0x5f:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
086430d2 +0x64:  lea    -0x10(%ebp),%eax
086430d5 +0x67:  mov    %eax,0x4(%esp)
086430d9 +0x6b:  lea    -0xc(%ebp),%eax
086430dc +0x6e:  mov    %eax,(%esp)
086430df +0x71:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
086430e4 +0x76:  test   %al,%al
086430e6 +0x78:  jne    086430a0 <+0x32>
086430e8 +0x7a:  mov    $0xffffffff,%eax
086430ed +0x7f:  leave
086430ee +0x80:  ret
```

## 反编译 C

```c
// CTitleBook::_isMatchedItem @ 0x864306e

/* CTitleBook::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

undefined4 CTitleBook::_isMatchedItem(int param_1,vector *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0xffffffff;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_10);
    if ((vector *)*piVar2 == param_2) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator->(local_10);
  return *(undefined4 *)(iVar3 + 4);
}
```
