# _ZN6CGuild26UpdateChangableInfoProcessEv

`CGuild::UpdateChangableInfoProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809167a` | `0x106` | `0x80570d2` | `0x104` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,76 @@
-push   %ebp
-mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
-movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x3c>
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x3c>
 mov    $0x1,%eax
 jmp    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x41>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x100>
+je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xfe>
 mov    0x8(%ebp),%eax
 movzbl 0x4db0(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4db0(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x4db0(%eax),%eax
 cmp    $0x9,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x100>
+jbe    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xfe>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xd2>
+jmp    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xd0>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xd0,%eax
 mov    0xd(%eax),%eax
 lea    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xce>
+je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xcc>
+mov    0x8(%ebp),%ebx
 mov    -0xc(%ebp),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,%ecx
-mov    0x8(%ebp),%ebx
+mov    -0x10(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %ecx,0x15(%eax)
+add    $0x100,%eax
+mov    %ecx,0x5(%eax)
 addl   $0x1,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 movzwl %ax,%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x7f>
+jne    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x7a>
 mov    0x8(%ebp),%eax
 add    $0x4d98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4db0(%eax)
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
+push   %ebp
+mov    %esp,%ebp
+sub    $0x18,%esp
+movl   $0x4,0x4(%esp)
```
## 2. Ghidra 反编译 C

```c

/* CGuild::UpdateChangableInfoProcess() */

void __thiscall CGuild::_ZN6CGuild26UpdateChangableInfoProcessEv(CGuild *this)

{
  bool bVar1;
  char cVar2;
  undefined4 local_14;
  int local_10;
  
  cVar2 = _ZN6CGuild16IsSetGuildDBFlagEt(this,4);
  if (cVar2 != '\0') {
    cVar2 = _ZN6CGuild16IsSetGuildDBFlagEt(this,0x10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_080916bb;
    }
  }
  bVar1 = false;
LAB_080916bb:
  if ((bVar1) && (this[0x4db0] = (CGuild)((char)this[0x4db0] + '\x01'), 9 < (byte)this[0x4db0])) {
    for (local_10 = 0; local_10 < (int)(uint)*(ushort *)(this + 0x1e); local_10 = local_10 + 1) {
      cVar2 = PopGuildMemberChanglableInfo
                        (this,*(uint *)(this + local_10 * 0x41 + 0xdd),
                         (STGuildMemberChangableInfo *)&local_14);
      if (cVar2 != '\0') {
        *(undefined4 *)(this + local_10 * 0x41 + 0x105) = local_14;
      }
    }
    std::
    map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
    ::clear((map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
             *)(this + 0x4d98));
    this[0x4db0] = (CGuild)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2022 行）：

```cpp
void CGuild::UpdateChangableInfoProcess()
{
    if (IsSetGuildDBFlag(4) && IsSetGuildDBFlag(0x10))
    {
        m_changableTickCnt++;
        if (9 < (unsigned char)m_changableTickCnt)
        {
            for (int i = 0; i < m_totalCnt; i++)
            {
                STGuildMemberChangableInfo info;
                if (PopGuildMemberChanglableInfo(
                        ((CGuildMemberMainArray*)this)->m_members[i].m_charNo,
                        info) != 0)
                {
                    ((CGuildMemberExtraArray*)this)->m_members[i].m_changableTime =
                        info.m_time;
                }
            }
            m_changable.clear();
            m_changableTickCnt = 0;
        }
    }
}
```
