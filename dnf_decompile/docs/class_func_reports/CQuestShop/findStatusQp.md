# findStatusQp

`_ZN10CQuestShop12findStatusQpEh`

`CQuestShop::findStatusQp(unsigned char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eeda8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eeda8  _ZN10CQuestShop12findStatusQpEh
#           CQuestShop::findStatusQp(unsigned char)
# range [0x085eeda8, 0x085eee69]
085eeda8 +0x00:  push   %ebp
085eeda9 +0x01:  mov    %esp,%ebp
085eedab +0x03:  push   %esi
085eedac +0x04:  push   %ebx
085eedad +0x05:  sub    $0x50,%esp
085eedb0 +0x08:  mov    0xc(%ebp),%eax
085eedb3 +0x0b:  mov    %al,-0x3c(%ebp)
085eedb6 +0x0e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085eedbb +0x13:  add    $0x6398,%eax
085eedc0 +0x18:  mov    %eax,0x4(%esp)
085eedc4 +0x1c:  lea    -0x28(%ebp),%eax
085eedc7 +0x1f:  mov    %eax,(%esp)
085eedca +0x22:  call   085eff50 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xbc>  ; global constructors keyed to CQuestShop::CQuestShop()+0xbc
085eedcf +0x27:  movzbl -0x3c(%ebp),%eax
085eedd3 +0x2b:  mov    %eax,-0x10(%ebp)
085eedd6 +0x2e:  lea    -0x2c(%ebp),%eax
085eedd9 +0x31:  lea    -0x10(%ebp),%edx
085eeddc +0x34:  mov    %edx,0x8(%esp)
085eede0 +0x38:  lea    -0x28(%ebp),%edx
085eede3 +0x3b:  mov    %edx,0x4(%esp)
085eede7 +0x3f:  mov    %eax,(%esp)
085eedea +0x42:  call   085eff6a <_GLOBAL__I__ZN10CQuestShopC2Ev+0xd6>  ; global constructors keyed to CQuestShop::CQuestShop()+0xd6
085eedef +0x47:  sub    $0x4,%esp
085eedf2 +0x4a:  lea    -0xc(%ebp),%eax
085eedf5 +0x4d:  lea    -0x28(%ebp),%edx
085eedf8 +0x50:  mov    %edx,0x4(%esp)
085eedfc +0x54:  mov    %eax,(%esp)
085eedff +0x57:  call   085eff96 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x102>  ; global constructors keyed to CQuestShop::CQuestShop()+0x102
085eee04 +0x5c:  sub    $0x4,%esp
085eee07 +0x5f:  lea    -0xc(%ebp),%eax
085eee0a +0x62:  mov    %eax,0x4(%esp)
085eee0e +0x66:  lea    -0x2c(%ebp),%eax
085eee11 +0x69:  mov    %eax,(%esp)
085eee14 +0x6c:  call   085effbc <_GLOBAL__I__ZN10CQuestShopC2Ev+0x128>  ; global constructors keyed to CQuestShop::CQuestShop()+0x128
085eee19 +0x71:  test   %al,%al
085eee1b +0x73:  je     085eee31 <+0x89>
085eee1d +0x75:  lea    -0x2c(%ebp),%eax
085eee20 +0x78:  mov    %eax,(%esp)
085eee23 +0x7b:  call   085effd0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x13c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x13c
085eee28 +0x80:  movzbl 0x18(%eax),%eax
085eee2c +0x84:  movzbl %al,%ebx
085eee2f +0x87:  jmp    085eee53 <+0xab>
085eee31 +0x89:  mov    $0xffffffff,%ebx
085eee36 +0x8e:  jmp    085eee53 <+0xab>
085eee38 +0x90:  mov    %edx,%ebx
085eee3a +0x92:  mov    %eax,%esi
085eee3c +0x94:  lea    -0x28(%ebp),%eax
085eee3f +0x97:  mov    %eax,(%esp)
085eee42 +0x9a:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085eee47 +0x9f:  mov    %esi,%eax
085eee49 +0xa1:  mov    %ebx,%edx
085eee4b +0xa3:  mov    %eax,(%esp)
085eee4e +0xa6:  call   08ae3750 <_Unwind_Resume>
085eee53 +0xab:  lea    -0x28(%ebp),%eax
085eee56 +0xae:  mov    %eax,(%esp)
085eee59 +0xb1:  call   083710c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb08c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb08c
085eee5e +0xb6:  mov    %ebx,%eax
085eee60 +0xb8:  lea    -0x8(%ebp),%esp
085eee63 +0xbb:  add    $0x0,%esp
085eee66 +0xbe:  pop    %ebx
085eee67 +0xbf:  pop    %esi
085eee68 +0xc0:  pop    %ebp
085eee69 +0xc1:  ret
```

## 反编译 C

```c
// CQuestShop::findStatusQp @ 0x85eeda8

/* CQuestShop::findStatusQp(unsigned char) */

uint __thiscall CQuestShop::findStatusQp(CQuestShop *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
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
                    /* try { // try from 085eedea to 085eee03 has its CatchHandler @ 085eee38 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_30);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_30);
    uVar3 = (uint)*(byte *)(iVar2 + 0x18);
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_2c);
  return uVar3;
}
```
