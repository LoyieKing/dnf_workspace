# _ZN10WideStringC1EPKw

`WideString::WideString(wchar_t const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x809ade6` | `0x80` | `0x80a274c` | `0x82` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <wcslen>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10WideStringC1EPKw+0x31>
 mov    &_ZL21s_emptyWideStringData,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString10attachDataEP14WideStringData>
-jmp    <T> <_ZN10WideStringC1EPKw+0x7a>
+jmp    <T> <_ZN10WideStringC1EPKw+0x7c>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData6createEi>
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 add    $0x1,%eax
-shl    $0x2,%eax
-mov    %eax,%ebx
+lea    0x0(,%eax,4),%ebx
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

/* DWARF original prototype: void WideString(WideString * this, wchar * src) */

void __thiscall WideString::_ZN10WideStringC1EPKw(WideString *this,wchar *src)

{
  size_t length;
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * data@[???] */
  length = wcslen(src);
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::create(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,(length + 1) * 4);
    attachData(this,this_00);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 649 行）：

```cpp
WideString::WideString(wchar src)
{
    WideStringData* data = WideStringData::createTerminated(1);
    data->getBuffer()[0] = src;
    attachData(data);
}
```
