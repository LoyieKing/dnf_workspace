# _Z11ss_vsprintfPcjPKcS_

`ss_vsprintf(char*, unsigned int, char const*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80961f8` | `0xde` | `0x8093298` | `0xde` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0x8(%ebp)
 jne    <T> <_Z11ss_vsprintfPcjPKcS_+0x30>
 movl   $"int ss_vsprintf(char*, size_t, const char*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"buffer != 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_Z11ss_vsprintfPcjPKcS_+0x5a>
 movl   $"int ss_vsprintf(char*, size_t, const char*, char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"count > 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_Z11ss_vsprintfPcjPKcS_+0x84>
 movl   $"int ss_vsprintf(char*, size_t, const char*, char*)",0xc(%esp)
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
 call   <T> <vsnprintf>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 jg     <T> <_Z11ss_vsprintfPcjPKcS_+0xd9>
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 movl   $"int ss_vsprintf(char*, size_t, const char*, char*)",0xc(%esp)
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

int ss_vsprintf(char *buffer,size_t count,char *format,va_list ap)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  if (buffer == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("buffer != 0","../../Include/Core/SecureStdio.cpp",0x1a,
                  "int ss_vsprintf(char*, size_t, const char*, char*)");
  }
  if (count == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("count > 0","../../Include/Core/SecureStdio.cpp",0x1b,
                  "int ss_vsprintf(char*, size_t, const char*, char*)");
  }
  if (format == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("format != 0","../../Include/Core/SecureStdio.cpp",0x1c,
                  "int ss_vsprintf(char*, size_t, const char*, char*)");
  }
  iVar1 = vsnprintf(buffer,count,format,ap);
  if ((int)count <= iVar1) {
    *buffer = '\0';
                    /* WARNING: Subroutine does not return */
    __assert_fail("false","../../Include/Core/SecureStdio.cpp",0x22,
                  "int ss_vsprintf(char*, size_t, const char*, char*)");
  }
  return iVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/SecureStdio.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
