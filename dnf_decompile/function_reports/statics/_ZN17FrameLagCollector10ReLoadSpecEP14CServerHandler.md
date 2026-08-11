# _ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler

`FrameLagCollector::ReLoadSpec(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8066848` | `0xa6` | `0x805fba0` | `0xa5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0x1b>
-mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0xa4>
+jne    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0xa3>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x14(%eax)
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 cmp    $0x5,%eax
-jne    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0x9f>
+jne    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0xa3>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x19(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x19(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x19(%eax),%eax
 cmp    $0x7f,%al
-jne    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0x61>
+jne    <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler+0x5b>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x19(%eax)
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
-lea    -0x17(%ebp),%eax
+lea    -0x12(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Frame_Lag_Statistic_Reload_SpecC1Ev>
+lea    -0x12(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl 0x19(%eax),%eax
-mov    %al,-0xd(%ebp)
+mov    %al,(%edx)
+lea    -0x12(%ebp),%eax
+lea    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x4c(%eax),%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x17(%ebp),%eax
+mov    0x50(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x12(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::ReLoadSpec(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  undefined4 uVar1;
  Packet_Frame_Lag_Statistic_Reload_Spec local_1b [10];
  FrameLagCollector local_11;
  undefined4 local_10;
  
  if (*(int *)(this + 4) == 2) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    if (*(int *)(this + 0x14) == 5) {
      *(undefined4 *)(this + 0x14) = 0;
      this[0x19] = (FrameLagCollector)((char)this[0x19] + '\x01');
      if (this[0x19] == (FrameLagCollector)0x7f) {
        this[0x19] = (FrameLagCollector)0x1;
      }
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::clear
                ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)
                 (this + 0x34));
      Packet_Frame_Lag_Statistic_Reload_Spec::Packet_Frame_Lag_Statistic_Reload_Spec(local_1b);
      local_11 = this[0x19];
      local_10 = *(undefined4 *)(this + 0x4c);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1b);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 118 行）：

```cpp
void FrameLagCollector::ReLoadSpec(CServerHandler* handler)
{
    if (m_field4 == 2)
    {
        m_field14++;
        if (m_field14 == 5)
        {
            m_field14 = 0;
            m_field19++;
            if (m_field19 == 0x7f)
            {
                m_field19 = 1;
            }
            m_map34.clear();
            Packet_Frame_Lag_Statistic_Reload_Spec pkt;
            *(char*)((char*)&pkt + 10) = m_field19;
            *(int*)((char*)&pkt + 0xc) = m_field50;
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```
