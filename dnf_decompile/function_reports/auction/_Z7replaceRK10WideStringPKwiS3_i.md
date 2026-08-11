# _Z7replaceRK10WideStringPKwiS3_i

`replace(WideString const&, wchar_t const*, int, wchar_t const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809c248` | `0x1df` | `0x80a80d8` | `0x1ff` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,147 +1,158 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%ebx
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x26>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d3>
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1f3>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
-mov    %eax,-0x30(%ebp)
-movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x14(%ebp)
+mov    %eax,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
 jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x8c>
 mov    0x14(%ebp),%eax
 lea    0x0(,%eax,4),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 shl    $0x2,%eax
-add    -0x34(%ebp),%eax
+add    -0x30(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcmp>
 test   %eax,%eax
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x88>
-addl   $0x1,-0x2c(%ebp)
+addl   $0x1,-0x28(%ebp)
 mov    0x14(%ebp),%eax
-add    %eax,-0x14(%ebp)
+add    %eax,-0x24(%ebp)
 jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x8c>
-addl   $0x1,-0x14(%ebp)
+addl   $0x1,-0x24(%ebp)
 mov    0x14(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-cmp    -0x14(%ebp),%eax
+cmp    -0x24(%ebp),%eax
 setge  %al
 test   %al,%al
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x52>
-cmpl   $0x0,-0x2c(%ebp)
+cmpl   $0x0,-0x28(%ebp)
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0xbe>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d3>
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1f3>
 mov    0x14(%ebp),%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-imul   -0x2c(%ebp),%eax
-add    -0x30(%ebp),%eax
 mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
+imul   -0x28(%ebp),%eax
+add    -0x1c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0xf5>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
-jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d3>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1f3>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
-mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x10(%ebp)
+mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1b1>
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d1>
 mov    0x14(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-cmp    -0x10(%ebp),%eax
-jl     <T> <_Z7replaceRK10WideStringPKwiS3_i+0x193>
+cmp    -0x24(%ebp),%eax
+jge    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x155>
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%edx
+shl    $0x2,%edx
+add    -0x30(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+addl   $0x1,-0xc(%ebp)
+addl   $0x1,-0x24(%ebp)
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d1>
 mov    0x14(%ebp),%eax
 lea    0x0(,%eax,4),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
 shl    $0x2,%eax
-add    -0x34(%ebp),%eax
+add    -0x30(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcmp>
 test   %eax,%eax
-jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x193>
+je     <T> <_Z7replaceRK10WideStringPKwiS3_i+0x19f>
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%edx
+shl    $0x2,%edx
+add    -0x30(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+addl   $0x1,-0xc(%ebp)
+addl   $0x1,-0x24(%ebp)
+jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1d1>
 mov    0x1c(%ebp),%eax
 lea    0x0(,%eax,4),%edx
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
-add    -0x18(%ebp),%eax
+add    -0x10(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x14(%ebp),%eax
-add    %eax,-0x10(%ebp)
+add    %eax,-0x24(%ebp)
 mov    0x1c(%ebp),%eax
 add    %eax,-0xc(%ebp)
-jmp    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x1b1>
-mov    -0xc(%ebp),%eax
-shl    $0x2,%eax
-add    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%edx
-shl    $0x2,%edx
-add    -0x34(%ebp),%edx
-mov    (%edx),%edx
-mov    %edx,(%eax)
-addl   $0x1,-0xc(%ebp)
-addl   $0x1,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-cmp    -0x30(%ebp),%eax
+mov    -0x24(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_Z7replaceRK10WideStringPKwiS3_i+0x124>
 mov    %ebx,%eax
-mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString *
replace(WideString *__return_storage_ptr__,WideString *str,wchar *pat,int32 patLength,wchar *target,
       int32 targetLength)

{
  wchar *pwVar1;
  int32 iVar2;
  int iVar3;
  WideStringData *this;
  wchar *pwVar4;
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: wchar * strBuffer@[???]
                       Unresolved local var: int32 strLength@[???]
                       Unresolved local var: int32 replaceCount@[???]
                       Unresolved local var: int32 wordDelta@[???]
                       Unresolved local var: int32 nowLength@[???]
                       Unresolved local var: int32 newLength@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * newBuffer@[???] */
  if (patLength == 0) {
    WideString::WideString(__return_storage_ptr__,str);
  }
  else {
    pwVar1 = WideString::c_str(str);
    iVar2 = WideString::length(str);
    local_30 = 0;
                    /* Unresolved local var: int32 i@[???] */
    local_18 = 0;
    while (local_18 <= iVar2 - patLength) {
      iVar3 = memcmp(pwVar1 + local_18,pat,patLength * 4);
      if (iVar3 == 0) {
        local_30 = local_30 + 1;
        local_18 = local_18 + patLength;
      }
      else {
        local_18 = local_18 + 1;
      }
    }
    if (local_30 == 0) {
      WideString::WideString(__return_storage_ptr__,str);
    }
    else {
      iVar3 = (targetLength - patLength) * local_30 + iVar2;
      if (iVar3 != 0) {
        this = WideStringData::createTerminated(iVar3);
        pwVar4 = WideStringData::getBuffer(this);
                    /* Unresolved local var: int32 i@[???]
                       Unresolved local var: int32 ni@[???] */
        local_14 = 0;
        local_10 = 0;
        while (local_14 < iVar2) {
          if ((iVar2 - patLength < local_14) ||
             (iVar3 = memcmp(pwVar1 + local_14,pat,patLength * 4), iVar3 != 0)) {
            pwVar4[local_10] = pwVar1[local_14];
            local_10 = local_10 + 1;
            local_14 = local_14 + 1;
          }
          else {
            memcpy(pwVar4 + local_10,target,targetLength * 4);
            local_14 = local_14 + patLength;
            local_10 = local_10 + targetLength;
          }
        }
        WideString::WideString(__return_storage_ptr__,this);
        return __return_storage_ptr__;
      }
      WideString::WideString(__return_storage_ptr__);
    }
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/SecureStdio.h, source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/Strings.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
