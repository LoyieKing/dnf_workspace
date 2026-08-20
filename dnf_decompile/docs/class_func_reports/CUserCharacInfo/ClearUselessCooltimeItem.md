# ClearUselessCooltimeItem

`_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj`

`CUserCharacInfo::ClearUselessCooltimeItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08659e3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659e3e  _ZN15CUserCharacInfo24ClearUselessCooltimeItemEj
#           CUserCharacInfo::ClearUselessCooltimeItem(unsigned int)
# range [0x08659e3e, 0x08659ef3]
08659e3e +0x00:  push   %ebp
08659e3f +0x01:  mov    %esp,%ebp
08659e41 +0x03:  sub    $0x38,%esp
08659e44 +0x06:  mov    0x8(%ebp),%eax
08659e47 +0x09:  mov    0x10(%eax),%eax
08659e4a +0x0c:  add    $0xe9a,%eax
08659e4f +0x11:  mov    %eax,-0xc(%ebp)
08659e52 +0x14:  lea    -0x18(%ebp),%eax
08659e55 +0x17:  mov    -0xc(%ebp),%edx
08659e58 +0x1a:  mov    %edx,0x4(%esp)
08659e5c +0x1e:  mov    %eax,(%esp)
08659e5f +0x21:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
08659e64 +0x26:  sub    $0x4,%esp
08659e67 +0x29:  jmp    08659ec2 <+0x84>
08659e69 +0x2b:  lea    -0x18(%ebp),%eax
08659e6c +0x2e:  mov    %eax,(%esp)
08659e6f +0x31:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659e74 +0x36:  mov    0x4(%eax),%eax
08659e77 +0x39:  cmp    0xc(%ebp),%eax
08659e7a +0x3c:  setb   %al
08659e7d +0x3f:  test   %al,%al
08659e7f +0x41:  je     08659ea5 <+0x67>
08659e81 +0x43:  lea    -0x1c(%ebp),%eax
08659e84 +0x46:  mov    -0x18(%ebp),%edx
08659e87 +0x49:  mov    %edx,0x8(%esp)
08659e8b +0x4d:  mov    -0xc(%ebp),%edx
08659e8e +0x50:  mov    %edx,0x4(%esp)
08659e92 +0x54:  mov    %eax,(%esp)
08659e95 +0x57:  call   0869af3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x778f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x778f
08659e9a +0x5c:  sub    $0x4,%esp
08659e9d +0x5f:  mov    -0x1c(%ebp),%eax
08659ea0 +0x62:  mov    %eax,-0x18(%ebp)
08659ea3 +0x65:  jmp    08659ec2 <+0x84>
08659ea5 +0x67:  lea    -0x10(%ebp),%eax
08659ea8 +0x6a:  movl   $0x0,0x8(%esp)
08659eb0 +0x72:  lea    -0x18(%ebp),%edx
08659eb3 +0x75:  mov    %edx,0x4(%esp)
08659eb7 +0x79:  mov    %eax,(%esp)
08659eba +0x7c:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
08659ebf +0x81:  sub    $0x4,%esp
08659ec2 +0x84:  lea    -0x14(%ebp),%eax
08659ec5 +0x87:  mov    -0xc(%ebp),%edx
08659ec8 +0x8a:  mov    %edx,0x4(%esp)
08659ecc +0x8e:  mov    %eax,(%esp)
08659ecf +0x91:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
08659ed4 +0x96:  sub    $0x4,%esp
08659ed7 +0x99:  lea    -0x14(%ebp),%eax
08659eda +0x9c:  mov    %eax,0x4(%esp)
08659ede +0xa0:  lea    -0x18(%ebp),%eax
08659ee1 +0xa3:  mov    %eax,(%esp)
08659ee4 +0xa6:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08659ee9 +0xab:  test   %al,%al
08659eeb +0xad:  jne    08659e69 <+0x2b>
08659ef1 +0xb3:  leave
08659ef2 +0xb4:  ret
08659ef3 +0xb5:  nop
```

## 反编译 C

```c
// CUserCharacInfo::ClearUselessCooltimeItem @ 0x8659e3e

/* CUserCharacInfo::ClearUselessCooltimeItem(unsigned int) */

void __thiscall CUserCharacInfo::ClearUselessCooltimeItem(CUserCharacInfo *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = *(int *)(this + 0x10) + 0xe9a;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_18);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
            ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                          *)&local_1c);
    if (*(uint *)(iVar2 + 4) < param_1) {
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                (&local_20,local_10,local_1c);
      local_1c = local_20;
    }
    else {
      __gnu_cxx::
      __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
      ::operator++(local_14,(int)&local_1c);
    }
  }
  return;
}
```
