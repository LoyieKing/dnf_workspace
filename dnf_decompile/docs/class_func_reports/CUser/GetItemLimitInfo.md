# GetItemLimitInfo

`_ZN5CUser16GetItemLimitInfoEi`

`CUser::GetItemLimitInfo(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688d26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688d26  _ZN5CUser16GetItemLimitInfoEi
#           CUser::GetItemLimitInfo(int)
# range [0x08688d26, 0x08688dc3]
08688d26 +0x00:  push   %ebp
08688d27 +0x01:  mov    %esp,%ebp
08688d29 +0x03:  sub    $0x28,%esp
08688d2c +0x06:  mov    0x8(%ebp),%eax
08688d2f +0x09:  lea    0x8cf68(%eax),%edx
08688d35 +0x0f:  lea    -0x10(%ebp),%eax
08688d38 +0x12:  mov    %edx,0x4(%esp)
08688d3c +0x16:  mov    %eax,(%esp)
08688d3f +0x19:  call   0869c5da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e2f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e2f
08688d44 +0x1e:  sub    $0x4,%esp
08688d47 +0x21:  mov    0x8(%ebp),%eax
08688d4a +0x24:  lea    0x8cf68(%eax),%edx
08688d50 +0x2a:  lea    -0x14(%ebp),%eax
08688d53 +0x2d:  mov    %edx,0x4(%esp)
08688d57 +0x31:  mov    %eax,(%esp)
08688d5a +0x34:  call   0869c5fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e53>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e53
08688d5f +0x39:  sub    $0x4,%esp
08688d62 +0x3c:  jmp    08688da6 <+0x80>
08688d64 +0x3e:  lea    -0x10(%ebp),%eax
08688d67 +0x41:  mov    %eax,(%esp)
08688d6a +0x44:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688d6f +0x49:  mov    0x15(%eax),%eax
08688d72 +0x4c:  cmp    0xc(%ebp),%eax
08688d75 +0x4f:  sete   %al
08688d78 +0x52:  test   %al,%al
08688d7a +0x54:  je     08688d89 <+0x63>
08688d7c +0x56:  lea    -0x10(%ebp),%eax
08688d7f +0x59:  mov    %eax,(%esp)
08688d82 +0x5c:  call   0869c68e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ee3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ee3
08688d87 +0x61:  jmp    08688dc1 <+0x9b>
08688d89 +0x63:  lea    -0xc(%ebp),%eax
08688d8c +0x66:  movl   $0x0,0x8(%esp)
08688d94 +0x6e:  lea    -0x10(%ebp),%edx
08688d97 +0x71:  mov    %edx,0x4(%esp)
08688d9b +0x75:  mov    %eax,(%esp)
08688d9e +0x78:  call   0869c650 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ea5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ea5
08688da3 +0x7d:  sub    $0x4,%esp
08688da6 +0x80:  lea    -0x14(%ebp),%eax
08688da9 +0x83:  mov    %eax,0x4(%esp)
08688dad +0x87:  lea    -0x10(%ebp),%eax
08688db0 +0x8a:  mov    %eax,(%esp)
08688db3 +0x8d:  call   0869c624 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e79
08688db8 +0x92:  test   %al,%al
08688dba +0x94:  jne    08688d64 <+0x3e>
08688dbc +0x96:  mov    $0x0,%eax
08688dc1 +0x9b:  leave
08688dc2 +0x9c:  ret
08688dc3 +0x9d:  nop
```

## 反编译 C

```c
// CUser::GetItemLimitInfo @ 0x8688d26

/* CUser::GetItemLimitInfo(int) */

undefined4 __thiscall CUser::GetItemLimitInfo(CUser *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  __normal_iterator local_18 [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_14 [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_10 [12];
  
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::begin();
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_14);
    if (*(int *)(iVar2 + 0x15) == param_1) break;
    __gnu_cxx::
    __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>::
    operator++(local_10,(int)local_14);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
          ::operator*(local_14);
  return uVar3;
}
```
