# ClearUselessEffectItem

`_ZN15CUserCharacInfo22ClearUselessEffectItemEj`

`CUserCharacInfo::ClearUselessEffectItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08659ef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659ef4  _ZN15CUserCharacInfo22ClearUselessEffectItemEj
#           CUserCharacInfo::ClearUselessEffectItem(unsigned int)
# range [0x08659ef4, 0x08659fa9]
08659ef4 +0x00:  push   %ebp
08659ef5 +0x01:  mov    %esp,%ebp
08659ef7 +0x03:  sub    $0x38,%esp
08659efa +0x06:  mov    0x8(%ebp),%eax
08659efd +0x09:  mov    0x10(%eax),%eax
08659f00 +0x0c:  add    $0xea6,%eax
08659f05 +0x11:  mov    %eax,-0xc(%ebp)
08659f08 +0x14:  lea    -0x18(%ebp),%eax
08659f0b +0x17:  mov    -0xc(%ebp),%edx
08659f0e +0x1a:  mov    %edx,0x4(%esp)
08659f12 +0x1e:  mov    %eax,(%esp)
08659f15 +0x21:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
08659f1a +0x26:  sub    $0x4,%esp
08659f1d +0x29:  jmp    08659f78 <+0x84>
08659f1f +0x2b:  lea    -0x18(%ebp),%eax
08659f22 +0x2e:  mov    %eax,(%esp)
08659f25 +0x31:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659f2a +0x36:  mov    0x4(%eax),%eax
08659f2d +0x39:  cmp    0xc(%ebp),%eax
08659f30 +0x3c:  setb   %al
08659f33 +0x3f:  test   %al,%al
08659f35 +0x41:  je     08659f5b <+0x67>
08659f37 +0x43:  lea    -0x1c(%ebp),%eax
08659f3a +0x46:  mov    -0x18(%ebp),%edx
08659f3d +0x49:  mov    %edx,0x8(%esp)
08659f41 +0x4d:  mov    -0xc(%ebp),%edx
08659f44 +0x50:  mov    %edx,0x4(%esp)
08659f48 +0x54:  mov    %eax,(%esp)
08659f4b +0x57:  call   0869af3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x778f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x778f
08659f50 +0x5c:  sub    $0x4,%esp
08659f53 +0x5f:  mov    -0x1c(%ebp),%eax
08659f56 +0x62:  mov    %eax,-0x18(%ebp)
08659f59 +0x65:  jmp    08659f78 <+0x84>
08659f5b +0x67:  lea    -0x10(%ebp),%eax
08659f5e +0x6a:  movl   $0x0,0x8(%esp)
08659f66 +0x72:  lea    -0x18(%ebp),%edx
08659f69 +0x75:  mov    %edx,0x4(%esp)
08659f6d +0x79:  mov    %eax,(%esp)
08659f70 +0x7c:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
08659f75 +0x81:  sub    $0x4,%esp
08659f78 +0x84:  lea    -0x14(%ebp),%eax
08659f7b +0x87:  mov    -0xc(%ebp),%edx
08659f7e +0x8a:  mov    %edx,0x4(%esp)
08659f82 +0x8e:  mov    %eax,(%esp)
08659f85 +0x91:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
08659f8a +0x96:  sub    $0x4,%esp
08659f8d +0x99:  lea    -0x14(%ebp),%eax
08659f90 +0x9c:  mov    %eax,0x4(%esp)
08659f94 +0xa0:  lea    -0x18(%ebp),%eax
08659f97 +0xa3:  mov    %eax,(%esp)
08659f9a +0xa6:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08659f9f +0xab:  test   %al,%al
08659fa1 +0xad:  jne    08659f1f <+0x2b>
08659fa7 +0xb3:  leave
08659fa8 +0xb4:  ret
08659fa9 +0xb5:  nop
```

## 反编译 C

```c
// CUserCharacInfo::ClearUselessEffectItem @ 0x8659ef4

/* CUserCharacInfo::ClearUselessEffectItem(unsigned int) */

void __thiscall CUserCharacInfo::ClearUselessEffectItem(CUserCharacInfo *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = *(int *)(this + 0x10) + 0xea6;
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
