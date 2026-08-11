# _ZN17StackBuffer_wcharC1Ev

`StackBuffer_wchar::StackBuffer_wchar()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x818cbe2` | `0x13` | `0x80a0128` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x4,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11StackBufferC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void StackBuffer_wchar(StackBuffer_wchar * this) */

void __thiscall StackBuffer_wchar::_ZN17StackBuffer_wcharC1Ev(StackBuffer_wchar *this)

{
  StackBuffer::StackBuffer(&this->super_StackBuffer);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StringFormat.cpp](source/DNFServer/GameServer/DBMW/StringFormat.cpp)（约第 47 行）：

```cpp
StackBuffer_wchar wformat(const wchar_t* fmt, ...)
{
    wchar_t buf[0x200];
    va_list ap;
    va_start(ap, fmt);
    int len = vswprintf(buf, 0x200, fmt, ap);
    if (len >= 0 && len <= 0x1ff)
    {
        StackBuffer_wchar tmp;
        tmp.alloc((len + 1) * 4);
        memcpy(tmp.getBuffer(), buf, (len + 1) * 4);
        va_end(ap);
        return tmp;
    }
    len = vswprintf((wchar_t*)0, 0, fmt, ap);
    StackBuffer_wchar tmp;
    tmp.alloc((len + 1) * 4);
    vswprintf((wchar_t*)tmp.getBuffer(), len + 1, fmt, ap);
    va_end(ap);
    return tmp;
}
```
