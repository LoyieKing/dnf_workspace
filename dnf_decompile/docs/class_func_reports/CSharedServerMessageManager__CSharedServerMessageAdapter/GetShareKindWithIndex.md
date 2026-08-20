# GetShareKindWithIndex

`_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi`

`CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager::CSharedServerMessageAdapter` | `0x08601794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08601794  _ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi
#           CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int)
# range [0x08601794, 0x08601877]
08601794 +0x00:  push   %ebp
08601795 +0x01:  mov    %esp,%ebp
08601797 +0x03:  sub    $0x38,%esp
0860179a +0x06:  mov    0xc(%ebp),%eax
0860179d +0x09:  mov    %eax,0x4(%esp)
086017a1 +0x0d:  mov    0x8(%ebp),%eax
086017a4 +0x10:  mov    %eax,(%esp)
086017a7 +0x13:  call   08601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int)
086017ac +0x18:  mov    %eax,-0x10(%ebp)
086017af +0x1b:  cmpl   $0xffffffff,-0x10(%ebp)
086017b3 +0x1f:  jne    086017bf <+0x2b>
086017b5 +0x21:  mov    $0xffffffff,%eax
086017ba +0x26:  jmp    08601876 <+0xe2>
086017bf +0x2b:  mov    0x8(%ebp),%eax
086017c2 +0x2e:  mov    (%eax),%eax
086017c4 +0x30:  lea    0x18(%eax),%edx
086017c7 +0x33:  lea    -0x20(%ebp),%eax
086017ca +0x36:  mov    %edx,0x4(%esp)
086017ce +0x3a:  mov    %eax,(%esp)
086017d1 +0x3d:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086017d6 +0x42:  sub    $0x4,%esp
086017d9 +0x45:  jmp    0860183d <+0xa9>
086017db +0x47:  lea    -0x20(%ebp),%eax
086017de +0x4a:  mov    %eax,(%esp)
086017e1 +0x4d:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
086017e6 +0x52:  mov    %eax,-0xc(%ebp)
086017e9 +0x55:  cmpl   $0x0,-0xc(%ebp)
086017ed +0x59:  jne    0860180e <+0x7a>
086017ef +0x5b:  lea    -0x18(%ebp),%eax
086017f2 +0x5e:  movl   $0x0,0x8(%esp)
086017fa +0x66:  lea    -0x20(%ebp),%edx
086017fd +0x69:  mov    %edx,0x4(%esp)
08601801 +0x6d:  mov    %eax,(%esp)
08601804 +0x70:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
08601809 +0x75:  sub    $0x4,%esp
0860180c +0x78:  jmp    0860183d <+0xa9>
0860180e +0x7a:  mov    -0xc(%ebp),%eax
08601811 +0x7d:  mov    (%eax),%eax
08601813 +0x7f:  cmp    -0x10(%ebp),%eax
08601816 +0x82:  jne    08601820 <+0x8c>
08601818 +0x84:  mov    -0xc(%ebp),%eax
0860181b +0x87:  mov    0x4(%eax),%eax
0860181e +0x8a:  jmp    08601876 <+0xe2>
08601820 +0x8c:  lea    -0x14(%ebp),%eax
08601823 +0x8f:  movl   $0x0,0x8(%esp)
0860182b +0x97:  lea    -0x20(%ebp),%edx
0860182e +0x9a:  mov    %edx,0x4(%esp)
08601832 +0x9e:  mov    %eax,(%esp)
08601835 +0xa1:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0860183a +0xa6:  sub    $0x4,%esp
0860183d +0xa9:  mov    0x8(%ebp),%eax
08601840 +0xac:  mov    (%eax),%eax
08601842 +0xae:  lea    0x18(%eax),%edx
08601845 +0xb1:  lea    -0x1c(%ebp),%eax
08601848 +0xb4:  mov    %edx,0x4(%esp)
0860184c +0xb8:  mov    %eax,(%esp)
0860184f +0xbb:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08601854 +0xc0:  sub    $0x4,%esp
08601857 +0xc3:  lea    -0x1c(%ebp),%eax
0860185a +0xc6:  mov    %eax,0x4(%esp)
0860185e +0xca:  lea    -0x20(%ebp),%eax
08601861 +0xcd:  mov    %eax,(%esp)
08601864 +0xd0:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08601869 +0xd5:  test   %al,%al
0860186b +0xd7:  jne    086017db <+0x47>
08601871 +0xdd:  mov    $0xffffffff,%eax
08601876 +0xe2:  leave
08601877 +0xe3:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex @ 0x8601794

/* CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int) */

int __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  int local_14;
  int *local_10;
  
  local_14 = GetMappedEventID(this,param_1);
  if (local_14 != -1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_24,local_20);
      if (!bVar1) break;
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_24);
      if (local_10 == (int *)0x0) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_1c,(int)local_24);
      }
      else {
        if (*local_10 == local_14) {
          return local_10[1];
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_18,(int)local_24);
      }
    }
  }
  return -1;
}
```
