# getAvatarColorInfoInst

`_ZN15AvatarVariation22getAvatarColorInfoInstEv`

`AvatarVariation::getAvatarColorInfoInst()`

| 类 | 地址 |
|---|---|
| `AvatarVariation` | `0x088d46d3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d46d3  _ZN15AvatarVariation22getAvatarColorInfoInstEv
#           AvatarVariation::getAvatarColorInfoInst()
# range [0x088d46d3, 0x088d4781]
088d46d3 +0x00:  push   %ebp
088d46d4 +0x01:  mov    %esp,%ebp
088d46d6 +0x03:  push   %edi
088d46d7 +0x04:  push   %esi
088d46d8 +0x05:  push   %ebx
088d46d9 +0x06:  sub    $0x2c,%esp
088d46dc +0x09:  mov    $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,%eax
088d46e1 +0x0e:  movzbl (%eax),%eax
088d46e4 +0x11:  test   %al,%al
088d46e6 +0x13:  jne    088d4759 <+0x86>
088d46e8 +0x15:  movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
088d46ef +0x1c:  call   08725330 <__cxa_guard_acquire>
088d46f4 +0x21:  test   %eax,%eax
088d46f6 +0x23:  setne  %al
088d46f9 +0x26:  test   %al,%al
088d46fb +0x28:  je     088d4759 <+0x86>
088d46fd +0x2a:  mov    $0x0,%ebx
088d4702 +0x2f:  movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
088d4709 +0x36:  call   0837d312 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcdb2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcdb2
088d470e +0x3b:  movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
088d4715 +0x42:  call   08725250 <__cxa_guard_release>
088d471a +0x47:  mov    $&_ZN15AvatarVariation15AvatarColorInfoD1Ev,%eax
088d471f +0x4c:  movl   $&__dso_handle,0x8(%esp)
088d4727 +0x54:  movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,0x4(%esp)
088d472f +0x5c:  mov    %eax,(%esp)
088d4732 +0x5f:  call   0807ddd0 <_init+0x6c8>
088d4737 +0x64:  jmp    088d4759 <+0x86>
088d4739 +0x66:  mov    %edx,%esi
088d473b +0x68:  mov    %eax,%edi
088d473d +0x6a:  test   %bl,%bl
088d473f +0x6c:  jne    088d474d <+0x7a>
088d4741 +0x6e:  movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
088d4748 +0x75:  call   087252c0 <__cxa_guard_abort>
088d474d +0x7a:  mov    %edi,%eax
088d474f +0x7c:  mov    %esi,%edx
088d4751 +0x7e:  mov    %eax,(%esp)
088d4754 +0x81:  call   08ae3750 <_Unwind_Resume>
088d4759 +0x86:  movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
088d4760 +0x8d:  call   088d444f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE>  ; AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*)
088d4765 +0x92:  mov    %al,-0x19(%ebp)
088d4768 +0x95:  cmpb   $0x0,-0x19(%ebp)
088d476c +0x99:  je     088d4775 <+0xa2>
088d476e +0x9b:  mov    $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,%eax
088d4773 +0xa0:  jmp    088d477a <+0xa7>
088d4775 +0xa2:  mov    $0x0,%eax
088d477a +0xa7:  add    $0x2c,%esp
088d477d +0xaa:  pop    %ebx
088d477e +0xab:  pop    %esi
088d477f +0xac:  pop    %edi
088d4780 +0xad:  pop    %ebp
088d4781 +0xae:  ret
```

## 反编译 C

```c
// AvatarVariation::getAvatarColorInfoInst @ 0x88d46d3

/* AvatarVariation::getAvatarColorInfoInst() */

undefined1 * AvatarVariation::getAvatarColorInfoInst(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (getAvatarColorInfoInst()::s_avatarColorInfo == '\0') {
    iVar2 = __cxa_guard_acquire(&getAvatarColorInfoInst()::s_avatarColorInfo);
    if (iVar2 != 0) {
                    /* try { // try from 088d4709 to 088d470d has its CatchHandler @ 088d4739 */
      AvatarColorInfo::AvatarColorInfo
                ((AvatarColorInfo *)getAvatarColorInfoInst()::s_avatarColorInfo);
      __cxa_guard_release(&getAvatarColorInfoInst()::s_avatarColorInfo);
      __cxa_atexit(AvatarColorInfo::~AvatarColorInfo,getAvatarColorInfoInst()::s_avatarColorInfo,
                   &__dso_handle);
    }
  }
  cVar1 = importAvatarColorVariation((AvatarColorInfo *)getAvatarColorInfoInst()::s_avatarColorInfo)
  ;
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = getAvatarColorInfoInst()::s_avatarColorInfo;
  }
  return puVar3;
}
```
