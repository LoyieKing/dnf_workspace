# _ZN10WideString6concatEPKwiS1_i

`WideString::concat(wchar_t const*, int, wchar_t const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809cc9a` | `0xaf` | `0x80a4548` | `0xab` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%ebx
 mov    0x18(%ebp),%eax
 mov    0x10(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 test   %eax,%eax
 jne    <T> <_ZN10WideString6concatEPKwiS1_i+0x24>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
-jmp    <T> <_ZN10WideString6concatEPKwiS1_i+0xa2>
+jmp    <T> <_ZN10WideString6concatEPKwiS1_i+0x9e>
 mov    0x18(%ebp),%eax
 mov    0x10(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%esi
+shl    $0x2,%eax
+mov    %eax,%esi
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %esi,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x18(%ebp),%eax
-lea    0x0(,%eax,4),%esi
+shl    $0x2,%eax
+mov    %eax,%esi
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    0x10(%ebp),%edx
 shl    $0x2,%edx
 lea    (%eax,%edx,1),%edx
 mov    %esi,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString *
WideString::_ZN10WideString6concatEPKwiS1_i
          (WideString *__return_storage_ptr__,wchar *src1,int32 len1,wchar *src2,int32 len2)

{
  WideStringData *this;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (len1 + len2 == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::createTerminated(len1 + len2);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1,src1,len1 * 4);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1 + len1,src2,len2 * 4);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/SecureStdio.h, source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/Strings.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
