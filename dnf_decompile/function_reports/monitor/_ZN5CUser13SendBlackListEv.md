# _ZN5CUser13SendBlackListEv

`CUser::SendBlackList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e330` | `0x55` | `0x8089ba6` | `0x5d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
-lea    -0x43(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Notice_Black_ListC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x39(%ebp)
+mov    %eax,-0x3a(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x35(%ebp)
-lea    -0x43(%ebp),%eax
+mov    %eax,-0x36(%ebp)
+movb   $0x0,-0x9(%ebp)
+lea    -0x44(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,0x8(%esp)
-lea    -0x43(%ebp),%eax
-add    $0x12,%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12GetBlackListERhPj>
-lea    -0x43(%ebp),%eax
+movzbl -0x9(%ebp),%eax
+mov    %al,-0x32(%ebp)
+lea    -0x44(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SendBlackList() */

void __thiscall CUser::_ZN5CUser13SendBlackListEv(CUser *this)

{
  Packet_Monitor_Notice_Black_List local_47 [10];
  undefined4 local_3d;
  undefined4 local_39;
  uchar uStack_35;
  uint auStack_34 [12];
  
  Packet_Monitor_Notice_Black_List::Packet_Monitor_Notice_Black_List(local_47);
  local_3d = *(undefined4 *)this;
  local_39 = *(undefined4 *)(this + 0x20);
  _ZN5CUser12GetBlackListERhPj(this,&uStack_35,auStack_34);
  SendTcpGameserver(this,(PacketHeader *)local_47);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 544 行）：

```cpp
void CUser::SendBlackList()
{
    Packet_Monitor_Notice_Black_List pkt;
    pkt.m_dbid = ((RA_UINT<0>*)this)->v;
    pkt.m_idByChannel = ((RA_UINT<32>*)this)->v;
    GetBlackList(pkt.m_count, pkt.m_charNos);
    SendTcpGameserver(&pkt);
}
```
