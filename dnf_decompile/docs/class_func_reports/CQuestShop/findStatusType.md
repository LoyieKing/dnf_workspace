# findStatusType

`_ZN10CQuestShop14findStatusTypeEh`

`CQuestShop::findStatusType(unsigned char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eee6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eee6a  _ZN10CQuestShop14findStatusTypeEh
#           CQuestShop::findStatusType(unsigned char)
# range [0x085eee6a, 0x085eef27]
085eee6a +0x00:  push   %ebp
085eee6b +0x01:  mov    %esp,%ebp
085eee6d +0x03:  push   %esi
085eee6e +0x04:  push   %ebx
085eee6f +0x05:  sub    $0x50,%esp
085eee72 +0x08:  mov    0xc(%ebp),%eax
085eee75 +0x0b:  mov    %al,-0x3c(%ebp)
085eee78 +0x0e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085eee7d +0x13:  add    $0x6398,%eax
085eee82 +0x18:  mov    %eax,0x4(%esp)
085eee86 +0x1c:  lea    -0x28(%ebp),%eax
085eee89 +0x1f:  mov    %eax,(%esp)
085eee8c +0x22:  call   085eff50 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xbc>  ; global constructors keyed to CQuestShop::CQuestShop()+0xbc
085eee91 +0x27:  movzbl -0x3c(%ebp),%eax
085eee95 +0x2b:  mov    %eax,-0x10(%ebp)
085eee98 +0x2e:  lea    -0x2c(%ebp),%eax
085eee9b +0x31:  lea    -0x10(%ebp),%edx
085eee9e +0x34:  mov    %edx,0x8(%esp)
085eeea2 +0x38:  lea    -0x28(%ebp),%edx
085eeea5 +0x3b:  mov    %edx,0x4(%esp)
085eeea9 +0x3f:  mov    %eax,(%esp)
085eeeac +0x42:  call   085eff6a <_GLOBAL__I__ZN10CQuestShopC2Ev+0xd6>  ; global constructors keyed to CQuestShop::CQuestShop()+0xd6
085eeeb1 +0x47:  sub    $0x4,%esp
085eeeb4 +0x4a:  lea    -0xc(%ebp),%eax
085eeeb7 +0x4d:  lea    -0x28(%ebp),%edx
085eeeba +0x50:  mov    %edx,0x4(%esp)
085eeebe +0x54:  mov    %eax,(%esp)
085eeec1 +0x57:  call   085eff96 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x102>  ; global constructors keyed to CQuestShop::CQuestShop()+0x102
085eeec6 +0x5c:  sub    $0x4,%esp
085eeec9 +0x5f:  lea    -0xc(%ebp),%eax
085eeecc +0x62:  mov    %eax,0x4(%esp)
085eeed0 +0x66:  lea    -0x2c(%ebp),%eax
085eeed3 +0x69:  mov    %eax,(%esp)
085eeed6 +0x6c:  call   085effbc <_GLOBAL__I__ZN10CQuestShopC2Ev+0x128>  ; global constructors keyed to CQuestShop::CQuestShop()+0x128
085eeedb +0x71:  test   %al,%al
085eeedd +0x73:  je     085eeeef <+0x85>
085eeedf +0x75:  lea    -0x2c(%ebp),%eax
085eeee2 +0x78:  mov    %eax,(%esp)
085eeee5 +0x7b:  call   085effd0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x13c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x13c
085eeeea +0x80:  mov    0x1c(%eax),%ebx
085eeeed +0x83:  jmp    085eef11 <+0xa7>
085eeeef +0x85:  mov    $0x4d,%ebx
085eeef4 +0x8a:  jmp    085eef11 <+0xa7>
085eeef6 +0x8c:  mov    %edx,%ebx
085eeef8 +0x8e:  mov    %eax,%esi
085eeefa +0x90:  lea    -0x28(%ebp),%eax
085eeefd +0x93:  mov    %eax,(%esp)
085eef00 +0x96:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085eef05 +0x9b:  mov    %esi,%eax
085eef07 +0x9d:  mov    %ebx,%edx
085eef09 +0x9f:  mov    %eax,(%esp)
085eef0c +0xa2:  call   08ae3750 <_Unwind_Resume>
085eef11 +0xa7:  lea    -0x28(%ebp),%eax
085eef14 +0xaa:  mov    %eax,(%esp)
085eef17 +0xad:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085eef1c +0xb2:  mov    %ebx,%eax
085eef1e +0xb4:  lea    -0x8(%ebp),%esp
085eef21 +0xb7:  add    $0x0,%esp
085eef24 +0xba:  pop    %ebx
085eef25 +0xbb:  pop    %esi
085eef26 +0xbc:  pop    %ebp
085eef27 +0xbd:  ret
```

## 反编译 C

```c
// CQuestShop::findStatusType @ 0x85eee6a

/* CQuestShop::findStatusType(unsigned char) */

undefined4 __thiscall CQuestShop::findStatusType(CQuestShop *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>> local_30 [4];
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_2c [24];
  uint local_14;
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_10 [4];
  
  iVar2 = G_CDataManager();
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  map(local_2c,(map *)(iVar2 + 0x6398));
  local_14 = (uint)param_1;
                    /* try { // try from 085eeeac to 085eeec5 has its CatchHandler @ 085eeef6 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_30);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0x4d;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_30);
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_2c);
  return uVar3;
}
```
