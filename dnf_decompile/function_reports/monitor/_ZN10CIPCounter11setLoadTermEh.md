# _ZN10CIPCounter11setLoadTermEh

`CIPCounter::setLoadTerm(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805e8ba` | `0x4c` | `0x8093c52` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x4,%esp
+sub    $0x14,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x4(%ebp)
-movzbl -0x4(%ebp),%eax
+mov    %al,-0x14(%ebp)
+movzbl -0x14(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-cmp    $0x2a30,%eax
-jle    <T> <_ZN10CIPCounter11setLoadTermEh+0x2a>
-mov    $0x2a30,%eax
-mov    %eax,%edx
+mov    %eax,-0x4(%ebp)
+cmpl   $0x2a30,-0x4(%ebp)
+jle    <T> <_ZN10CIPCounter11setLoadTermEh+0x31>
+movl   $0x2a30,-0x4(%ebp)
+mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-cmp    $0x708,%eax
-jae    <T> <_ZN10CIPCounter11setLoadTermEh+0x44>
-mov    $0x708,%eax
-mov    0x8(%ebp),%edx
-mov    %eax,0xc(%edx)
+cmp    $0x707,%eax
+ja     <T> <_ZN10CIPCounter11setLoadTermEh+0x51>
+mov    0x8(%ebp),%eax
+movl   $0x708,0xc(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CIPCounter::setLoadTerm(unsigned char) */

void __thiscall CIPCounter::_ZN10CIPCounter11setLoadTermEh(CIPCounter *this,uchar param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 * 0x3c;
  if (0x2a30 < uVar1) {
    uVar1 = 0x2a30;
  }
  *(uint *)(this + 0xc) = uVar1;
  uVar1 = *(uint *)(this + 0xc);
  if (uVar1 < 0x708) {
    uVar1 = 0x708;
  }
  *(uint *)(this + 0xc) = uVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/IPCounter.cpp](source/DNFServer/GameServer/Monitor/IPCounter.cpp)（约第 66 行）：

```cpp
void CIPCounter::setLoadTerm(unsigned char term)
{
    int v = (int)(unsigned char)term * 0x3c;
    if (v > 0x2a30)
    {
        v = 0x2a30;
    }
    m_term = v;
    if (m_term < 0x708)
    {
        m_term = 0x708;
    }
}
```
