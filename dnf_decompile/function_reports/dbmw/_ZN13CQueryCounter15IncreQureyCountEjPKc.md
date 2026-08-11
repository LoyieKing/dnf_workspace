# _ZN13CQueryCounter15IncreQureyCountEjPKc

`CQueryCounter::IncreQureyCount(unsigned int, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e2c4` | `0x64` | `0x80ed5d8` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x4f60,0xc(%ebp)
-ja     <T> <_ZN13CQueryCounter15IncreQureyCountEjPKc+0x61>
+ja     <T> <_ZN13CQueryCounter15IncreQureyCountEjPKc+0x63>
 mov    0xc(%ebp),%eax
 sub    $0x4e20,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x50(%eax),%ecx
 mov    0x8(%edx,%ecx,4),%edx
 lea    0x1(%edx),%ecx
 mov    0x8(%ebp),%edx
 add    $0x50,%eax
 mov    %ecx,0x8(%edx,%eax,4)
 mov    0x8(%ebp),%eax
 mov    0x1058(%eax),%eax
 mov    (%eax),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1058(%eax),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 movzbl 0x4(%edx,%eax,1),%eax
 xor    $0x1,%eax
-test   %al,%al
-jmp    <T> <_ZN13CQueryCounter15IncreQureyCountEjPKc+0x62>
-nop
+mov    %eax,%edx
+mov    %edx,%eax
+jmp    <T> <_ZN13CQueryCounter15IncreQureyCountEjPKc+0x63>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::IncreQureyCount(unsigned int, char const*) */

void __thiscall
CQueryCounter::_ZN13CQueryCounter15IncreQureyCountEjPKc
          (CQueryCounter *this,uint param_1,char *param_2)

{
  if (param_1 < 0x4f61) {
    *(int *)(this + (param_1 - 0x4dd0) * 4 + 8) = *(int *)(this + (param_1 - 0x4dd0) * 4 + 8) + 1;
    (**(code **)**(undefined4 **)(this + 0x1058))(*(undefined4 *)(this + 0x1058));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 81 行）：

```cpp
char CQueryCounter::IncreQureyCount(unsigned int idx, const char* name)
{
    if (idx <= 0x4f60)
    {
        int i = idx - 0x4e20;
        m_counts[i]++;
        m_timer->SetLastTime();
        return !m_used[i];
    }
}
```
