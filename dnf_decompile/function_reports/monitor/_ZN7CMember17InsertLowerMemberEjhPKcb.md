# _ZN7CMember17InsertLowerMemberEjhPKcb

`CMember::InsertLowerMember(unsigned int, unsigned char, char const*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80982e6` | `0xaa` | `0x8060bc2` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 add    $0x1,%eax
 cmp    $0xa,%eax
-jle    <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0x31>
-mov    $0x0,%eax
-jmp    <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0xa8>
-mov    -0x10(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    $0x20,%eax
-add    0x8(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-movzbl -0x1c(%ebp),%edx
-mov    %dl,0x4(%eax)
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,(%eax)
-mov    -0xc(%ebp),%eax
-lea    0x5(%eax),%edx
+ja     <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0xb5>
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x32,%edx
+lea    (%eax,%edx,1),%edx
+movzbl -0x1c(%ebp),%eax
+mov    %al,(%edx)
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x2e,%edx
+lea    (%eax,%edx,1),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x33,%edx
+lea    (%eax,%edx,1),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 cmpb   $0x0,-0x20(%ebp)
-je     <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0x93>
+je     <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0x9e>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterTimeEj>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x2d(%eax)
 mov    $0x1,%eax
+jmp    <T> <_ZN7CMember17InsertLowerMemberEjhPKcb+0xba>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::InsertLowerMember(unsigned int, unsigned char, char const*, bool) */

undefined4 __thiscall
CMember::_ZN7CMember17InsertLowerMemberEjhPKcb
          (CMember *this,uint param_1,uchar param_2,char *param_3,bool param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)(byte)this[0x2d];
  if (uVar1 + 1 < 0xb) {
    this[uVar1 * 0x27 + 0x32] = (CMember)param_2;
    *(uint *)(this + uVar1 * 0x27 + 0x2e) = param_1;
    memcpy(this + uVar1 * 0x27 + 0x33,param_3,0x1d);
    if (param_4) {
      uVar1 = time((time_t *)0x0);
      SetMemberRegisterTime(this,uVar1);
    }
    this[0x2d] = (CMember)((char)this[0x2d] + '\x01');
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
