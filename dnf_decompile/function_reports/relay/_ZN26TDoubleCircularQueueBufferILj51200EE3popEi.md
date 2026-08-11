# _ZN26TDoubleCircularQueueBufferILj51200EE3popEi

`TDoubleCircularQueueBuffer<51200u>::pop(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805dd86` | `0x108` | `0x805ccd6` | `0x102` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,69 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
 jg     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x16>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x106>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x100>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 cmp    0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 je     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x35>
 mov    $0xfffffffe,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x106>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x100>
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
 cmp    %eax,%edx
 jb     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x6c>
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%edx
 mov    0xc(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x19004(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x106>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x100>
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
-jl     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0xdd>
+jge    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0xb4>
+mov    0xc(%ebp),%eax
+mov    %eax,%edx
+sub    -0xc(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x19004(%eax)
+mov    0x8(%ebp),%eax
+movl   $0xc800,0x19008(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x100>
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%edx
 mov    0xc(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x19004(%eax)
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19008(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0xd6>
+jne    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0xfb>
 mov    0x8(%ebp),%eax
 movl   $0xc800,0x19008(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x19004(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi+0x106>
-mov    0x8(%ebp),%eax
-movl   $0xc800,0x19008(%eax)
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x19004(%eax)
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::pop(int) */

undefined4 __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZN26TDoubleCircularQueueBufferILj51200EE3popEi
          (TDoubleCircularQueueBuffer<51200u> *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = getPushedLength(this);
    if (iVar2 < param_1) {
      uVar1 = 0xfffffffe;
    }
    else if (*(uint *)(this + 0x19000) < *(uint *)(this + 0x19004)) {
      iVar2 = *(int *)(this + 0x19008);
      if (iVar2 - *(int *)(this + 0x19004) < param_1) {
        *(undefined4 *)(this + 0x19008) = 0xc800;
        *(int *)(this + 0x19004) = param_1 - (iVar2 - *(int *)(this + 0x19004));
        uVar1 = 0;
      }
      else {
        *(int *)(this + 0x19004) = *(int *)(this + 0x19004) + param_1;
        if (*(int *)(this + 0x19004) == *(int *)(this + 0x19008)) {
          *(undefined4 *)(this + 0x19008) = 0xc800;
          *(undefined4 *)(this + 0x19004) = 0;
        }
        uVar1 = 0;
      }
    }
    else {
      *(int *)(this + 0x19004) = *(int *)(this + 0x19004) + param_1;
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 501 行）：

```cpp
int TCircularQueueBuffer<Size>::pop(int in_nSize)
{
    if (in_nSize < 1)
    {
        return -1;
    }
    if (m_nPushIndex >= m_nPopIndex)
    {
        int nLength = (int)(m_nPushIndex - m_nPopIndex);
        if (nLength >= in_nSize)
        {
            m_nPopIndex = m_nPopIndex + in_nSize;
            return 0;
        }
        return -2;
    }
    else
    {
        int nFirstCut = 0xa0000 - m_nPopIndex;
        if (nFirstCut >= in_nSize)
        {
            m_nPopIndex = m_nPopIndex + in_nSize;
            if (m_nPopIndex == 0xa0000)
            {
                m_nPopIndex = 0;
            }
            return 0;
        }
        int nPushIndexTemp = (int)m_nPushIndex;
        if (nPushIndexTemp + nFirstCut >= in_nSize)
        {
            m_nPopIndex = in_nSize - nFirstCut;
            return 0;
        }
        return -3;
    }
}
```
