# HasCurCharacRentalItem

`_ZNK5CUser22HasCurCharacRentalItemEi`

`CUser::HasCurCharacRentalItem(int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086772d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086772d2  _ZNK5CUser22HasCurCharacRentalItemEi
#           CUser::HasCurCharacRentalItem(int) const
# range [0x086772d2, 0x086773e9]
086772d2 +0x000:  push   %ebp
086772d3 +0x001:  mov    %esp,%ebp
086772d5 +0x003:  sub    $0x38,%esp
086772d8 +0x006:  mov    0x8(%ebp),%eax
086772db +0x009:  mov    %eax,(%esp)
086772de +0x00c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086772e3 +0x011:  mov    %eax,-0x10(%ebp)
086772e6 +0x014:  cmpl   $0x0,-0x10(%ebp)
086772ea +0x018:  jne    086772f6 <+0x24>
086772ec +0x01a:  mov    $0x0,%eax
086772f1 +0x01f:  jmp    086773e7 <+0x115>
086772f6 +0x024:  mov    -0x10(%ebp),%eax
086772f9 +0x027:  mov    (%eax),%eax
086772fb +0x029:  mov    %eax,-0x20(%ebp)
086772fe +0x02c:  mov    -0x20(%ebp),%eax
08677301 +0x02f:  test   %eax,%eax
08677303 +0x031:  jne    0867730f <+0x3d>
08677305 +0x033:  mov    $0x0,%eax
0867730a +0x038:  jmp    086773e7 <+0x115>
0867730f +0x03d:  mov    0xc(%ebp),%eax
08677312 +0x040:  mov    %eax,-0x1c(%ebp)
08677315 +0x043:  mov    0x8(%ebp),%eax
08677318 +0x046:  lea    0x6ef78(%eax),%ecx
0867731e +0x04c:  lea    -0x24(%ebp),%eax
08677321 +0x04f:  lea    -0x1c(%ebp),%edx
08677324 +0x052:  mov    %edx,0x8(%esp)
08677328 +0x056:  mov    %ecx,0x4(%esp)
0867732c +0x05a:  mov    %eax,(%esp)
0867732f +0x05d:  call   0869bae2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8337>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8337
08677334 +0x062:  sub    $0x4,%esp
08677337 +0x065:  mov    0x8(%ebp),%eax
0867733a +0x068:  lea    0x6ef78(%eax),%edx
08677340 +0x06e:  lea    -0x18(%ebp),%eax
08677343 +0x071:  mov    %edx,0x4(%esp)
08677347 +0x075:  mov    %eax,(%esp)
0867734a +0x078:  call   0869bb0e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8363>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8363
0867734f +0x07d:  sub    $0x4,%esp
08677352 +0x080:  lea    -0x18(%ebp),%eax
08677355 +0x083:  mov    %eax,0x4(%esp)
08677359 +0x087:  lea    -0x24(%ebp),%eax
0867735c +0x08a:  mov    %eax,(%esp)
0867735f +0x08d:  call   0869bb34 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8389>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8389
08677364 +0x092:  test   %al,%al
08677366 +0x094:  je     0867736f <+0x9d>
08677368 +0x096:  mov    $0x0,%eax
0867736d +0x09b:  jmp    086773e7 <+0x115>
0867736f +0x09d:  lea    -0x24(%ebp),%eax
08677372 +0x0a0:  mov    %eax,(%esp)
08677375 +0x0a3:  call   0869bb48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x839d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x839d
0867737a +0x0a8:  add    $0x4,%eax
0867737d +0x0ab:  mov    %eax,-0xc(%ebp)
08677380 +0x0ae:  lea    -0x28(%ebp),%eax
08677383 +0x0b1:  lea    -0x20(%ebp),%edx
08677386 +0x0b4:  mov    %edx,0x8(%esp)
0867738a +0x0b8:  mov    -0xc(%ebp),%edx
0867738d +0x0bb:  mov    %edx,0x4(%esp)
08677391 +0x0bf:  mov    %eax,(%esp)
08677394 +0x0c2:  call   0869bb56 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x83ab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x83ab
08677399 +0x0c7:  sub    $0x4,%esp
0867739c +0x0ca:  lea    -0x14(%ebp),%eax
0867739f +0x0cd:  mov    -0xc(%ebp),%edx
086773a2 +0x0d0:  mov    %edx,0x4(%esp)
086773a6 +0x0d4:  mov    %eax,(%esp)
086773a9 +0x0d7:  call   0869bb82 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x83d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x83d7
086773ae +0x0dc:  sub    $0x4,%esp
086773b1 +0x0df:  lea    -0x28(%ebp),%eax
086773b4 +0x0e2:  mov    %eax,0x4(%esp)
086773b8 +0x0e6:  lea    -0x14(%ebp),%eax
086773bb +0x0e9:  mov    %eax,(%esp)
086773be +0x0ec:  call   0869bba8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x83fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x83fd
086773c3 +0x0f1:  test   %al,%al
086773c5 +0x0f3:  je     086773ce <+0xfc>
086773c7 +0x0f5:  mov    $0x0,%eax
086773cc +0x0fa:  jmp    086773e7 <+0x115>
086773ce +0x0fc:  lea    -0x28(%ebp),%eax
086773d1 +0x0ff:  mov    %eax,(%esp)
086773d4 +0x102:  call   0869bbbc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8411>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8411
086773d9 +0x107:  add    $0x4,%eax
086773dc +0x10a:  mov    %eax,(%esp)
086773df +0x10d:  call   0869bbca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x841f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x841f
086773e4 +0x112:  xor    $0x1,%eax
086773e7 +0x115:  leave
086773e8 +0x116:  ret
086773e9 +0x117:  nop
```

## 反编译 C

```c
// CUser::HasCurCharacRentalItem @ 0x86772d2

/* CUser::HasCurCharacRentalItem(int) const */

uint __thiscall CUser::HasCurCharacRentalItem(CUser *this,int param_1)

{
  char cVar1;
  uint uVar2;
  _Rb_tree_const_iterator local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
  local_28 [4];
  int local_24;
  int local_20;
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  local_1c [4];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_18 [4];
  int *local_14;
  int local_10;
  
  local_14 = (int *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (local_14 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_24 = *local_14;
    if (local_24 == 0) {
      uVar2 = 0;
    }
    else {
      local_20 = param_1;
      std::
      map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
      ::find((uint *)local_28);
      std::
      map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
      ::end(local_1c);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
              ::operator==(local_28,(_Rb_tree_const_iterator *)local_1c);
      if (cVar1 == '\0') {
        local_10 = std::
                   _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
                   ::operator->(local_28);
        local_10 = local_10 + 4;
        std::
        map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
        ::find((uint *)local_2c);
        std::
        map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
        ::end(local_18);
        cVar1 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
                ::operator==((_Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
                              *)local_18,local_2c);
        if (cVar1 == '\0') {
          std::
          _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
          ::operator*((_Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
                       *)local_2c);
          uVar2 = std::
                  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                  ::empty();
          uVar2 = uVar2 ^ 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
