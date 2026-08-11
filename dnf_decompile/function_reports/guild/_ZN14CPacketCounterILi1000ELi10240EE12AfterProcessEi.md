# _ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi

`CPacketCounter<1000, 10240>::AfterProcess(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8070a40` | `0x11d` | `0x809787a` | `0xf4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
 sub    $0x10,%esp
 cmpl   $0x27ff,0xc(%ebp)
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xf2>
 cmpl   $0x3e7,0xc(%ebp)
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x113>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xf2>
 mov    0x8(%ebp),%eax
 movzbl 0x1d640(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4b>
-mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%edx
+cmp    $0x1,%al
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4a>
 mov    0x8(%ebp),%eax
-mov    0x8(%eax,%edx,4),%eax
+mov    0xc(%ebp),%edx
+sub    $0x3e6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 cmp    $0xa,%eax
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x116>
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xf2>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0xffffffff,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6a>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+cmp    $0xffffffff,%eax
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xf2>
 mov    0x8(%ebp),%eax
 movzbl 0x1d640(%eax),%eax
 test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8f>
+jne    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xae>
 mov    0x8(%ebp),%eax
-mov    0x9068(%eax),%eax
-mov    -0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+add    $0x9068,%eax
+mov    (%eax),%eax
 mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xde>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+sub    $0x3e6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    0x8(%ebp),%edx
+mov    0xc(%ebp),%ecx
+sub    $0x3e6,%ecx
+shl    $0x2,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%edx
+lea    0x11ce0(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0x2418,%edx
-mov    0x8(%eax,%edx,4),%eax
-mov    -0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+movb   $0x0,(%eax,%edx,1)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xbb>
+mov    0x8(%ebp),%eax
+add    $0x9068,%eax
+mov    (%eax),%eax
 mov    %eax,-0x8(%ebp)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+sub    -0x8(%ebp),%eax
+mov    %eax,-0x4(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,%edx
 mov    0xc(%ebp),%eax
-sub    $0x3e8,%eax
-mov    0x8(%ebp),%edx
-mov    0x8(%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %ecx,0x8(%edx,%eax,4)
+add    $0x4d50,%eax
+shl    $0x2,%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
 mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%edx
-mov    0x8(%ebp),%eax
-movb   $0x0,0x120c8(%eax,%edx,1)
-mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%ebx
-mov    0xc(%ebp),%eax
-lea    -0x3e8(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0x5138,%edx
-mov    (%eax,%edx,4),%edx
-mov    -0x8(%ebp),%eax
-lea    (%edx,%eax,1),%ecx
-mov    0x8(%ebp),%eax
-lea    0x5138(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
-nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
-nop
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
-nop
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+add    $0x4d50,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+add    -0x4(%ebp),%eax
+mov    %eax,(%edx)
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

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 113 行）：

```cpp
void CPacketCounter<Lo, Hi>::AfterProcess(int id)
{
    if (id < 0x2800 && 999 < id &&
        (m_data[0x1d640] == 1 ||
         *(unsigned int*)(m_data + 8 + (id - 1000) * 4) < 0xb) &&
        *(int*)m_data != -1)
    {
        int prev;
        if (m_data[0x1d640] == 0)
        {
            prev = *(int*)(m_data + 0x9068);
            *(int*)(m_data + 8 + (id - 1000) * 4) += 1;
            m_data[0x11ce0 + id] = 0;
        }
        else
        {
            prev = *(int*)(m_data + 0x9068);
        }
        int diff = *(int*)m_data - prev;
        *(int*)(m_data + (id + 0x4d50) * 4) += diff;
    }
}
```
