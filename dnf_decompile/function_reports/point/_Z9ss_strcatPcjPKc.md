# _Z9ss_strcatPcjPKc

`ss_strcat(char*, unsigned int, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80965c5` | `0xfc` | `0x8093665` | `0xfc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0x8(%ebp)
 jne    <T> <_Z9ss_strcatPcjPKc+0x30>
 movl   $"int ss_strcat(char*, size_t, const char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"dest != 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_Z9ss_strcatPcjPKc+0x5a>
 movl   $"int ss_strcat(char*, size_t, const char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"count > 0",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_Z9ss_strcatPcjPKc+0x84>
 movl   $"int ss_strcat(char*, size_t, const char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"src != 0",(%esp)
 call   <T> <__assert_fail>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    -0x10(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 cmp    %edx,%eax
 jg     <T> <_Z9ss_strcatPcjPKc+0xd4>
 movl   $"int ss_strcat(char*, size_t, const char*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"../../Include/Core/SecureStdio.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/SecureStdio.cpp",0x4(%esp)
 movl   $"false",(%esp)
 call   <T> <__assert_fail>
 mov    -0xc(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%edx
 mov    -0x10(%ebp),%eax
 add    0x8(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

int ss_strcat(char *dest,size_t count,char *src)

{
  size_t sVar1;
  size_t sVar2;
  
                    /* Unresolved local var: int dlen@[???]
                       Unresolved local var: int slen@[???] */
  if (dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dest != 0","../../Include/Core/SecureStdio.cpp",0x67,
                  "int ss_strcat(char*, size_t, const char*)");
  }
  if (count == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("count > 0","../../Include/Core/SecureStdio.cpp",0x68,
                  "int ss_strcat(char*, size_t, const char*)");
  }
  if (src == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("src != 0","../../Include/Core/SecureStdio.cpp",0x69,
                  "int ss_strcat(char*, size_t, const char*)");
  }
  sVar1 = strlen(dest);
  sVar2 = strlen(src);
  if ((int)count <= (int)(sVar1 + sVar2)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false","../../Include/Core/SecureStdio.cpp",0x6f,
                  "int ss_strcat(char*, size_t, const char*)");
  }
  memcpy(dest + sVar1,src,sVar2 + 1);
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/SecureStdio.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
