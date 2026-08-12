# _ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo

`CGuildBoard::setGuildBoardData(unsigned int, unsigned int, CGuild*, int, STGuildBoardDBInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d1a0` | `0x1a2` | `0x808f784` | `0x1c9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x248,%esp
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo+0x144>
+jmp    <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo+0x16b>
 lea    -0x219(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x1c(%ebp),%eax
-mov    0x7c(%eax),%eax
-mov    %eax,-0x19d(%ebp)
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x1c(%ebp),%eax
-mov    0x78(%eax),%eax
-mov    %eax,-0x1a1(%ebp)
+lea    -0x219(%ebp),%eax
+lea    0x7c(%eax),%edx
+mov    0x1c(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x7c,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x219(%ebp),%eax
+lea    0x78(%eax),%edx
+mov    0x1c(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+add    $0x78,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
 imul   $0xa5,%eax,%eax
 add    0x1c(%ebp),%eax
 movl   $0x78,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x219(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x219(%ebp),%eax
+lea    0x80(%eax),%edx
+mov    0x1c(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+imul   $0xa5,%ecx,%ecx
+sub    $0xffffff80,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
 imul   $0xa5,%eax,%eax
+add    $0x84,%eax
 add    0x1c(%ebp),%eax
-mov    0x80(%eax),%eax
-mov    %eax,-0x199(%ebp)
-mov    -0xc(%ebp),%eax
-imul   $0xa5,%eax,%eax
-add    0x1c(%ebp),%eax
-add    $0x84,%eax
 movl   $0x21,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x219(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x199(%ebp),%eax
+lea    -0x219(%ebp),%eax
+sub    $0xffffff80,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo+0xdb>
-movb   $0x1,-0x193(%ebp)
+je     <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo+0x102>
+lea    -0x219(%ebp),%eax
+add    $0x86,%eax
+movb   $0x1,(%eax)
 lea    -0xc0(%ebp),%eax
 lea    -0x219(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x219(%ebp),%edx
 add    $0x7c,%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR18STGuildBoardDBInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0xc0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x16c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj18STGuildBoardDBInfoEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
 lea    -0x174(%ebp),%eax
 lea    -0x16c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    0x18(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo+0x15>
 movl   $0x5f,0x8(%esp)
 movl   $&_ZZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SET SUCCESS - GUILD:%u, CHARAC:%u, COUNT:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::setGuildBoardData(unsigned int, unsigned int, CGuild*, int, STGuildBoardDBInfo*) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo
          (CGuildBoard *this,uint param_1,uint param_2,CGuild *param_3,int param_4,
          STGuildBoardDBInfo *param_5)

{
  char cVar1;
  STGuildBoardDBInfo local_21d [120];
  undefined4 local_1a5;
  undefined4 local_1a1;
  uint local_19d;
  undefined1 auStack_199 [2];
  undefined1 local_197;
  pair local_178 [8];
  pair<unsigned_int_const,STGuildBoardDBInfo> local_170 [172];
  uint local_c4 [43];
  CMyFileLog local_18 [8];
  int local_10;
  
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    STGuildBoardDBInfo::STGuildBoardDBInfo(local_21d);
    local_1a1 = *(undefined4 *)(param_5 + local_10 * 0xa5 + 0x7c);
    local_1a5 = *(undefined4 *)(param_5 + local_10 * 0xa5 + 0x78);
    memcpy(local_21d,param_5 + local_10 * 0xa5,0x78);
    local_19d = *(uint *)(param_5 + local_10 * 0xa5 + 0x80);
    memcpy(auStack_199,param_5 + local_10 * 0xa5 + 0x84,0x21);
    cVar1 = CGuild::IsGuildMaster(param_3,local_19d);
    if (cVar1 != '\0') {
      local_197 = 1;
    }
    std::make_pair<unsigned_int&,STGuildBoardDBInfo&>(local_c4,(STGuildBoardDBInfo *)&local_1a1);
    std::pair<unsigned_int_const,STGuildBoardDBInfo>::pair<unsigned_int,STGuildBoardDBInfo>
              (local_170,(pair *)local_c4);
    std::
    map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
    ::insert(local_178);
  }
  CMyFileLog::CMyFileLog(local_18,"setGuildBoardData",0x5f);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_18,"./log/GuildBoard","SET SUCCESS - GUILD:%u, CHARAC:%u, COUNT:%u",param_1,
             param_2,param_4);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildBoard.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
