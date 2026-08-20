# UseSelectBooster

`_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE`

`cUserHistoryLog::UseSelectBooster(unsigned int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686b52  _ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE
#           cUserHistoryLog::UseSelectBooster(unsigned int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
# range [0x08686b52, 0x08686c35]
08686b52 +0x00:  push   %ebp
08686b53 +0x01:  mov    %esp,%ebp
08686b55 +0x03:  push   %ebx
08686b56 +0x04:  sub    $0x434,%esp
08686b5c +0x0a:  movl   $0x400,0x8(%esp)
08686b64 +0x12:  movl   $0x0,0x4(%esp)
08686b6c +0x1a:  lea    -0x40c(%ebp),%eax
08686b72 +0x20:  mov    %eax,(%esp)
08686b75 +0x23:  call   0807dcc0 <_init+0x5b8>
08686b7a +0x28:  movl   $0x0,-0xc(%ebp)
08686b81 +0x2f:  jmp    08686be0 <+0x8e>
08686b83 +0x31:  lea    -0x40c(%ebp),%eax
08686b89 +0x37:  mov    %eax,(%esp)
08686b8c +0x3a:  call   0807e3b0 <_init+0xca8>
08686b91 +0x3f:  add    $0xd,%eax
08686b94 +0x42:  cmp    $0x3fe,%eax
08686b99 +0x47:  ja     08686bf7 <+0xa5>
08686b9b +0x49:  mov    -0xc(%ebp),%eax
08686b9e +0x4c:  mov    %eax,0x4(%esp)
08686ba2 +0x50:  mov    0x18(%ebp),%eax
08686ba5 +0x53:  mov    %eax,(%esp)
08686ba8 +0x56:  call   08328422 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x37b>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x37b
08686bad +0x5b:  mov    0x2(%eax),%ebx
08686bb0 +0x5e:  lea    -0x40c(%ebp),%eax
08686bb6 +0x64:  mov    %eax,(%esp)
08686bb9 +0x67:  call   0807e3b0 <_init+0xca8>
08686bbe +0x6c:  mov    %eax,%edx
08686bc0 +0x6e:  lea    -0x40c(%ebp),%eax
08686bc6 +0x74:  add    %edx,%eax
08686bc8 +0x76:  mov    %ebx,0x8(%esp)
08686bcc +0x7a:  movl   $"%d,",0x4(%esp)
08686bd4 +0x82:  mov    %eax,(%esp)
08686bd7 +0x85:  call   0807e440 <_init+0xd38>
08686bdc +0x8a:  addl   $0x1,-0xc(%ebp)
08686be0 +0x8e:  mov    0x18(%ebp),%eax
08686be3 +0x91:  mov    %eax,(%esp)
08686be6 +0x94:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08686beb +0x99:  cmp    -0xc(%ebp),%eax
08686bee +0x9c:  seta   %al
08686bf1 +0x9f:  test   %al,%al
08686bf3 +0xa1:  jne    08686b83 <+0x31>
08686bf5 +0xa3:  jmp    08686bf8 <+0xa6>
08686bf7 +0xa5:  nop
08686bf8 +0xa6:  mov    0x8(%ebp),%eax
08686bfb +0xa9:  mov    (%eax),%eax
08686bfd +0xab:  lea    -0x40c(%ebp),%edx
08686c03 +0xb1:  mov    %edx,0x14(%esp)
08686c07 +0xb5:  mov    0x14(%ebp),%edx
08686c0a +0xb8:  mov    %edx,0x10(%esp)
08686c0e +0xbc:  mov    0x10(%ebp),%edx
08686c11 +0xbf:  mov    %edx,0xc(%esp)
08686c15 +0xc3:  mov    0xc(%ebp),%edx
08686c18 +0xc6:  mov    %edx,0x8(%esp)
08686c1c +0xca:  movl   $"UseSelectBooster,%u,%d,%d,%s",0x4(%esp)
08686c24 +0xd2:  mov    %eax,(%esp)
08686c27 +0xd5:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686c2c +0xda:  add    $0x434,%esp
08686c32 +0xe0:  pop    %ebx
08686c33 +0xe1:  pop    %ebp
08686c34 +0xe2:  ret
08686c35 +0xe3:  nop
```

## 反编译 C

```c
// cUserHistoryLog::UseSelectBooster @ 0x8686b52

/* cUserHistoryLog::UseSelectBooster(unsigned int, int, int, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) */

void __thiscall
cUserHistoryLog::UseSelectBooster
          (cUserHistoryLog *this,uint param_1,int param_2,int param_3,vector *param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char local_410 [1024];
  uint local_10;
  
  memset(local_410,0,0x400);
  local_10 = 0;
  while ((uVar4 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_4),
         local_10 < uVar4 && (sVar2 = strlen(local_410), sVar2 + 0xd < 0x3ff))) {
    iVar3 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_4,local_10);
    uVar1 = *(undefined4 *)(iVar3 + 2);
    sVar2 = strlen(local_410);
    sprintf(local_410 + sVar2,"%d,",uVar1);
    local_10 = local_10 + 1;
  }
  CUser::LogHistory(*(CUser **)this,"UseSelectBooster,%u,%d,%d,%s",param_1,param_2,param_3,local_410
                   );
  return;
}
```
