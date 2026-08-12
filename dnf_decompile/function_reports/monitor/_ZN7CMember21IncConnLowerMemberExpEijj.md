# _ZN7CMember21IncConnLowerMemberExpEijj

`CMember::IncConnLowerMemberExp(int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098f0c` | `0x110` | `0x8060a0e` | `0x116` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
 cmp    0xc(%ebp),%eax
-jg     <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x6b>
+jle    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0xc0>
 mov    0x8(%ebp),%eax
-movzbl 0x2d(%eax),%eax
-movzbl %al,%ebx
-movl   $0x284,0x8(%esp)
-movl   $&_ZZN7CMember21IncConnLowerMemberExpEijjE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"CMember::IncConnLowerMemberExp  ,  index(%d) >= m_stMemberDBInfo.m_lowerCnt(%d)",0x8(%esp)
-movl   $"./log/Member2Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x10a>
-mov    0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    $0x20,%eax
-add    0x8(%ebp),%eax
-add    $0xe,%eax
+mov    0xc(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x2e,%edx
+add    %edx,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    0x10(%ebp),%eax
-je     <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0xd4>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%ebx
-movl   $0x28c,0x8(%esp)
-movl   $&_ZZN7CMember21IncConnLowerMemberExpEijjE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CMember::IncConnLowerMemberExp  ,  stMemberLowerProxy.m_uCharId(%d) != uCharNo(%d)",0x8(%esp)
-movl   $"./log/Member2Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x10a>
+jne    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x73>
 mov    -0xc(%ebp),%eax
 mov    0x23(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %edx,0x23(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x23(%eax),%eax
 cmp    0x14(%ebp),%eax
-jbe    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x104>
+jbe    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x68>
 mov    -0xc(%ebp),%eax
 mov    0x23(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %edx,0x23(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x10a>
+jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x110>
 mov    -0xc(%ebp),%eax
 mov    0x23(%eax),%eax
+jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x110>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%ebx
+movl   $0x28c,0x8(%esp)
+movl   $&_ZZN7CMember21IncConnLowerMemberExpEijjE12__FUNCTION__,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CMember::IncConnLowerMemberExp  ,  stMemberLowerProxy.m_uCharId(%d) != uCharNo(%d)",0x8(%esp)
+movl   $"./log/Member2Except",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEijj+0x110>
+mov    0x8(%ebp),%eax
+movzbl 0x2d(%eax),%eax
+movzbl %al,%ebx
+movl   $0x284,0x8(%esp)
+movl   $&_ZZN7CMember21IncConnLowerMemberExpEijjE12__FUNCTION__,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CMember::IncConnLowerMemberExp  ,  index(%d) >= m_stMemberDBInfo.m_lowerCnt(%d)",0x8(%esp)
+movl   $"./log/Member2Except",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IncConnLowerMemberExp(int, unsigned int, unsigned int) */

undefined4 __thiscall
CMember::_ZN7CMember21IncConnLowerMemberExpEijj(CMember *this,int param_1,uint param_2,uint param_3)

{
  CMember CVar1;
  int iVar2;
  undefined4 uVar3;
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  CMember *local_10;
  
  if (param_1 < (int)(uint)(byte)this[0x2d]) {
    local_10 = this + param_1 * 0x27 + 0x2e;
    if (*(uint *)local_10 == param_2) {
      *(int *)(this + param_1 * 0x27 + 0x51) = *(int *)(this + param_1 * 0x27 + 0x51) + 1;
      if (param_3 < *(uint *)(this + param_1 * 0x27 + 0x51)) {
        *(int *)(this + param_1 * 0x27 + 0x51) = *(int *)(this + param_1 * 0x27 + 0x51) + -1;
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(this + param_1 * 0x27 + 0x51);
      }
    }
    else {
      iVar2 = *(int *)local_10;
      CMyFileLog::CMyFileLog(local_18,"IncConnLowerMemberExp",0x28c);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_18,"./log/Member2Except",
                 "CMember::IncConnLowerMemberExp  ,  stMemberLowerProxy.m_uCharId(%d) != uCharNo(%d)"
                 ,iVar2,param_2);
      uVar3 = 0;
    }
  }
  else {
    CVar1 = this[0x2d];
    CMyFileLog::CMyFileLog(local_20,"IncConnLowerMemberExp",0x284);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_20,"./log/Member2Except",
               "CMember::IncConnLowerMemberExp  ,  index(%d) >= m_stMemberDBInfo.m_lowerCnt(%d)",
               param_1,(uint)(byte)CVar1);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 367 行）：

```cpp
int CMember::IncConnLowerMemberExp(int index, unsigned int uCharNo, unsigned int maxExp)
{
    if (index < (int)(unsigned int)(unsigned char)((RA_S8<45>*)this)->v)
    {
        ST_MemberProxy* proxy = (ST_MemberProxy*)((char*)this + index * 0x27 + 0x2e);
        if (proxy->m_field0 == uCharNo)
        {
            proxy->m_field23 = proxy->m_field23 + 1;
            if (maxExp < proxy->m_field23)
            {
                proxy->m_field23 = proxy->m_field23 - 1;
                return 0;
            }
            return proxy->m_field23;
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x28c,"./log/Member2Except",
                "CMember::IncConnLowerMemberExp  ,  stMemberLowerProxy.m_uCharId(%d) != "
                "uCharNo(%d)",
                proxy->m_field0, uCharNo);
            return 0;
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x284,"./log/Member2Except",
            "CMember::IncConnLowerMemberExp  ,  index(%d) >= "
            "m_stMemberDBInfo.m_lowerCnt(%d)",
            index, (unsigned int)(unsigned char)((RA_S8<45>*)this)->v);
        return 0;
    }
}
```
