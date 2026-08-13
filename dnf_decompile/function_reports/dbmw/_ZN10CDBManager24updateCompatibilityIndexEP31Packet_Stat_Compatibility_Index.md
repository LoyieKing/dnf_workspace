# _ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index

`CDBManager::updateCompatibilityIndex(Packet_Stat_Compatibility_Index*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80867fc` | `0x2a7` | `0x8063808` | `0x29f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,194 +1,192 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x25>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x60(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0x1d(%eax),%eax
 movzbl %al,%edi
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0x1c(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x5c(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x1a(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x58(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x18(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x54(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x16(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x50(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x14(%eax),%eax
 movzwl %ax,%ebx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%ecx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0xf(%eax),%eax
 movzbl %al,%edx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    %esi,0x30(%esp)
 mov    %edi,0x2c(%esp)
 mov    -0x5c(%ebp),%esi
 mov    %esi,0x28(%esp)
 mov    -0x58(%ebp),%esi
 mov    %esi,0x24(%esp)
 mov    -0x54(%ebp),%esi
 mov    %esi,0x20(%esp)
 mov    -0x50(%ebp),%esi
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate ting_user_spec set reg_datetime=now(), cpu_vendor=%d, cpu_num=%d, cpu_clock=%d, ram=%d, video_vendor=%d, video_device=%d, video_ram=%d, os=%d, os_bit=%d where m_id=%u",0x8(%esp)
 movl   $0x4f4b,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x60(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f4b,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14f>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14e>
 movl   $0x2916,0x8(%esp)
 movl   $&_ZZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_IndexE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate ting_user_spec Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x4c(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0x1d(%eax),%eax
 movzbl %al,%esi
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0x1c(%eax),%eax
 movzbl %al,%edi
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x1a(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x48(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x18(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x44(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x16(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x40(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl 0x14(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x3c(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%ebx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0xf(%eax),%eax
 movzbl %al,%ecx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%edx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %esi,0x30(%esp)
 mov    %edi,0x2c(%esp)
 mov    -0x48(%ebp),%esi
 mov    %esi,0x28(%esp)
 mov    -0x44(%ebp),%esi
 mov    %esi,0x24(%esp)
 mov    -0x40(%ebp),%esi
 mov    %esi,0x20(%esp)
 mov    -0x3c(%ebp),%esi
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into ting_user_spec (m_id, reg_datetime, cpu_vendor, cpu_num, cpu_clock, ram, video_vendor, video_device, video_ram, os, os_bit) values(%u, now(), %d, %d, %d, %d, %d, %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4f4a,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x4c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f4a,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
 movl   $0x292d,0x8(%esp)
 movl   $&_ZZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_IndexE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"inSert ting_user_spec Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
 mov    $0x1,%eax
 add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::updateCompatibilityIndex(Packet_Stat_Compatibility_Index*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index
          (CDBManager *this,Packet_Stat_Compatibility_Index *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x3c);
  if (local_20 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4f4b,
               "upDate ting_user_spec set reg_datetime=now(), cpu_vendor=%d, cpu_num=%d, cpu_clock=%d, ram=%d, video_vendor=%d, video_device=%d, video_ram=%d, os=%d, os_bit=%d where m_id=%u"
               ,param_1[0xe],param_1[0xf],*(undefined4 *)(param_1 + 0x10),
               *(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
               *(undefined2 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x1a),param_1[0x1c],
               param_1[0x1d],*(undefined4 *)(param_1 + 10));
    local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4f4b);
    if (local_21 == '\x01') {
      lVar2 = (**(code **)(*local_20 + 0x74))(local_20);
      if (lVar2 == 0) {
        (**(code **)(*local_20 + 0x1c))
                  (local_20,0x4f4a,
                   "inSert into ting_user_spec (m_id, reg_datetime, cpu_vendor, cpu_num, cpu_clock, ram, video_vendor, video_device, video_ram, os, os_bit) values(%u, now(), %d, %d, %d, %d, %d, %d, %d, %d, %d)"
                   ,*(undefined4 *)(param_1 + 10),param_1[0xe],param_1[0xf],
                   *(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x14),
                   *(undefined2 *)(param_1 + 0x16),*(undefined2 *)(param_1 + 0x18),
                   *(undefined2 *)(param_1 + 0x1a),param_1[0x1c],param_1[0x1d]);
        local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4f4a);
        if (local_21 != '\x01') {
          CMyFileLog::CMyFileLog(local_2c,"updateCompatibilityIndex",0x292d);
          CMyFileLog::operator()
                    (local_2c,"./log/DBQueryErr","inSert ting_user_spec Query(exec) Error");
          return 0;
        }
      }
      uVar1 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"updateCompatibilityIndex",0x2916);
      CMyFileLog::operator()(local_34,"./log/DBQueryErr","upDate ting_user_spec Query(exec) Error");
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
