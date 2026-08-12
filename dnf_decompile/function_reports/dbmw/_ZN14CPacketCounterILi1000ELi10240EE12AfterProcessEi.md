# _ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi

`CPacketCounter<1000, 10240>::AfterProcess(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80920c4` | `0x11d` | `0x80ebb78` | `0x120` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,79 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
 sub    $0x10,%esp
 cmpl   $0x27ff,0xc(%ebp)
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x11e>
 cmpl   $0x3e7,0xc(%ebp)
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x113>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x11e>
 mov    0x8(%ebp),%eax
 movzbl 0x1d640(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4b>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4a>
 mov    0xc(%ebp),%eax
 lea    -0x3e8(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax,%edx,4),%eax
 cmp    $0xa,%eax
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x116>
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x11d>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0xffffffff,-0xc(%ebp)
 sete   %al
-test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6a>
+mov    %al,-0x5(%ebp)
+cmpb   $0x0,-0x5(%ebp)
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6e>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x11e>
 mov    0x8(%ebp),%eax
 movzbl 0x1d640(%eax),%eax
 test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8f>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x93>
 mov    0x8(%ebp),%eax
 mov    0x9068(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xde>
+mov    %eax,-0x4(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xec>
 mov    0xc(%ebp),%eax
 lea    -0x3e8(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x2418,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x8(%ebp)
+mov    %eax,-0x4(%ebp)
 mov    0xc(%ebp),%eax
-sub    $0x3e8,%eax
-mov    0x8(%ebp),%edx
-mov    0x8(%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %ecx,0x8(%edx,%eax,4)
+lea    -0x3e8(%eax),%edx
+mov    0xc(%ebp),%eax
+lea    -0x3e8(%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    0x8(%eax,%ecx,4),%eax
+lea    0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    %ecx,0x8(%eax,%edx,4)
 mov    0xc(%ebp),%eax
 lea    -0x3e8(%eax),%edx
 mov    0x8(%ebp),%eax
 movb   $0x0,0x120c8(%eax,%edx,1)
 mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%ebx
+lea    -0x3e8(%eax),%ecx
 mov    0xc(%ebp),%eax
 lea    -0x3e8(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x5138,%edx
-mov    (%eax,%edx,4),%edx
-mov    -0x8(%ebp),%eax
-lea    (%edx,%eax,1),%ecx
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
-lea    0x5138(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+add    $0x5138,%ecx
+mov    %edx,(%eax,%ecx,4)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x11e>
 nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
-nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
-nop
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketCounter<1000, 10240>::AfterProcess(int) */

void __thiscall
CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi
          (CPacketCounter<1000,10240> *this,int param_1)

{
  int iVar1;
  int local_c;
  
  if ((((param_1 < 0x2800) && (999 < param_1)) &&
      ((this[0x1d640] == (CPacketCounter<1000,10240>)0x1 ||
       (*(uint *)(this + (param_1 + -1000) * 4 + 8) < 0xb)))) &&
     (local_c = *(int *)this, local_c != -1)) {
    if (this[0x1d640] == (CPacketCounter<1000,10240>)0x0) {
      iVar1 = *(int *)(this + (param_1 + 0x2030) * 4 + 8);
      *(int *)(this + (param_1 + -1000) * 4 + 8) = *(int *)(this + (param_1 + -1000) * 4 + 8) + 1;
      this[param_1 + 0x11ce0] = (CPacketCounter<1000,10240>)0x0;
    }
    else {
      iVar1 = *(int *)(this + 0x9068);
    }
    local_c = local_c - iVar1;
    *(int *)(this + (param_1 + 0x4d50) * 4) = *(int *)(this + (param_1 + 0x4d50) * 4) + local_c;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/PacketCounter.cpp](source/DNFServer/GameServer/DBMW/PacketCounter.cpp)（约第 88 行）：

```cpp
void CPacketCounter<Lo, Hi>::AfterProcess(int id)
{
    if (id > 0x27ff)
        return;
    if (id <= 0x3e7)
        return;
    if (!m_flag)
    {
        if ((unsigned int)m_a1[id - 1000] >= 0xb)
            return;
    }
    int prev = m0;
    if (prev == -1)
    {
        prev = 0;
    }
    else
    {
        int delta;
        if (m_flag != 0)
        {
            delta = prev - m_a3[0];
        }
        else
        {
            delta = prev - m_a3[id - 1000];
            m_a1[id - 1000]++;
            m_b[id - 1000] = 0;
        }
        m_a2[id - 1000] = m_a2[id - 1000] + delta;
    }
}
```
