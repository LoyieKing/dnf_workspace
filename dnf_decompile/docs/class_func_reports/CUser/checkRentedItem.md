# checkRentedItem

`_ZN5CUser15checkRentedItemEjii`

`CUser::checkRentedItem(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677188  _ZN5CUser15checkRentedItemEjii
#           CUser::checkRentedItem(unsigned int, int, int)
# range [0x08677188, 0x086772d1]
08677188 +0x000:  push   %ebp
08677189 +0x001:  mov    %esp,%ebp
0867718b +0x003:  push   %esi
0867718c +0x004:  push   %ebx
0867718d +0x005:  sub    $0x50,%esp
08677190 +0x008:  lea    -0x3c(%ebp),%eax
08677193 +0x00b:  mov    %eax,(%esp)
08677196 +0x00e:  call   0869ba5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x82af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x82af
0867719b +0x013:  mov    0x14(%ebp),%eax
0867719e +0x016:  mov    %eax,0x8(%esp)
086771a2 +0x01a:  lea    -0x3c(%ebp),%eax
086771a5 +0x01d:  mov    %eax,0x4(%esp)
086771a9 +0x021:  mov    0x8(%ebp),%eax
086771ac +0x024:  mov    %eax,(%esp)
086771af +0x027:  call   08676dba <_ZN5CUser21GetInstanceRentalInfoERSt3mapIjSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS3_EESt4lessIjESaISt4pairIKjS5_EEEi>  ; CUser::GetInstanceRentalInfo(std::map<unsigned int, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> > > > >&, int)
086771b4 +0x02c:  lea    -0x40(%ebp),%eax
086771b7 +0x02f:  lea    0xc(%ebp),%edx
086771ba +0x032:  mov    %edx,0x8(%esp)
086771be +0x036:  lea    -0x3c(%ebp),%edx
086771c1 +0x039:  mov    %edx,0x4(%esp)
086771c5 +0x03d:  mov    %eax,(%esp)
086771c8 +0x040:  call   0869b9da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x822f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x822f
086771cd +0x045:  sub    $0x4,%esp
086771d0 +0x048:  lea    -0x24(%ebp),%eax
086771d3 +0x04b:  lea    -0x3c(%ebp),%edx
086771d6 +0x04e:  mov    %edx,0x4(%esp)
086771da +0x052:  mov    %eax,(%esp)
086771dd +0x055:  call   0869ba06 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x825b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x825b
086771e2 +0x05a:  sub    $0x4,%esp
086771e5 +0x05d:  lea    -0x24(%ebp),%eax
086771e8 +0x060:  mov    %eax,0x4(%esp)
086771ec +0x064:  lea    -0x40(%ebp),%eax
086771ef +0x067:  mov    %eax,(%esp)
086771f2 +0x06a:  call   0869ba2c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8281>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8281
086771f7 +0x06f:  test   %al,%al
086771f9 +0x071:  je     08677205 <+0x7d>
086771fb +0x073:  mov    $0x0,%ebx
08677200 +0x078:  jmp    086772bb <+0x133>
08677205 +0x07d:  lea    -0x40(%ebp),%eax
08677208 +0x080:  mov    %eax,(%esp)
0867720b +0x083:  call   0869bad4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8329>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8329
08677210 +0x088:  add    $0x4,%eax
08677213 +0x08b:  mov    %eax,-0xc(%ebp)
08677216 +0x08e:  mov    0x10(%ebp),%eax
08677219 +0x091:  mov    %eax,0x4(%esp)
0867721d +0x095:  lea    -0x1c(%ebp),%eax
08677220 +0x098:  mov    %eax,(%esp)
08677223 +0x09b:  call   08697d2c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4581>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4581
08677228 +0x0a0:  lea    -0x18(%ebp),%eax
0867722b +0x0a3:  mov    -0xc(%ebp),%edx
0867722e +0x0a6:  mov    %edx,0x4(%esp)
08677232 +0x0aa:  mov    %eax,(%esp)
08677235 +0x0ad:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
0867723a +0x0b2:  sub    $0x4,%esp
0867723d +0x0b5:  lea    -0x14(%ebp),%eax
08677240 +0x0b8:  mov    -0xc(%ebp),%edx
08677243 +0x0bb:  mov    %edx,0x4(%esp)
08677247 +0x0bf:  mov    %eax,(%esp)
0867724a +0x0c2:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
0867724f +0x0c7:  sub    $0x4,%esp
08677252 +0x0ca:  lea    -0x20(%ebp),%eax
08677255 +0x0cd:  mov    -0x1c(%ebp),%edx
08677258 +0x0d0:  mov    %edx,0xc(%esp)
0867725c +0x0d4:  mov    -0x18(%ebp),%edx
0867725f +0x0d7:  mov    %edx,0x8(%esp)
08677263 +0x0db:  mov    -0x14(%ebp),%edx
08677266 +0x0de:  mov    %edx,0x4(%esp)
0867726a +0x0e2:  mov    %eax,(%esp)
0867726d +0x0e5:  call   0869b808 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x805d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x805d
08677272 +0x0ea:  sub    $0x4,%esp
08677275 +0x0ed:  lea    -0x10(%ebp),%eax
08677278 +0x0f0:  mov    -0xc(%ebp),%edx
0867727b +0x0f3:  mov    %edx,0x4(%esp)
0867727f +0x0f7:  mov    %eax,(%esp)
08677282 +0x0fa:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
08677287 +0x0ff:  sub    $0x4,%esp
0867728a +0x102:  lea    -0x20(%ebp),%eax
0867728d +0x105:  mov    %eax,0x4(%esp)
08677291 +0x109:  lea    -0x10(%ebp),%eax
08677294 +0x10c:  mov    %eax,(%esp)
08677297 +0x10f:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
0867729c +0x114:  mov    %eax,%ebx
0867729e +0x116:  jmp    086772bb <+0x133>
086772a0 +0x118:  mov    %edx,%ebx
086772a2 +0x11a:  mov    %eax,%esi
086772a4 +0x11c:  lea    -0x3c(%ebp),%eax
086772a7 +0x11f:  mov    %eax,(%esp)
086772aa +0x122:  call   08697d50 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x45a5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x45a5
086772af +0x127:  mov    %esi,%eax
086772b1 +0x129:  mov    %ebx,%edx
086772b3 +0x12b:  mov    %eax,(%esp)
086772b6 +0x12e:  call   08ae3750 <_Unwind_Resume>
086772bb +0x133:  lea    -0x3c(%ebp),%eax
086772be +0x136:  mov    %eax,(%esp)
086772c1 +0x139:  call   08697d50 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x45a5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x45a5
086772c6 +0x13e:  mov    %ebx,%eax
086772c8 +0x140:  lea    -0x8(%ebp),%esp
086772cb +0x143:  add    $0x0,%esp
086772ce +0x146:  pop    %ebx
086772cf +0x147:  pop    %esi
086772d0 +0x148:  pop    %ebp
086772d1 +0x149:  ret
```

## 反编译 C

```c
// CUser::checkRentedItem @ 0x8677188

/* CUser::checkRentedItem(unsigned int, int, int) */

bool __thiscall CUser::checkRentedItem(CUser *this,uint param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
  local_44 [4];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_40 [24];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  FindRentalInfoByItemIndex local_20 [12];
  __normal_iterator local_14 [4];
  int local_10;
  
  piVar3 = (int *)&stack0xffffffa4;
  std::
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  ::map(local_40);
                    /* try { // try from 086771af to 0867729b has its CatchHandler @ 086772a0 */
  GetInstanceRentalInfo(this,(map *)local_40,param_3);
  std::
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  ::find((uint *)local_44);
  std::
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  ::end(local_28);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
          ::operator==(local_44,(_Rb_tree_iterator *)local_28);
  if (cVar1 == '\0') {
    local_10 = std::
               _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
               ::operator*(local_44);
    local_10 = local_10 + 4;
    FindRentalInfoByItemIndex::FindRentalInfoByItemIndex(local_20,param_2);
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    end();
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    std::
    find_if<__gnu_cxx::__normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>,FindRentalInfoByItemIndex>
              ();
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    end();
    piVar3 = (int *)&stack0xffffffa0;
    bVar2 = __gnu_cxx::operator!=(local_14,local_24);
  }
  else {
    bVar2 = false;
  }
  *piVar3 = (int)local_40;
  piVar3[-1] = 0x86772c6;
  std::
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  ::~map((map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
          *)*piVar3);
  return bVar2;
}
```
