# _Z6removeRK10WideStringii

`remove(WideString const&, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809bf34` | `0x187` | `0x80a7dc8` | `0x183` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 cmpl   $0x0,0x10(%ebp)
 js     <T> <_Z6removeRK10WideStringii+0x22>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 cmp    0x10(%ebp),%eax
 jge    <T> <_Z6removeRK10WideStringii+0x46>
 movl   $"WideString remove(const WideString&, int32, int32)",0xc(%esp)
 movl $L,0x8(%esp)
 movl   $"../../Include/Core/Strings.cpp",0x4(%esp)
 movl   $"0 <= pos && pos <= str.length()",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0x14(%ebp)
 js     <T> <_Z6removeRK10WideStringii+0x64>
 mov    0x14(%ebp),%eax
 mov    0x10(%ebp),%edx
 lea    (%edx,%eax,1),%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 cmp    %eax,%esi
 jle    <T> <_Z6removeRK10WideStringii+0x88>
 movl   $"WideString remove(const WideString&, int32, int32)",0xc(%esp)
 movl $L,0x8(%esp)
 movl   $"../../Include/Core/Strings.cpp",0x4(%esp)
 movl   $"0 <= removeLength && pos + removeLength <= str.length()",(%esp)
 call   <T> <__assert_fail>
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_Z6removeRK10WideStringii+0xa4>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_Z6removeRK10WideStringii+0x179>
+jmp    <T> <_Z6removeRK10WideStringii+0x175>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 cmp    0x14(%ebp),%eax
 sete   %al
 test   %al,%al
 je     <T> <_Z6removeRK10WideStringii+0xc8>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
-jmp    <T> <_Z6removeRK10WideStringii+0x179>
+jmp    <T> <_Z6removeRK10WideStringii+0x175>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0x1c(%ebp)
 mov    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%edi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %edi,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    0x10(%ebp),%eax
 sub    0x14(%ebp),%eax
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
+mov    0x10(%ebp),%ecx
 mov    0x14(%ebp),%edx
-mov    0x10(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 shl    $0x2,%edx
-lea    (%eax,%edx,1),%esi
+lea    (%eax,%edx,1),%edi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    0x10(%ebp),%edx
 shl    $0x2,%edx
 add    %edx,%eax
-mov    %edi,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %esi,0x8(%esp)
+mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString * remove(WideString *__return_storage_ptr__,WideString *str,int32 pos,int32 removeLength)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *pwVar3;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (-1 < pos) {
    iVar1 = WideString::length(str);
    if (pos <= iVar1) {
      if (-1 < removeLength) {
        iVar1 = WideString::length(str);
        if (pos + removeLength <= iVar1) {
          if (removeLength == 0) {
            WideString::WideString(__return_storage_ptr__,str);
          }
          else {
            iVar1 = WideString::length(str);
            if (iVar1 == removeLength) {
              WideString::WideString(__return_storage_ptr__);
            }
            else {
              iVar1 = WideString::length(str);
              this = WideStringData::createTerminated(iVar1 - removeLength);
              pwVar2 = WideString::c_str(str);
              pwVar3 = WideStringData::getBuffer(this);
              memcpy(pwVar3,pwVar2,pos * 4);
              iVar1 = WideString::length(str);
              pwVar2 = WideString::c_str(str);
              pwVar3 = WideStringData::getBuffer(this);
              memcpy(pwVar3 + pos,pwVar2 + pos + removeLength,((iVar1 - pos) - removeLength) * 4);
              WideString::WideString(__return_storage_ptr__,this);
            }
          }
          return __return_storage_ptr__;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 <= removeLength && pos + removeLength <= str.length()",
                    "../../Include/Core/Strings.cpp",0x743,
                    "WideString remove(const WideString&, int32, int32)");
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 <= pos && pos <= str.length()","../../Include/Core/Strings.cpp",0x742,
                "WideString remove(const WideString&, int32, int32)");
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/SecureStdio.h, source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/Strings.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
