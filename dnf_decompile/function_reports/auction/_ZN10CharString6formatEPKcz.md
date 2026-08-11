# _ZN10CharString6formatEPKcz

`CharString::format(char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8099e74` | `0xa3` | `0x80a3b92` | `0xa3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x2c,%esp
+sub    $0x24,%esp
 mov    0x8(%ebp),%ebx
 lea    0x10(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <vsnprintf>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CharString6formatEPKcz+0x49>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CharString6formatEPKcz+0x47>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1Ev>
-jmp    <T> <_ZN10CharString6formatEPKcz+0x95>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CharString6formatEPKcz+0x97>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData6createEi>
-mov    %eax,-0x1c(%ebp)
-mov    -0x24(%ebp),%edi
-mov    -0x20(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,%esi
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData9getBufferEv>
-mov    %edi,0xc(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0x18(%ebp),%edx
+mov    -0x14(%ebp),%eax
+add    $0x1,%eax
+mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z11ss_vsprintfPcjPKcS_>
 mov    %ebx,%eax
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1EP14CharStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
-add    $0x2c,%esp
+add    $0x24,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

CharString *
CharString::_ZN10CharString6formatEPKcz(CharString *__return_storage_ptr__,char *formatStr,...)

{
  int length;
  CharStringData *this;
  char *buffer;
  
                    /* Unresolved local var: va_list argList@[???]
                       Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  length = vsnprintf((char *)0x0,0,formatStr,&stack0x0000000c);
  if (length == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::create(length);
    buffer = CharStringData::getBuffer(this);
    ss_vsprintf(buffer,length + 1,formatStr,&stack0x0000000c);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 1202 行）：

```cpp
CharString CharString::format(const char* format, ...)
{
    va_list argList;
    va_start(argList, format);
    int length = vsnprintf((char*)0, 0, format, argList);
    if (length == 0)
    {
        va_end(argList);
        return CharString();
    }
    CharStringData* newData = CharStringData::create(length);
    char* buffer = newData->getBuffer();
    ss_vsprintf(buffer, length + 1, format, argList);
    va_end(argList);
    return CharString(newData);
}
```
