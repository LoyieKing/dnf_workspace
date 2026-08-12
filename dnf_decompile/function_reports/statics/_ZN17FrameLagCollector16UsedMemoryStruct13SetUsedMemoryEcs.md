# _ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs

`FrameLagCollector::UsedMemoryStruct::SetUsedMemory(char, short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80688b8` | `0x53` | `0x8061b06` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x8,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x4(%ebp)
 mov    %ax,-0x8(%ebp)
 cmpb   $0x5,-0x4(%ebp)
-jg     <T> <_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs+0x50>
+jg     <T> <_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs+0x63>
+mov    0x8(%ebp),%eax
 movsbl -0x4(%ebp),%edx
+add    $0x6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    0x8(%ebp),%edx
 movsbl -0x4(%ebp),%ecx
-mov    0x8(%ebp),%eax
-add    $0x4,%ecx
-mov    0x8(%eax,%ecx,4),%ecx
-movswl -0x8(%ebp),%eax
-add    %eax,%ecx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-mov    %ecx,0x8(%eax,%edx,4)
+add    $0x6,%ecx
+shl    $0x2,%ecx
+add    %ecx,%edx
+mov    (%edx),%ecx
+movswl -0x8(%ebp),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%edx
 movsbl -0x4(%ebp),%eax
-mov    0x8(%ebp),%edx
-mov    (%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %ecx,(%edx,%eax,4)
-jmp    <T> <_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs+0x51>
-nop
+shl    $0x2,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x8(%ebp),%ecx
+movsbl -0x4(%ebp),%edx
+shl    $0x2,%edx
+lea    (%ecx,%edx,1),%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::UsedMemoryStruct::SetUsedMemory(char, short) */

void __thiscall
FrameLagCollector::UsedMemoryStruct::_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs
          (UsedMemoryStruct *this,char param_1,short param_2)

{
  if (param_1 < '\x06') {
    *(int *)(this + (param_1 + 4) * 4 + 8) = *(int *)(this + (param_1 + 4) * 4 + 8) + (int)param_2;
    *(int *)(this + param_1 * 4) = *(int *)(this + param_1 * 4) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 664 行）：

```cpp
void FrameLagCollector::UsedMemoryStruct::SetUsedMemory(char idx, short value)
{
    if (idx >= 6)
    {
        return;
    }
    m_sums[idx] += value;
    m_counts[idx]++;
}
```
