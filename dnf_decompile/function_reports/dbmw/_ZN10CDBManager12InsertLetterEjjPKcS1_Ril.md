# _ZN10CDBManager12InsertLetterEjjPKcS1_Ril

`CDBManager::InsertLetter(unsigned int, unsigned int, char const*, char const*, int&, long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80743ea` | `0x199` | `0x80601b8` | `0x120` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
 sub    $0x270,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0xc(%ebp)
-lea    -0x246(%ebp),%edx
-mov    $0x1ff,%ebx
+lea    -0x248(%ebp),%ebx
 mov    $0x0,%eax
+mov    $0x80,%edx
+mov    %ebx,%edi
 mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x36>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
 rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x50>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x5e>
-mov    %al,(%edx)
-add    $0x1,%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x246(%ebp),%eax
+lea    -0x248(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-lea    -0x47(%ebp),%edx
-mov    $0x3b,%ebx
+lea    -0x48(%ebp),%ebx
 mov    $0x0,%eax
+mov    $0xf,%edx
+mov    %ebx,%edi
 mov    %edx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x9f>
-mov    %al,(%edx)
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0xb1>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
 rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0xcb>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0xd9>
-mov    %al,(%edx)
-add    $0x1,%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x47(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0x1,0x20(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x1c(%esp)
-lea    -0x246(%ebp),%eax
+lea    -0x248(%ebp),%eax
 mov    %eax,0x18(%esp)
-lea    -0x47(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,'%s','%s',from_unixtime(%d),%d)",0x8(%esp)
 movl   $0x4e5c,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e5c,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x171>
+je     <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0xf8>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x18f>
+jmp    <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril+0x116>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle>
 mov    %eax,%edx
 mov    0x1c(%ebp),%eax
 mov    %edx,(%eax)
 mov    $0x1,%eax
 add    $0x270,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::InsertLetter(unsigned int, unsigned int, char const*, char const*, int&, long) */

bool __thiscall
CDBManager::_ZN10CDBManager12InsertLetterEjjPKcS1_Ril
          (CDBManager *this,uint param_1,uint param_2,char *param_3,char *param_4,int *param_5,
          long param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined1 local_24a [511];
  undefined1 local_4b [59];
  CDBHandle *local_10;
  
  bVar7 = 0;
  local_10 = *(CDBHandle **)(this + 0xc);
  puVar4 = (undefined4 *)local_24a;
  uVar5 = 0x1ff;
  bVar6 = ((uint)puVar4 & 2) != 0;
  if (bVar6) {
    local_24a._0_2_ = 0;
    puVar4 = (undefined4 *)(local_24a + 2);
    uVar5 = 0x1fd;
  }
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (!bVar6) {
    *(undefined2 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 2);
  }
  *(undefined1 *)puVar4 = 0;
  (**(code **)(*(int *)local_10 + 0x78))(local_10,local_24a,param_4);
  puVar4 = (undefined4 *)local_4b;
  uVar5 = 0x3b;
  bVar6 = ((uint)puVar4 & 1) != 0;
  if (bVar6) {
    local_4b[0] = 0;
    puVar4 = (undefined4 *)(local_4b + 1);
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
  (**(code **)(*(int *)local_10 + 0x78))(local_10,local_4b,param_3);
  (**(code **)(*(int *)local_10 + 0x1c))
            (local_10,0x4e5c,
             "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,\'%s\',\'%s\',from_unixtime(%d),%d)"
             ,param_1,param_2,local_4b,local_24a,param_6,1);
  cVar1 = (**(code **)(*(int *)local_10 + 0x20))(local_10,0x4e5c);
  if (cVar1 == '\x01') {
    iVar2 = _ZN10CDBManager11GetIdentityEP9CDBHandle(this,local_10);
    *param_5 = iVar2;
  }
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
