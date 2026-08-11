# _ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt

`CPowerWarGuildInfo::UpdateGuildPowerwarInfo(unsigned int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9f6c` | `0x77` | `0x809fd9c` | `0x7e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo17FindPowerwarGuildEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt+0x3c>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%edx
-movzwl -0x1c(%ebp),%eax
-add    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0x4(%eax)
-jmp    <T> <_ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt+0x75>
+jne    <T> <_ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt+0x65>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo19CreatePowerwarGuildEv>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
-movzwl -0x1c(%ebp),%edx
 mov    -0xc(%ebp),%eax
-mov    %edx,0x4(%eax)
+lea    0x4(%eax),%edx
+movzwl -0x1c(%ebp),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo19InsertPowerwarGuildEjP19STPowerWarGuildInfo>
+jmp    <T> <_ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt+0x7c>
+mov    -0xc(%ebp),%eax
+add    $0x4,%eax
+mov    -0xc(%ebp),%edx
+add    $0x4,%edx
+mov    (%edx),%ecx
+movzwl -0x1c(%ebp),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::UpdateGuildPowerwarInfo(unsigned int, unsigned short) */

void __thiscall
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo23UpdateGuildPowerwarInfoEjt
          (CPowerWarGuildInfo *this,uint param_1,ushort param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = _ZN18CPowerWarGuildInfo17FindPowerwarGuildEj((uint)this);
  if (iVar1 == 0) {
    puVar2 = (uint *)_ZN18CPowerWarGuildInfo19CreatePowerwarGuildEv();
    *puVar2 = param_1;
    puVar2[1] = (uint)param_2;
    _ZN18CPowerWarGuildInfo19InsertPowerwarGuildEjP19STPowerWarGuildInfo
              ((uint)this,(STPowerWarGuildInfo *)param_1);
  }
  else {
    *(uint *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (uint)param_2;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 155 行）：

```cpp
void CPowerWarGuildInfo::UpdateGuildPowerwarInfo(unsigned int guildKey, unsigned short point)
{
    STPowerWarGuildInfo* info = FindPowerwarGuild(guildKey);
    if (info == 0)
    {
        info = CreatePowerwarGuild();
        *(unsigned int*)info->m_data = guildKey;
        *(unsigned int*)(info->m_data + 4) = point;
        InsertPowerwarGuild(guildKey, info);
    }
    else
    {
        *(unsigned int*)(info->m_data + 4) =
            *(unsigned int*)(info->m_data + 4) + point;
    }
}
```
