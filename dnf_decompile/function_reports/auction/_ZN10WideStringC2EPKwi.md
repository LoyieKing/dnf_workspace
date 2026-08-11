# _ZN10WideStringC2EPKwi

`WideString::WideString(wchar_t const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809ae66` | `0x71` | `0x80a27ce` | `0x6f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_ZN10WideStringC1EPKwi+0x23>
 mov    &_ZL21s_emptyWideStringData,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString10attachDataEP14WideStringData>
-jmp    <T> <_ZN10WideStringC1EPKwi+0x6b>
+jmp    <T> <_ZN10WideStringC1EPKwi+0x69>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%ebx
+shl    $0x2,%eax
+mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString10attachDataEP14WideStringData>
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void WideString(WideString * this, wchar * src, int32 length) */

void __thiscall WideString::_ZN10WideStringC2EPKwi(WideString *this,wchar *src,int32 length)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::createTerminated(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,length * 4);
    attachData(this,this_00);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/SecureStdio.h, source/Library/Include/Core/Strings.cpp, source/Library/Include/Core/Strings.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
