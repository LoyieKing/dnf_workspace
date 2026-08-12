# _ZN7CMember18DeleteMemberByNameEPcRj

`CMember::DeleteMemberByName(char*, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098582` | `0x13c` | `0x8060ec4` | `0x152` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK7CMember20GetUpperMember_ProxyEv>
+call   <T> <_ZN7CMember20GetUpperMember_ProxyEv>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x70>
+je     <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x80>
 mov    -0x18(%ebp),%eax
 lea    0x5(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x70>
+jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x80>
 mov    -0x18(%ebp),%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x6,%eax
+movl   $0x27,0x8(%esp)
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN14ST_MemberProxy5ResetEv>
+call   <T> <memset>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember19SetMemberDeleteTimeEj>
 mov    $0x1,%eax
-jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x13a>
+jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x150>
 mov    0x8(%ebp),%eax
 add    $0x2e,%eax
 mov    %eax,-0x14(%ebp)
-movb   $0x0,-0xd(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jg     <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x122>
+jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x13c>
 mov    $0x0,%eax
-jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x13a>
+jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x150>
+subl   $0x1,-0xc(%ebp)
 mov    -0x14(%ebp),%eax
 lea    0x5(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x11a>
+jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x134>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
-movzbl -0xd(%ebp),%eax
+mov    -0x10(%ebp),%eax
+movzbl %al,%eax
 not    %eax
 imul   $0x27,%eax,%eax
-add    $0x186,%eax
-mov    -0x14(%ebp),%edx
-add    $0x27,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
+lea    0x186(%eax),%edx
+mov    -0x14(%ebp),%eax
+add    $0x27,%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x2d(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember19SetMemberDeleteTimeEj>
 mov    $0x2,%eax
-jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x13a>
+jmp    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x150>
 addl   $0x27,-0x14(%ebp)
-addb   $0x1,-0xd(%ebp)
+addl   $0x1,-0x10(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 setne  %al
-subl   $0x1,-0xc(%ebp)
 test   %al,%al
-jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0x9e>
+jne    <T> <_ZN7CMember18DeleteMemberByNameEPcRj+0xb1>
 mov    $0x3,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::DeleteMemberByName(char*, unsigned int&) */

undefined4 __thiscall
CMember::_ZN7CMember18DeleteMemberByNameEPcRj(CMember *this,char *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  CMember *local_18;
  byte local_11;
  uint local_10;
  
  puVar1 = (uint *)GetUpperMember_Proxy(this);
  if ((puVar1 != (uint *)0x0) && (iVar2 = strcmp((char *)((int)puVar1 + 5),param_1), iVar2 == 0)) {
    *param_2 = *puVar1;
    ST_MemberProxy::Reset((ST_MemberProxy *)(this + 6));
    uVar3 = time((time_t *)0x0);
    SetMemberDeleteTime(this,uVar3);
    return 1;
  }
  local_18 = this + 0x2e;
  local_11 = 0;
  local_10 = (uint)(byte)this[0x2d];
  if (local_10 == 0) {
    uVar4 = 0;
  }
  else {
    while (bVar5 = local_10 != 0, local_10 = local_10 - 1, bVar5) {
      iVar2 = strcmp((char *)(local_18 + 5),param_1);
      if (iVar2 == 0) {
        *param_2 = *(uint *)local_18;
        memcpy(local_18,local_18 + 0x27,~(uint)local_11 * 0x27 + 0x186);
        this[0x2d] = (CMember)((char)this[0x2d] + -1);
        uVar3 = time((time_t *)0x0);
        SetMemberDeleteTime(this,uVar3);
        return 2;
      }
      local_18 = local_18 + 0x27;
      local_11 = local_11 + 1;
    }
    uVar4 = 3;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 561 行）：

```cpp
int CMember::DeleteMemberByName(char* name, unsigned int& outKey)
{
    unsigned int* proxy = GetUpperMember_Proxy();
    if (proxy != 0 && strcmp((char*)proxy + 5, name) == 0)
    {
        outKey = *proxy;
        memset((char*)this + 6, 0, 0x27);
        SetMemberDeleteTime(time(0));
        return 1;
    }
    char* p = (char*)this + 0x2e;
    int idx = 0;
    unsigned int count = (unsigned int)m_dbInfo.m_count27;
    if (count == 0)
    {
        return 0;
    }
    while (count != 0)
    {
        count--;
        if (strcmp(p + 5, name) == 0)
        {
            outKey = *(unsigned int*)p;
            memcpy(p, p + 0x27, (unsigned int)(~(unsigned char)idx) * 0x27 + 0x186);
            m_dbInfo.m_count27--;
            SetMemberDeleteTime(time(0));
            return 2;
        }
        p += 0x27;
        idx++;
    }
    return 3;
}
```
