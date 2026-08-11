# _ZN13CGuildManager23IsGuildWarEnterableCharEhj

`CGuildManager::IsGuildWarEnterableChar(unsigned char, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096dc4` | `0x51` | `0x805d32e` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xc(%ebp)
 cmpb   $0x6,-0xc(%ebp)
-je     <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x19>
-mov    $0x1,%eax
-jmp    <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x4f>
+jne    <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x4d>
 movzbl -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager17IsGuildWarEventOnEh>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x3a>
-mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x4f>
+je     <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x46>
 mov    0x8(%ebp),%eax
 lea    0x44(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN9CGuildWar24IsGuildWarEnterableGuildEj>
+cmp    $0x1,%eax
+sete   %al
+jmp    <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x52>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj+0x52>
+mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::IsGuildWarEnterableChar(unsigned char, unsigned int) */

undefined4 __thiscall
CGuildManager::_ZN13CGuildManager23IsGuildWarEnterableCharEhj
          (CGuildManager *this,uchar param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == '\x06') {
    cVar1 = IsGuildWarEventOn((uchar)this);
    if (cVar1 == '\x01') {
      uVar2 = CGuildWar::IsGuildWarEnterableGuild((CGuildWar *)(this + 0x44),param_2);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 534 行）：

```cpp
bool CGuildManager::IsGuildWarEnterableChar(unsigned char group, unsigned int charNo)
{
    if (group == 6)
    {
        if (IsGuildWarEventOn(group) == 1)
        {
            return m_guildWar.IsGuildWarEnterableGuild(charNo) == 1;
        }
        return 0;
    }
    return 1;
}
```
