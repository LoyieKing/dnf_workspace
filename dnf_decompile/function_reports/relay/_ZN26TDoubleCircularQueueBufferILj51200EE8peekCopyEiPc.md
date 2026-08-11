# _ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc

`TDoubleCircularQueueBuffer<51200u>::peekCopy(int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e084` | `0x11d` | `0x805d2b2` | `0x124` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,88 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
-jle    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x1c>
+jle    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x1d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 cmp    0xc(%ebp),%eax
-jge    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x23>
+jge    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x24>
 mov    $0x1,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x28>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x29>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x36>
+je     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x37>
 mov    $0x0,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11b>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11e>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x7b>
+jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x7c>
 mov    0xc(%ebp),%eax
 mov    0x8(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0x19004(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    $0x1,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11b>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11e>
 mov    0x8(%ebp),%eax
 mov    0x19008(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    0xc(%ebp),%eax
-jl     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0xca>
+jl     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0xcb>
 mov    0xc(%ebp),%eax
 mov    0x8(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0x19004(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    $0x1,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11b>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc+0x11e>
+mov    0x8(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%eax
+add    %eax,%edx
 mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%edx
-mov    0x19004(%edx),%edx
-lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,%ecx
-mov    0x8(%ebp),%edx
-mov    -0xc(%ebp),%eax
-add    0x10(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+mov    0x10(%ebp),%ebx
+lea    (%ebx,%ecx,1),%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
 call   <T> <memcpy>
 mov    $0x1,%eax
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::peekCopy(int, char*) */

undefined4 __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc
          (TDoubleCircularQueueBuffer<51200u> *this,int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  
  if (0 < param_1) {
    iVar2 = getPushedLength(this);
    if (param_1 <= iVar2) {
      bVar1 = false;
      goto LAB_0805e0ac;
    }
  }
  bVar1 = true;
LAB_0805e0ac:
  if (bVar1) {
    uVar3 = 0;
  }
  else if (*(uint *)(this + 0x19000) < *(uint *)(this + 0x19004)) {
    __n = *(int *)(this + 0x19008) - *(int *)(this + 0x19004);
    if ((int)__n < param_1) {
      memcpy(param_2,this + *(int *)(this + 0x19004),__n);
      memcpy(param_2 + __n,this,param_1 - __n);
      uVar3 = 1;
    }
    else {
      memcpy(param_2,this + *(int *)(this + 0x19004),param_1);
      uVar3 = 1;
    }
  }
  else {
    memcpy(param_2,this + *(int *)(this + 0x19004),param_1);
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/TCPUser.h](source/DNFServer/GameServer/Relay/TCPUser.h)（约第 180 行）：

```cpp
    bool peekCopy(int n, char* out)
    {
        if (!(n > 0 && (int)getPushedLength() >= n))
        {
            return false;
        }
        if (m_nPushIndex >= m_nPopIndex)
        {
            memcpy(out, m_buffer + m_nPopIndex, n);
            return true;
        }
        unsigned int len = m_nEndIndex - m_nPopIndex;
        if ((int)len >= n)
        {
            memcpy(out, m_buffer + m_nPopIndex, n);
            return true;
        }
        memcpy(out, m_buffer + m_nPopIndex, len);
        memcpy(out + len, m_buffer, n - (int)len);
        return true;
    }
```
