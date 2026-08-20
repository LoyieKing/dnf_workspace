# empty_progress

`_ZNK19CMissionList_Charac14empty_progressEv`

`CMissionList_Charac::empty_progress() const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5724  _ZNK19CMissionList_Charac14empty_progressEv
#           CMissionList_Charac::empty_progress() const
# range [0x085e5724, 0x085e575f]
085e5724 +0x00:  push   %ebp
085e5725 +0x01:  mov    %esp,%ebp
085e5727 +0x03:  sub    $0x10,%esp
085e572a +0x06:  movl   $0x1,-0x4(%ebp)
085e5731 +0x0d:  jmp    085e574e <+0x2a>
085e5733 +0x0f:  mov    -0x4(%ebp),%edx
085e5736 +0x12:  mov    0x8(%ebp),%eax
085e5739 +0x15:  movzwl 0x7(%eax,%edx,8),%eax
085e573e +0x1a:  test   %ax,%ax
085e5741 +0x1d:  je     085e574a <+0x26>
085e5743 +0x1f:  mov    $0x0,%eax
085e5748 +0x24:  jmp    085e575e <+0x3a>
085e574a +0x26:  addl   $0x1,-0x4(%ebp)
085e574e +0x2a:  cmpl   $0x23,-0x4(%ebp)
085e5752 +0x2e:  setle  %al
085e5755 +0x31:  test   %al,%al
085e5757 +0x33:  jne    085e5733 <+0xf>
085e5759 +0x35:  mov    $0x1,%eax
085e575e +0x3a:  leave
085e575f +0x3b:  ret
```

## 反编译 C

```c
// CMissionList_Charac::empty_progress @ 0x85e5724

/* CMissionList_Charac::empty_progress() const */

undefined4 __thiscall CMissionList_Charac::empty_progress(CMissionList_Charac *this)

{
  int local_8;
  
  local_8 = 1;
  while( true ) {
    if (0x23 < local_8) {
      return 1;
    }
    if (*(short *)(this + local_8 * 8 + 7) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```
