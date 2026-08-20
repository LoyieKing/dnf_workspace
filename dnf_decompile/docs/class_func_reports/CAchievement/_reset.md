# _reset

`_ZN12CAchievement6_resetEv`

`CAchievement::_reset()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c676  _ZN12CAchievement6_resetEv
#           CAchievement::_reset()
# range [0x0828c676, 0x0828c6a3]
0828c676 +0x00:  push   %ebp
0828c677 +0x01:  mov    %esp,%ebp
0828c679 +0x03:  sub    $0x18,%esp
0828c67c +0x06:  mov    0x8(%ebp),%eax
0828c67f +0x09:  movl   $0x0,0x8(%eax)
0828c686 +0x10:  mov    0x8(%ebp),%eax
0828c689 +0x13:  add    $0xc,%eax
0828c68c +0x16:  mov    %eax,(%esp)
0828c68f +0x19:  call   0828e12c <_GLOBAL__I__ZN12CAchievementC2Ev+0x8d9>  ; global constructors keyed to CAchievement::CAchievement()+0x8d9
0828c694 +0x1e:  mov    0x8(%ebp),%eax
0828c697 +0x21:  movb   $0x0,0x24(%eax)
0828c69b +0x25:  mov    0x8(%ebp),%eax
0828c69e +0x28:  movb   $0x0,0x25(%eax)
0828c6a2 +0x2c:  leave
0828c6a3 +0x2d:  ret
```

## 反编译 C

```c
// CAchievement::_reset @ 0x828c676

/* CAchievement::_reset() */

void __thiscall CAchievement::_reset(CAchievement *this)

{
  *(undefined4 *)(this + 8) = 0;
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::clear((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
           *)(this + 0xc));
  this[0x24] = (CAchievement)0x0;
  this[0x25] = (CAchievement)0x0;
  return;
}
```
