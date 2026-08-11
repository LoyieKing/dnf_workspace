# _ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi

`CPacketCounter<1000, 10240>::IncrementPacketCount(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80709ac` | `0x5f` | `0x80974c0` | `0x66` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0x27ff,0xc(%ebp)
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x56>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x64>
 cmpl   $0x3e7,0xc(%ebp)
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x59>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x64>
 mov    0x8(%ebp),%eax
 movzbl 0x1d640(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
+cmp    $0x1,%al
 je     <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x3b>
-mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x8(%eax,%edx,4),%eax
+mov    0xc(%ebp),%edx
+sub    $0x3e6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 cmp    $0xa,%eax
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x5c>
-mov    0xc(%ebp),%eax
-sub    $0x3e8,%eax
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x64>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+sub    $0x3e6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
 mov    0x8(%ebp),%edx
-mov    0x8(%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %ecx,0x8(%edx,%eax,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x5d>
-nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x5d>
-nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi+0x5d>
-nop
+mov    0xc(%ebp),%ecx
+sub    $0x3e6,%ecx
+shl    $0x2,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketCounter<1000, 10240>::IncrementPacketCount(int) */

void __thiscall
CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi
          (CPacketCounter<1000,10240> *this,int param_1)

{
  if (((param_1 < 0x2800) && (999 < param_1)) &&
     ((this[0x1d640] == (CPacketCounter<1000,10240>)0x1 ||
      (*(uint *)(this + (param_1 + -1000) * 4 + 8) < 0xb)))) {
    *(int *)(this + (param_1 + -1000) * 4 + 8) = *(int *)(this + (param_1 + -1000) * 4 + 8) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 92 行）：

```cpp
void CPacketCounter<Lo, Hi>::IncrementPacketCount(int id)
{
    if (id < 0x2800 && 999 < id &&
        (m_data[0x1d640] == 1 ||
         *(unsigned int*)(m_data + 8 + (id - 1000) * 4) < 0xb))
    {
        *(unsigned int*)(m_data + 8 + (id - 1000) * 4) += 1;
    }
}
```
