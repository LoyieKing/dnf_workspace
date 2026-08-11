# _ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi

`TDoubleCircularQueueBuffer<51200u>::pushIndex(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805db9e` | `0x14d` | `0x805cb00` | `0x16f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0xc(%ebp),%eax
 cmp    $0xc7ff,%eax
 jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x1a>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x14b>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xdd>
+jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xfe>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%eax
+mov    $0xc800,%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x4(%ebp)
+mov    0xc(%ebp),%eax
+cmp    -0x4(%ebp),%eax
+jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x74>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%edx
+mov    0xc(%ebp),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19000(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
+mov    0xc(%ebp),%eax
+cmp    -0x4(%ebp),%eax
+jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xaa>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xa0>
+mov    0x8(%ebp),%eax
+movl   $0x0,0x19000(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
+mov    $0xfffffffe,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xc1>
+mov    $0xfffffffd,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%edx
+mov    0xc(%ebp),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19000(%eax)
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19008(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x19000(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%eax
+cmp    $0xc7ff,%eax
+ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x12b>
+mov    0x8(%ebp),%eax
+mov    0x19004(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x19000(%eax),%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x8(%ebp)
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x142>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%eax
 mov    $0xc800,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0x8(%ebp)
 mov    0xc(%ebp),%eax
 cmp    -0x8(%ebp),%eax
-jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x6f>
+jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x151>
+mov    $0xfffffffc,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x16d>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0xc(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x146>
-mov    0xc(%ebp),%eax
-cmp    -0x8(%ebp),%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xa0>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x8e>
-mov    $0xfffffffe,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x14b>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x146>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0xb7>
-mov    $0xfffffffd,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x14b>
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%edx
-mov    0xc(%ebp),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x19008(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x146>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%eax
-cmp    $0xc7ff,%eax
-ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x107>
-mov    0x8(%ebp),%eax
-mov    0x19004(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x11b>
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%eax
-mov    $0xc800,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,-0x4(%ebp)
-mov    0xc(%ebp),%eax
-cmp    -0x4(%ebp),%eax
-jae    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x13f>
-mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%edx
-mov    0xc(%ebp),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x19000(%eax)
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x146>
-mov    $0xfffffffc,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi+0x14b>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::pushIndex(int) */

undefined4 __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi
          (TDoubleCircularQueueBuffer<51200u> *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((uint)param_1 < 0xc800) {
    if (*(uint *)(this + 0x19000) < *(uint *)(this + 0x19004)) {
      if (*(uint *)(this + 0x19004) < 0xc800) {
        uVar2 = *(int *)(this + 0x19004) - *(int *)(this + 0x19000);
      }
      else {
        uVar2 = 0xc800 - *(int *)(this + 0x19000);
      }
      if (uVar2 <= (uint)param_1) {
        return 0xfffffffc;
      }
      *(int *)(this + 0x19000) = *(int *)(this + 0x19000) + param_1;
    }
    else if ((uint)param_1 < 0xc800U - *(int *)(this + 0x19000)) {
      *(int *)(this + 0x19000) = *(int *)(this + 0x19000) + param_1;
    }
    else if (param_1 == 0xc800U - *(int *)(this + 0x19000)) {
      if (*(int *)(this + 0x19004) == 0) {
        return 0xfffffffe;
      }
      *(undefined4 *)(this + 0x19000) = 0;
    }
    else {
      if (*(int *)(this + 0x19004) == 0) {
        return 0xfffffffd;
      }
      *(int *)(this + 0x19008) = *(int *)(this + 0x19000) + param_1;
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

定义于 [source/DNFServer/GameServer/Relay/TCPUser.h](source/DNFServer/GameServer/Relay/TCPUser.h)（约第 39 行）：

```cpp
    int pushIndex(int n)
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
                m_nPushIndex += n;
                return 0;
            }
            if ((unsigned int)n == avail)
            {
                if (m_nPopIndex != 0)
                {
                    m_nPushIndex = 0;
                    return 0;
                }
                return -2;
            }
            if (m_nPopIndex == 0)
            {
                return -3;
            }
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
        m_nPushIndex += n;
        return 0;
    }
```
