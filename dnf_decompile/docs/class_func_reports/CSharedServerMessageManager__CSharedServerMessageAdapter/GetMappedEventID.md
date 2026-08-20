# GetMappedEventID

`_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi`

`CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager::CSharedServerMessageAdapter` | `0x08601640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08601640  _ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi
#           CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int)
# range [0x08601640, 0x086016ff]
08601640 +0x00:  push   %ebp
08601641 +0x01:  mov    %esp,%ebp
08601643 +0x03:  sub    $0x38,%esp
08601646 +0x06:  mov    0x8(%ebp),%eax
08601649 +0x09:  mov    (%eax),%eax
0860164b +0x0b:  lea    0xc(%eax),%edx
0860164e +0x0e:  lea    -0x1c(%ebp),%eax
08601651 +0x11:  mov    %edx,0x4(%esp)
08601655 +0x15:  mov    %eax,(%esp)
08601658 +0x18:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0860165d +0x1d:  sub    $0x4,%esp
08601660 +0x20:  jmp    086016c4 <+0x84>
08601662 +0x22:  lea    -0x1c(%ebp),%eax
08601665 +0x25:  mov    %eax,(%esp)
08601668 +0x28:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0860166d +0x2d:  mov    %eax,-0xc(%ebp)
08601670 +0x30:  cmpl   $0x0,-0xc(%ebp)
08601674 +0x34:  jne    08601695 <+0x55>
08601676 +0x36:  lea    -0x14(%ebp),%eax
08601679 +0x39:  movl   $0x0,0x8(%esp)
08601681 +0x41:  lea    -0x1c(%ebp),%edx
08601684 +0x44:  mov    %edx,0x4(%esp)
08601688 +0x48:  mov    %eax,(%esp)
0860168b +0x4b:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
08601690 +0x50:  sub    $0x4,%esp
08601693 +0x53:  jmp    086016c4 <+0x84>
08601695 +0x55:  mov    -0xc(%ebp),%eax
08601698 +0x58:  mov    (%eax),%eax
0860169a +0x5a:  cmp    0xc(%ebp),%eax
0860169d +0x5d:  jne    086016a7 <+0x67>
0860169f +0x5f:  mov    -0xc(%ebp),%eax
086016a2 +0x62:  mov    0x4(%eax),%eax
086016a5 +0x65:  jmp    086016fd <+0xbd>
086016a7 +0x67:  lea    -0x10(%ebp),%eax
086016aa +0x6a:  movl   $0x0,0x8(%esp)
086016b2 +0x72:  lea    -0x1c(%ebp),%edx
086016b5 +0x75:  mov    %edx,0x4(%esp)
086016b9 +0x79:  mov    %eax,(%esp)
086016bc +0x7c:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
086016c1 +0x81:  sub    $0x4,%esp
086016c4 +0x84:  mov    0x8(%ebp),%eax
086016c7 +0x87:  mov    (%eax),%eax
086016c9 +0x89:  lea    0xc(%eax),%edx
086016cc +0x8c:  lea    -0x18(%ebp),%eax
086016cf +0x8f:  mov    %edx,0x4(%esp)
086016d3 +0x93:  mov    %eax,(%esp)
086016d6 +0x96:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086016db +0x9b:  sub    $0x4,%esp
086016de +0x9e:  lea    -0x18(%ebp),%eax
086016e1 +0xa1:  mov    %eax,0x4(%esp)
086016e5 +0xa5:  lea    -0x1c(%ebp),%eax
086016e8 +0xa8:  mov    %eax,(%esp)
086016eb +0xab:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086016f0 +0xb0:  test   %al,%al
086016f2 +0xb2:  jne    08601662 <+0x22>
086016f8 +0xb8:  mov    $0xffffffff,%eax
086016fd +0xbd:  leave
086016fe +0xbe:  ret
086016ff +0xbf:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID @ 0x8601640

/* CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int) */

int __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  int *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) {
        return -1;
      }
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_20);
      if (local_10 != (int *)0x0) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_18,(int)local_20);
    }
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14,(int)local_20);
  }
  return local_10[1];
}
```
