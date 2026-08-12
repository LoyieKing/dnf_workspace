# _ZN7CMember17InsertUpperMemberEjhPKcb

`CMember::InsertUpperMember(unsigned int, unsigned char, char const*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098390` | `0x80` | `0x8060c28` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x10(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0xc(%ebp)
 mov    %al,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember12IsThereUpperEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x28>
-mov    $0x0,%eax
-jmp    <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x7e>
+je     <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x7c>
 mov    0x8(%ebp),%eax
 movzbl -0xc(%ebp),%edx
 mov    %dl,0xa(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x6(%eax)
 mov    0x8(%ebp),%eax
 lea    0xb(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 cmpb   $0x0,-0x10(%ebp)
-je     <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x79>
+je     <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x75>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterTimeEj>
 mov    $0x1,%eax
+jmp    <T> <_ZN7CMember17InsertUpperMemberEjhPKcb+0x81>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::InsertUpperMember(unsigned int, unsigned char, char const*, bool) */

undefined4 __thiscall
CMember::_ZN7CMember17InsertUpperMemberEjhPKcb
          (CMember *this,uint param_1,uchar param_2,char *param_3,bool param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = IsThereUpper(this);
  if (cVar1 == '\0') {
    this[10] = (CMember)param_2;
    *(uint *)(this + 6) = param_1;
    memcpy(this + 0xb,param_3,0x1d);
    if (param_4) {
      uVar3 = time((time_t *)0x0);
      SetMemberRegisterTime(this,uVar3);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMember.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFMember.cpp, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
