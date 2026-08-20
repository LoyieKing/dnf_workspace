# reset

`_ZN9UserQuest5resetEv`

`UserQuest::reset()`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ab894` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ab894  _ZN9UserQuest5resetEv
#           UserQuest::reset()
# range [0x086ab894, 0x086ab91f]
086ab894 +0x00:  push   %ebp
086ab895 +0x01:  mov    %esp,%ebp
086ab897 +0x03:  sub    $0x28,%esp
086ab89a +0x06:  mov    0x8(%ebp),%eax
086ab89d +0x09:  movl   $0x0,(%eax)
086ab8a3 +0x0f:  mov    0x8(%ebp),%eax
086ab8a6 +0x12:  add    $0x4,%eax
086ab8a9 +0x15:  mov    %eax,(%esp)
086ab8ac +0x18:  call   0808bb06 <_ZN8WongWork11CQuestClear5clearEv>  ; WongWork::CQuestClear::clear()
086ab8b1 +0x1d:  movl   $0x0,-0xc(%ebp)
086ab8b8 +0x24:  jmp    086ab8e6 <+0x52>
086ab8ba +0x26:  mov    -0xc(%ebp),%edx
086ab8bd +0x29:  mov    0x8(%ebp),%eax
086ab8c0 +0x2c:  add    $0x1d4c,%edx
086ab8c6 +0x32:  movl   $0x0,0x8(%eax,%edx,4)
086ab8ce +0x3a:  mov    -0xc(%ebp),%edx
086ab8d1 +0x3d:  mov    0x8(%ebp),%eax
086ab8d4 +0x40:  add    $0x1d60,%edx
086ab8da +0x46:  movl   $0x0,0x8(%eax,%edx,4)
086ab8e2 +0x4e:  addl   $0x1,-0xc(%ebp)
086ab8e6 +0x52:  cmpl   $0x13,-0xc(%ebp)
086ab8ea +0x56:  setle  %al
086ab8ed +0x59:  test   %al,%al
086ab8ef +0x5b:  jne    086ab8ba <+0x26>
086ab8f1 +0x5d:  mov    0x8(%ebp),%eax
086ab8f4 +0x60:  movl   $0xffffffff,0x75f0(%eax)
086ab8fe +0x6a:  mov    0x8(%ebp),%eax
086ab901 +0x6d:  add    $0x75f4,%eax
086ab906 +0x72:  movl   $0x28,0x8(%esp)
086ab90e +0x7a:  movl   $0x0,0x4(%esp)
086ab916 +0x82:  mov    %eax,(%esp)
086ab919 +0x85:  call   0807dcc0 <_init+0x5b8>
086ab91e +0x8a:  leave
086ab91f +0x8b:  ret
```

## 反编译 C

```c
// UserQuest::reset @ 0x86ab894

/* UserQuest::reset() */

void __thiscall UserQuest::reset(UserQuest *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  WongWork::CQuestClear::clear((CQuestClear *)(this + 4));
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x1d4c) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8) = 0;
  }
  *(undefined4 *)(this + 0x75f0) = 0xffffffff;
  memset(this + 0x75f4,0,0x28);
  return;
}
```
