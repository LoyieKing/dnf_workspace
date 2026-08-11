# _ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci

`TDoubleCircularQueueBuffer<51200u>::push(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e1f8` | `0x1e4` | `0x805ce28` | `0x206` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,132 +1,139 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x10(%ebp),%eax
 cmp    $0xc7ff,%eax
 jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1a>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1e2>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x14f>
+jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x170>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%eax
 mov    $0xc800,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x94>
+cmp    -0xc(%ebp),%eax
+jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x99>
 mov    0x10(%ebp),%eax
 mov    0x8(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0x19000(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x10(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1dd>
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
 mov    0x10(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0xea>
+cmp    -0xc(%ebp),%eax
+jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0xf4>
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0xb3>
-mov    $0xfffffffe,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1e2>
+je     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0xea>
 mov    0x10(%ebp),%eax
 mov    0x8(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0x19000(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1dd>
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
+mov    $0xfffffffe,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x101>
+jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x10b>
 mov    $0xfffffffd,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1e2>
-mov    0x10(%ebp),%eax
-mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%edx
-mov    0x19000(%edx),%edx
-lea    (%ecx,%edx,1),%edx
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%edx
-mov    0x10(%ebp),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x19008(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1dd>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%eax
-cmp    $0xc7ff,%eax
-ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x179>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x18d>
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%eax
-mov    $0xc800,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%eax
-cmp    -0xc(%ebp),%eax
-jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1d6>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
 mov    0x10(%ebp),%eax
 mov    0x8(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0x19000(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x10(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1dd>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19008(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x19000(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%eax
+cmp    $0xc7ff,%eax
+ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x19d>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x10(%ebp)
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1b4>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%eax
+mov    $0xc800,%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x10(%ebp)
+mov    0x10(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1c3>
 mov    $0xfffffffc,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x1e2>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci+0x204>
+mov    0x10(%ebp),%eax
+mov    0x8(%ebp),%ecx
+mov    0x8(%ebp),%edx
+mov    0x19000(%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %eax,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%edx
+mov    0x10(%ebp),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19000(%eax)
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::push(char*, int) */

undefined4 __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZN26TDoubleCircularQueueBufferILj51200EE4pushEPci
          (TDoubleCircularQueueBuffer<51200u> *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((uint)param_2 < 0xc800) {
    if (*(uint *)(this + 0x19000) < *(uint *)(this + 0x19004)) {
      if (*(uint *)(this + 0x19004) < 0xc800) {
        uVar2 = *(int *)(this + 0x19004) - *(int *)(this + 0x19000);
      }
      else {
        uVar2 = 0xc800 - *(int *)(this + 0x19000);
      }
      if (uVar2 <= (uint)param_2) {
        return 0xfffffffc;
      }
      memcpy(this + *(int *)(this + 0x19000),param_1,param_2);
      *(int *)(this + 0x19000) = *(int *)(this + 0x19000) + param_2;
    }
    else if ((uint)param_2 < 0xc800U - *(int *)(this + 0x19000)) {
      memcpy(this + *(int *)(this + 0x19000),param_1,param_2);
      *(int *)(this + 0x19000) = *(int *)(this + 0x19000) + param_2;
    }
    else if (param_2 == 0xc800U - *(int *)(this + 0x19000)) {
      if (*(int *)(this + 0x19004) == 0) {
        return 0xfffffffe;
      }
      memcpy(this + *(int *)(this + 0x19000),param_1,param_2);
      *(undefined4 *)(this + 0x19000) = 0;
    }
    else {
      if (*(int *)(this + 0x19004) == 0) {
        return 0xfffffffd;
      }
      memcpy(this + *(int *)(this + 0x19000),param_1,param_2);
      *(int *)(this + 0x19008) = *(int *)(this + 0x19000) + param_2;
      *(undefined4 *)(this + 0x19000) = 0;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/TCPUser.h](source/DNFServer/GameServer/Relay/TCPUser.h)（约第 214 行）：

```cpp
    int push(char* data, int n)
    {
        if ((unsigned int)n >= N)
        {
            return -1;
        }
        if (m_nPushIndex >= m_nPopIndex)
        {
            unsigned int avail = N - m_nPushIndex;
            if ((unsigned int)n < avail)
            {
                memcpy(m_buffer + m_nPushIndex, data, n);
                m_nPushIndex += n;
                return 0;
            }
            if ((unsigned int)n == avail)
            {
                if (m_nPopIndex != 0)
                {
                    memcpy(m_buffer + m_nPushIndex, data, n);
                    m_nPushIndex = 0;
                    return 0;
                }
                return -2;
            }
            if (m_nPopIndex == 0)
            {
                return -3;
            }
            memcpy(m_buffer + m_nPushIndex, data, n);
            m_nPushIndex += n;
            m_nEndIndex = m_nPushIndex;
            m_nPushIndex = 0;
            return 0;
        }
        unsigned int len;
        if (m_nPopIndex <= (unsigned int)N - 1)
        {
            len = m_nPopIndex - m_nPushIndex;
        }
        else
        {
            len = N - m_nPushIndex;
        }
        if ((unsigned int)n >= len)
        {
            return -4;
        }
        memcpy(m_buffer + m_nPushIndex, data, n);
        m_nPushIndex += n;
        return 0;
    }
```
