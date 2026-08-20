# SendSecretShopStatistic

`_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv`

`secretshop::CSecretShopStatistic::SendSecretShopStatistic()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd278  _ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv
#           secretshop::CSecretShopStatistic::SendSecretShopStatistic()
# range [0x085fd278, 0x085fd3fc]
085fd278 +0x000:  push   %ebp
085fd279 +0x001:  mov    %esp,%ebp
085fd27b +0x003:  push   %ebx
085fd27c +0x004:  sub    $0xfe4,%esp
085fd282 +0x00a:  lea    -0xfca(%ebp),%eax
085fd288 +0x010:  mov    %eax,(%esp)
085fd28b +0x013:  call   085fd490 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x53>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x53
085fd290 +0x018:  movl   $0x0,-0x10(%ebp)
085fd297 +0x01f:  movl   $0x0,-0xc(%ebp)
085fd29e +0x026:  jmp    085fd3e9 <+0x171>
085fd2a3 +0x02b:  mov    -0xc(%ebp),%eax
085fd2a6 +0x02e:  mov    %eax,-0xfbc(%ebp)
085fd2ac +0x034:  mov    -0xc(%ebp),%edx
085fd2af +0x037:  mov    %edx,%eax
085fd2b1 +0x039:  add    %eax,%eax
085fd2b3 +0x03b:  add    %edx,%eax
085fd2b5 +0x03d:  shl    $0x3,%eax
085fd2b8 +0x040:  add    0x8(%ebp),%eax
085fd2bb +0x043:  mov    %eax,(%esp)
085fd2be +0x046:  call   085fd61a <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x1dd>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x1dd
085fd2c3 +0x04b:  mov    %eax,-0xfc0(%ebp)
085fd2c9 +0x051:  mov    -0xfc0(%ebp),%eax
085fd2cf +0x057:  test   %eax,%eax
085fd2d1 +0x059:  je     085fd3e4 <+0x16c>
085fd2d7 +0x05f:  movl   $0x0,-0x10(%ebp)
085fd2de +0x066:  movl   $0xfa0,0x8(%esp)
085fd2e6 +0x06e:  movl   $0x0,0x4(%esp)
085fd2ee +0x076:  lea    -0xfca(%ebp),%eax
085fd2f4 +0x07c:  add    $0x12,%eax
085fd2f7 +0x07f:  mov    %eax,(%esp)
085fd2fa +0x082:  call   0807dcc0 <_init+0x5b8>
085fd2ff +0x087:  mov    -0xc(%ebp),%edx
085fd302 +0x08a:  mov    %edx,%eax
085fd304 +0x08c:  add    %eax,%eax
085fd306 +0x08e:  add    %edx,%eax
085fd308 +0x090:  shl    $0x3,%eax
085fd30b +0x093:  mov    %eax,%edx
085fd30d +0x095:  add    0x8(%ebp),%edx
085fd310 +0x098:  lea    -0x18(%ebp),%eax
085fd313 +0x09b:  mov    %edx,0x4(%esp)
085fd317 +0x09f:  mov    %eax,(%esp)
085fd31a +0x0a2:  call   085fd62e <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x1f1>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x1f1
085fd31f +0x0a7:  sub    $0x4,%esp
085fd322 +0x0aa:  jmp    085fd376 <+0xfe>
085fd324 +0x0ac:  mov    -0x10(%ebp),%ebx
085fd327 +0x0af:  lea    -0x18(%ebp),%eax
085fd32a +0x0b2:  mov    %eax,(%esp)
085fd32d +0x0b5:  call   085fd552 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x115>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x115
085fd332 +0x0ba:  mov    %eax,%edx
085fd334 +0x0bc:  mov    %ebx,%eax
085fd336 +0x0be:  shl    $0x2,%eax
085fd339 +0x0c1:  add    %ebx,%eax
085fd33b +0x0c3:  shl    $0x2,%eax
085fd33e +0x0c6:  lea    -0x8(%ebp),%ecx
085fd341 +0x0c9:  lea    (%ecx,%eax,1),%eax
085fd344 +0x0cc:  sub    $0xfb2,%eax
085fd349 +0x0d1:  mov    0x4(%edx),%ecx
085fd34c +0x0d4:  mov    %ecx,0x2(%eax)
085fd34f +0x0d7:  mov    0x8(%edx),%ecx
085fd352 +0x0da:  mov    %ecx,0x6(%eax)
085fd355 +0x0dd:  mov    0xc(%edx),%ecx
085fd358 +0x0e0:  mov    %ecx,0xa(%eax)
085fd35b +0x0e3:  mov    0x10(%edx),%ecx
085fd35e +0x0e6:  mov    %ecx,0xe(%eax)
085fd361 +0x0e9:  mov    0x14(%edx),%edx
085fd364 +0x0ec:  mov    %edx,0x12(%eax)
085fd367 +0x0ef:  lea    -0x18(%ebp),%eax
085fd36a +0x0f2:  mov    %eax,(%esp)
085fd36d +0x0f5:  call   085fd654 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x217>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x217
085fd372 +0x0fa:  addl   $0x1,-0x10(%ebp)
085fd376 +0x0fe:  mov    -0xc(%ebp),%edx
085fd379 +0x101:  mov    %edx,%eax
085fd37b +0x103:  add    %eax,%eax
085fd37d +0x105:  add    %edx,%eax
085fd37f +0x107:  shl    $0x3,%eax
085fd382 +0x10a:  mov    %eax,%edx
085fd384 +0x10c:  add    0x8(%ebp),%edx
085fd387 +0x10f:  lea    -0x14(%ebp),%eax
085fd38a +0x112:  mov    %edx,0x4(%esp)
085fd38e +0x116:  mov    %eax,(%esp)
085fd391 +0x119:  call   085fd518 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0xdb>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0xdb
085fd396 +0x11e:  sub    $0x4,%esp
085fd399 +0x121:  lea    -0x14(%ebp),%eax
085fd39c +0x124:  mov    %eax,0x4(%esp)
085fd3a0 +0x128:  lea    -0x18(%ebp),%eax
085fd3a3 +0x12b:  mov    %eax,(%esp)
085fd3a6 +0x12e:  call   085fd53e <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x101>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x101
085fd3ab +0x133:  test   %al,%al
085fd3ad +0x135:  jne    085fd324 <+0xac>
085fd3b3 +0x13b:  lea    -0xfca(%ebp),%ebx
085fd3b9 +0x141:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
085fd3be +0x146:  movl   $0x0,0x4(%esp)
085fd3c6 +0x14e:  mov    %eax,(%esp)
085fd3c9 +0x151:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085fd3ce +0x156:  movl   $0xfb2,0x8(%esp)
085fd3d6 +0x15e:  mov    %ebx,0x4(%esp)
085fd3da +0x162:  mov    %eax,(%esp)
085fd3dd +0x165:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085fd3e2 +0x16a:  jmp    085fd3e5 <+0x16d>
085fd3e4 +0x16c:  nop
085fd3e5 +0x16d:  addl   $0x1,-0xc(%ebp)
085fd3e9 +0x171:  cmpl   $0x2,-0xc(%ebp)
085fd3ed +0x175:  setle  %al
085fd3f0 +0x178:  test   %al,%al
085fd3f2 +0x17a:  jne    085fd2a3 <+0x2b>
085fd3f8 +0x180:  mov    -0x4(%ebp),%ebx
085fd3fb +0x183:  leave
085fd3fc +0x184:  ret
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::SendSecretShopStatistic @ 0x85fd278

/* secretshop::CSecretShopStatistic::SendSecretShopStatistic() */

void __thiscall
secretshop::CSecretShopStatistic::SendSecretShopStatistic(CSecretShopStatistic *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CStatisticServerProxy *this_00;
  Packet_Secret_Shop_Statistic local_fce [10];
  int local_fc4;
  int local_fc0;
  undefined4 auStack_fbc [1000];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_1c [4];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  Packet_Secret_Shop_Statistic::Packet_Secret_Shop_Statistic(local_fce);
  local_14 = 0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    local_fc0 = local_10;
    local_fc4 = std::
                map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                ::size((map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                        *)(this + local_10 * 0x18));
    if (local_fc4 != 0) {
      local_14 = 0;
      memset(auStack_fbc,0,4000);
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::begin(local_1c);
      while( true ) {
        std::
        map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c,(_Rb_tree_iterator *)local_18);
        iVar1 = local_14;
        if (cVar2 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c);
        auStack_fbc[iVar1 * 5] = *(undefined4 *)(iVar3 + 4);
        auStack_fbc[iVar1 * 5 + 1] = *(undefined4 *)(iVar3 + 8);
        auStack_fbc[iVar1 * 5 + 2] = *(undefined4 *)(iVar3 + 0xc);
        auStack_fbc[iVar1 * 5 + 3] = *(undefined4 *)(iVar3 + 0x10);
        auStack_fbc[iVar1 * 5 + 4] = *(undefined4 *)(iVar3 + 0x14);
        std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)local_1c);
        local_14 = local_14 + 1;
      }
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_fce,0xfb2);
    }
  }
  return;
}
```
