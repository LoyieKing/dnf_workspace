# _ZN16StatisticManager9AMDecryptEPvj

`StatisticManager::AMDecrypt(void*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80704e0` | `0x60` | `0x80700d2` | `0x60` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN16StatisticManager9AMDecryptEPvj+0x51>
 mov    0xc(%ebp),%eax
 add    -0x4(%ebp),%eax
 mov    0xc(%ebp),%edx
 add    -0x4(%ebp),%edx
 movzbl (%edx),%edx
 xor    $0xffffff9d,%edx
 mov    %dl,(%eax)
 mov    0xc(%ebp),%eax
 add    -0x4(%ebp),%eax
 mov    0xc(%ebp),%edx
 add    -0x4(%ebp),%edx
 movzbl (%edx),%edx
 movzbl %dl,%edx
-sar    $0x6,%edx
+shl    $0x2,%edx
 mov    %edx,%ecx
 mov    0xc(%ebp),%edx
 add    -0x4(%ebp),%edx
 movzbl (%edx),%edx
 movzbl %dl,%edx
-shl    $0x2,%edx
+sar    $0x6,%edx
 or     %ecx,%edx
 mov    %dl,(%eax)
 addl   $0x1,-0x4(%ebp)
 mov    -0x4(%ebp),%eax
 cmp    0x10(%ebp),%eax
 setb   %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager9AMDecryptEPvj+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AMDecrypt(void*, unsigned int) */

void __thiscall
StatisticManager::_ZN16StatisticManager9AMDecryptEPvj
          (StatisticManager *this,void *param_1,uint param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    *(byte *)((int)param_1 + local_8) = *(byte *)((int)param_1 + local_8) ^ 0x9d;
    *(byte *)((int)param_1 + local_8) =
         *(char *)((int)param_1 + local_8) << 2 |
         (byte)((int)(uint)*(byte *)((int)param_1 + local_8) >> 6);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 480 行）：

```cpp
void StatisticManager::AMDecrypt(void* data, unsigned int len)
{
    for (unsigned int i = 0; i < len; i++)
    {
        ((unsigned char*)data)[i] ^= 0x9d;
        ((unsigned char*)data)[i] = ((unsigned char*)data)[i] << 2 |
                                    ((unsigned char*)data)[i] >> 6;
    }
}
```
