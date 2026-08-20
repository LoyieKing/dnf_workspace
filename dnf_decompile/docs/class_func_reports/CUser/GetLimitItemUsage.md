# GetLimitItemUsage

`_ZNK5CUser17GetLimitItemUsageEP12SIG_LOAD_ETC`

`CUser::GetLimitItemUsage(SIG_LOAD_ETC*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688dc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688dc4  _ZNK5CUser17GetLimitItemUsageEP12SIG_LOAD_ETC
#           CUser::GetLimitItemUsage(SIG_LOAD_ETC*) const
# range [0x08688dc4, 0x08688f01]
08688dc4 +0x000:  push   %ebp
08688dc5 +0x001:  mov    %esp,%ebp
08688dc7 +0x003:  push   %ebx
08688dc8 +0x004:  sub    $0x24,%esp
08688dcb +0x007:  cmpl   $0x0,0xc(%ebp)
08688dcf +0x00b:  je     08688efc <+0x138>
08688dd5 +0x011:  mov    0xc(%ebp),%eax
08688dd8 +0x014:  movl   $0x0,0x2638(%eax)
08688de2 +0x01e:  mov    0x8(%ebp),%eax
08688de5 +0x021:  lea    0x8cf68(%eax),%edx
08688deb +0x027:  lea    -0x14(%ebp),%eax
08688dee +0x02a:  mov    %edx,0x4(%esp)
08688df2 +0x02e:  mov    %eax,(%esp)
08688df5 +0x031:  call   0869c698 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8eed>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8eed
08688dfa +0x036:  sub    $0x4,%esp
08688dfd +0x039:  mov    0x8(%ebp),%eax
08688e00 +0x03c:  lea    0x8cf68(%eax),%edx
08688e06 +0x042:  lea    -0x18(%ebp),%eax
08688e09 +0x045:  mov    %edx,0x4(%esp)
08688e0d +0x049:  mov    %eax,(%esp)
08688e10 +0x04c:  call   0869c6c4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8f19>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8f19
08688e15 +0x051:  sub    $0x4,%esp
08688e18 +0x054:  movl   $0x0,-0xc(%ebp)
08688e1f +0x05b:  movl   $0x0,-0xc(%ebp)
08688e26 +0x062:  jmp    08688ed4 <+0x110>
08688e2b +0x067:  mov    -0xc(%ebp),%ebx
08688e2e +0x06a:  lea    -0x14(%ebp),%eax
08688e31 +0x06d:  mov    %eax,(%esp)
08688e34 +0x070:  call   0869c750 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fa5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fa5
08688e39 +0x075:  mov    0x15(%eax),%edx
08688e3c +0x078:  mov    0xc(%ebp),%eax
08688e3f +0x07b:  lea    0x263(%ebx),%ecx
08688e45 +0x081:  shl    $0x4,%ecx
08688e48 +0x084:  mov    %edx,0x14(%ecx,%eax,1)
08688e4c +0x088:  mov    -0xc(%ebp),%ebx
08688e4f +0x08b:  lea    -0x14(%ebp),%eax
08688e52 +0x08e:  mov    %eax,(%esp)
08688e55 +0x091:  call   0869c750 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fa5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fa5
08688e5a +0x096:  mov    0x19(%eax),%edx
08688e5d +0x099:  mov    0xc(%ebp),%eax
08688e60 +0x09c:  lea    0x263(%ebx),%ecx
08688e66 +0x0a2:  shl    $0x4,%ecx
08688e69 +0x0a5:  mov    %edx,0x18(%ecx,%eax,1)
08688e6d +0x0a9:  mov    -0xc(%ebp),%ebx
08688e70 +0x0ac:  lea    -0x14(%ebp),%eax
08688e73 +0x0af:  mov    %eax,(%esp)
08688e76 +0x0b2:  call   0869c750 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fa5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fa5
08688e7b +0x0b7:  mov    0xc(%eax),%edx
08688e7e +0x0ba:  mov    0xc(%ebp),%eax
08688e81 +0x0bd:  lea    0x263(%ebx),%ecx
08688e87 +0x0c3:  shl    $0x4,%ecx
08688e8a +0x0c6:  mov    %edx,0x10(%ecx,%eax,1)
08688e8e +0x0ca:  mov    -0xc(%ebp),%ebx
08688e91 +0x0cd:  lea    -0x14(%ebp),%eax
08688e94 +0x0d0:  mov    %eax,(%esp)
08688e97 +0x0d3:  call   0869c750 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fa5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fa5
08688e9c +0x0d8:  movzbl 0x10(%eax),%eax
08688ea0 +0x0dc:  mov    0xc(%ebp),%edx
08688ea3 +0x0df:  lea    0x263(%ebx),%ecx
08688ea9 +0x0e5:  shl    $0x4,%ecx
08688eac +0x0e8:  add    %ecx,%edx
08688eae +0x0ea:  add    $0xc,%edx
08688eb1 +0x0ed:  mov    %al,(%edx)
08688eb3 +0x0ef:  lea    -0x10(%ebp),%eax
08688eb6 +0x0f2:  movl   $0x0,0x8(%esp)
08688ebe +0x0fa:  lea    -0x14(%ebp),%edx
08688ec1 +0x0fd:  mov    %edx,0x4(%esp)
08688ec5 +0x101:  mov    %eax,(%esp)
08688ec8 +0x104:  call   0869c71c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8f71>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8f71
08688ecd +0x109:  sub    $0x4,%esp
08688ed0 +0x10c:  addl   $0x1,-0xc(%ebp)
08688ed4 +0x110:  lea    -0x18(%ebp),%eax
08688ed7 +0x113:  mov    %eax,0x4(%esp)
08688edb +0x117:  lea    -0x14(%ebp),%eax
08688ede +0x11a:  mov    %eax,(%esp)
08688ee1 +0x11d:  call   0869c6f0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8f45>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8f45
08688ee6 +0x122:  test   %al,%al
08688ee8 +0x124:  jne    08688e2b <+0x67>
08688eee +0x12a:  mov    0xc(%ebp),%eax
08688ef1 +0x12d:  mov    -0xc(%ebp),%edx
08688ef4 +0x130:  mov    %edx,0x2638(%eax)
08688efa +0x136:  jmp    08688efd <+0x139>
08688efc +0x138:  nop
08688efd +0x139:  mov    -0x4(%ebp),%ebx
08688f00 +0x13c:  leave
08688f01 +0x13d:  ret
```

## 反编译 C

```c
// CUser::GetLimitItemUsage @ 0x8688dc4

/* CUser::GetLimitItemUsage(SIG_LOAD_ETC*) const */

void __thiscall CUser::GetLimitItemUsage(CUser *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  __normal_iterator local_1c [4];
  __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_18 [4];
  __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_14 [4];
  int local_10;
  
  if (param_1 != (SIG_LOAD_ETC *)0x0) {
    *(undefined4 *)(param_1 + 0x2638) = 0;
    std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::begin();
    std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::end();
    local_10 = 0;
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_18,local_1c);
      iVar4 = local_10;
      if (!bVar2) break;
      iVar3 = __gnu_cxx::
              __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
              ::operator->(local_18);
      iVar1 = local_10;
      *(undefined4 *)(param_1 + (iVar4 + 0x263) * 0x10 + 0x14) = *(undefined4 *)(iVar3 + 0x15);
      iVar3 = __gnu_cxx::
              __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
              ::operator->(local_18);
      iVar4 = local_10;
      *(undefined4 *)(param_1 + (iVar1 + 0x263) * 0x10 + 0x18) = *(undefined4 *)(iVar3 + 0x19);
      iVar3 = __gnu_cxx::
              __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
              ::operator->(local_18);
      iVar1 = local_10;
      *(undefined4 *)(param_1 + (iVar4 + 0x263) * 0x10 + 0x10) = *(undefined4 *)(iVar3 + 0xc);
      iVar4 = __gnu_cxx::
              __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
              ::operator->(local_18);
      param_1[(iVar1 + 0x263) * 0x10 + 0xc] = *(SIG_LOAD_ETC *)(iVar4 + 0x10);
      __gnu_cxx::
      __normal_iterator<LimitItemUsage_const*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
      ::operator++(local_14,(int)local_18);
      local_10 = local_10 + 1;
    }
    *(int *)(param_1 + 0x2638) = local_10;
  }
  return;
}
```
