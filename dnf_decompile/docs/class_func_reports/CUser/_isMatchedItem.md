# _isMatchedItem

`_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cf0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cf0c  _ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0867cf0c, 0x0867cf8c]
0867cf0c +0x00:  push   %ebp
0867cf0d +0x01:  mov    %esp,%ebp
0867cf0f +0x03:  sub    $0x28,%esp
0867cf12 +0x06:  lea    -0xc(%ebp),%eax
0867cf15 +0x09:  mov    0x10(%ebp),%edx
0867cf18 +0x0c:  mov    %edx,0x4(%esp)
0867cf1c +0x10:  mov    %eax,(%esp)
0867cf1f +0x13:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0867cf24 +0x18:  sub    $0x4,%esp
0867cf27 +0x1b:  lea    -0x10(%ebp),%eax
0867cf2a +0x1e:  mov    0x10(%ebp),%edx
0867cf2d +0x21:  mov    %edx,0x4(%esp)
0867cf31 +0x25:  mov    %eax,(%esp)
0867cf34 +0x28:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0867cf39 +0x2d:  sub    $0x4,%esp
0867cf3c +0x30:  jmp    0867cf70 <+0x64>
0867cf3e +0x32:  lea    -0xc(%ebp),%eax
0867cf41 +0x35:  mov    %eax,(%esp)
0867cf44 +0x38:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867cf49 +0x3d:  mov    (%eax),%eax
0867cf4b +0x3f:  cmp    0xc(%ebp),%eax
0867cf4e +0x42:  sete   %al
0867cf51 +0x45:  test   %al,%al
0867cf53 +0x47:  je     0867cf65 <+0x59>
0867cf55 +0x49:  lea    -0xc(%ebp),%eax
0867cf58 +0x4c:  mov    %eax,(%esp)
0867cf5b +0x4f:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867cf60 +0x54:  mov    0x4(%eax),%eax
0867cf63 +0x57:  jmp    0867cf8b <+0x7f>
0867cf65 +0x59:  lea    -0xc(%ebp),%eax
0867cf68 +0x5c:  mov    %eax,(%esp)
0867cf6b +0x5f:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0867cf70 +0x64:  lea    -0x10(%ebp),%eax
0867cf73 +0x67:  mov    %eax,0x4(%esp)
0867cf77 +0x6b:  lea    -0xc(%ebp),%eax
0867cf7a +0x6e:  mov    %eax,(%esp)
0867cf7d +0x71:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0867cf82 +0x76:  test   %al,%al
0867cf84 +0x78:  jne    0867cf3e <+0x32>
0867cf86 +0x7a:  mov    $0xffffffff,%eax
0867cf8b +0x7f:  leave
0867cf8c +0x80:  ret
```

## 反编译 C

```c
// CUser::_isMatchedItem @ 0x867cf0c

/* CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   > const&) */

undefined4 CUser::_isMatchedItem(int param_1,vector *param_2)

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
