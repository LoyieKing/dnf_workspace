# _Z8trimLeftRK10WideString

`trimLeft(WideString const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x809c9c5` | `0x128` | `0x80a7784` | `0x126` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_Z8trimLeftRK10WideString+0x2f>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
-jmp    <T> <_Z8trimLeftRK10WideString+0x11a>
+jmp    <T> <_Z8trimLeftRK10WideString+0x118>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,-0x28(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    $0x1,%eax
 mov    %eax,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_Z8trimLeftRK10WideString+0xff>
+jmp    <T> <_Z8trimLeftRK10WideString+0xfd>
 mov    -0x20(%ebp),%eax
 shl    $0x2,%eax
 add    -0x28(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString8isuspaceEw>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z8trimLeftRK10WideString+0xfb>
+je     <T> <_Z8trimLeftRK10WideString+0xf9>
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_Z8trimLeftRK10WideString+0x94>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_Z8trimLeftRK10WideString+0x11a>
+jmp    <T> <_Z8trimLeftRK10WideString+0x118>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    -0x20(%ebp),%eax
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%edi
 mov    -0x20(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%esi
 add    -0x28(%ebp),%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %edi,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
-jmp    <T> <_Z8trimLeftRK10WideString+0x11a>
+jmp    <T> <_Z8trimLeftRK10WideString+0x118>
 addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setle  %al
 test   %al,%al
 jne    <T> <_Z8trimLeftRK10WideString+0x5a>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ev>
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

WideString * trimLeft(WideString *__return_storage_ptr__,WideString *str)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  WideStringData *this;
  wchar *__dest;
  int local_24;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  iVar2 = WideString::length(str);
  if (iVar2 == 0) {
    WideString::WideString(__return_storage_ptr__);
  }
  else {
    pwVar3 = WideString::c_str(str);
    iVar2 = WideString::length(str);
                    /* Unresolved local var: int32 pos@[???] */
    for (local_24 = 0; local_24 <= iVar2 + -1; local_24 = local_24 + 1) {
      bVar1 = WideString::isuspace(pwVar3[local_24]);
      if (!bVar1) {
                    /* Unresolved local var: WideStringData * newData@[???] */
        if (local_24 == 0) {
          WideString::WideString(__return_storage_ptr__,str);
          return __return_storage_ptr__;
        }
        iVar2 = WideString::length(str);
        this = WideStringData::createTerminated(iVar2 - local_24);
        iVar2 = WideString::length(str);
        __dest = WideStringData::getBuffer(this);
        memcpy(__dest,pwVar3 + local_24,(iVar2 - local_24) * 4);
        WideString::WideString(__return_storage_ptr__,this);
        return __return_storage_ptr__;
      }
    }
    WideString::WideString(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 2508 行）：

```cpp
WideString trimLeft(const WideString& str)
{
    if (str.length() == 0)
    {
        return WideString();
    }
    const wchar* strBuf = str.c_str();
    int32 last = str.length() - 1;
    for (int32 pos = 0; pos <= last; pos = pos + 1)
    {
        if (!WideString::isuspace(strBuf[pos]))
        {
            if (pos == 0)
            {
                return WideString(str);
            }
            WideStringData* newData = WideStringData::createTerminated(str.length() - pos);
            memcpy(newData->getBuffer(), strBuf + pos, (str.length() - pos) * 4);
            return WideString(newData);
        }
    }
    return WideString();
}
```
