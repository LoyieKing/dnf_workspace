# getCurrentCharacRentalInfo

`_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi`

`CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086773ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086773ea  _ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi
#           CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
# range [0x086773ea, 0x08677515]
086773ea +0x000:  push   %ebp
086773eb +0x001:  mov    %esp,%ebp
086773ed +0x003:  push   %esi
086773ee +0x004:  push   %ebx
086773ef +0x005:  sub    $0x40,%esp
086773f2 +0x008:  mov    0x8(%ebp),%eax
086773f5 +0x00b:  mov    %eax,(%esp)
086773f8 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086773fd +0x013:  mov    %eax,-0xc(%ebp)
08677400 +0x016:  cmpl   $0x0,-0xc(%ebp)
08677404 +0x01a:  jne    08677410 <+0x26>
08677406 +0x01c:  mov    $0x0,%ebx
0867740b +0x021:  jmp    08677509 <+0x11f>
08677410 +0x026:  mov    -0xc(%ebp),%eax
08677413 +0x029:  mov    (%eax),%eax
08677415 +0x02b:  mov    %eax,-0x1c(%ebp)
08677418 +0x02e:  mov    -0x1c(%ebp),%eax
0867741b +0x031:  test   %eax,%eax
0867741d +0x033:  jne    08677429 <+0x3f>
0867741f +0x035:  mov    $0x0,%ebx
08677424 +0x03a:  jmp    08677509 <+0x11f>
08677429 +0x03f:  lea    -0x34(%ebp),%eax
0867742c +0x042:  mov    %eax,(%esp)
0867742f +0x045:  call   0869ba5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x82af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x82af
08677434 +0x04a:  mov    0x10(%ebp),%eax
08677437 +0x04d:  mov    %eax,0x8(%esp)
0867743b +0x051:  lea    -0x34(%ebp),%eax
0867743e +0x054:  mov    %eax,0x4(%esp)
08677442 +0x058:  mov    0x8(%ebp),%eax
08677445 +0x05b:  mov    %eax,(%esp)
08677448 +0x05e:  call   08676dba <_ZN5CUser21GetInstanceRentalInfoERSt3mapIjSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS3_EESt4lessIjESaISt4pairIKjS5_EEEi>  ; CUser::GetInstanceRentalInfo(std::map<unsigned int, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> > > > >&, int)
0867744d +0x063:  lea    -0x18(%ebp),%eax
08677450 +0x066:  lea    -0x1c(%ebp),%edx
08677453 +0x069:  mov    %edx,0x8(%esp)
08677457 +0x06d:  lea    -0x34(%ebp),%edx
0867745a +0x070:  mov    %edx,0x4(%esp)
0867745e +0x074:  mov    %eax,(%esp)
08677461 +0x077:  call   0869b9da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x822f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x822f
08677466 +0x07c:  sub    $0x4,%esp
08677469 +0x07f:  lea    -0x18(%ebp),%eax
0867746c +0x082:  mov    %eax,0x4(%esp)
08677470 +0x086:  lea    -0x38(%ebp),%eax
08677473 +0x089:  mov    %eax,(%esp)
08677476 +0x08c:  call   0869bc0e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8463>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8463
0867747b +0x091:  lea    -0x10(%ebp),%eax
0867747e +0x094:  lea    -0x34(%ebp),%edx
08677481 +0x097:  mov    %edx,0x4(%esp)
08677485 +0x09b:  mov    %eax,(%esp)
08677488 +0x09e:  call   0869ba06 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x825b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x825b
0867748d +0x0a3:  sub    $0x4,%esp
08677490 +0x0a6:  lea    -0x10(%ebp),%eax
08677493 +0x0a9:  mov    %eax,0x4(%esp)
08677497 +0x0ad:  lea    -0x14(%ebp),%eax
0867749a +0x0b0:  mov    %eax,(%esp)
0867749d +0x0b3:  call   0869bc0e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8463>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8463
086774a2 +0x0b8:  lea    -0x14(%ebp),%eax
086774a5 +0x0bb:  mov    %eax,0x4(%esp)
086774a9 +0x0bf:  lea    -0x38(%ebp),%eax
086774ac +0x0c2:  mov    %eax,(%esp)
086774af +0x0c5:  call   0869bba8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x83fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x83fd
086774b4 +0x0ca:  test   %al,%al
086774b6 +0x0cc:  je     086774bf <+0xd5>
086774b8 +0x0ce:  mov    $0x0,%ebx
086774bd +0x0d3:  jmp    086774fe <+0x114>
086774bf +0x0d5:  lea    -0x38(%ebp),%eax
086774c2 +0x0d8:  mov    %eax,(%esp)
086774c5 +0x0db:  call   0869bbbc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8411>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8411
086774ca +0x0e0:  add    $0x4,%eax
086774cd +0x0e3:  mov    %eax,0x4(%esp)
086774d1 +0x0e7:  mov    0xc(%ebp),%eax
086774d4 +0x0ea:  mov    %eax,(%esp)
086774d7 +0x0ed:  call   0869bc1e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8473>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8473
086774dc +0x0f2:  mov    $0x1,%ebx
086774e1 +0x0f7:  jmp    086774fe <+0x114>
086774e3 +0x0f9:  mov    %edx,%ebx
086774e5 +0x0fb:  mov    %eax,%esi
086774e7 +0x0fd:  lea    -0x34(%ebp),%eax
086774ea +0x100:  mov    %eax,(%esp)
086774ed +0x103:  call   08697d50 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x45a5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x45a5
086774f2 +0x108:  mov    %esi,%eax
086774f4 +0x10a:  mov    %ebx,%edx
086774f6 +0x10c:  mov    %eax,(%esp)
086774f9 +0x10f:  call   08ae3750 <_Unwind_Resume>
086774fe +0x114:  lea    -0x34(%ebp),%eax
08677501 +0x117:  mov    %eax,(%esp)
08677504 +0x11a:  call   08697d50 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x45a5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x45a5
08677509 +0x11f:  mov    %ebx,%eax
0867750b +0x121:  lea    -0x8(%ebp),%esp
0867750e +0x124:  add    $0x0,%esp
08677511 +0x127:  pop    %ebx
08677512 +0x128:  pop    %esi
08677513 +0x129:  pop    %ebp
08677514 +0x12a:  ret
08677515 +0x12b:  nop
```

## 反编译 C

```c
// CUser::getCurrentCharacRentalInfo @ 0x86773ea

/* CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo,
   std::allocator<InstanceRentalSystem::RentalInfo> >&, int) */

bool __thiscall CUser::getCurrentCharacRentalInfo(CUser *this,vector *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
  local_3c [4];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_38 [24];
  int local_20;
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
  local_18 [4];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_14 [4];
  int *local_10;
  
  local_10 = (int *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (local_10 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    local_20 = *local_10;
    if (local_20 == 0) {
      bVar3 = false;
    }
    else {
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::map(local_38);
                    /* try { // try from 08677448 to 086774db has its CatchHandler @ 086774e3 */
      GetInstanceRentalInfo(this,(map *)local_38,param_2);
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::find((uint *)local_1c);
      std::
      _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
      ::_Rb_tree_const_iterator(local_3c,local_1c);
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::end(local_14);
      std::
      _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
      ::_Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
              ::operator==(local_3c,(_Rb_tree_const_iterator *)local_18);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
                ::operator*(local_3c);
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        operator=((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                   *)param_1,(vector *)(iVar2 + 4));
      }
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::~map(local_38);
    }
  }
  return bVar3;
}
```
