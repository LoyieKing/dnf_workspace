# _ZN7CMember10LoadMemberER14STMemberDBInfosjj

`CMember::LoadMember(STMemberDBInfo&, short, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809821a` | `0xcb` | `0x8060324` | `0xc5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x2,%eax
 test   %eax,%eax
-je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xc9>
+je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xc3>
 movswl -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x27(%eax),%eax
 movzbl %al,%eax
-cmp    -0x10(%ebp),%eax
-jle    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x58>
-mov    -0x10(%ebp),%eax
+cmp    -0xc(%ebp),%eax
+jbe    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x58>
+mov    -0xc(%ebp),%eax
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %dl,0x27(%eax)
 mov    0xc(%ebp),%eax
 movzbl 0x27(%eax),%eax
 movzbl %al,%eax
 imul   $0x27,%eax,%eax
 add    $0x28,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x6,%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 mov    %eax,%edx
 or     $0x4,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x4(%eax)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterTimeEj>
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember19SetMemberDeleteTimeEj>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember23CheckMemberRegisterFlagEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::LoadMember(STMemberDBInfo&, short, unsigned int, unsigned int) */

void __thiscall
CMember::_ZN7CMember10LoadMemberER14STMemberDBInfosjj
          (CMember *this,STMemberDBInfo *param_1,short param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((*(ushort *)(this + 4) & 2) != 0) {
    iVar1 = CMemberManager::_ZN14CMemberManager24GetLowerMemberEnterLimitEj
                      (*(CMemberManager **)(this + 0x1b4),(int)param_2);
    if (iVar1 < (int)(uint)(byte)param_1[0x27]) {
      param_1[0x27] = SUB41(iVar1,0);
    }
    memcpy(this + 6,param_1,(uint)(byte)param_1[0x27] * 0x27 + 0x28);
    *(ushort *)(this + 4) = *(ushort *)(this + 4) | 4;
    SetMemberRegisterTime(this,param_3);
    SetMemberDeleteTime(this,param_4);
    CheckMemberRegisterFlag(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 275 行）：

```cpp
void CMember::LoadMember(STMemberDBInfo& info, short level, unsigned int a, unsigned int b)
{
    if ((m_flag & 2) != 0)
    {
        unsigned int limit = m_memberManager->GetLowerMemberEnterLimit(level);
        if ((unsigned int)info.m_count27 > limit)
        {
            info.m_count27 = (unsigned char)limit;
        }
        memcpy((char*)this + 6, &info, (unsigned int)info.m_count27 * 0x27 + 0x28);
        m_flag |= 4;
        SetMemberRegisterTime(a);
        SetMemberDeleteTime(b);
        CheckMemberRegisterFlag();
    }
}
```
