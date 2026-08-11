# _ZN10WideString7vformatEPKwPc

`WideString::vformat(wchar_t const*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809d2e4` | `0x9b` | `0x80a4cce` | `0x9d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x24,%esp
 mov    0x8(%ebp),%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <vswprintf>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10WideString7vformatEPKwPc+0x42>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10WideString7vformatEPKwPc+0x41>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
-jmp    <T> <_ZN10WideString7vformatEPKwPc+0x8e>
+jmp    <T> <_ZN10WideString7vformatEPKwPc+0x91>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14WideStringData6createEi>
+mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN14WideStringData6createEi>
+call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %eax,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 add    $0x1,%eax
-mov    %eax,%esi
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14WideStringData9getBufferEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z12ss_vswprintfPwjPKwPc>
 mov    %ebx,%eax
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
-add    $0x20,%esp
+add    $0x24,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString *
WideString::_ZN10WideString7vformatEPKwPc
          (WideString *__return_storage_ptr__,wchar *formatStr,va_list argList)

{
  int length;
  WideStringData *this;
  wchar_t *buffer;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  length = vswprintf((wchar_t *)0x0,0,formatStr,argList);
  if (length == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::create(length);
    buffer = WideStringData::getBuffer(this);
    ss_vswprintf(buffer,length + 1,formatStr,argList);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/SecureStdio.h, source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/Strings.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
