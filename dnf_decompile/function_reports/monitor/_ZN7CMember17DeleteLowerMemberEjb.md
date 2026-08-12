# _ZN7CMember17DeleteLowerMemberEjb

`CMember::DeleteLowerMember(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098464` | `0xc8` | `0x8060df4` | `0xc4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jle    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xc5>
+jle    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xc2>
 mov    0x8(%ebp),%eax
 add    $0x2e,%eax
 mov    %eax,-0x10(%ebp)
 movb   $0x0,-0x9(%ebp)
-jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0x9e>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN7CMember17DeleteLowerMemberEjb+0x96>
+jne    <T> <_ZN7CMember17DeleteLowerMemberEjb+0x95>
 movzbl -0x9(%ebp),%eax
 not    %eax
 imul   $0x27,%eax,%eax
-add    $0x186,%eax
-mov    -0x10(%ebp),%edx
-add    $0x27,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
+lea    0x186(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x27,%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x2d(%eax)
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN7CMember17DeleteLowerMemberEjb+0xaf>
+je     <T> <_ZN7CMember17DeleteLowerMemberEjb+0xae>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember19SetMemberDeleteTimeEj>
-jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xb0>
+jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xaf>
 addl   $0x27,-0x10(%ebp)
 addb   $0x1,-0x9(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 setne  %al
 subl   $0x1,-0x14(%ebp)
 test   %al,%al
-jne    <T> <_ZN7CMember17DeleteLowerMemberEjb+0x32>
-jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xb0>
+jne    <T> <_ZN7CMember17DeleteLowerMemberEjb+0x30>
+jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xaf>
 nop
 movl   $"DELETE_LOWER_MEMBER",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember22DebugPrintMemberMemberEPc>
-jmp    <T> <_ZN7CMember17DeleteLowerMemberEjb+0xc6>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::DeleteLowerMember(unsigned int, bool) */

void __thiscall CMember::_ZN7CMember17DeleteLowerMemberEjb(CMember *this,uint param_1,bool param_2)

{
  uint uVar1;
  bool bVar2;
  uint local_18;
  CMember *local_14;
  byte local_d;
  
  local_18 = (uint)(byte)this[0x2d];
  if (local_18 != 0) {
    local_14 = this + 0x2e;
    local_d = 0;
    while (bVar2 = local_18 != 0, local_18 = local_18 - 1, bVar2) {
      if (*(uint *)local_14 == param_1) {
        memcpy(local_14,local_14 + 0x27,~(uint)local_d * 0x27 + 0x186);
        this[0x2d] = (CMember)((char)this[0x2d] + -1);
        if (param_2) {
          uVar1 = time((time_t *)0x0);
          SetMemberDeleteTime(this,uVar1);
        }
        break;
      }
      local_14 = local_14 + 0x27;
      local_d = local_d + 1;
    }
    DebugPrintMemberMember((char *)this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 545 行）：

```cpp
void CMember::DeleteLowerMember(unsigned int charNo, bool flag)
{
    int count = (int)m_dbInfo.m_count27;
    if (count > 0)
    {
        char* p = (char*)this + 0x2e;
        unsigned char idx = 0;
        do
        {
            if (*(unsigned int*)p == charNo)
            {
                memcpy(p, p + 0x27, (unsigned int)(~(unsigned char)idx) * 0x27 + 0x186);
                m_dbInfo.m_count27--;
                if (flag)
                {
                    SetMemberDeleteTime(time(0));
                }
                break;
            }
            p += 0x27;
            idx++;
        } while (count-- != 0);
        DebugPrintMemberMember("DELETE_LOWER_MEMBER");
    }
}
```
