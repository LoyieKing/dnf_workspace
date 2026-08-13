# _ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo

`CDBManager::OnLoadGuildBoard(int, int&, STGuildBoardDBInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808478c` | `0x2fd` | `0x805edc0` | `0x30e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,216 +1,225 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0x32,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect no, m_id, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where guild_id=%d order by no desc limit %d",0x8(%esp)
 movl   $0x4f07,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f07,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xa8>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x87>
 movl   $0x2292,0x8(%esp)
 movl   $&_ZZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnLoadGuildBoard Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f07,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xb2>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x6c,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    0x10(%ebp),%edx
+mov    %eax,(%edx)
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xdc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2f4>
+movl   $0x0,-0x1c(%ebp)
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x24,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x112>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x7c,%ecx
+add    %ecx,%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x152>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
 lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x6c,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,(%eax)
-mov    0x10(%ebp),%eax
-mov    (%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xd4>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2e3>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x10a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x184>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+sub    $0xffffff80,%ecx
+add    %ecx,%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x1c4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x2c,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x87,%ecx
+add    %ecx,%eax
+movl   $0x1e,0xc(%esp)
+mov    %eax,0x8(%esp)
+movl   $0x3,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x20f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x2c,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%ecx
 mov    -0xc(%ebp),%eax
 imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-add    $0x7c,%eax
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x148>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x17a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-sub    $0xffffff80,%eax
-mov    %eax,0x8(%esp)
-movl   $0x2,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x1b8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x2c,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-add    $0x87,%eax
-movl   $0x1e,0xc(%esp)
-mov    %eax,0x8(%esp)
-movl   $0x3,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x200>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x2c,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
 movl   $0x78,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x243>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-add    $0x78,%eax
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x255>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x78,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x27e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x292>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-add    $0x84,%eax
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x84,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2bb>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2d2>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x30c>
+mov    -0x1c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2d8>
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x14(%ebp),%eax
-movl   $0x0,0x80(%eax)
-movl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0x2f0>
+mov    0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0xa5,%edx,%edx
+sub    $0xffffff80,%edx
+add    %edx,%eax
+movl   $0x0,(%eax)
 addl   $0x1,-0xc(%ebp)
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 cmp    -0xc(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xe7>
+jne    <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo+0xe8>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnLoadGuildBoard(int, int&, STGuildBoardDBInfo*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo
          (CDBManager *this,int param_1,int *param_2,STGuildBoardDBInfo *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  uint local_10;
  
  local_14 = *(int **)(this + 0x14);
  (**(code **)(*local_14 + 0x1c))
            (local_14,0x4f07,
             "seLect no, m_id, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where guild_id=%d order by no desc limit %d"
             ,param_1,0x32);
  local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4f07);
  if (local_15 == '\x01') {
    iVar3 = (**(code **)(*local_14 + 0x6c))(local_14);
    *param_2 = iVar3;
    if (*param_2 == 0) {
      uVar2 = 0;
    }
    else {
      for (local_10 = 0; local_24 = 0, local_10 < (uint)*param_2; local_10 = local_10 + 1) {
        cVar1 = (**(code **)(*local_14 + 0x24))(local_14);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x38))(local_14,0,param_3 + local_10 * 0xa5 + 0x7c);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x38))(local_14,1,&local_24);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x38))(local_14,2,param_3 + local_10 * 0xa5 + 0x80);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x2c))(local_14,3,param_3 + local_10 * 0xa5 + 0x87,0x1e);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x2c))(local_14,4,param_3 + local_10 * 0xa5,0x78);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x38))(local_14,5,param_3 + local_10 * 0xa5 + 0x78);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x50))(local_14,6,param_3 + local_10 * 0xa5 + 0x84);
        if (cVar1 != '\x01') {
          return 0;
        }
        if (local_24 == 0) {
          *(undefined4 *)(param_3 + local_10 * 0xa5 + 0x80) = 0;
        }
      }
      uVar2 = 1;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"OnLoadGuildBoard",0x2292);
    CMyFileLog::operator()(local_20,"./log/DBQueryErr","OnLoadGuildBoard Query Error");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
