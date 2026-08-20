# IsExistItem

`_ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi`

`SecretShopScript::IsExistItem(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82f6a  _ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi
#           SecretShopScript::IsExistItem(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int)
# range [0x08a82f6a, 0x08a82ff5]
08a82f6a +0x00:  push   %ebp
08a82f6b +0x01:  mov    %esp,%ebp
08a82f6d +0x03:  sub    $0x28,%esp
08a82f70 +0x06:  lea    -0x14(%ebp),%eax
08a82f73 +0x09:  mov    0xc(%ebp),%edx
08a82f76 +0x0c:  mov    %edx,0x4(%esp)
08a82f7a +0x10:  mov    %eax,(%esp)
08a82f7d +0x13:  call   085fc2d8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x46a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x46a
08a82f82 +0x18:  sub    $0x4,%esp
08a82f85 +0x1b:  lea    -0x10(%ebp),%eax
08a82f88 +0x1e:  mov    0xc(%ebp),%edx
08a82f8b +0x21:  mov    %edx,0x4(%esp)
08a82f8f +0x25:  mov    %eax,(%esp)
08a82f92 +0x28:  call   085fc2b4 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x446>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x446
08a82f97 +0x2d:  sub    $0x4,%esp
08a82f9a +0x30:  lea    -0x18(%ebp),%eax
08a82f9d +0x33:  lea    0x10(%ebp),%edx
08a82fa0 +0x36:  mov    %edx,0xc(%esp)
08a82fa4 +0x3a:  mov    -0x14(%ebp),%edx
08a82fa7 +0x3d:  mov    %edx,0x8(%esp)
08a82fab +0x41:  mov    -0x10(%ebp),%edx
08a82fae +0x44:  mov    %edx,0x4(%esp)
08a82fb2 +0x48:  mov    %eax,(%esp)
08a82fb5 +0x4b:  call   08a839dd <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x74f>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x74f
08a82fba +0x50:  sub    $0x4,%esp
08a82fbd +0x53:  lea    -0xc(%ebp),%eax
08a82fc0 +0x56:  mov    0xc(%ebp),%edx
08a82fc3 +0x59:  mov    %edx,0x4(%esp)
08a82fc7 +0x5d:  mov    %eax,(%esp)
08a82fca +0x60:  call   085fc2d8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x46a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x46a
08a82fcf +0x65:  sub    $0x4,%esp
08a82fd2 +0x68:  lea    -0xc(%ebp),%eax
08a82fd5 +0x6b:  mov    %eax,0x4(%esp)
08a82fd9 +0x6f:  lea    -0x18(%ebp),%eax
08a82fdc +0x72:  mov    %eax,(%esp)
08a82fdf +0x75:  call   085fc2fe <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x490>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x490
08a82fe4 +0x7a:  test   %al,%al
08a82fe6 +0x7c:  je     08a82fef <+0x85>
08a82fe8 +0x7e:  mov    $0x1,%eax
08a82fed +0x83:  jmp    08a82ff4 <+0x8a>
08a82fef +0x85:  mov    $0x0,%eax
08a82ff4 +0x8a:  leave
08a82ff5 +0x8b:  ret
```

## 反编译 C

```c
// SecretShopScript::IsExistItem @ 0x8a82f6a

/* SecretShopScript::IsExistItem(std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int) */

bool SecretShopScript::IsExistItem(vector *param_1,int param_2)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>,int>
            (local_1c,local_14,local_18,&stack0x0000000c);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  return bVar1;
}
```
