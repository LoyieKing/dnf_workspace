# _IsCompoundResult2MoreEquip

`_ZN5CUser27_IsCompoundResult2MoreEquipERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::_IsCompoundResult2MoreEquip(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086720d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086720d0  _ZN5CUser27_IsCompoundResult2MoreEquipERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::_IsCompoundResult2MoreEquip(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x086720d0, 0x0867218b]
086720d0 +0x00:  push   %ebp
086720d1 +0x01:  mov    %esp,%ebp
086720d3 +0x03:  push   %ebx
086720d4 +0x04:  sub    $0x24,%esp
086720d7 +0x07:  lea    -0x10(%ebp),%eax
086720da +0x0a:  mov    0xc(%ebp),%edx
086720dd +0x0d:  mov    %edx,0x4(%esp)
086720e1 +0x11:  mov    %eax,(%esp)
086720e4 +0x14:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
086720e9 +0x19:  sub    $0x4,%esp
086720ec +0x1c:  lea    -0x14(%ebp),%eax
086720ef +0x1f:  mov    0xc(%ebp),%edx
086720f2 +0x22:  mov    %edx,0x4(%esp)
086720f6 +0x26:  mov    %eax,(%esp)
086720f9 +0x29:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
086720fe +0x2e:  sub    $0x4,%esp
08672101 +0x31:  jmp    0867216b <+0x9b>
08672103 +0x33:  lea    -0x10(%ebp),%eax
08672106 +0x36:  mov    %eax,(%esp)
08672109 +0x39:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867210e +0x3e:  mov    (%eax),%ebx
08672110 +0x40:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08672115 +0x45:  mov    %ebx,0x4(%esp)
08672119 +0x49:  mov    %eax,(%esp)
0867211c +0x4c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08672121 +0x51:  mov    %eax,-0xc(%ebp)
08672124 +0x54:  cmpl   $0x0,-0xc(%ebp)
08672128 +0x58:  jne    08672131 <+0x61>
0867212a +0x5a:  mov    $0x1,%eax
0867212f +0x5f:  jmp    08672186 <+0xb6>
08672131 +0x61:  mov    -0xc(%ebp),%eax
08672134 +0x64:  mov    %eax,(%esp)
08672137 +0x67:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0867213c +0x6c:  test   %al,%al
0867213e +0x6e:  jne    0867215f <+0x8f>
08672140 +0x70:  lea    -0x10(%ebp),%eax
08672143 +0x73:  mov    %eax,(%esp)
08672146 +0x76:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867214b +0x7b:  mov    0x4(%eax),%eax
0867214e +0x7e:  cmp    $0x1,%eax
08672151 +0x81:  setg   %al
08672154 +0x84:  test   %al,%al
08672156 +0x86:  je     08672160 <+0x90>
08672158 +0x88:  mov    $0x1,%eax
0867215d +0x8d:  jmp    08672186 <+0xb6>
0867215f +0x8f:  nop
08672160 +0x90:  lea    -0x10(%ebp),%eax
08672163 +0x93:  mov    %eax,(%esp)
08672166 +0x96:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0867216b +0x9b:  lea    -0x14(%ebp),%eax
0867216e +0x9e:  mov    %eax,0x4(%esp)
08672172 +0xa2:  lea    -0x10(%ebp),%eax
08672175 +0xa5:  mov    %eax,(%esp)
08672178 +0xa8:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0867217d +0xad:  test   %al,%al
0867217f +0xaf:  jne    08672103 <+0x33>
08672181 +0xb1:  mov    $0x0,%eax
08672186 +0xb6:  mov    -0x4(%ebp),%ebx
08672189 +0xb9:  leave
0867218a +0xba:  ret
0867218b +0xbb:  nop
```

## 反编译 C

```c
// CUser::_IsCompoundResult2MoreEquip @ 0x86720d0

/* CUser::_IsCompoundResult2MoreEquip(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

undefined4 CUser::_IsCompoundResult2MoreEquip(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  CItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar2) {
      return 0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_14);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(this,iVar4);
    if (local_10 == (CItem *)0x0) break;
    cVar1 = CItem::is_stackable(local_10);
    if ((cVar1 == '\0') &&
       (iVar4 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_14), 1 < *(int *)(iVar4 + 4))) {
      return 1;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14);
  }
  return 1;
}
```
