# _ZNK10WideString8endsWithEPKwb

`WideString::endsWith(wchar_t const*, bool) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x809b29e` | `0xd2` | `0x80a2c7a` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <wcslen>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 cmp    -0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 je     <T> <_ZNK10WideString8endsWithEPKwb+0x3b>
 mov    $0x0,%eax
-jmp    <T> <_ZNK10WideString8endsWithEPKwb+0xcb>
+jmp    <T> <_ZNK10WideString8endsWithEPKwb+0xbb>
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZNK10WideString8endsWithEPKwb+0x87>
+je     <T> <_ZNK10WideString8endsWithEPKwb+0x7f>
 mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+sub    -0xc(%ebp),%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%edx
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <wcsncasecmp>
 test   %eax,%eax
 sete   %al
-jmp    <T> <_ZNK10WideString8endsWithEPKwb+0xcb>
+jmp    <T> <_ZNK10WideString8endsWithEPKwb+0xbb>
 mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+sub    -0xc(%ebp),%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%edx
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <wcsncmp>
 test   %eax,%eax
 sete   %al
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool endsWith(WideString * this, wchar * pat, bool isIgnoreCase) */

bool __thiscall
WideString::_ZNK10WideString8endsWithEPKwb(WideString *this,wchar *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  wchar *pwVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = wcslen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncasecmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/Strings.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
