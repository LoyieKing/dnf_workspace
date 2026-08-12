# _ZN5CUser21SendSetGuildKeyToUserEjj

`CUser::SendSetGuildKeyToUser(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066d10` | `0x3a` | `0x8089270` | `0x43` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Monitor_Set_Guild_KeyC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+lea    -0x1e(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x14(%edx),%edx
+mov    %edx,0xa(%eax)
+lea    -0x1e(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0xe(%eax)
+lea    -0x1e(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x12(%eax)
 lea    -0x1e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SendSetGuildKeyToUser(unsigned int, unsigned int) */

void __thiscall CUser::_ZN5CUser21SendSetGuildKeyToUserEjj(CUser *this,uint param_1,uint param_2)

{
  Packet_Monitor_Set_Guild_Key local_22 [10];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Set_Guild_Key::_ZN28Packet_Monitor_Set_Guild_KeyC2Ev(local_22);
  local_18 = *(undefined4 *)(this + 0x14);
  local_14 = param_2;
  local_10 = param_1;
  _ZN5CUser17SendTcpGameserverEP12PacketHeader(this,(PacketHeader *)local_22);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 311 行）：

```cpp
void CUser::SendSetGuildKeyToUser(unsigned int guildKey, unsigned int grade)
{
    Packet_Monitor_Set_Guild_Key pkt;
    ((PktSetGuildKeyLayout*)&pkt)->m_channel = m_channel;
    ((PktSetGuildKeyLayout*)&pkt)->m_grade = grade;
    ((PktSetGuildKeyLayout*)&pkt)->m_guildKey = guildKey;
    SendTcpGameserver(&pkt);
}
```
