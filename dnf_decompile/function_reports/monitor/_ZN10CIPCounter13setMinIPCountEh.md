# _ZN10CIPCounter13setMinIPCountEh

`CIPCounter::setMinIPCount(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805e906` | `0x20` | `0x8093ba4` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-movzbl -0x4(%ebp),%eax
-cmp    $0xc8,%al
-jbe    <T> <_ZN10CIPCounter13setMinIPCountEh+0x19>
-mov    $0xffffffc8,%eax
-mov    0x8(%ebp),%edx
-mov    %al,(%edx)
+cmpb   $0xc8,-0x4(%ebp)
+jbe    <T> <_ZN10CIPCounter13setMinIPCountEh+0x16>
+movb   $0xc8,-0x4(%ebp)
+movzbl -0x4(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %dl,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CIPCounter::setMinIPCount(unsigned char) */

void __thiscall CIPCounter::_ZN10CIPCounter13setMinIPCountEh(CIPCounter *this,uchar param_1)

{
  if (200 < param_1) {
    param_1 = 200;
  }
  *this = (CIPCounter)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/IPCounter.cpp](source/DNFServer/GameServer/Monitor/IPCounter.cpp)（约第 80 行）：

```cpp
void CIPCounter::setMinIPCount(unsigned char count)
{
    if (count > 200)
    {
        count = 200;
    }
    m_option = count;
}
```
