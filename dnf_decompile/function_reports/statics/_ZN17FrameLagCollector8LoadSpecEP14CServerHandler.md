# _ZN17FrameLagCollector8LoadSpecEP14CServerHandler

`FrameLagCollector::LoadSpec(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806677e` | `0xca` | `0x805f9dc` | `0xcd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0xc3>
+je     <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0xca>
 movb   $0x0,-0x9(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0x29>
 movb   $0x1,-0x9(%ebp)
 jmp    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0x5c>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x1,%eax
 jne    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0x5c>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    $0x3c,%eax
 jne    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0x5c>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 movb   $0x1,-0x9(%ebp)
 cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0xc3>
+je     <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0xcb>
 mov    0x8(%ebp),%eax
 movl   $0x1,0x4(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x18(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x18(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x18(%eax),%eax
 cmp    $0x7f,%al
 jne    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0x8e>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x18(%eax)
-lea    -0x14(%ebp),%eax
+lea    -0x13(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_Frame_Lag_Statistic_Load_SpecC1Ev>
+lea    -0x13(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl 0x18(%eax),%eax
-mov    %al,-0xa(%ebp)
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
-lea    -0x14(%ebp),%eax
+lea    -0x13(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler+0xcb>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::LoadSpec(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector8LoadSpecEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  Packet_Frame_Lag_Statistic_Load_Spec local_18 [10];
  FrameLagCollector local_e;
  char local_d;
  
  if (*(int *)(this + 4) != 2) {
    local_d = '\0';
    if (*(int *)(this + 4) == 0) {
      local_d = '\x01';
    }
    else if ((*(int *)(this + 4) == 1) &&
            (*(int *)(this + 8) = *(int *)(this + 8) + 1, *(int *)(this + 8) == 0x3c)) {
      *(undefined4 *)(this + 8) = 0;
      local_d = '\x01';
    }
    if (local_d != '\0') {
      *(undefined4 *)(this + 4) = 1;
      this[0x18] = (FrameLagCollector)((char)this[0x18] + '\x01');
      if (this[0x18] == (FrameLagCollector)0x7f) {
        this[0x18] = (FrameLagCollector)0x1;
      }
      Packet_Frame_Lag_Statistic_Load_Spec::Packet_Frame_Lag_Statistic_Load_Spec(local_18);
      local_e = this[0x18];
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::clear
                ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)
                 (this + 0x1c));
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_18);
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 84 行）：

```cpp
void FrameLagCollector::LoadSpec(CServerHandler* handler)
{
    if (m_field4 == 2)
    {
        return;
    }
    char needLoad = 0;
    if (m_field4 == 0)
    {
        needLoad = 1;
    }
    else if (m_field4 == 1)
    {
        m_field8++;
        if (m_field8 == 0x3c)
        {
            m_field8 = 0;
            needLoad = 1;
        }
    }
    if (needLoad != 0)
    {
        m_field4 = 1;
        m_field18++;
        if (m_field18 == 0x7f)
        {
            m_field18 = 1;
        }
        Packet_Frame_Lag_Statistic_Load_Spec pkt;
        *(char*)((char*)&pkt + 10) = m_field18;
        m_map1c.clear();
        handler->SendToDB((PacketHeader*)&pkt);
    }
}
```
