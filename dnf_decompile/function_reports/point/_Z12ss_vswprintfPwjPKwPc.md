# _Z12ss_vswprintfPwjPKwPc

`ss_vswprintf(wchar_t*, unsigned int, wchar_t const*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x809630a` | `0xe7` | `0x80933aa` | `0xe7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0x8(%ebp)
 jne    <T> <_Z12ss_vswprintfPwjPKwPc+0x30>
 movl   $"int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"buffer != 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_Z12ss_vswprintfPwjPKwPc+0x5a>
 movl   $"int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"count > 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_Z12ss_vswprintfPwjPKwPc+0x84>
 movl   $"int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"format != 0",(%esp)
 call   <T> <__assert_fail>
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vswprintf>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 js     <T> <_Z12ss_vswprintfPwjPKwPc+0xb5>
 mov    0xc(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 jg     <T> <_Z12ss_vswprintfPwjPKwPc+0xe2>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 movl   $"int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"false",(%esp)
 call   <T> <__assert_fail>
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

int ss_vswprintf(wchar_t *buffer,size_t count,wchar_t *format,va_list ap)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  if (buffer == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("buffer != 0","../../Include/Core/SecureStdio.cpp",0x33,
                  "int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)");
  }
  if (count == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("count > 0","../../Include/Core/SecureStdio.cpp",0x34,
                  "int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)");
  }
  if (format == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("format != 0","../../Include/Core/SecureStdio.cpp",0x35,
                  "int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)");
  }
  iVar1 = vswprintf(buffer,count,format,ap);
  if ((-1 < iVar1) && (iVar1 < (int)count)) {
    return iVar1;
  }
  *buffer = L'\0';
                    /* WARNING: Subroutine does not return */
  __assert_fail("false","../../Include/Core/SecureStdio.cpp",0x3b,
                "int ss_vswprintf(wchar_t*, size_t, const wchar_t*, char*)");
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/SecureStdio.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
