# Clear

`_ZN10secretshop20CSecretShopStatistic5ClearEv`

`secretshop::CSecretShopStatistic::Clear()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fcfec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fcfec  _ZN10secretshop20CSecretShopStatistic5ClearEv
#           secretshop::CSecretShopStatistic::Clear()
# range [0x085fcfec, 0x085fd023]
085fcfec +0x00:  push   %ebp
085fcfed +0x01:  mov    %esp,%ebp
085fcfef +0x03:  sub    $0x28,%esp
085fcff2 +0x06:  movl   $0x0,-0xc(%ebp)
085fcff9 +0x0d:  jmp    085fd016 <+0x2a>
085fcffb +0x0f:  mov    -0xc(%ebp),%edx
085fcffe +0x12:  mov    %edx,%eax
085fd000 +0x14:  add    %eax,%eax
085fd002 +0x16:  add    %edx,%eax
085fd004 +0x18:  shl    $0x3,%eax
085fd007 +0x1b:  add    0x8(%ebp),%eax
085fd00a +0x1e:  mov    %eax,(%esp)
085fd00d +0x21:  call   085fc0ca <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x25c>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x25c
085fd012 +0x26:  addl   $0x1,-0xc(%ebp)
085fd016 +0x2a:  cmpl   $0x2,-0xc(%ebp)
085fd01a +0x2e:  setle  %al
085fd01d +0x31:  test   %al,%al
085fd01f +0x33:  jne    085fcffb <+0xf>
085fd021 +0x35:  leave
085fd022 +0x36:  ret
085fd023 +0x37:  nop
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::Clear @ 0x85fcfec

/* secretshop::CSecretShopStatistic::Clear() */

void __thiscall secretshop::CSecretShopStatistic::Clear(CSecretShopStatistic *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::clear((map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
             *)(this + local_10 * 0x18));
  }
  return;
}
```
