# UnregistDispatcher

`_ZN6DBTask18UnregistDispatcherEv`

`DBTask::UnregistDispatcher()`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083ff156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff156  _ZN6DBTask18UnregistDispatcherEv
#           DBTask::UnregistDispatcher()
# range [0x083ff156, 0x083ff1c7]
083ff156 +0x00:  push   %ebp
083ff157 +0x01:  mov    %esp,%ebp
083ff159 +0x03:  sub    $0x28,%esp
083ff15c +0x06:  movl   $0x0,-0xc(%ebp)
083ff163 +0x0d:  jmp    083ff1b3 <+0x5d>
083ff165 +0x0f:  mov    -0xc(%ebp),%edx
083ff168 +0x12:  mov    0x8(%ebp),%eax
083ff16b +0x15:  mov    0x4(%eax,%edx,4),%eax
083ff16f +0x19:  test   %eax,%eax
083ff171 +0x1b:  je     083ff1af <+0x59>
083ff173 +0x1d:  mov    -0xc(%ebp),%edx
083ff176 +0x20:  mov    0x8(%ebp),%eax
083ff179 +0x23:  mov    0x4(%eax,%edx,4),%eax
083ff17d +0x27:  test   %eax,%eax
083ff17f +0x29:  je     083ff1a1 <+0x4b>
083ff181 +0x2b:  mov    -0xc(%ebp),%edx
083ff184 +0x2e:  mov    0x8(%ebp),%eax
083ff187 +0x31:  mov    0x4(%eax,%edx,4),%eax
083ff18b +0x35:  mov    (%eax),%eax
083ff18d +0x37:  add    $0x8,%eax
083ff190 +0x3a:  mov    (%eax),%ecx
083ff192 +0x3c:  mov    -0xc(%ebp),%edx
083ff195 +0x3f:  mov    0x8(%ebp),%eax
083ff198 +0x42:  mov    0x4(%eax,%edx,4),%eax
083ff19c +0x46:  mov    %eax,(%esp)
083ff19f +0x49:  call   *%ecx
083ff1a1 +0x4b:  mov    -0xc(%ebp),%edx
083ff1a4 +0x4e:  mov    0x8(%ebp),%eax
083ff1a7 +0x51:  movl   $0x0,0x4(%eax,%edx,4)
083ff1af +0x59:  addl   $0x1,-0xc(%ebp)
083ff1b3 +0x5d:  cmpl   $0x353,-0xc(%ebp)
083ff1ba +0x64:  setle  %al
083ff1bd +0x67:  test   %al,%al
083ff1bf +0x69:  jne    083ff165 <+0xf>
083ff1c1 +0x6b:  mov    $0x1,%eax
083ff1c6 +0x70:  leave
083ff1c7 +0x71:  ret
```

## 反编译 C

```c
// DBTask::UnregistDispatcher @ 0x83ff156

/* DBTask::UnregistDispatcher() */

undefined4 __thiscall DBTask::UnregistDispatcher(DBTask *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x354; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4 + 4) != 0) {
      if (*(int *)(this + local_10 * 4 + 4) != 0) {
        (**(code **)(**(int **)(this + local_10 * 4 + 4) + 8))
                  (*(undefined4 *)(this + local_10 * 4 + 4));
      }
      *(undefined4 *)(this + local_10 * 4 + 4) = 0;
    }
  }
  return 1;
}
```
