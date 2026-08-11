# _ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog

`CGuildCargo::GetHistory(STGuildCargoLog*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a025a` | `0xa5` | `0x8092592` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+push   %ebx
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
-lea    0x18e8(%eax),%edx
-lea    -0x2c(%ebp),%eax
+add    $0x18e8,%eax
+mov    %eax,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
+lea    -0x30(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE5beginEv>
 sub    $0x4,%esp
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0x6f>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0x72>
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt15_Deque_iteratorI15STGuildCargoLogRS0_PS0_EdeEv>
 mov    %eax,%ecx
+mov    0xc(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
-add    0xc(%ebp),%eax
+lea    (%ebx,%eax,1),%eax
 movl   $0x30,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt15_Deque_iteratorI15STGuildCargoLogRS0_PS0_EppEv>
 addl   $0x1,-0xc(%ebp)
-cmpl   $0x32,-0xc(%ebp)
-jg     <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0xa2>
-mov    0x8(%ebp),%eax
-lea    0x18e8(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZStneI15STGuildCargoLogRS0_PS0_EbRKSt15_Deque_iteratorIT_T0_T1_ES9_>
 test   %al,%al
-jne    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0x2a>
-jmp    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0xa3>
-nop
+je     <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0xaa>
+cmpl   $0x32,-0xc(%ebp)
+jg     <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0xaa>
+mov    $0x1,%eax
+jmp    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0xaf>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog+0x30>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::GetHistory(STGuildCargoLog*) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog
          (CGuildCargo *this,STGuildCargoLog *param_1)

{
  bool bVar1;
  void *__src;
  _Deque_iterator<STGuildCargoLog,STGuildCargoLog&,STGuildCargoLog*> local_30 [16];
  _Deque_iterator local_20 [16];
  int local_10;
  
  std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::begin();
  local_10 = 0;
  do {
    std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::end();
    bVar1 = std::operator!=((_Deque_iterator *)local_30,local_20);
    if (!bVar1) {
      return;
    }
    __src = (void *)std::_Deque_iterator<STGuildCargoLog,STGuildCargoLog&,STGuildCargoLog*>::
                    operator*(local_30);
    memcpy(param_1 + local_10 * 0x30,__src,0x30);
    std::_Deque_iterator<STGuildCargoLog,STGuildCargoLog&,STGuildCargoLog*>::operator++(local_30);
    local_10 = local_10 + 1;
  } while (local_10 < 0x33);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 430 行）：

```cpp
void CGuildCargo::GetHistory(STGuildCargoLog* out)
{
    std::deque<STGuildCargoLog>* hist =
        (std::deque<STGuildCargoLog>*)((char*)this + 0x18e8);
    int i = 0;
    for (std::deque<STGuildCargoLog>::iterator it = hist->begin();
         it != hist->end() && i < 0x33; ++it, ++i)
    {
        memcpy((char*)out + i * 0x30, &(*it), 0x30);
    }
}
```
