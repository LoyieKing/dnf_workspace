# _ZN14CMemberManager24GetLowerMemberEnterLimitEj

`CMemberManager::GetLowerMemberEnterLimit(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809af94` | `0x50` | `0x806200a` | `0x48` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberConfig13GetMemberInfoEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x6d,0xc(%ebp)
+ja     <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj+0x41>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    $0xcccccccd,%edx
 mov    -0x1c(%ebp),%eax
 mul    %edx
-mov    %edx,%eax
-shr    $0x3,%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0xa,-0xc(%ebp)
-jle    <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj+0x3c>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj+0x4e>
-mov    -0xc(%ebp),%edx
+shr    $0x3,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    -0x10(%ebp),%eax
+add    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
+jmp    <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj+0x46>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::GetLowerMemberEnterLimit(unsigned int) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager24GetLowerMemberEnterLimitEj(CMemberManager *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CMemberConfig::GetMemberInfo(*(CMemberConfig **)(this + 0x20));
  if (param_1 / 10 < 0xb) {
    uVar2 = *(undefined4 *)((param_1 / 10) * 0xc + iVar1 + 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 176 行）：

```cpp
unsigned int CMemberManager::GetLowerMemberEnterLimit(unsigned int level)
{
    ST_MemberConfig* info = m_memberConfig->GetMemberInfo();
    if (level / 10 < 0xb)
    {
        return (unsigned int)info[level / 10].m_c;
    }
    return 0;
}
```
