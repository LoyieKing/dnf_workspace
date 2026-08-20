# DBUpdateDBLogItem

`_ZNK5CUser17DBUpdateDBLogItemEv`

`CUser::DBUpdateDBLogItem() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689494` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689494  _ZNK5CUser17DBUpdateDBLogItemEv
#           CUser::DBUpdateDBLogItem() const
# range [0x08689494, 0x08689575]
08689494 +0x00:  push   %ebp
08689495 +0x01:  mov    %esp,%ebp
08689497 +0x03:  push   %edi
08689498 +0x04:  push   %esi
08689499 +0x05:  push   %ebx
0868949a +0x06:  sub    $0x4c,%esp
0868949d +0x09:  mov    0x8(%ebp),%eax
086894a0 +0x0c:  lea    0x8cf74(%eax),%edx
086894a6 +0x12:  lea    -0x24(%ebp),%eax
086894a9 +0x15:  mov    %edx,0x4(%esp)
086894ad +0x19:  mov    %eax,(%esp)
086894b0 +0x1c:  call   0869c8ec <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9141>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9141
086894b5 +0x21:  sub    $0x4,%esp
086894b8 +0x24:  jmp    08689536 <+0xa2>
086894ba +0x26:  lea    -0x24(%ebp),%eax
086894bd +0x29:  mov    %eax,(%esp)
086894c0 +0x2c:  call   0869c9a4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x91f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x91f9
086894c5 +0x31:  mov    0x8(%eax),%eax
086894c8 +0x34:  mov    %eax,-0x2c(%ebp)
086894cb +0x37:  lea    -0x24(%ebp),%eax
086894ce +0x3a:  mov    %eax,(%esp)
086894d1 +0x3d:  call   0869c9a4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x91f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x91f9
086894d6 +0x42:  mov    0x4(%eax),%edi
086894d9 +0x45:  lea    -0x24(%ebp),%eax
086894dc +0x48:  mov    %eax,(%esp)
086894df +0x4b:  call   0869c9a4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x91f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x91f9
086894e4 +0x50:  mov    (%eax),%esi
086894e6 +0x52:  mov    0x8(%ebp),%eax
086894e9 +0x55:  mov    %eax,(%esp)
086894ec +0x58:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086894f1 +0x5d:  mov    %eax,%ebx
086894f3 +0x5f:  mov    0x8(%ebp),%eax
086894f6 +0x62:  mov    %eax,(%esp)
086894f9 +0x65:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086894fe +0x6a:  mov    -0x2c(%ebp),%edx
08689501 +0x6d:  mov    %edx,0x10(%esp)
08689505 +0x71:  mov    %edi,0xc(%esp)
08689509 +0x75:  mov    %esi,0x8(%esp)
0868950d +0x79:  mov    %ebx,0x4(%esp)
08689511 +0x7d:  mov    %eax,(%esp)
08689514 +0x80:  call   0812887e <_ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE>  ; DB_LogBuyItem::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)
08689519 +0x85:  lea    -0x1c(%ebp),%eax
0868951c +0x88:  movl   $0x0,0x8(%esp)
08689524 +0x90:  lea    -0x24(%ebp),%edx
08689527 +0x93:  mov    %edx,0x4(%esp)
0868952b +0x97:  mov    %eax,(%esp)
0868952e +0x9a:  call   0869c970 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x91c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x91c5
08689533 +0x9f:  sub    $0x4,%esp
08689536 +0xa2:  mov    0x8(%ebp),%eax
08689539 +0xa5:  lea    0x8cf74(%eax),%edx
0868953f +0xab:  lea    -0x20(%ebp),%eax
08689542 +0xae:  mov    %edx,0x4(%esp)
08689546 +0xb2:  mov    %eax,(%esp)
08689549 +0xb5:  call   0869c918 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x916d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x916d
0868954e +0xba:  sub    $0x4,%esp
08689551 +0xbd:  lea    -0x20(%ebp),%eax
08689554 +0xc0:  mov    %eax,0x4(%esp)
08689558 +0xc4:  lea    -0x24(%ebp),%eax
0868955b +0xc7:  mov    %eax,(%esp)
0868955e +0xca:  call   0869c944 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9199>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9199
08689563 +0xcf:  test   %al,%al
08689565 +0xd1:  jne    086894ba <+0x26>
0868956b +0xd7:  lea    -0xc(%ebp),%esp
0868956e +0xda:  add    $0x0,%esp
08689571 +0xdd:  pop    %ebx
08689572 +0xde:  pop    %esi
08689573 +0xdf:  pop    %edi
08689574 +0xe0:  pop    %ebp
08689575 +0xe1:  ret
```

## 反编译 C

```c
// CUser::DBUpdateDBLogItem @ 0x8689494

/* CUser::DBUpdateDBLogItem() const */

void __thiscall CUser::DBUpdateDBLogItem(CUser *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
  local_20 [16];
  
  std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::begin();
  while( true ) {
    std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::end();
    bVar4 = __gnu_cxx::operator!=(local_28,local_24);
    if (!bVar4) break;
    iVar5 = __gnu_cxx::
            __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
            ::operator->(local_28);
    uVar1 = *(undefined4 *)(iVar5 + 8);
    iVar5 = __gnu_cxx::
            __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
            ::operator->(local_28);
    uVar2 = *(undefined4 *)(iVar5 + 4);
    puVar6 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
             ::operator->(local_28);
    uVar3 = *puVar6;
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar8 = get_acc_id(this);
    DB_LogBuyItem::makeRequest(uVar8,uVar7,uVar3,uVar2,uVar1);
    __gnu_cxx::
    __normal_iterator<CUser::_DBLogItemInfo_const*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
    ::operator++(local_20,(int)local_28);
  }
  return;
}
```
