# deleteToBlackList

`_ZN5CUser17deleteToBlackListEj`

`CUser::deleteToBlackList(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f040  _ZN5CUser17deleteToBlackListEj
#           CUser::deleteToBlackList(unsigned int)
# range [0x0867f040, 0x0867f103]
0867f040 +0x00:  push   %ebp
0867f041 +0x01:  mov    %esp,%ebp
0867f043 +0x03:  sub    $0x28,%esp
0867f046 +0x06:  mov    0x8(%ebp),%eax
0867f049 +0x09:  add    $0x8cef4,%eax
0867f04e +0x0e:  mov    %eax,(%esp)
0867f051 +0x11:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
0867f056 +0x16:  test   %al,%al
0867f058 +0x18:  je     0867f064 <+0x24>
0867f05a +0x1a:  mov    $0x0,%eax
0867f05f +0x1f:  jmp    0867f102 <+0xc2>
0867f064 +0x24:  mov    0x8(%ebp),%eax
0867f067 +0x27:  lea    0x8cef4(%eax),%edx
0867f06d +0x2d:  lea    -0x14(%ebp),%eax
0867f070 +0x30:  mov    %edx,0x4(%esp)
0867f074 +0x34:  mov    %eax,(%esp)
0867f077 +0x37:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
0867f07c +0x3c:  sub    $0x4,%esp
0867f07f +0x3f:  jmp    0867f0cc <+0x8c>
0867f081 +0x41:  lea    -0x14(%ebp),%eax
0867f084 +0x44:  mov    %eax,(%esp)
0867f087 +0x47:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0867f08c +0x4c:  mov    (%eax),%eax
0867f08e +0x4e:  cmp    0xc(%ebp),%eax
0867f091 +0x51:  sete   %al
0867f094 +0x54:  test   %al,%al
0867f096 +0x56:  je     0867f0c1 <+0x81>
0867f098 +0x58:  mov    0x8(%ebp),%eax
0867f09b +0x5b:  lea    0x8cef4(%eax),%ecx
0867f0a1 +0x61:  lea    -0xc(%ebp),%eax
0867f0a4 +0x64:  mov    -0x14(%ebp),%edx
0867f0a7 +0x67:  mov    %edx,0x8(%esp)
0867f0ab +0x6b:  mov    %ecx,0x4(%esp)
0867f0af +0x6f:  mov    %eax,(%esp)
0867f0b2 +0x72:  call   0869bffc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8851>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8851
0867f0b7 +0x77:  sub    $0x4,%esp
0867f0ba +0x7a:  mov    $0x1,%eax
0867f0bf +0x7f:  jmp    0867f102 <+0xc2>
0867f0c1 +0x81:  lea    -0x14(%ebp),%eax
0867f0c4 +0x84:  mov    %eax,(%esp)
0867f0c7 +0x87:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
0867f0cc +0x8c:  mov    0x8(%ebp),%eax
0867f0cf +0x8f:  lea    0x8cef4(%eax),%edx
0867f0d5 +0x95:  lea    -0x10(%ebp),%eax
0867f0d8 +0x98:  mov    %edx,0x4(%esp)
0867f0dc +0x9c:  mov    %eax,(%esp)
0867f0df +0x9f:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
0867f0e4 +0xa4:  sub    $0x4,%esp
0867f0e7 +0xa7:  lea    -0x10(%ebp),%eax
0867f0ea +0xaa:  mov    %eax,0x4(%esp)
0867f0ee +0xae:  lea    -0x14(%ebp),%eax
0867f0f1 +0xb1:  mov    %eax,(%esp)
0867f0f4 +0xb4:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
0867f0f9 +0xb9:  test   %al,%al
0867f0fb +0xbb:  jne    0867f081 <+0x41>
0867f0fd +0xbd:  mov    $0x0,%eax
0867f102 +0xc2:  leave
0867f103 +0xc3:  ret
```

## 反编译 C

```c
// CUser::deleteToBlackList @ 0x867f040

/* CUser::deleteToBlackList(unsigned int) */

undefined4 __thiscall CUser::deleteToBlackList(CUser *this,uint param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  undefined1 local_10 [12];
  
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
  if (cVar1 == '\0') {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
      if (!bVar2) break;
      puVar3 = (uint *)__gnu_cxx::
                       __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       ::operator*((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                                    *)&local_18);
      if (*puVar3 == param_1) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::erase
                  (local_10,this + 0x8cef4,local_18);
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
      operator++((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                  *)&local_18);
    }
  }
  return 0;
}
```
