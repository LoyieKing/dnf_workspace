# _ZN16StackBuffer_charC1Ev

`StackBuffer_char::StackBuffer_char()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x818cbce` | `0x13` | `0x80a00fa` | `0x13` |

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

/* DWARF original prototype: void StackBuffer_char(StackBuffer_char * this) */

void __thiscall StackBuffer_char::_ZN16StackBuffer_charC1Ev(StackBuffer_char *this)

{
  StackBuffer::StackBuffer(&this->super_StackBuffer);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StringFormat.cpp](source/DNFServer/GameServer/DBMW/StringFormat.cpp)（约第 26 行）：

```cpp
StackBuffer_char sformat(const char* fmt, ...)
{
    char buf[0x200];
    va_list ap;
    va_start(ap, fmt);
    int len = vsnprintf(buf, 0x200, fmt, ap);
    if (len >= 0 && len <= 0x1ff)
    {
        StackBuffer_char tmp;
        tmp.alloc(len + 1);
        memcpy(tmp.getBuffer(), buf, len + 1);
        va_end(ap);
        return tmp;
    }
    len = vsnprintf(0, 0, fmt, ap);
    StackBuffer_char tmp;
    tmp.alloc(len + 1);
    vsnprintf(tmp.getBuffer(), len + 1, fmt, ap);
    va_end(ap);
    return tmp;
}
```
