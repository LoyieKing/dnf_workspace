# GetSaleInfo

`_ZN10secretshop8RETAILER11GetSaleInfoEi`

`secretshop::RETAILER::GetSaleInfo(int)`

| 类 | 地址 |
|---|---|
| `secretshop::RETAILER` | `0x08ab12a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab12a0  _ZN10secretshop8RETAILER11GetSaleInfoEi
#           secretshop::RETAILER::GetSaleInfo(int)
# range [0x08ab12a0, 0x08ab1343]
08ab12a0 +0x00:  push   %ebp
08ab12a1 +0x01:  mov    %esp,%ebp
08ab12a3 +0x03:  sub    $0x38,%esp
08ab12a6 +0x06:  lea    -0x18(%ebp),%eax
08ab12a9 +0x09:  mov    %eax,(%esp)
08ab12ac +0x0c:  call   08ab1686 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xb1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xb1
08ab12b1 +0x11:  mov    0x8(%ebp),%edx
08ab12b4 +0x14:  lea    -0x14(%ebp),%eax
08ab12b7 +0x17:  mov    %edx,0x4(%esp)
08ab12bb +0x1b:  mov    %eax,(%esp)
08ab12be +0x1e:  call   085fc2d8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x46a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x46a
08ab12c3 +0x23:  sub    $0x4,%esp
08ab12c6 +0x26:  mov    0x8(%ebp),%edx
08ab12c9 +0x29:  lea    -0x10(%ebp),%eax
08ab12cc +0x2c:  mov    %edx,0x4(%esp)
08ab12d0 +0x30:  mov    %eax,(%esp)
08ab12d3 +0x33:  call   085fc2b4 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x446>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x446
08ab12d8 +0x38:  sub    $0x4,%esp
08ab12db +0x3b:  lea    -0x1c(%ebp),%eax
08ab12de +0x3e:  lea    0xc(%ebp),%edx
08ab12e1 +0x41:  mov    %edx,0xc(%esp)
08ab12e5 +0x45:  mov    -0x14(%ebp),%edx
08ab12e8 +0x48:  mov    %edx,0x8(%esp)
08ab12ec +0x4c:  mov    -0x10(%ebp),%edx
08ab12ef +0x4f:  mov    %edx,0x4(%esp)
08ab12f3 +0x53:  mov    %eax,(%esp)
08ab12f6 +0x56:  call   08a839dd <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x74f>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x74f
08ab12fb +0x5b:  sub    $0x4,%esp
08ab12fe +0x5e:  mov    -0x1c(%ebp),%eax
08ab1301 +0x61:  mov    %eax,-0x18(%ebp)
08ab1304 +0x64:  mov    0x8(%ebp),%edx
08ab1307 +0x67:  lea    -0xc(%ebp),%eax
08ab130a +0x6a:  mov    %edx,0x4(%esp)
08ab130e +0x6e:  mov    %eax,(%esp)
08ab1311 +0x71:  call   085fc2d8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x46a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x46a
08ab1316 +0x76:  sub    $0x4,%esp
08ab1319 +0x79:  lea    -0xc(%ebp),%eax
08ab131c +0x7c:  mov    %eax,0x4(%esp)
08ab1320 +0x80:  lea    -0x18(%ebp),%eax
08ab1323 +0x83:  mov    %eax,(%esp)
08ab1326 +0x86:  call   085fc2fe <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x490>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x490
08ab132b +0x8b:  test   %al,%al
08ab132d +0x8d:  je     08ab133c <+0x9c>
08ab132f +0x8f:  lea    -0x18(%ebp),%eax
08ab1332 +0x92:  mov    %eax,(%esp)
08ab1335 +0x95:  call   085fc32a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4bc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4bc
08ab133a +0x9a:  jmp    08ab1341 <+0xa1>
08ab133c +0x9c:  mov    $0x0,%eax
08ab1341 +0xa1:  leave
08ab1342 +0xa2:  ret
08ab1343 +0xa3:  nop
```

## 反编译 C

```c
// secretshop::RETAILER::GetSaleInfo @ 0x8ab12a0

/* secretshop::RETAILER::GetSaleInfo(int) */

undefined4 secretshop::RETAILER::GetSaleInfo(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  __gnu_cxx::
  __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
  ::__normal_iterator((__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                       *)&local_1c);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>,int>
            (&local_20,local_14,local_18,&stack0x00000008);
  local_1c = local_20;
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar2 = __gnu_cxx::
            __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
            ::operator*((__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                         *)&local_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
