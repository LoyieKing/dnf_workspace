# _ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point

`CDBManager::SavePowerWarPoint(Packet_DB_Save_Power_War_Point*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807aafe` | `0x1c3` | `0x804ee6a` | `0x1d9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,136 +1,147 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+movzbl (%edx),%edx
+movzbl %dl,%esi
+mov    -0xc(%ebp),%edx
+add    $0xb,%edx
+movzbl (%edx),%edx
+movsbl %dl,%ebx
+mov    -0xc(%ebp),%edx
+add    $0x10,%edx
+mov    (%edx),%ecx
+mov    -0xc(%ebp),%edx
+add    $0xc,%edx
+mov    (%edx),%edx
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
+movl   $"upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",0x8(%esp)
+movl   $0x4e81,0x4(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0xf0>
+movl   $0x12ce,0x8(%esp)
+movl   $"SavePowerWarPoint",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
 movsbl %al,%ecx
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xc(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0x10,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-movl   $"upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",0x8(%esp)
-movl   $0x4e81,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%esi
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0xe1>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movsbl %al,%edi
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xc(%eax),%ebx
-movl   $0x12ce,0x8(%esp)
-movl   $"SavePowerWarPoint",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
 movl   $"CDBManager::SavePowerWarPoint() : upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1bb>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1d2>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e81,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x121>
-mov    -0x1c(%ebp),%eax
+jne    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x129>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x128>
+jne    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x130>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x12d>
+jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x135>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1b6>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1cd>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movsbl %al,%ecx
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+movzbl (%edx),%edx
+movzbl %dl,%esi
+mov    -0xc(%ebp),%edx
+add    $0xb,%edx
+movzbl (%edx),%edx
+movsbl %dl,%ebx
+mov    -0xc(%ebp),%edx
+add    $0x10,%edx
+mov    (%edx),%ecx
+mov    -0xc(%ebp),%edx
+add    $0xc,%edx
+mov    (%edx),%edx
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"inSert into power_war set a_side_point=%d, b_side_point=%d, winner_side=%d ,server_id = %d",0x8(%esp)
 movl   $0x4e82,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%esi
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1a5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1d2>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e82,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1b6>
+je     <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1cd>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1bb>
+jmp    <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point+0x1d2>
 mov    $0x1,%eax
-add    $0x4c,%esp
+add    $0x30,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SavePowerWarPoint(Packet_DB_Save_Power_War_Point*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point
          (CDBManager *this,Packet_DB_Save_Power_War_Point *param_1)

{
  Packet_DB_Save_Power_War_Point PVar1;
  Packet_DB_Save_Power_War_Point PVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  cVar6 = (**(code **)(*local_20 + 0x1c))
                    (local_20,0x4e81,
                     "upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d"
                     ,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                     (int)(char)param_1[0xb],param_1[10]);
  if (cVar6 != '\x01') {
    PVar1 = param_1[10];
    PVar2 = param_1[0xb];
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    CMyFileLog::CMyFileLog(local_2c,"SavePowerWarPoint",0x12ce);
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr",
               "CDBManager::SavePowerWarPoint() : upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d"
               ,uVar4,uVar3,(int)(char)PVar2,(uint)(byte)PVar1);
    return 0;
  }
  local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4e81);
  if ((local_21 == '\x01') && (lVar7 = (**(code **)(*local_20 + 0x74))(local_20), lVar7 != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4e82,
               "inSert into power_war set a_side_point=%d, b_side_point=%d, winner_side=%d ,server_id = %d"
               ,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               (int)(char)param_1[0xb],param_1[10]);
    cVar6 = (**(code **)(*local_20 + 0x20))(local_20,0x4e82);
    if (cVar6 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 489 行）：

```cpp
char CDBManager::SavePowerWarPoint(Packet_DB_Save_Power_War_Point* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    if (!h->set_query(0x4e81,
                      "upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",
                      *(unsigned int*)(p + 0xc), *(unsigned int*)(p + 0x10),
                      *(signed char*)(p + 0xb), *(unsigned char*)(p + 0xa)))
    {
        CMyFileLog log("SavePowerWarPoint", 0x12ce);
        log("./log/DBQueryErr",
            "CDBManager::SavePowerWarPoint() : upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",
            *(unsigned int*)(p + 0xc), *(unsigned int*)(p + 0x10),
            *(signed char*)(p + 0xb), *(unsigned char*)(p + 0xa));
        return 0;
    }
    if (h->exec(0x4e81) != 1 || h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e82,
                          "inSert into power_war set a_side_point=%d, b_side_point=%d, winner_side=%d ,server_id = %d",
                          *(unsigned int*)(p + 0xc),
                          *(unsigned int*)(p + 0x10),
                          *(signed char*)(p + 0xb),
                          *(unsigned char*)(p + 0xa)))
            return 0;
        if (!h->exec(0x4e82))
            return 0;
    }
    return 1;
}
```
