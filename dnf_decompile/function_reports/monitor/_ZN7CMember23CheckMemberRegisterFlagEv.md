# _ZN7CMember23CheckMemberRegisterFlagEv

`CMember::CheckMemberRegisterFlag()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80991ec` | `0x253` | `0x806001e` | `0x1ea` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,139 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xdc,%esp
+sub    $0xac,%esp
 mov    0x8(%ebp),%eax
 mov    0x1bc(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $0x6,(%esp)
 call   <T> <_Z26CheckDailyScheduleTimeOveril>
-movzbl %al,%eax
+mov    %al,-0x51(%ebp)
+movzbl -0x51(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterFlagEb>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember22IsAbleToRegisterMemberEv>
 test   %al,%al
-je     <T> <_ZN7CMember23CheckMemberRegisterFlagEv+0x79>
+je     <T> <_ZN7CMember23CheckMemberRegisterFlagEv+0x81>
 mov    0x8(%ebp),%eax
 mov    0x1c0(%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
 movl   $0x3,(%esp)
 call   <T> <_Z28CheckDayHourScheduleTimeOveriil>
-movzbl %al,%eax
+mov    %al,-0x51(%ebp)
+movzbl -0x51(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterFlagEb>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember22IsAbleToRegisterMemberEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN7CMember23CheckMemberRegisterFlagEv+0x248>
+je     <T> <_ZN7CMember23CheckMemberRegisterFlagEv+0x1df>
 mov    0x8(%ebp),%eax
 add    $0x1bc,%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x4c(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x48(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x44(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x40(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x2c(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x28(%ebp)
-mov    0x28(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x50(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x50(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x50(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x50(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x50(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x38(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1c0,%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x78(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x74(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x70(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x6c(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x68(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x64(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x60(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x5c(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x58(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x54(%ebp)
-mov    0x28(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x78(%ebp),%esi
-mov    -0x74(%ebp),%edi
-mov    -0x70(%ebp),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x6c(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x68(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
 add    $0x1,%eax
-mov    %eax,-0x98(%ebp)
-mov    -0x64(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x1c(%ebp),%eax
 add    $0x76c,%eax
-mov    %eax,-0x94(%ebp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,-0x90(%ebp)
-mov    -0x48(%ebp),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x44(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,-0x84(%ebp)
+mov    %eax,-0x6c(%ebp)
 mov    -0x3c(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x80(%ebp)
+lea    0x1(%eax),%edi
 mov    -0x38(%ebp),%eax
-add    $0x76c,%eax
-mov    %eax,-0x7c(%ebp)
+lea    0x76c(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember12GetMemberKeyEv>
 mov    %eax,%ebx
 movl   $0x336,0x8(%esp)
 movl   $&_ZZN7CMember23CheckMemberRegisterFlagEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x3c(%esp)
-mov    %edi,0x38(%esp)
-mov    -0xa0(%ebp),%eax
+mov    -0x30(%ebp),%eax
+mov    %eax,0x3c(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x38(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,0x34(%esp)
-mov    -0x9c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x30(%esp)
-mov    -0x98(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,0x2c(%esp)
-mov    -0x94(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,0x28(%esp)
-mov    -0x90(%ebp),%eax
+mov    -0x4c(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x8c(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,0x20(%esp)
-mov    -0x88(%ebp),%eax
+mov    -0x44(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x84(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    -0x80(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0x7c(%ebp),%eax
-mov    %eax,0x10(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"MKey(%d)\tRF(0)\tRT(%04d.%02d.%02d %02d:%02d:%02d)\tDT(%04d.%02d.%02d %02d:%02d:%02d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0xdc,%esp
+add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::CheckMemberRegisterFlag() */

void __thiscall CMember::_ZN7CMember23CheckMemberRegisterFlagEv(CMember *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  tm *ptVar15;
  undefined4 uVar16;
  CMyFileLog local_24 [20];
  
  bVar13 = (bool)CheckDailyScheduleTimeOver(6,*(long *)(this + 0x1bc));
  _ZN7CMember21SetMemberRegisterFlagEb(this,bVar13);
  cVar14 = IsAbleToRegisterMember(this);
  if (cVar14 != '\0') {
    bVar13 = (bool)CheckDayHourScheduleTimeOver(3,6,*(long *)(this + 0x1c0));
    _ZN7CMember21SetMemberRegisterFlagEb(this,bVar13);
  }
  cVar14 = IsAbleToRegisterMember(this);
  if (cVar14 != '\x01') {
    ptVar15 = localtime((time_t *)(this + 0x1bc));
    iVar1 = ptVar15->tm_sec;
    iVar2 = ptVar15->tm_min;
    iVar3 = ptVar15->tm_hour;
    iVar4 = ptVar15->tm_mday;
    iVar5 = ptVar15->tm_mon;
    iVar6 = ptVar15->tm_year;
    ptVar15 = localtime((time_t *)(this + 0x1c0));
    iVar7 = ptVar15->tm_sec;
    iVar8 = ptVar15->tm_min;
    iVar9 = ptVar15->tm_hour;
    iVar10 = ptVar15->tm_mday;
    iVar11 = ptVar15->tm_mon;
    iVar12 = ptVar15->tm_year;
    uVar16 = GetMemberKey(this);
    CMyFileLog::CMyFileLog(local_24,"CheckMemberRegisterFlag",0x336);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/MemberModify",
               "MKey(%d)\tRF(0)\tRT(%04d.%02d.%02d %02d:%02d:%02d)\tDT(%04d.%02d.%02d %02d:%02d:%02d)"
               ,uVar16,iVar6 + 0x76c,iVar5 + 1,iVar4,iVar3,iVar2,iVar1,iVar12 + 0x76c,iVar11 + 1,
               iVar10,iVar9,iVar8,iVar7);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 170 行）：

```cpp
void CMember::CheckMemberRegisterFlag()
{
    bool flag = ::CheckDailyScheduleTimeOver(6, m_registerTime);
    SetMemberRegisterFlag(flag);
    if (IsAbleToRegisterMember())
    {
        flag = ::CheckDayHourScheduleTimeOver(3, 6, m_dayHourTime);
        SetMemberRegisterFlag(flag);
    }
    if (!IsAbleToRegisterMember())
    {
        tm* t1 = localtime((time_t*)&m_registerTime);
        int sec1 = t1->tm_sec, min1 = t1->tm_min, hour1 = t1->tm_hour;
        int mday1 = t1->tm_mday, mon1 = t1->tm_mon, year1 = t1->tm_year;
        tm* t2 = localtime((time_t*)&m_dayHourTime);
        int sec2 = t2->tm_sec, min2 = t2->tm_min, hour2 = t2->tm_hour;
        int mday2 = t2->tm_mday, mon2 = t2->tm_mon, year2 = t2->tm_year;
        DNF_LOG_SCOPE_LINE(0x336,"./log/MemberModify",
            "MKey(%d)\tRF(0)\tRT(%04d.%02d.%02d %02d:%02d:%02d)\tDT(%04d.%02d.%02d %02d:%02d:%02d)",
            GetMemberKey(), year1 + 0x76c, mon1 + 1, mday1, hour1, min1, sec1, year2 + 0x76c,
            mon2 + 1, mday2, hour2, min2, sec2);
    }
}
```
