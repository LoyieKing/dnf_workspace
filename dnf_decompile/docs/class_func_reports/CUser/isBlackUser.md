# isBlackUser

`_ZN5CUser11isBlackUserEj`

`CUser::isBlackUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f104  _ZN5CUser11isBlackUserEj
#           CUser::isBlackUser(unsigned int)
# range [0x0867f104, 0x0867f1a3]
0867f104 +0x00:  push   %ebp
0867f105 +0x01:  mov    %esp,%ebp
0867f107 +0x03:  sub    $0x28,%esp
0867f10a +0x06:  mov    0x8(%ebp),%eax
0867f10d +0x09:  add    $0x8cef4,%eax
0867f112 +0x0e:  mov    %eax,(%esp)
0867f115 +0x11:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
0867f11a +0x16:  test   %al,%al
0867f11c +0x18:  je     0867f125 <+0x21>
0867f11e +0x1a:  mov    $0x0,%eax
0867f123 +0x1f:  jmp    0867f1a1 <+0x9d>
0867f125 +0x21:  mov    0x8(%ebp),%eax
0867f128 +0x24:  lea    0x8cef4(%eax),%edx
0867f12e +0x2a:  lea    -0x10(%ebp),%eax
0867f131 +0x2d:  mov    %edx,0x4(%esp)
0867f135 +0x31:  mov    %eax,(%esp)
0867f138 +0x34:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
0867f13d +0x39:  sub    $0x4,%esp
0867f140 +0x3c:  jmp    0867f16b <+0x67>
0867f142 +0x3e:  lea    -0x10(%ebp),%eax
0867f145 +0x41:  mov    %eax,(%esp)
0867f148 +0x44:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0867f14d +0x49:  mov    (%eax),%eax
0867f14f +0x4b:  cmp    0xc(%ebp),%eax
0867f152 +0x4e:  sete   %al
0867f155 +0x51:  test   %al,%al
0867f157 +0x53:  je     0867f160 <+0x5c>
0867f159 +0x55:  mov    $0x1,%eax
0867f15e +0x5a:  jmp    0867f1a1 <+0x9d>
0867f160 +0x5c:  lea    -0x10(%ebp),%eax
0867f163 +0x5f:  mov    %eax,(%esp)
0867f166 +0x62:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
0867f16b +0x67:  mov    0x8(%ebp),%eax
0867f16e +0x6a:  lea    0x8cef4(%eax),%edx
0867f174 +0x70:  lea    -0xc(%ebp),%eax
0867f177 +0x73:  mov    %edx,0x4(%esp)
0867f17b +0x77:  mov    %eax,(%esp)
0867f17e +0x7a:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
0867f183 +0x7f:  sub    $0x4,%esp
0867f186 +0x82:  lea    -0xc(%ebp),%eax
0867f189 +0x85:  mov    %eax,0x4(%esp)
0867f18d +0x89:  lea    -0x10(%ebp),%eax
0867f190 +0x8c:  mov    %eax,(%esp)
0867f193 +0x8f:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
0867f198 +0x94:  test   %al,%al
0867f19a +0x96:  jne    0867f142 <+0x3e>
0867f19c +0x98:  mov    $0x0,%eax
0867f1a1 +0x9d:  leave
0867f1a2 +0x9e:  ret
0867f1a3 +0x9f:  nop
```

## 反编译 C

```c
// CUser::isBlackUser @ 0x867f104

/* CUser::isBlackUser(unsigned int) */

undefined4 __thiscall CUser::isBlackUser(CUser *this,uint param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
  if (cVar1 == '\0') {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_14,local_10);
      if (!bVar2) break;
      puVar3 = (uint *)__gnu_cxx::
                       __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       ::operator*(local_14);
      if (*puVar3 == param_1) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
      operator++(local_14);
    }
  }
  return 0;
}
```
