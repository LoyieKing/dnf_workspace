# _ZN14CPacketCounterILi1000ELi10240EEC2EPcS1_

`CPacketCounter<1000, 10240>::CPacketCounter(char*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8091fac` | `0x7e` | `0x80eb9da` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %ebx
+sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketCounterILi1000ELi10240EE5ResetEv>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%ebx
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    0x8(%ebp),%edx
-mov    %eax,0x4(%edx)
+mov    %eax,(%ebx)
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_+0x52>
+jne    <T> <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_+0x4e>
+mov    0x8(%ebp),%eax
+lea    0x1d540(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"./log/%s",0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <sprintf>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_+0x75>
 mov    0x8(%ebp),%eax
 lea    0x1d540(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./log/%s/%s",0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_+0x72>
-mov    0x8(%ebp),%eax
-lea    0x1d540(%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"./log/%s",0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <sprintf>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x1d640(%eax)
-leave
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketCounter<1000, 10240>::CPacketCounter(char*, char*) */

void __thiscall
CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EEC2EPcS1_
          (CPacketCounter<1000,10240> *this,char *param_1,char *param_2)

{
  time_t tVar1;
  
  _ZN14CPacketCounterILi1000ELi10240EE5ResetEv(this);
  tVar1 = time((time_t *)0x0);
  *(time_t *)(this + 4) = tVar1;
  if (param_1 == (char *)0x0) {
    sprintf((char *)(this + 0x1d540),"./log/%s",param_2);
  }
  else {
    sprintf((char *)(this + 0x1d540),"./log/%s/%s",param_1,param_2);
  }
  this[0x1d640] = (CPacketCounter<1000,10240>)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/PacketCounter.cpp](source/DNFServer/GameServer/DBMW/PacketCounter.cpp)（约第 27 行）：

```cpp
CPacketCounter<Lo, Hi>::CPacketCounter(char* dir, char* name)
{
    Reset();
    *(time_t*)(m_data + 4) = time(0);
    if (dir == 0)
    {
        sprintf(m_name, "./log/%s", name);
    }
    else
    {
        sprintf(m_name, "./log/%s/%s", dir, name);
    }
    m_flag = true;
}
```
