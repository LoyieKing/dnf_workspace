# GetItemInfo

`_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE`

`CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprt` | `0x08ac04a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac04a4  _ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE
#           CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x08ac04a4, 0x08ac05e0]
08ac04a4 +0x000:  push   %ebp
08ac04a5 +0x001:  mov    %esp,%ebp
08ac04a7 +0x003:  push   %ebx
08ac04a8 +0x004:  sub    $0x44,%esp
08ac04ab +0x007:  mov    0x8(%ebp),%edx
08ac04ae +0x00a:  lea    -0x2c(%ebp),%eax
08ac04b1 +0x00d:  mov    %edx,0x4(%esp)
08ac04b5 +0x011:  mov    %eax,(%esp)
08ac04b8 +0x014:  call   08ac08ae <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x28d>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x28d
08ac04bd +0x019:  sub    $0x4,%esp
08ac04c0 +0x01c:  mov    0x8(%ebp),%edx
08ac04c3 +0x01f:  lea    -0x30(%ebp),%eax
08ac04c6 +0x022:  mov    %edx,0x4(%esp)
08ac04ca +0x026:  mov    %eax,(%esp)
08ac04cd +0x029:  call   08ac07a6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x185>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x185
08ac04d2 +0x02e:  sub    $0x4,%esp
08ac04d5 +0x031:  mov    0xc(%ebp),%eax
08ac04d8 +0x034:  mov    %eax,(%esp)
08ac04db +0x037:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08ac04e0 +0x03c:  mov    0x8(%ebp),%edx
08ac04e3 +0x03f:  lea    -0x34(%ebp),%eax
08ac04e6 +0x042:  mov    %edx,0x4(%esp)
08ac04ea +0x046:  mov    %eax,(%esp)
08ac04ed +0x049:  call   08ac08ae <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x28d>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x28d
08ac04f2 +0x04e:  sub    $0x4,%esp
08ac04f5 +0x051:  jmp    08ac05c2 <+0x11e>
08ac04fa +0x056:  movl   $0x0,-0x14(%ebp)
08ac0501 +0x05d:  lea    -0x34(%ebp),%eax
08ac0504 +0x060:  mov    %eax,(%esp)
08ac0507 +0x063:  call   08ac08d4 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2b3>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2b3
08ac050c +0x068:  mov    0x4(%eax),%eax
08ac050f +0x06b:  mov    %eax,(%esp)
08ac0512 +0x06e:  call   08ac08f6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2d5>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2d5
08ac0517 +0x073:  mov    %eax,-0x10(%ebp)
08ac051a +0x076:  jmp    08ac0594 <+0xf0>
08ac051c +0x078:  lea    -0x34(%ebp),%eax
08ac051f +0x07b:  mov    %eax,(%esp)
08ac0522 +0x07e:  call   08ac08d4 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2b3>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2b3
08ac0527 +0x083:  mov    0x4(%eax),%eax
08ac052a +0x086:  mov    %eax,-0xc(%ebp)
08ac052d +0x089:  mov    -0x14(%ebp),%eax
08ac0530 +0x08c:  mov    %eax,0x4(%esp)
08ac0534 +0x090:  mov    -0xc(%ebp),%eax
08ac0537 +0x093:  mov    %eax,(%esp)
08ac053a +0x096:  call   08ac0912 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2f1>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2f1
08ac053f +0x09b:  lea    0x4(%eax),%ebx
08ac0542 +0x09e:  mov    -0x14(%ebp),%eax
08ac0545 +0x0a1:  mov    %eax,0x4(%esp)
08ac0549 +0x0a5:  mov    -0xc(%ebp),%eax
08ac054c +0x0a8:  mov    %eax,(%esp)
08ac054f +0x0ab:  call   08ac0912 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2f1>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2f1
08ac0554 +0x0b0:  mov    %eax,%edx
08ac0556 +0x0b2:  lea    -0x20(%ebp),%eax
08ac0559 +0x0b5:  mov    %ebx,0x8(%esp)
08ac055d +0x0b9:  mov    %edx,0x4(%esp)
08ac0561 +0x0bd:  mov    %eax,(%esp)
08ac0564 +0x0c0:  call   0819383e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4a6>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4a6
08ac0569 +0x0c5:  sub    $0x4,%esp
08ac056c +0x0c8:  lea    -0x20(%ebp),%eax
08ac056f +0x0cb:  mov    %eax,0x4(%esp)
08ac0573 +0x0cf:  lea    -0x28(%ebp),%eax
08ac0576 +0x0d2:  mov    %eax,(%esp)
08ac0579 +0x0d5:  call   0819387c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4e4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4e4
08ac057e +0x0da:  lea    -0x28(%ebp),%eax
08ac0581 +0x0dd:  mov    %eax,0x4(%esp)
08ac0585 +0x0e1:  mov    0xc(%ebp),%eax
08ac0588 +0x0e4:  mov    %eax,(%esp)
08ac058b +0x0e7:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08ac0590 +0x0ec:  addl   $0x1,-0x14(%ebp)
08ac0594 +0x0f0:  mov    -0x14(%ebp),%eax
08ac0597 +0x0f3:  cmp    -0x10(%ebp),%eax
08ac059a +0x0f6:  setb   %al
08ac059d +0x0f9:  test   %al,%al
08ac059f +0x0fb:  jne    08ac051c <+0x78>
08ac05a5 +0x101:  lea    -0x18(%ebp),%eax
08ac05a8 +0x104:  movl   $0x0,0x8(%esp)
08ac05b0 +0x10c:  lea    -0x34(%ebp),%edx
08ac05b3 +0x10f:  mov    %edx,0x4(%esp)
08ac05b7 +0x113:  mov    %eax,(%esp)
08ac05ba +0x116:  call   08ac093e <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x31d>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x31d
08ac05bf +0x11b:  sub    $0x4,%esp
08ac05c2 +0x11e:  lea    -0x30(%ebp),%eax
08ac05c5 +0x121:  mov    %eax,0x4(%esp)
08ac05c9 +0x125:  lea    -0x34(%ebp),%eax
08ac05cc +0x128:  mov    %eax,(%esp)
08ac05cf +0x12b:  call   08ac07cc <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1ab>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1ab
08ac05d4 +0x130:  test   %al,%al
08ac05d6 +0x132:  jne    08ac04fa <+0x56>
08ac05dc +0x138:  mov    -0x4(%ebp),%ebx
08ac05df +0x13b:  leave
08ac05e0 +0x13c:  ret
```

## 反编译 C

```c
// CreateDnfEventSciprt::GetItemInfo @ 0x8ac04a4

/* CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&) */

void __thiscall CreateDnfEventSciprt::GetItemInfo(CreateDnfEventSciprt *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_38 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_34 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_30 [4];
  pair<int,int> local_2c [8];
  ulong local_24 [2];
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_1c [4];
  uint local_18;
  uint local_14;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_10;
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_30);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_34);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_38);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_38,(_Rb_tree_iterator *)local_34);
    if (cVar1 == '\0') break;
    local_18 = 0;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_38);
    local_14 = std::
               vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
               ::size(*(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        **)(iVar2 + 4));
    for (; local_18 < local_14; local_18 = local_18 + 1) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                            *)local_38);
      local_10 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                   **)(iVar2 + 4);
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::at
                (local_10,local_18);
      psVar3 = (short *)std::
                        vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        ::at(local_10,local_18);
      std::make_pair<unsigned_long&,short&>(local_24,psVar3);
      std::pair<int,int>::pair<unsigned_long,short>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_2c);
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
    ::operator++(local_1c,(int)local_38);
  }
  return;
}
```
