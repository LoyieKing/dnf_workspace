# setOneADayItemListNo

`_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript`

`CItemShop::setOneADayItemListNo(ItemShopScript&)`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08512f9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512f9c  _ZN9CItemShop20setOneADayItemListNoER14ItemShopScript
#           CItemShop::setOneADayItemListNo(ItemShopScript&)
# range [0x08512f9c, 0x08513075]
08512f9c +0x00:  push   %ebp
08512f9d +0x01:  mov    %esp,%ebp
08512f9f +0x03:  sub    $0x38,%esp
08512fa2 +0x06:  lea    -0x1c(%ebp),%eax
08512fa5 +0x09:  mov    %eax,(%esp)
08512fa8 +0x0c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08512fad +0x11:  mov    0xc(%ebp),%eax
08512fb0 +0x14:  mov    (%eax),%eax
08512fb2 +0x16:  mov    %eax,-0x1c(%ebp)
08512fb5 +0x19:  movl   $0x0,-0x18(%ebp)
08512fbc +0x20:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08512fc3 +0x27:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08512fc8 +0x2c:  mov    %eax,-0x14(%ebp)
08512fcb +0x2f:  mov    0xc(%ebp),%eax
08512fce +0x32:  mov    0x48(%eax),%eax
08512fd1 +0x35:  mov    -0x14(%ebp),%edx
08512fd4 +0x38:  mov    %edx,%ecx
08512fd6 +0x3a:  sub    %eax,%ecx
08512fd8 +0x3c:  mov    %ecx,%eax
08512fda +0x3e:  mov    %eax,-0x10(%ebp)
08512fdd +0x41:  cmpl   $0x0,-0x10(%ebp)
08512fe1 +0x45:  jle    08513034 <+0x98>
08512fe3 +0x47:  mov    -0x10(%ebp),%ecx
08512fe6 +0x4a:  mov    $0xc22e4507,%edx
08512feb +0x4f:  mov    %ecx,%eax
08512fed +0x51:  imul   %edx
08512fef +0x53:  lea    (%edx,%ecx,1),%eax
08512ff2 +0x56:  mov    %eax,%edx
08512ff4 +0x58:  sar    $0x10,%edx
08512ff7 +0x5b:  mov    %ecx,%eax
08512ff9 +0x5d:  sar    $0x1f,%eax
08512ffc +0x60:  mov    %edx,%ecx
08512ffe +0x62:  sub    %eax,%ecx
08513000 +0x64:  mov    %ecx,%eax
08513002 +0x66:  mov    %eax,-0xc(%ebp)
08513005 +0x69:  cmpl   $0x0,-0xc(%ebp)
08513009 +0x6d:  js     08513025 <+0x89>
0851300b +0x6f:  mov    0xc(%ebp),%eax
0851300e +0x72:  add    $0x38,%eax
08513011 +0x75:  mov    %eax,(%esp)
08513014 +0x78:  call   08391c4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x216ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x216ee
08513019 +0x7d:  cmp    -0xc(%ebp),%eax
0851301c +0x80:  jle    08513025 <+0x89>
0851301e +0x82:  mov    $0x1,%eax
08513023 +0x87:  jmp    0851302a <+0x8e>
08513025 +0x89:  mov    $0x0,%eax
0851302a +0x8e:  test   %al,%al
0851302c +0x90:  je     08513034 <+0x98>
0851302e +0x92:  mov    -0xc(%ebp),%eax
08513031 +0x95:  mov    %eax,-0x18(%ebp)
08513034 +0x98:  mov    0x8(%ebp),%eax
08513037 +0x9b:  lea    0x18(%eax),%edx
0851303a +0x9e:  lea    -0x1c(%ebp),%eax
0851303d +0xa1:  mov    %eax,0x4(%esp)
08513041 +0xa5:  mov    %edx,(%esp)
08513044 +0xa8:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08513049 +0xad:  mov    -0x18(%ebp),%eax
0851304c +0xb0:  mov    0xc(%ebp),%edx
0851304f +0xb3:  add    $0x38,%edx
08513052 +0xb6:  mov    %eax,0x4(%esp)
08513056 +0xba:  mov    %edx,(%esp)
08513059 +0xbd:  call   085190d6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x570b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x570b
0851305e +0xc2:  mov    0xc(%ebp),%edx
08513061 +0xc5:  add    $0x14,%edx
08513064 +0xc8:  mov    %eax,0x4(%esp)
08513068 +0xcc:  mov    %edx,(%esp)
0851306b +0xcf:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08513070 +0xd4:  mov    -0x18(%ebp),%eax
08513073 +0xd7:  leave
08513074 +0xd8:  ret
08513075 +0xd9:  nop
```

## 反编译 C

```c
// CItemShop::setOneADayItemListNo @ 0x8512f9c

/* CItemShop::setOneADayItemListNo(ItemShopScript&) */

uint __thiscall CItemShop::setOneADayItemListNo(CItemShop *this,ItemShopScript *param_1)

{
  bool bVar1;
  int iVar2;
  vector *pvVar3;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_20);
  local_20 = *(undefined4 *)param_1;
  local_1c = 0;
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = local_18 - *(int *)(param_1 + 0x48);
  if (local_14 < 1) goto LAB_08513034;
  local_10 = local_14 / 0x15180;
  if ((int)local_10 < 0) {
LAB_08513025:
    bVar1 = false;
  }
  else {
    iVar2 = std::
            vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            ::size((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                    *)(param_1 + 0x38));
    if (iVar2 <= (int)local_10) goto LAB_08513025;
    bVar1 = true;
  }
  if (bVar1) {
    local_1c = local_10;
  }
LAB_08513034:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x18),
             (pair *)&local_20);
  pvVar3 = (vector *)
           std::
           vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
           ::at((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 *)(param_1 + 0x38),local_1c);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(param_1 + 0x14),pvVar3);
  return local_1c;
}
```
