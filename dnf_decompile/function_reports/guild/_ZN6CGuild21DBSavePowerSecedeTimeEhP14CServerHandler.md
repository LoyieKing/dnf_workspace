# _ZN6CGuild21DBSavePowerSecedeTimeEhP14CServerHandler

`CGuild::DBSavePowerSecedeTime(unsigned char, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d818` | `0x4c` | `0x80538ec` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild21DBSavePowerSecedeTimeEhP14CServerHandler+0x4a>
+je     <T> <_ZN6CGuild21DBSavePowerSecedeTimeEhP14CServerHandler+0x54>
 lea    -0x17(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DBMW_Save_Power_Secede_TimeC1Ev>
-movzbl -0x1c(%ebp),%eax
-mov    %al,-0xd(%ebp)
+lea    -0x17(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,(%edx)
+lea    -0x17(%ebp),%eax
+lea    0xe(%eax),%edx
+movzbl -0x1c(%ebp),%eax
+mov    %al,(%edx)
 lea    -0x17(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBSavePowerSecedeTime(unsigned char, CServerHandler*) */

void __thiscall
CGuild::_ZN6CGuild21DBSavePowerSecedeTimeEhP14CServerHandler
          (CGuild *this,uchar param_1,CServerHandler *param_2)

{
  Packet_DBMW_Save_Power_Secede_Time local_1b [10];
  uchar local_11;
  undefined4 local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_DBMW_Save_Power_Secede_Time::Packet_DBMW_Save_Power_Secede_Time(local_1b);
    local_10 = *(undefined4 *)(this + 0x18);
    local_11 = param_1;
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_2,(PacketHeader *)local_1b);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 623 行）：

```cpp
void CGuild::DBSavePowerSecedeTime(unsigned char flag, CServerHandler* handler)
{
    if ((m_field1c & 4) != 0)
    {
        Packet_DBMW_Save_Power_Secede_Time pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = m_guildKey;
        *(unsigned char*)((char*)&pkt + 0xe) = flag;
        handler->SendToDB(&pkt);
    }
}
```
