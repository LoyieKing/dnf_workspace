# GetItemByEvent

`_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE`

`SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82c70  _ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE
#           SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)
# range [0x08a82c70, 0x08a82d43]
08a82c70 +0x00:  push   %ebp
08a82c71 +0x01:  mov    %esp,%ebp
08a82c73 +0x03:  push   %esi
08a82c74 +0x04:  push   %ebx
08a82c75 +0x05:  sub    $0x20,%esp
08a82c78 +0x08:  lea    -0x18(%ebp),%eax
08a82c7b +0x0b:  mov    %eax,(%esp)
08a82c7e +0x0e:  call   082ab002 <_GLOBAL__I__ZN4CLog5this_E+0x7429>  ; global constructors keyed to CLog::this_+0x7429
08a82c83 +0x13:  mov    0x8(%ebp),%eax
08a82c86 +0x16:  add    $0x60,%eax
08a82c89 +0x19:  mov    %eax,0xc(%esp)
08a82c8d +0x1d:  lea    -0x18(%ebp),%eax
08a82c90 +0x20:  mov    %eax,0x8(%esp)
08a82c94 +0x24:  mov    0xc(%ebp),%eax
08a82c97 +0x27:  mov    %eax,0x4(%esp)
08a82c9b +0x2b:  mov    0x8(%ebp),%eax
08a82c9e +0x2e:  mov    %eax,(%esp)
08a82ca1 +0x31:  call   08a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>  ; SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&)
08a82ca6 +0x36:  xor    $0x1,%eax
08a82ca9 +0x39:  test   %al,%al
08a82cab +0x3b:  je     08a82cb4 <+0x44>
08a82cad +0x3d:  mov    $0x0,%ebx
08a82cb2 +0x42:  jmp    08a82d2f <+0xbf>
08a82cb4 +0x44:  movl   $0x0,-0xc(%ebp)
08a82cbb +0x4b:  jmp    08a82cf8 <+0x88>
08a82cbd +0x4d:  mov    -0xc(%ebp),%eax
08a82cc0 +0x50:  mov    %eax,0x4(%esp)
08a82cc4 +0x54:  lea    -0x18(%ebp),%eax
08a82cc7 +0x57:  mov    %eax,(%esp)
08a82cca +0x5a:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
08a82ccf +0x5f:  movb   $0x1,0x18(%eax)
08a82cd3 +0x63:  mov    -0xc(%ebp),%eax
08a82cd6 +0x66:  mov    %eax,0x4(%esp)
08a82cda +0x6a:  lea    -0x18(%ebp),%eax
08a82cdd +0x6d:  mov    %eax,(%esp)
08a82ce0 +0x70:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
08a82ce5 +0x75:  mov    %eax,0x4(%esp)
08a82ce9 +0x79:  mov    0x10(%ebp),%eax
08a82cec +0x7c:  mov    %eax,(%esp)
08a82cef +0x7f:  call   08a838ca <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x63c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x63c
08a82cf4 +0x84:  addl   $0x1,-0xc(%ebp)
08a82cf8 +0x88:  lea    -0x18(%ebp),%eax
08a82cfb +0x8b:  mov    %eax,(%esp)
08a82cfe +0x8e:  call   085fc376 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x508>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x508
08a82d03 +0x93:  cmp    -0xc(%ebp),%eax
08a82d06 +0x96:  setg   %al
08a82d09 +0x99:  test   %al,%al
08a82d0b +0x9b:  jne    08a82cbd <+0x4d>
08a82d0d +0x9d:  mov    $0x1,%ebx
08a82d12 +0xa2:  jmp    08a82d2f <+0xbf>
08a82d14 +0xa4:  mov    %edx,%ebx
08a82d16 +0xa6:  mov    %eax,%esi
08a82d18 +0xa8:  lea    -0x18(%ebp),%eax
08a82d1b +0xab:  mov    %eax,(%esp)
08a82d1e +0xae:  call   082ab016 <_GLOBAL__I__ZN4CLog5this_E+0x743d>  ; global constructors keyed to CLog::this_+0x743d
08a82d23 +0xb3:  mov    %esi,%eax
08a82d25 +0xb5:  mov    %ebx,%edx
08a82d27 +0xb7:  mov    %eax,(%esp)
08a82d2a +0xba:  call   08ae3750 <_Unwind_Resume>
08a82d2f +0xbf:  lea    -0x18(%ebp),%eax
08a82d32 +0xc2:  mov    %eax,(%esp)
08a82d35 +0xc5:  call   082ab016 <_GLOBAL__I__ZN4CLog5this_E+0x743d>  ; global constructors keyed to CLog::this_+0x743d
08a82d3a +0xca:  mov    %ebx,%eax
08a82d3c +0xcc:  add    $0x20,%esp
08a82d3f +0xcf:  pop    %ebx
08a82d40 +0xd0:  pop    %esi
08a82d41 +0xd1:  pop    %ebp
08a82d42 +0xd2:  ret
08a82d43 +0xd3:  nop
```

## 反编译 C

```c
// SecretShopScript::GetItemByEvent @ 0x8a82c70

/* SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&) */

undefined4 __thiscall
SecretShopScript::GetItemByEvent(SecretShopScript *this,CMTRand *param_1,vector *param_2)

{
  char cVar1;
  SALE_INFO *pSVar2;
  int iVar3;
  undefined4 uVar4;
  vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> local_1c [12];
  uint local_10;
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::vector(local_1c);
                    /* try { // try from 08a82ca1 to 08a82cf3 has its CatchHandler @ 08a82d14 */
  cVar1 = GetItems(this,param_1,(vector *)local_1c,(stDungeonSales *)(this + 0x60));
  if (cVar1 == '\x01') {
    local_10 = 0;
    while( true ) {
      iVar3 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                        (local_1c);
      if (iVar3 <= (int)local_10) break;
      iVar3 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                        (local_1c,local_10);
      *(undefined1 *)(iVar3 + 0x18) = 1;
      pSVar2 = (SALE_INFO *)
               std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                         (local_1c,local_10);
      std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)param_2,
                 pSVar2);
      local_10 = local_10 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::~vector(local_1c);
  return uVar4;
}
```
