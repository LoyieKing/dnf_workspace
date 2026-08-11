# _ZN14CPacketCounterILi1000ELi10240EE5ResetEv

`CPacketCounter<1000, 10240>::Reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8070bc2` | `0x79` | `0x8097974` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x10,%esp
-movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE5ResetEv+0x56>
-mov    -0x4(%ebp),%edx
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax,%edx,4)
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x5138,%edx
-movl   $0x0,(%eax,%edx,4)
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x2418,%edx
-movl   $0x0,0x8(%eax,%edx,4)
-mov    -0x4(%ebp),%eax
-mov    0x8(%ebp),%edx
-movb   $0x0,0x120c8(%edx,%eax,1)
-addl   $0x1,-0x4(%ebp)
-cmpl   $0x2417,-0x4(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN14CPacketCounterILi1000ELi10240EE5ResetEv+0xf>
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x1d641(%eax)
+movl   $0x1d644,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketCounter<1000, 10240>::Reset() */

void __thiscall
CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE5ResetEv
          (CPacketCounter<1000,10240> *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x2418; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4 + 8) = 0;
    *(undefined4 *)(this + (local_8 + 0x5138) * 4) = 0;
    *(undefined4 *)(this + (local_8 + 0x2418) * 4 + 8) = 0;
    this[local_8 + 0x120c8] = (CPacketCounter<1000,10240>)0x0;
  }
  *(undefined4 *)this = 0;
  this[0x1d641] = (CPacketCounter<1000,10240>)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 142 行）：

```cpp
void CPacketCounter<Lo, Hi>::Reset()
{
    memset(m_data, 0, sizeof(m_data));
}
```
