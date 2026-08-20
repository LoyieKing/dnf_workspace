# IsMovalbeArea

`_ZNK4Area13IsMovalbeAreaEii`

`Area::IsMovalbeArea(int, int) const`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c3162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3162  _ZNK4Area13IsMovalbeAreaEii
#           Area::IsMovalbeArea(int, int) const
# range [0x086c3162, 0x086c31f1]
086c3162 +0x00:  push   %ebp
086c3163 +0x01:  mov    %esp,%ebp
086c3165 +0x03:  sub    $0x28,%esp
086c3168 +0x06:  mov    0x8(%ebp),%eax
086c316b +0x09:  lea    0x88(%eax),%edx
086c3171 +0x0f:  lea    -0x10(%ebp),%eax
086c3174 +0x12:  mov    %edx,0x4(%esp)
086c3178 +0x16:  mov    %eax,(%esp)
086c317b +0x19:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
086c3180 +0x1e:  sub    $0x4,%esp
086c3183 +0x21:  mov    0x8(%ebp),%eax
086c3186 +0x24:  lea    0x88(%eax),%edx
086c318c +0x2a:  lea    -0x14(%ebp),%eax
086c318f +0x2d:  mov    %edx,0x4(%esp)
086c3193 +0x31:  mov    %eax,(%esp)
086c3196 +0x34:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
086c319b +0x39:  sub    $0x4,%esp
086c319e +0x3c:  jmp    086c31d5 <+0x73>
086c31a0 +0x3e:  lea    -0x10(%ebp),%eax
086c31a3 +0x41:  mov    %eax,(%esp)
086c31a6 +0x44:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
086c31ab +0x49:  mov    %eax,-0xc(%ebp)
086c31ae +0x4c:  mov    -0xc(%ebp),%eax
086c31b1 +0x4f:  mov    (%eax),%eax
086c31b3 +0x51:  cmp    0xc(%ebp),%eax
086c31b6 +0x54:  jne    086c31ca <+0x68>
086c31b8 +0x56:  mov    -0xc(%ebp),%eax
086c31bb +0x59:  mov    0x4(%eax),%eax
086c31be +0x5c:  cmp    0x10(%ebp),%eax
086c31c1 +0x5f:  jne    086c31ca <+0x68>
086c31c3 +0x61:  mov    $0x1,%eax
086c31c8 +0x66:  jmp    086c31f0 <+0x8e>
086c31ca +0x68:  lea    -0x10(%ebp),%eax
086c31cd +0x6b:  mov    %eax,(%esp)
086c31d0 +0x6e:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
086c31d5 +0x73:  lea    -0x14(%ebp),%eax
086c31d8 +0x76:  mov    %eax,0x4(%esp)
086c31dc +0x7a:  lea    -0x10(%ebp),%eax
086c31df +0x7d:  mov    %eax,(%esp)
086c31e2 +0x80:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
086c31e7 +0x85:  test   %al,%al
086c31e9 +0x87:  jne    086c31a0 <+0x3e>
086c31eb +0x89:  mov    $0x0,%eax
086c31f0 +0x8e:  leave
086c31f1 +0x8f:  ret
```

## 反编译 C

```c
// Area::IsMovalbeArea @ 0x86c3162

/* Area::IsMovalbeArea(int, int) const */

undefined4 __thiscall Area::IsMovalbeArea(Area *this,int param_1,int param_2)

{
  bool bVar1;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  int *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator*(local_14);
    if ((*local_10 == param_1) && (local_10[1] == param_2)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14);
  }
  return 1;
}
```
