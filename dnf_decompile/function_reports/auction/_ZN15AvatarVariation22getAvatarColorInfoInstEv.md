# _ZN15AvatarVariation22getAvatarColorInfoInstEv

`AvatarVariation::getAvatarColorInfoInst()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x807b7b1` | `0xaf` | `0x807ecf6` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
 call   <T> <_ZN15AvatarVariation15AvatarColorInfoC1Ev>
 movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN15AvatarVariation15AvatarColorInfoD2Ev,%eax
-movl   $&data#89648901(.rodata),0x8(%esp)
+movl   $&data#84eb2c6a(.data),0x8(%esp)
 movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x7a>
 movl   $&_ZGVZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 movl   $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,(%esp)
 call   <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE>
 mov    %al,-0x19(%ebp)
 cmpb   $0x0,-0x19(%ebp)
 je     <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0xa2>
 mov    $&_ZZN15AvatarVariation22getAvatarColorInfoInstEvE17s_avatarColorInfo,%eax
 jmp    <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0xa7>
 mov    $0x0,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

AvatarColorInfo * AvatarVariation::_ZN15AvatarVariation22getAvatarColorInfoInstEv(void)

{
  bool bVar1;
  int iVar2;
  AvatarColorInfo *pAVar3;
  
                    /* Unresolved local var: bool bResult@[???] */
  if (getAvatarColorInfoInst()::s_avatarColorInfo == '\0') {
    iVar2 = __cxa_guard_acquire(&getAvatarColorInfoInst()::s_avatarColorInfo);
    if (iVar2 != 0) {
                    /* try { // try from 0807b7e7 to 0807b7eb has its CatchHandler @ 0807b817 */
      AvatarColorInfo::AvatarColorInfo(&getAvatarColorInfoInst::lexical_block_0::s_avatarColorInfo);
      __cxa_guard_release(&getAvatarColorInfoInst()::s_avatarColorInfo);
      __cxa_atexit(AvatarColorInfo::~AvatarColorInfo,
                   &getAvatarColorInfoInst::lexical_block_0::s_avatarColorInfo,&__dso_handle);
    }
  }
  bVar1 = importAvatarColorVariation(&getAvatarColorInfoInst::lexical_block_0::s_avatarColorInfo);
  if (bVar1) {
    pAVar3 = &getAvatarColorInfoInst::lexical_block_0::s_avatarColorInfo;
  }
  else {
    pAVar3 = (AvatarColorInfo *)0x0;
  }
  return pAVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp](source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp)（约第 116 行）：

```cpp
AvatarColorInfo* getAvatarColorInfoInst()
{
    static AvatarColorInfo s_avatarColorInfo;
    bool bResult = importAvatarColorVariation(&s_avatarColorInfo);
    if (bResult)
    {
        return &s_avatarColorInfo;
    }
    return (AvatarColorInfo*)0;
}
```
