# GetItems

`_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales`

`SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82d44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82d44  _ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales
#           SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&)
# range [0x08a82d44, 0x08a82f69]
08a82d44 +0x000:  push   %ebp
08a82d45 +0x001:  mov    %esp,%ebp
08a82d47 +0x003:  sub    $0x78,%esp
08a82d4a +0x006:  mov    0x14(%ebp),%eax
08a82d4d +0x009:  add    $0x8,%eax
08a82d50 +0x00c:  mov    %eax,(%esp)
08a82d53 +0x00f:  call   08a8393e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6b0>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6b0
08a82d58 +0x014:  mov    0x14(%ebp),%edx
08a82d5b +0x017:  mov    0x4(%edx),%edx
08a82d5e +0x01a:  cmp    %edx,%eax
08a82d60 +0x01c:  setb   %al
08a82d63 +0x01f:  test   %al,%al
08a82d65 +0x021:  je     08a82e09 <+0xc5>
08a82d6b +0x027:  lea    -0x58(%ebp),%eax
08a82d6e +0x02a:  mov    %eax,(%esp)
08a82d71 +0x02d:  call   08a832aa <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x1c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x1c
08a82d76 +0x032:  mov    0x14(%ebp),%eax
08a82d79 +0x035:  lea    0x8(%eax),%edx
08a82d7c +0x038:  lea    -0x5c(%ebp),%eax
08a82d7f +0x03b:  mov    %edx,0x4(%esp)
08a82d83 +0x03f:  mov    %eax,(%esp)
08a82d86 +0x042:  call   08a83952 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6c4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6c4
08a82d8b +0x047:  sub    $0x4,%esp
08a82d8e +0x04a:  jmp    08a82dd1 <+0x8d>
08a82d90 +0x04c:  lea    -0x5c(%ebp),%eax
08a82d93 +0x04f:  mov    %eax,(%esp)
08a82d96 +0x052:  call   08a839b2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x724>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x724
08a82d9b +0x057:  add    $0x4,%eax
08a82d9e +0x05a:  mov    %eax,0x8(%esp)
08a82da2 +0x05e:  lea    -0x58(%ebp),%eax
08a82da5 +0x061:  mov    %eax,0x4(%esp)
08a82da9 +0x065:  mov    0x8(%ebp),%eax
08a82dac +0x068:  mov    %eax,(%esp)
08a82daf +0x06b:  call   08a8306c <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo>  ; SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&)
08a82db4 +0x070:  lea    -0x58(%ebp),%eax
08a82db7 +0x073:  mov    %eax,0x4(%esp)
08a82dbb +0x077:  mov    0x10(%ebp),%eax
08a82dbe +0x07a:  mov    %eax,(%esp)
08a82dc1 +0x07d:  call   08a838ca <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x63c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x63c
08a82dc6 +0x082:  lea    -0x5c(%ebp),%eax
08a82dc9 +0x085:  mov    %eax,(%esp)
08a82dcc +0x088:  call   08a839c0 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x732>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x732
08a82dd1 +0x08d:  mov    0x14(%ebp),%eax
08a82dd4 +0x090:  lea    0x8(%eax),%edx
08a82dd7 +0x093:  lea    -0x20(%ebp),%eax
08a82dda +0x096:  mov    %edx,0x4(%esp)
08a82dde +0x09a:  mov    %eax,(%esp)
08a82de1 +0x09d:  call   08a83978 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6ea>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6ea
08a82de6 +0x0a2:  sub    $0x4,%esp
08a82de9 +0x0a5:  lea    -0x20(%ebp),%eax
08a82dec +0x0a8:  mov    %eax,0x4(%esp)
08a82df0 +0x0ac:  lea    -0x5c(%ebp),%eax
08a82df3 +0x0af:  mov    %eax,(%esp)
08a82df6 +0x0b2:  call   08a8399e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x710>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x710
08a82dfb +0x0b7:  test   %al,%al
08a82dfd +0x0b9:  jne    08a82d90 <+0x4c>
08a82dff +0x0bb:  mov    $0x1,%eax
08a82e04 +0x0c0:  jmp    08a82f68 <+0x224>
08a82e09 +0x0c5:  movl   $0x0,-0x14(%ebp)
08a82e10 +0x0cc:  movl   $0x0,-0x10(%ebp)
08a82e17 +0x0d3:  movl   $0x0,-0xc(%ebp)
08a82e1e +0x0da:  lea    -0x3c(%ebp),%eax
08a82e21 +0x0dd:  mov    %eax,(%esp)
08a82e24 +0x0e0:  call   08a832aa <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x1c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x1c
08a82e29 +0x0e5:  jmp    08a82f42 <+0x1fe>
08a82e2e +0x0ea:  mov    0x14(%ebp),%eax
08a82e31 +0x0ed:  mov    %eax,0x4(%esp)
08a82e35 +0x0f1:  mov    0x8(%ebp),%eax
08a82e38 +0x0f4:  mov    %eax,(%esp)
08a82e3b +0x0f7:  call   08a82ff6 <_ZN16SecretShopScript13GetDomainRateER14stDungeonSales>  ; SecretShopScript::GetDomainRate(stDungeonSales&)
08a82e40 +0x0fc:  mov    %eax,-0x1c(%ebp)
08a82e43 +0x0ff:  lea    -0x1c(%ebp),%eax
08a82e46 +0x102:  mov    %eax,0x4(%esp)
08a82e4a +0x106:  mov    0xc(%ebp),%eax
08a82e4d +0x109:  mov    %eax,(%esp)
08a82e50 +0x10c:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08a82e55 +0x111:  mov    %eax,-0x14(%ebp)
08a82e58 +0x114:  movl   $0x0,-0x10(%ebp)
08a82e5f +0x11b:  mov    0x14(%ebp),%eax
08a82e62 +0x11e:  lea    0x8(%eax),%edx
08a82e65 +0x121:  lea    -0x60(%ebp),%eax
08a82e68 +0x124:  mov    %edx,0x4(%esp)
08a82e6c +0x128:  mov    %eax,(%esp)
08a82e6f +0x12b:  call   08a83952 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6c4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6c4
08a82e74 +0x130:  sub    $0x4,%esp
08a82e77 +0x133:  jmp    08a82f00 <+0x1bc>
08a82e7c +0x138:  lea    -0x60(%ebp),%eax
08a82e7f +0x13b:  mov    %eax,(%esp)
08a82e82 +0x13e:  call   08a839b2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x724>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x724
08a82e87 +0x143:  mov    0x18(%eax),%eax
08a82e8a +0x146:  add    %eax,-0x10(%ebp)
08a82e8d +0x149:  mov    -0x10(%ebp),%eax
08a82e90 +0x14c:  cmp    -0x14(%ebp),%eax
08a82e93 +0x14f:  jbe    08a82ef5 <+0x1b1>
08a82e95 +0x151:  lea    -0x60(%ebp),%eax
08a82e98 +0x154:  mov    %eax,(%esp)
08a82e9b +0x157:  call   08a839b2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x724>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x724
08a82ea0 +0x15c:  mov    0x4(%eax),%eax
08a82ea3 +0x15f:  mov    %eax,0x8(%esp)
08a82ea7 +0x163:  mov    0x10(%ebp),%eax
08a82eaa +0x166:  mov    %eax,0x4(%esp)
08a82eae +0x16a:  mov    0x8(%ebp),%eax
08a82eb1 +0x16d:  mov    %eax,(%esp)
08a82eb4 +0x170:  call   08a82f6a <_ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi>  ; SecretShopScript::IsExistItem(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int)
08a82eb9 +0x175:  test   %al,%al
08a82ebb +0x177:  jne    08a82f34 <+0x1f0>
08a82ebd +0x179:  lea    -0x60(%ebp),%eax
08a82ec0 +0x17c:  mov    %eax,(%esp)
08a82ec3 +0x17f:  call   08a839b2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x724>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x724
08a82ec8 +0x184:  add    $0x4,%eax
08a82ecb +0x187:  mov    %eax,0x8(%esp)
08a82ecf +0x18b:  lea    -0x3c(%ebp),%eax
08a82ed2 +0x18e:  mov    %eax,0x4(%esp)
08a82ed6 +0x192:  mov    0x8(%ebp),%eax
08a82ed9 +0x195:  mov    %eax,(%esp)
08a82edc +0x198:  call   08a8306c <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo>  ; SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&)
08a82ee1 +0x19d:  lea    -0x3c(%ebp),%eax
08a82ee4 +0x1a0:  mov    %eax,0x4(%esp)
08a82ee8 +0x1a4:  mov    0x10(%ebp),%eax
08a82eeb +0x1a7:  mov    %eax,(%esp)
08a82eee +0x1aa:  call   08a838ca <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x63c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x63c
08a82ef3 +0x1af:  jmp    08a82f35 <+0x1f1>
08a82ef5 +0x1b1:  lea    -0x60(%ebp),%eax
08a82ef8 +0x1b4:  mov    %eax,(%esp)
08a82efb +0x1b7:  call   08a839c0 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x732>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x732
08a82f00 +0x1bc:  mov    0x14(%ebp),%eax
08a82f03 +0x1bf:  lea    0x8(%eax),%edx
08a82f06 +0x1c2:  lea    -0x18(%ebp),%eax
08a82f09 +0x1c5:  mov    %edx,0x4(%esp)
08a82f0d +0x1c9:  mov    %eax,(%esp)
08a82f10 +0x1cc:  call   08a83978 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6ea>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6ea
08a82f15 +0x1d1:  sub    $0x4,%esp
08a82f18 +0x1d4:  lea    -0x18(%ebp),%eax
08a82f1b +0x1d7:  mov    %eax,0x4(%esp)
08a82f1f +0x1db:  lea    -0x60(%ebp),%eax
08a82f22 +0x1de:  mov    %eax,(%esp)
08a82f25 +0x1e1:  call   08a8399e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x710>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x710
08a82f2a +0x1e6:  test   %al,%al
08a82f2c +0x1e8:  jne    08a82e7c <+0x138>
08a82f32 +0x1ee:  jmp    08a82f35 <+0x1f1>
08a82f34 +0x1f0:  nop
08a82f35 +0x1f1:  addl   $0x1,-0xc(%ebp)
08a82f39 +0x1f5:  cmpl   $0x2710,-0xc(%ebp)
08a82f40 +0x1fc:  jg     08a82f62 <+0x21e>
08a82f42 +0x1fe:  mov    0x10(%ebp),%eax
08a82f45 +0x201:  mov    %eax,(%esp)
08a82f48 +0x204:  call   085fc376 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x508>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x508
08a82f4d +0x209:  mov    0x14(%ebp),%edx
08a82f50 +0x20c:  mov    0x4(%edx),%edx
08a82f53 +0x20f:  cmp    %edx,%eax
08a82f55 +0x211:  setb   %al
08a82f58 +0x214:  test   %al,%al
08a82f5a +0x216:  jne    08a82e2e <+0xea>
08a82f60 +0x21c:  jmp    08a82f63 <+0x21f>
08a82f62 +0x21e:  nop
08a82f63 +0x21f:  mov    $0x1,%eax
08a82f68 +0x224:  leave
08a82f69 +0x225:  ret
```

## 反编译 C

```c
// SecretShopScript::GetItems @ 0x8a82d44

/* SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&) */

undefined4 __thiscall
SecretShopScript::GetItems
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,stDungeonSales *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_64 [4];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_60 [4];
  SALE_INFO local_5c [28];
  SALE_INFO local_40 [28];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_24 [4];
  ulong local_20;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_1c [4];
  uint local_18;
  uint local_14;
  int local_10;
  
  uVar2 = std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::
          size((map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> *
               )(param_3 + 8));
  if (uVar2 < *(uint *)(param_3 + 4)) {
    secretshop::SALE_INFO::SALE_INFO(local_5c);
    std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
              (local_60);
    while( true ) {
      std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
                (local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60);
      CopyItem(this,local_5c,(stSaleInfo *)(iVar3 + 4));
      std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)param_2,
                 local_5c);
      std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60);
    }
  }
  else {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    secretshop::SALE_INFO::SALE_INFO(local_40);
    do {
      uVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                        ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                         param_2);
      if (*(uint *)(param_3 + 4) <= uVar2) {
        return 1;
      }
      local_20 = GetDomainRate((stDungeonSales *)this);
      local_18 = CMTRand::randInt(param_1,&local_20);
      local_14 = 0;
      std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
                (local_64);
      while( true ) {
        std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
                  (local_1c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
        local_14 = local_14 + *(int *)(iVar3 + 0x18);
        if (local_18 < local_14) {
          std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
          cVar1 = IsExistItem((vector *)this,(int)param_2);
          if (cVar1 == '\0') {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
            CopyItem(this,local_40,(stSaleInfo *)(iVar3 + 4));
            std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_40);
          }
          break;
        }
        std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
      }
      local_10 = local_10 + 1;
    } while (local_10 < 0x2711);
  }
  return 1;
}
```
