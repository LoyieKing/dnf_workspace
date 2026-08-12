# _ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv

`CPacketCounter<1000, 10240>::BeforeProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8070a0c` | `0x33` | `0x80979b4` | `0x32` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    (%eax),%edx
+lea    0x9068(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x9068(%eax)
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x9068(%eax),%eax
+add    $0x9068,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv+0x31>
+jne    <T> <_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv+0x30>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x9068(%eax)
+add    $0x9068,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketCounter<1000, 10240>::BeforeProcess() */

void __thiscall
CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv
          (CPacketCounter<1000,10240> *this)

{
  *(undefined4 *)(this + 0x9068) = *(undefined4 *)this;
  if (*(int *)(this + 0x9068) == -1) {
    *(undefined4 *)(this + 0x9068) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 103 行）：

```cpp
void CPacketCounter<Lo, Hi>::BeforeProcess()
{
    *(int*)(m_data + 0x9068) = *(int*)m_data;
    if (*(int*)(m_data + 0x9068) == -1)
    {
        *(int*)(m_data + 0x9068) = 0;
    }
}
```
