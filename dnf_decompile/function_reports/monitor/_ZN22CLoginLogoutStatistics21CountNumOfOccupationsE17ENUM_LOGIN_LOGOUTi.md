# _ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi

`CLoginLogoutStatistics::CountNumOfOccupations(ENUM_LOGIN_LOGOUT, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a65fa` | `0x2b` | `0x80966b2` | `0x2b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi+0x17>
+mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
 mov    %edx,0xac(%eax)
 jmp    <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi+0x29>
 cmpl   $0x4,0xc(%ebp)
 jne    <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi+0x29>
+mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
 mov    %edx,0xb0(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CLoginLogoutStatistics::CountNumOfOccupations(ENUM_LOGIN_LOGOUT, int) */

void __thiscall
CLoginLogoutStatistics::_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi
          (CLoginLogoutStatistics *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(this + 0xac) = param_3;
  }
  else if (param_2 == 4) {
    *(undefined4 *)(this + 0xb0) = param_3;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 96 行）：

```cpp
void CLoginLogoutStatistics::CountNumOfOccupations(ENUM_LOGIN_LOGOUT type, int value)
{
    if ((int)type == 0)
    {
        m_fieldac = (unsigned int)value;
    }
    else if ((int)type == 4)
    {
        m_fieldb0 = (unsigned int)value;
    }
}
```
