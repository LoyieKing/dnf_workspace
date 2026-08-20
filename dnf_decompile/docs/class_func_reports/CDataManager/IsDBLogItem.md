# IsDBLogItem

`_ZN12CDataManager11IsDBLogItemEj`

`CDataManager::IsDBLogItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08364f2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364f2e  _ZN12CDataManager11IsDBLogItemEj
#           CDataManager::IsDBLogItem(unsigned int)
# range [0x08364f2e, 0x0836500f]
08364f2e +0x00:  push   %ebp
08364f2f +0x01:  mov    %esp,%ebp
08364f31 +0x03:  sub    $0x38,%esp
08364f34 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08364f3b +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08364f40 +0x12:  mov    %eax,-0xc(%ebp)
08364f43 +0x15:  mov    0x8(%ebp),%eax
08364f46 +0x18:  lea    0x4d1c(%eax),%edx
08364f4c +0x1e:  lea    -0x18(%ebp),%eax
08364f4f +0x21:  mov    %edx,0x4(%esp)
08364f53 +0x25:  mov    %eax,(%esp)
08364f56 +0x28:  call   08395988 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25428>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25428
08364f5b +0x2d:  sub    $0x4,%esp
08364f5e +0x30:  lea    -0x18(%ebp),%eax
08364f61 +0x33:  mov    %eax,0x4(%esp)
08364f65 +0x37:  lea    -0x1c(%ebp),%eax
08364f68 +0x3a:  mov    %eax,(%esp)
08364f6b +0x3d:  call   083959ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2544c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2544c
08364f70 +0x42:  jmp    08364fd4 <+0xa6>
08364f72 +0x44:  lea    -0x1c(%ebp),%eax
08364f75 +0x47:  mov    %eax,(%esp)
08364f78 +0x4a:  call   08395a4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x254ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x254ec
08364f7d +0x4f:  mov    (%eax),%eax
08364f7f +0x51:  cmp    0xc(%ebp),%eax
08364f82 +0x54:  jne    08364f9e <+0x70>
08364f84 +0x56:  lea    -0x1c(%ebp),%eax
08364f87 +0x59:  mov    %eax,(%esp)
08364f8a +0x5c:  call   08395a4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x254ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x254ec
08364f8f +0x61:  mov    0x4(%eax),%eax
08364f92 +0x64:  cmp    -0xc(%ebp),%eax
08364f95 +0x67:  jl     08364f9e <+0x70>
08364f97 +0x69:  mov    $0x1,%eax
08364f9c +0x6e:  jmp    08364fa3 <+0x75>
08364f9e +0x70:  mov    $0x0,%eax
08364fa3 +0x75:  test   %al,%al
08364fa5 +0x77:  je     08364fb7 <+0x89>
08364fa7 +0x79:  lea    -0x1c(%ebp),%eax
08364faa +0x7c:  mov    %eax,(%esp)
08364fad +0x7f:  call   08395a4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x254ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x254ec
08364fb2 +0x84:  mov    0x8(%eax),%eax
08364fb5 +0x87:  jmp    0836500e <+0xe0>
08364fb7 +0x89:  lea    -0x10(%ebp),%eax
08364fba +0x8c:  movl   $0x0,0x8(%esp)
08364fc2 +0x94:  lea    -0x1c(%ebp),%edx
08364fc5 +0x97:  mov    %edx,0x4(%esp)
08364fc9 +0x9b:  mov    %eax,(%esp)
08364fcc +0x9e:  call   08395a18 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x254b8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x254b8
08364fd1 +0xa3:  sub    $0x4,%esp
08364fd4 +0xa6:  mov    0x8(%ebp),%eax
08364fd7 +0xa9:  lea    0x4d1c(%eax),%edx
08364fdd +0xaf:  lea    -0x14(%ebp),%eax
08364fe0 +0xb2:  mov    %edx,0x4(%esp)
08364fe4 +0xb6:  mov    %eax,(%esp)
08364fe7 +0xb9:  call   083959c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25466>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25466
08364fec +0xbe:  sub    $0x4,%esp
08364fef +0xc1:  lea    -0x14(%ebp),%eax
08364ff2 +0xc4:  mov    %eax,0x4(%esp)
08364ff6 +0xc8:  lea    -0x1c(%ebp),%eax
08364ff9 +0xcb:  mov    %eax,(%esp)
08364ffc +0xce:  call   083959ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2548c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2548c
08365001 +0xd3:  test   %al,%al
08365003 +0xd5:  jne    08364f72 <+0x44>
08365009 +0xdb:  mov    $0xffffffff,%eax
0836500e +0xe0:  leave
0836500f +0xe1:  ret
```

## 反编译 C

```c
// CDataManager::IsDBLogItem @ 0x8364f2e

/* CDataManager::IsDBLogItem(unsigned int) */

undefined4 __thiscall CDataManager::IsDBLogItem(CDataManager *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>
  local_14 [4];
  int local_10;
  
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<stDBLogItem,std::allocator<stDBLogItem>>::begin();
  __gnu_cxx::
  __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>::
  __normal_iterator<stDBLogItem*>(local_20,local_1c);
  while( true ) {
    std::vector<stDBLogItem,std::allocator<stDBLogItem>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_18);
    if (!bVar1) {
      return 0xffffffff;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>
                     ::operator->(local_20);
    if ((*puVar2 == param_1) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>
                ::operator->(local_20), local_10 <= *(int *)(iVar3 + 4))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>::
    operator++(local_14,(int)local_20);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<stDBLogItem_const*,std::vector<stDBLogItem,std::allocator<stDBLogItem>>>
          ::operator->(local_20);
  return *(undefined4 *)(iVar3 + 8);
}
```
