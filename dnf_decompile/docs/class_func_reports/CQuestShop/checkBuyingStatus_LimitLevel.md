# checkBuyingStatus_LimitLevel

`_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi`

`CQuestShop::checkBuyingStatus_LimitLevel(unsigned char, short, int)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef0ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef0ce  _ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi
#           CQuestShop::checkBuyingStatus_LimitLevel(unsigned char, short, int)
# range [0x085ef0ce, 0x085ef1b9]
085ef0ce +0x00:  push   %ebp
085ef0cf +0x01:  mov    %esp,%ebp
085ef0d1 +0x03:  push   %esi
085ef0d2 +0x04:  push   %ebx
085ef0d3 +0x05:  sub    $0x50,%esp
085ef0d6 +0x08:  mov    0xc(%ebp),%edx
085ef0d9 +0x0b:  mov    0x10(%ebp),%eax
085ef0dc +0x0e:  mov    %dl,-0x3c(%ebp)
085ef0df +0x11:  mov    %ax,-0x40(%ebp)
085ef0e3 +0x15:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef0e8 +0x1a:  add    $0x6398,%eax
085ef0ed +0x1f:  mov    %eax,0x4(%esp)
085ef0f1 +0x23:  lea    -0x2c(%ebp),%eax
085ef0f4 +0x26:  mov    %eax,(%esp)
085ef0f7 +0x29:  call   085eff50 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xbc>  ; global constructors keyed to CQuestShop::CQuestShop()+0xbc
085ef0fc +0x2e:  movzbl -0x3c(%ebp),%eax
085ef100 +0x32:  mov    %eax,-0x14(%ebp)
085ef103 +0x35:  lea    -0x30(%ebp),%eax
085ef106 +0x38:  lea    -0x14(%ebp),%edx
085ef109 +0x3b:  mov    %edx,0x8(%esp)
085ef10d +0x3f:  lea    -0x2c(%ebp),%edx
085ef110 +0x42:  mov    %edx,0x4(%esp)
085ef114 +0x46:  mov    %eax,(%esp)
085ef117 +0x49:  call   085eff6a <_GLOBAL__I__ZN10CQuestShopC2Ev+0xd6>  ; global constructors keyed to CQuestShop::CQuestShop()+0xd6
085ef11c +0x4e:  sub    $0x4,%esp
085ef11f +0x51:  lea    -0x10(%ebp),%eax
085ef122 +0x54:  lea    -0x2c(%ebp),%edx
085ef125 +0x57:  mov    %edx,0x4(%esp)
085ef129 +0x5b:  mov    %eax,(%esp)
085ef12c +0x5e:  call   085eff96 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x102>  ; global constructors keyed to CQuestShop::CQuestShop()+0x102
085ef131 +0x63:  sub    $0x4,%esp
085ef134 +0x66:  lea    -0x10(%ebp),%eax
085ef137 +0x69:  mov    %eax,0x4(%esp)
085ef13b +0x6d:  lea    -0x30(%ebp),%eax
085ef13e +0x70:  mov    %eax,(%esp)
085ef141 +0x73:  call   085effbc <_GLOBAL__I__ZN10CQuestShopC2Ev+0x128>  ; global constructors keyed to CQuestShop::CQuestShop()+0x128
085ef146 +0x78:  test   %al,%al
085ef148 +0x7a:  je     085ef181 <+0xb3>
085ef14a +0x7c:  lea    -0x30(%ebp),%eax
085ef14d +0x7f:  mov    %eax,(%esp)
085ef150 +0x82:  call   085effd0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x13c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x13c
085ef155 +0x87:  lea    0x4(%eax),%edx
085ef158 +0x8a:  mov    0x14(%ebp),%eax
085ef15b +0x8d:  mov    %eax,0x4(%esp)
085ef15f +0x91:  mov    %edx,(%esp)
085ef162 +0x94:  call   0890f8ec <_ZN17stQuestShopStatus11getMaxCountEi>  ; stQuestShopStatus::getMaxCount(int)
085ef167 +0x99:  mov    %eax,-0xc(%ebp)
085ef16a +0x9c:  movswl -0x40(%ebp),%eax
085ef16e +0xa0:  cmp    -0xc(%ebp),%eax
085ef171 +0xa3:  jle    085ef17a <+0xac>
085ef173 +0xa5:  mov    $0x0,%ebx
085ef178 +0xaa:  jmp    085ef1a3 <+0xd5>
085ef17a +0xac:  mov    $0x1,%ebx
085ef17f +0xb1:  jmp    085ef1a3 <+0xd5>
085ef181 +0xb3:  mov    $0x0,%ebx
085ef186 +0xb8:  jmp    085ef1a3 <+0xd5>
085ef188 +0xba:  mov    %edx,%ebx
085ef18a +0xbc:  mov    %eax,%esi
085ef18c +0xbe:  lea    -0x2c(%ebp),%eax
085ef18f +0xc1:  mov    %eax,(%esp)
085ef192 +0xc4:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085ef197 +0xc9:  mov    %esi,%eax
085ef199 +0xcb:  mov    %ebx,%edx
085ef19b +0xcd:  mov    %eax,(%esp)
085ef19e +0xd0:  call   08ae3750 <_Unwind_Resume>
085ef1a3 +0xd5:  lea    -0x2c(%ebp),%eax
085ef1a6 +0xd8:  mov    %eax,(%esp)
085ef1a9 +0xdb:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085ef1ae +0xe0:  mov    %ebx,%eax
085ef1b0 +0xe2:  lea    -0x8(%ebp),%esp
085ef1b3 +0xe5:  add    $0x0,%esp
085ef1b6 +0xe8:  pop    %ebx
085ef1b7 +0xe9:  pop    %esi
085ef1b8 +0xea:  pop    %ebp
085ef1b9 +0xeb:  ret
```

## 反编译 C

```c
// CQuestShop::checkBuyingStatus_LimitLevel @ 0x85ef0ce

/* CQuestShop::checkBuyingStatus_LimitLevel(unsigned char, short, int) */

undefined4 __thiscall
CQuestShop::checkBuyingStatus_LimitLevel(CQuestShop *this,uchar param_1,short param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>> local_34 [4];
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_30 [24];
  uint local_18;
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_14 [4];
  int local_10;
  
  iVar2 = G_CDataManager();
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  map(local_30,(map *)(iVar2 + 0x6398));
  local_18 = (uint)param_1;
                    /* try { // try from 085ef117 to 085ef166 has its CatchHandler @ 085ef188 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_34);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_34,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_34);
    local_10 = stQuestShopStatus::getMaxCount((stQuestShopStatus *)(iVar2 + 4),param_3);
    if (local_10 < param_2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_30);
  return uVar3;
}
```
