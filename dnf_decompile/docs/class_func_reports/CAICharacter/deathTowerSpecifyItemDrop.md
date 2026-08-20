# deathTowerSpecifyItemDrop

`_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE`

`CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long> >&) const`

| 类 | 地址 |
|---|---|
| `CAICharacter` | `0x0834a19c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a19c  _ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE
#           CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long> >&) const
# range [0x0834a19c, 0x0834a23f]
0834a19c +0x00:  push   %ebp
0834a19d +0x01:  mov    %esp,%ebp
0834a19f +0x03:  sub    $0x28,%esp
0834a1a2 +0x06:  mov    0x8(%ebp),%eax
0834a1a5 +0x09:  lea    0x10(%eax),%edx
0834a1a8 +0x0c:  lea    -0x14(%ebp),%eax
0834a1ab +0x0f:  mov    %edx,0x4(%esp)
0834a1af +0x13:  mov    %eax,(%esp)
0834a1b2 +0x16:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0834a1b7 +0x1b:  sub    $0x4,%esp
0834a1ba +0x1e:  mov    0x8(%ebp),%eax
0834a1bd +0x21:  lea    0x10(%eax),%edx
0834a1c0 +0x24:  lea    -0x18(%ebp),%eax
0834a1c3 +0x27:  mov    %edx,0x4(%esp)
0834a1c7 +0x2b:  mov    %eax,(%esp)
0834a1ca +0x2e:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834a1cf +0x33:  sub    $0x4,%esp
0834a1d2 +0x36:  jmp    0834a228 <+0x8c>
0834a1d4 +0x38:  movl   $0x2710,(%esp)
0834a1db +0x3f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834a1e0 +0x44:  mov    %eax,-0xc(%ebp)
0834a1e3 +0x47:  lea    -0x14(%ebp),%eax
0834a1e6 +0x4a:  mov    %eax,(%esp)
0834a1e9 +0x4d:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0834a1ee +0x52:  mov    0x4(%eax),%eax
0834a1f1 +0x55:  cmp    -0xc(%ebp),%eax
0834a1f4 +0x58:  setg   %al
0834a1f7 +0x5b:  test   %al,%al
0834a1f9 +0x5d:  je     0834a21d <+0x81>
0834a1fb +0x5f:  lea    -0x14(%ebp),%eax
0834a1fe +0x62:  mov    %eax,(%esp)
0834a201 +0x65:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0834a206 +0x6a:  mov    (%eax),%eax
0834a208 +0x6c:  mov    %eax,-0x10(%ebp)
0834a20b +0x6f:  lea    -0x10(%ebp),%eax
0834a20e +0x72:  mov    %eax,0x4(%esp)
0834a212 +0x76:  mov    0xc(%ebp),%eax
0834a215 +0x79:  mov    %eax,(%esp)
0834a218 +0x7c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0834a21d +0x81:  lea    -0x14(%ebp),%eax
0834a220 +0x84:  mov    %eax,(%esp)
0834a223 +0x87:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0834a228 +0x8c:  lea    -0x18(%ebp),%eax
0834a22b +0x8f:  mov    %eax,0x4(%esp)
0834a22f +0x93:  lea    -0x14(%ebp),%eax
0834a232 +0x96:  mov    %eax,(%esp)
0834a235 +0x99:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0834a23a +0x9e:  test   %al,%al
0834a23c +0xa0:  jne    0834a1d4 <+0x38>
0834a23e +0xa2:  leave
0834a23f +0xa3:  ret
```

## 反编译 C

```c
// CAICharacter::deathTowerSpecifyItemDrop @ 0x834a19c

/* CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long>
   >&) const */

void __thiscall CAICharacter::deathTowerSpecifyItemDrop(CAICharacter *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  ulong local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) break;
    local_10 = get_rand_int(10000);
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_18);
    if (local_10 < *(int *)(iVar2 + 4)) {
      puVar3 = (ulong *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_18);
      local_14 = *puVar3;
      std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
                ((vector<unsigned_long,std::allocator<unsigned_long>> *)param_1,&local_14);
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return;
}
```
