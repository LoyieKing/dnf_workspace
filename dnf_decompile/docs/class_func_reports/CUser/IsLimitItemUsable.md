# IsLimitItemUsable

`_ZN5CUser17IsLimitItemUsableEi`

`CUser::IsLimitItemUsable(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688c70  _ZN5CUser17IsLimitItemUsableEi
#           CUser::IsLimitItemUsable(int)
# range [0x08688c70, 0x08688d25]
08688c70 +0x00:  push   %ebp
08688c71 +0x01:  mov    %esp,%ebp
08688c73 +0x03:  sub    $0x28,%esp
08688c76 +0x06:  mov    0x8(%ebp),%eax
08688c79 +0x09:  lea    0x8cf68(%eax),%edx
08688c7f +0x0f:  lea    -0x10(%ebp),%eax
08688c82 +0x12:  mov    %edx,0x4(%esp)
08688c86 +0x16:  mov    %eax,(%esp)
08688c89 +0x19:  call   0869c5da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e2f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e2f
08688c8e +0x1e:  sub    $0x4,%esp
08688c91 +0x21:  mov    0x8(%ebp),%eax
08688c94 +0x24:  lea    0x8cf68(%eax),%edx
08688c9a +0x2a:  lea    -0x14(%ebp),%eax
08688c9d +0x2d:  mov    %edx,0x4(%esp)
08688ca1 +0x31:  mov    %eax,(%esp)
08688ca4 +0x34:  call   0869c5fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e53>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e53
08688ca9 +0x39:  sub    $0x4,%esp
08688cac +0x3c:  jmp    08688d08 <+0x98>
08688cae +0x3e:  lea    -0x10(%ebp),%eax
08688cb1 +0x41:  mov    %eax,(%esp)
08688cb4 +0x44:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688cb9 +0x49:  mov    0x15(%eax),%eax
08688cbc +0x4c:  cmp    0xc(%ebp),%eax
08688cbf +0x4f:  sete   %al
08688cc2 +0x52:  test   %al,%al
08688cc4 +0x54:  je     08688ceb <+0x7b>
08688cc6 +0x56:  lea    -0x10(%ebp),%eax
08688cc9 +0x59:  mov    %eax,(%esp)
08688ccc +0x5c:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688cd1 +0x61:  mov    %eax,(%esp)
08688cd4 +0x64:  call   08695f68 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x27bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x27bd
08688cd9 +0x69:  test   %al,%al
08688cdb +0x6b:  je     08688ce4 <+0x74>
08688cdd +0x6d:  mov    $0x1,%eax
08688ce2 +0x72:  jmp    08688d23 <+0xb3>
08688ce4 +0x74:  mov    $0x0,%eax
08688ce9 +0x79:  jmp    08688d23 <+0xb3>
08688ceb +0x7b:  lea    -0xc(%ebp),%eax
08688cee +0x7e:  movl   $0x0,0x8(%esp)
08688cf6 +0x86:  lea    -0x10(%ebp),%edx
08688cf9 +0x89:  mov    %edx,0x4(%esp)
08688cfd +0x8d:  mov    %eax,(%esp)
08688d00 +0x90:  call   0869c650 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ea5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ea5
08688d05 +0x95:  sub    $0x4,%esp
08688d08 +0x98:  lea    -0x14(%ebp),%eax
08688d0b +0x9b:  mov    %eax,0x4(%esp)
08688d0f +0x9f:  lea    -0x10(%ebp),%eax
08688d12 +0xa2:  mov    %eax,(%esp)
08688d15 +0xa5:  call   0869c624 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e79
08688d1a +0xaa:  test   %al,%al
08688d1c +0xac:  jne    08688cae <+0x3e>
08688d1e +0xae:  mov    $0x1,%eax
08688d23 +0xb3:  leave
08688d24 +0xb4:  ret
08688d25 +0xb5:  nop
```

## 反编译 C

```c
// CUser::IsLimitItemUsable @ 0x8688c70

/* CUser::IsLimitItemUsable(int) */

undefined4 __thiscall CUser::IsLimitItemUsable(CUser *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  LimitItemUsage *this_00;
  __normal_iterator local_18 [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_14 [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_10 [12];
  
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::begin();
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::end();
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar2) {
      return 1;
    }
    iVar3 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_14);
    if (*(int *)(iVar3 + 0x15) == param_1) break;
    __gnu_cxx::
    __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>::
    operator++(local_10,(int)local_14);
  }
  this_00 = (LimitItemUsage *)
            __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_14);
  cVar1 = LimitItemUsage::isUsable(this_00);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}
```
