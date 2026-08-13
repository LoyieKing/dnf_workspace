# _ZN9CGuildWar13DBSaveProcessEP12CApplication

`CGuildWar::DBSaveProcess(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809b142` | `0x9d` | `0x8061ae4` | `0xa6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x78,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar17IsGuildWarEventOnEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x97>
+jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0xa0>
 mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xe(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
 sete   %al
-test   %al,%al
-jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9a>
-lea    -0x63(%ebp),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0xa3>
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Notice_DB_Save_Guild_War_PointC1Ev>
-lea    -0x63(%ebp),%eax
-add    $0x33,%eax
-mov    %eax,0x8(%esp)
-lea    -0x63(%ebp),%eax
+lea    -0x64(%ebp),%eax
+lea    0x33(%eax),%edx
+lea    -0x64(%ebp),%eax
 add    $0xb,%eax
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar21GetGuildWarInfoDBSaveEPjS0_>
 test   %al,%al
-je     <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x8e>
+je     <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x97>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x59(%ebp)
+mov    %al,-0x5a(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x63(%ebp),%edx
+lea    -0x64(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x8(%ebp),%eax
 movb   $0x0,0xe(%eax)
-jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9b>
+jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0xa4>
 nop
-jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9b>
+jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0xa4>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::DBSaveProcess(CApplication*) */

void __thiscall
CGuildWar::_ZN9CGuildWar13DBSaveProcessEP12CApplication(CGuildWar *this,CApplication *param_1)

{
  char cVar1;
  CServerHandler *this_00;
  Packet_Notice_DB_Save_Guild_War_Point local_67 [10];
  undefined1 local_5d;
  uint auStack_5c [10];
  uint auStack_34 [12];
  
  cVar1 = IsGuildWarEventOn(this);
  if ((cVar1 == '\x01') &&
     (this[0xe] = (CGuildWar)((char)this[0xe] + '\x01'), this[0xe] != (CGuildWar)0x0)) {
    Packet_Notice_DB_Save_Guild_War_Point::Packet_Notice_DB_Save_Guild_War_Point(local_67);
    cVar1 = GetGuildWarInfoDBSave(this,auStack_5c,auStack_34);
    if (cVar1 != '\0') {
      local_5d = CApplication::_ZN12CApplication15Get_ServerGroupEv(param_1);
      this_00 = (CServerHandler *)CApplication::Get_ServerHandler(param_1);
      CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(this_00,(PacketHeader *)local_67)
      ;
    }
    this[0xe] = (CGuildWar)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 360 行）：

```cpp
void CGuildWar::DBSaveProcess(CApplication* app)
{
    if (!IsGuildWarEventOn())
    {
        return;
    }
    m_bSaveCnt++;
    bool bZero = (m_bSaveCnt == 0);
    if (bZero)
    {
        return;
    }
    Packet_Notice_DB_Save_Guild_War_Point pkt;
    if (GetGuildWarInfoDBSave((unsigned int*)((char*)&pkt + 0xb),
                              (unsigned int*)((char*)&pkt + 0x33)))
    {
        pkt.m_data[0] = app->Get_ServerGroup();
        app->Get_ServerHandler()->SendToDB(&pkt);
    }
    m_bSaveCnt = 0;
}
```
