# _ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi

`TDoubleCircularQueueBuffer<51200u>::isPopStraight(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805dcec` | `0x86` | `0x805d02e` | `0x8f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
+sub    $0x10,%esp
 mov    0xc(%ebp),%eax
 cmp    $0xc7ff,%eax
-jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x15>
+jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x83>
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x8d>
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19000(%eax),%eax
 cmp    %eax,%edx
-ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x58>
-mov    0xc(%ebp),%edx
+ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x5e>
 mov    0x8(%ebp),%eax
-mov    0x19000(%eax),%ecx
+mov    0x19000(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
-mov    %ecx,%ebx
-sub    %eax,%ebx
-mov    %ebx,%eax
-cmp    %eax,%edx
-ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x51>
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x4(%ebp)
+mov    0xc(%ebp),%eax
+cmp    -0x4(%ebp),%eax
+jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x57>
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x8d>
 mov    $0x1,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x83>
-mov    $0x0,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x83>
-mov    0xc(%ebp),%edx
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x8d>
 mov    0x8(%ebp),%eax
-mov    0x19008(%eax),%ecx
+mov    0x19008(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x19004(%eax),%eax
-mov    %ecx,%ebx
-sub    %eax,%ebx
-mov    %ebx,%eax
-cmp    %eax,%edx
-ja     <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x7e>
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0x8(%ebp)
+mov    0xc(%ebp),%eax
+cmp    -0x8(%ebp),%eax
+jbe    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x88>
+mov    $0x0,%eax
+jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x8d>
 mov    $0x1,%eax
-jmp    <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi+0x83>
-mov    $0x0,%eax
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::isPopStraight(int) */

undefined4 __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi
          (TDoubleCircularQueueBuffer<51200u> *this,int param_1)

{
  undefined4 uVar1;
  
  if ((uint)param_1 < 0xc800) {
    if (*(uint *)(this + 0x19000) < *(uint *)(this + 0x19004)) {
      if ((uint)(*(int *)(this + 0x19008) - *(int *)(this + 0x19004)) < (uint)param_1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if ((uint)(*(int *)(this + 0x19000) - *(int *)(this + 0x19004)) < (uint)param_1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 620 行）：

```cpp
bool TCircularQueueBuffer<Size>::isPopStraight(int in_nSize)
{
    GLOG(ChannelServiceApp::gFileLogInfo, "In  isPopStraight");
    GLOG(ChannelServiceApp::gFileLogInfo, "in_nSize=" << in_nSize);
    GLOG(ChannelServiceApp::gFileLogInfo, "m_nPopIndex=" << m_nPopIndex);
    GLOG(ChannelServiceApp::gFileLogInfo, "m_nPushIndex=" << m_nPushIndex);
    if ((unsigned int)in_nSize > 0x9ffff)
    {
        return false;
    }
    if (m_nPopIndex < m_nPushIndex)
    {
        int nSize = m_nPushIndex - m_nPopIndex;
        if (nSize >= in_nSize)
        {
            return true;
        }
    }
    else
    {
        unsigned int nFirstCutSize = 0xa0000 - m_nPopIndex;
        if (in_nSize <= nFirstCutSize)
        {
            return true;
        }
        return false;
    }
    GLOG(ChannelServiceApp::gFileLogInfo, "Out isPopStraight");
    return false;
}
```
