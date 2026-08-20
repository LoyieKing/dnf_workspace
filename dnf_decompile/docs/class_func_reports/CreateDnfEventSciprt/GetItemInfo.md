# GetItemInfo

`_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi`

`CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprt` | `0x08ac03a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac03a6  _ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi
#           CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)
# range [0x08ac03a6, 0x08ac04a3]
08ac03a6 +0x00:  push   %ebp
08ac03a7 +0x01:  mov    %esp,%ebp
08ac03a9 +0x03:  push   %ebx
08ac03aa +0x04:  sub    $0x44,%esp
08ac03ad +0x07:  mov    0x8(%ebp),%edx
08ac03b0 +0x0a:  lea    -0x2c(%ebp),%eax
08ac03b3 +0x0d:  lea    0x10(%ebp),%ecx
08ac03b6 +0x10:  mov    %ecx,0x8(%esp)
08ac03ba +0x14:  mov    %edx,0x4(%esp)
08ac03be +0x18:  mov    %eax,(%esp)
08ac03c1 +0x1b:  call   08ac077a <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x159>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x159
08ac03c6 +0x20:  sub    $0x4,%esp
08ac03c9 +0x23:  mov    0x8(%ebp),%edx
08ac03cc +0x26:  lea    -0x28(%ebp),%eax
08ac03cf +0x29:  mov    %edx,0x4(%esp)
08ac03d3 +0x2d:  mov    %eax,(%esp)
08ac03d6 +0x30:  call   08ac07a6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x185>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x185
08ac03db +0x35:  sub    $0x4,%esp
08ac03de +0x38:  lea    -0x28(%ebp),%eax
08ac03e1 +0x3b:  mov    %eax,0x4(%esp)
08ac03e5 +0x3f:  lea    -0x2c(%ebp),%eax
08ac03e8 +0x42:  mov    %eax,(%esp)
08ac03eb +0x45:  call   08ac07cc <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1ab>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1ab
08ac03f0 +0x4a:  test   %al,%al
08ac03f2 +0x4c:  je     08ac049f <+0xf9>
08ac03f8 +0x52:  mov    0xc(%ebp),%eax
08ac03fb +0x55:  mov    %eax,(%esp)
08ac03fe +0x58:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08ac0403 +0x5d:  lea    -0x2c(%ebp),%eax
08ac0406 +0x60:  mov    %eax,(%esp)
08ac0409 +0x63:  call   08ac08d4 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2b3>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2b3
08ac040e +0x68:  mov    0x4(%eax),%eax
08ac0411 +0x6b:  mov    %eax,-0x14(%ebp)
08ac0414 +0x6e:  movl   $0x0,-0x10(%ebp)
08ac041b +0x75:  mov    -0x14(%ebp),%eax
08ac041e +0x78:  mov    %eax,(%esp)
08ac0421 +0x7b:  call   08ac08f6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2d5>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2d5
08ac0426 +0x80:  mov    %eax,-0xc(%ebp)
08ac0429 +0x83:  jmp    08ac0492 <+0xec>
08ac042b +0x85:  mov    -0x10(%ebp),%eax
08ac042e +0x88:  mov    %eax,0x4(%esp)
08ac0432 +0x8c:  mov    -0x14(%ebp),%eax
08ac0435 +0x8f:  mov    %eax,(%esp)
08ac0438 +0x92:  call   08ac0912 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2f1>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2f1
08ac043d +0x97:  lea    0x4(%eax),%ebx
08ac0440 +0x9a:  mov    -0x10(%ebp),%eax
08ac0443 +0x9d:  mov    %eax,0x4(%esp)
08ac0447 +0xa1:  mov    -0x14(%ebp),%eax
08ac044a +0xa4:  mov    %eax,(%esp)
08ac044d +0xa7:  call   08ac0912 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2f1>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2f1
08ac0452 +0xac:  mov    %eax,%edx
08ac0454 +0xae:  lea    -0x1c(%ebp),%eax
08ac0457 +0xb1:  mov    %ebx,0x8(%esp)
08ac045b +0xb5:  mov    %edx,0x4(%esp)
08ac045f +0xb9:  mov    %eax,(%esp)
08ac0462 +0xbc:  call   0819383e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4a6>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4a6
08ac0467 +0xc1:  sub    $0x4,%esp
08ac046a +0xc4:  lea    -0x1c(%ebp),%eax
08ac046d +0xc7:  mov    %eax,0x4(%esp)
08ac0471 +0xcb:  lea    -0x24(%ebp),%eax
08ac0474 +0xce:  mov    %eax,(%esp)
08ac0477 +0xd1:  call   0819387c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4e4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4e4
08ac047c +0xd6:  lea    -0x24(%ebp),%eax
08ac047f +0xd9:  mov    %eax,0x4(%esp)
08ac0483 +0xdd:  mov    0xc(%ebp),%eax
08ac0486 +0xe0:  mov    %eax,(%esp)
08ac0489 +0xe3:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08ac048e +0xe8:  addl   $0x1,-0x10(%ebp)
08ac0492 +0xec:  mov    -0x10(%ebp),%eax
08ac0495 +0xef:  cmp    -0xc(%ebp),%eax
08ac0498 +0xf2:  setb   %al
08ac049b +0xf5:  test   %al,%al
08ac049d +0xf7:  jne    08ac042b <+0x85>
08ac049f +0xf9:  mov    -0x4(%ebp),%ebx
08ac04a2 +0xfc:  leave
08ac04a3 +0xfd:  ret
```

## 反编译 C

```c
// CreateDnfEventSciprt::GetItemInfo @ 0x8ac03a6

/* CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, int) */

void CreateDnfEventSciprt::GetItemInfo(vector *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_30 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_2c [4];
  pair<int,int> local_28 [8];
  ulong local_20 [2];
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_18;
  uint local_14;
  uint local_10;
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::find((int *)local_30);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_2c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
          ::operator!=(local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar1 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->(local_30);
    local_18 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                 **)(iVar2 + 4);
    local_14 = 0;
    local_10 = std::
               vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
               ::size(local_18);
    for (; local_14 < local_10; local_14 = local_14 + 1) {
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::at
                (local_18,local_14);
      psVar3 = (short *)std::
                        vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        ::at(local_18,local_14);
      std::make_pair<unsigned_long&,short&>(local_20,psVar3);
      std::pair<int,int>::pair<unsigned_long,short>(local_28,(pair *)local_20);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_28);
    }
  }
  return;
}
```
