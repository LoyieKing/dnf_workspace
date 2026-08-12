# _ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi

`CDBManager::AddBuddy(unsigned int, char*, STBuddyDBInfo&, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8076778` | `0x441` | `0x806037c` | `0x44f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,324 +1,327 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
 add    $0xffffff80,%esp
 mov    0x18(%ebp),%eax
 movl   $0x3,(%eax)
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    0x14(%ebp),%eax
-movl   $0x1d,0x8(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
 lea    -0x67(%ebp),%edx
 mov    $0x3b,%ebx
 mov    $0x0,%eax
 mov    %edx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x52>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2f>
 mov    %al,(%edx)
 add    $0x1,%edx
 sub    $0x1,%ebx
 mov    %edx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x64>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x41>
 mov    %ax,(%edx)
 add    $0x2,%edx
 sub    $0x2,%ebx
 mov    %ebx,%ecx
 shr    $0x2,%ecx
 mov    %edx,%edi
 rep stos %eax,%es:(%edi)
 mov    %edi,%edx
 mov    %ebx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x7e>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x5b>
 mov    %ax,(%edx)
 add    $0x2,%edx
 mov    %ebx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x8c>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x69>
 mov    %al,(%edx)
 add    $0x1,%edx
+movl   $0x0,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0x14(%ebp),%eax
+movl   $0x1d,0x8(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x67(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 lea    -0x67(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, lev, job, grow_type, sex, m_id, charac_name from charac_info where charac_name = '%s' and delete_flag = 0",0x8(%esp)
 movl   $0x4e50,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x123>
+mov    %al,-0x15(%ebp)
+movzbl -0x15(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x131>
 movl   $0xb8a,0x8(%esp)
 movl   $&_ZZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRiE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 lea    -0x67(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, lev, job, grow_type, sex from charac_info where charac_name = '%s' and delete_flag = 0",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e50,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x155>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x163>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x17a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+jne    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x188>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 cmpl   $0x1,-0x10(%ebp)
-jle    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x1bd>
+jle    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x1cb>
 movl   $0xb9e,0x8(%esp)
 movl   $&_ZZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRiE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::AddBuddy() : n_data != 1( %d ) \n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x1e7>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x1f5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x223>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x231>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x1e,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x25f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x26d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x29b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2a9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x21,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2d7>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2e5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x26,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x313>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x321>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x34c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x35a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13GetGMAccountsEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x38c>
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x39a>
+mov    -0x1c(%ebp),%edx
 mov    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts4isGMEj>
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x38c>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x39a>
 mov    0x18(%ebp),%eax
 movl   $0x5a,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 movl   $0x1e,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x3ca>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x3d8>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    0x22(%eax),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_friends values (%d, %d)",0x8(%esp)
 movl   $0x4e51,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e51,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x15(%ebp)
 movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x42c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
 mov    0x18(%ebp),%eax
 movl   $0x0,(%eax)
 mov    $0x1,%eax
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::AddBuddy(unsigned int, char*, STBuddyDBInfo&, int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi
          (CDBManager *this,uint param_1,char *param_2,STBuddyDBInfo *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined1 local_6b [59];
  uint local_30;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int local_14;
  CGMAccounts *local_10;
  
  bVar7 = 0;
  *param_4 = 3;
  local_18 = *(int **)(this + 8);
  memcpy(param_3,param_2,0x1d);
  puVar4 = (undefined4 *)local_6b;
  uVar5 = 0x3b;
  bVar6 = ((uint)puVar4 & 1) != 0;
  if (bVar6) {
    local_6b[0] = 0;
    puVar4 = (undefined4 *)(local_6b + 1);
    uVar5 = 0x3a;
  }
  if (((uint)puVar4 & 2) != 0) {
    *(undefined2 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 2);
  }
  if (!bVar6) {
    *(undefined1 *)puVar4 = 0;
  }
  (**(code **)(*local_18 + 0x78))(local_18,local_6b,param_2);
  cVar1 = (**(code **)(*local_18 + 0x1c))
                    (local_18,0x4e50,
                     "seLect charac_no, lev, job, grow_type, sex, m_id, charac_name from charac_info where charac_name = \'%s\' and delete_flag = 0"
                     ,local_6b);
  if (cVar1 == '\x01') {
    local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4e50);
    if (local_19 == '\x01') {
      local_14 = (**(code **)(*local_18 + 0x6c))(local_18);
      if (local_14 == 0) {
        uVar2 = 0;
      }
      else {
        if (1 < local_14) {
          CMyFileLog::CMyFileLog(local_24,"AddBuddy",0xb9e);
          CMyFileLog::operator()
                    (local_24,"./log/DBQueryErr","CDBManager::AddBuddy() : n_data != 1( %d ) \n",
                     local_14);
        }
        local_19 = (**(code **)(*local_18 + 0x24))(local_18);
        if (local_19 == '\x01') {
          local_19 = (**(code **)(*local_18 + 0x38))(local_18,0,param_3 + 0x22);
          if (local_19 == '\x01') {
            local_19 = (**(code **)(*local_18 + 0x40))(local_18,1,param_3 + 0x1e);
            if (local_19 == '\x01') {
              local_19 = (**(code **)(*local_18 + 0x50))(local_18,2,param_3 + 0x20);
              if (local_19 == '\x01') {
                local_19 = (**(code **)(*local_18 + 0x50))(local_18,3,param_3 + 0x21);
                if (local_19 == '\x01') {
                  local_19 = (**(code **)(*local_18 + 0x50))(local_18,4,param_3 + 0x26);
                  if (local_19 == '\x01') {
                    local_19 = (**(code **)(*local_18 + 0x38))(local_18,5,&local_30);
                    if (local_19 == '\x01') {
                      local_10 = (CGMAccounts *)
                                 CApplication::GetGMAccounts(*(CApplication **)(this + 0x44));
                      if ((local_10 != (CGMAccounts *)0x0) &&
                         (cVar1 = WongWork::CGMAccounts::isGM(local_10,local_30), cVar1 != '\0')) {
                        *param_4 = 0x5a;
                        return 0;
                      }
                      local_19 = (**(code **)(*local_18 + 0x2c))(local_18,6,param_3,0x1e);
                      if (local_19 == '\x01') {
                        (**(code **)(*local_18 + 0x1c))
                                  (local_18,0x4e51,"inSert into charac_friends values (%d, %d)",
                                   param_1,*(undefined4 *)(param_3 + 0x22));
                        cVar1 = (**(code **)(*local_18 + 0x20))(local_18,0x4e51);
                        if (cVar1 == '\x01') {
                          *param_4 = 0;
                          uVar2 = 1;
                        }
                        else {
                          uVar2 = 0;
                        }
                      }
                      else {
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_2c,"AddBuddy",0xb8a);
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr",
               "seLect charac_no, lev, job, grow_type, sex from charac_info where charac_name = \'%s\' and delete_flag = 0"
               ,local_6b);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
