# _ZN11CollectItmsC2Ev

`CollectItms::CollectItms()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80663fe` | `0x29` | `0x805037a` | `0x2d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
+add    $0x8,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0xc(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CollectItms::CollectItms() */

void __thiscall CollectItms::_ZN11CollectItmsC2Ev(CollectItms *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CollectItms)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 150 行）：

```cpp
CollectItms::CollectItms()
{
    *(unsigned int*)(m_data + 0) = 0;
    *(unsigned int*)(m_data + 4) = 0;
    *(unsigned int*)(m_data + 8) = 0;
    m_data[0xc] = 1;
}
```
