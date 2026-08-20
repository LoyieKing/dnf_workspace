# IsDoingQuest

`_ZNK9UserQuest12IsDoingQuestEi`

`UserQuest::IsDoingQuest(int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086acffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086acffe  _ZNK9UserQuest12IsDoingQuestEi
#           UserQuest::IsDoingQuest(int) const
# range [0x086acffe, 0x086ad053]
086acffe +0x00:  push   %ebp
086acfff +0x01:  mov    %esp,%ebp
086ad001 +0x03:  sub    $0x10,%esp
086ad004 +0x06:  movl   $0x0,-0x4(%ebp)
086ad00b +0x0d:  jmp    086ad041 <+0x43>
086ad00d +0x0f:  mov    -0x4(%ebp),%edx
086ad010 +0x12:  mov    0x8(%ebp),%eax
086ad013 +0x15:  add    $0x1d4c,%edx
086ad019 +0x1b:  mov    0x8(%eax,%edx,4),%eax
086ad01d +0x1f:  cmp    0xc(%ebp),%eax
086ad020 +0x22:  jne    086ad03d <+0x3f>
086ad022 +0x24:  mov    -0x4(%ebp),%edx
086ad025 +0x27:  mov    0x8(%ebp),%eax
086ad028 +0x2a:  add    $0x1d60,%edx
086ad02e +0x30:  mov    0x8(%eax,%edx,4),%eax
086ad032 +0x34:  test   %eax,%eax
086ad034 +0x36:  je     086ad03d <+0x3f>
086ad036 +0x38:  mov    $0x1,%eax
086ad03b +0x3d:  jmp    086ad051 <+0x53>
086ad03d +0x3f:  addl   $0x1,-0x4(%ebp)
086ad041 +0x43:  cmpl   $0x13,-0x4(%ebp)
086ad045 +0x47:  setle  %al
086ad048 +0x4a:  test   %al,%al
086ad04a +0x4c:  jne    086ad00d <+0xf>
086ad04c +0x4e:  mov    $0x0,%eax
086ad051 +0x53:  leave
086ad052 +0x54:  ret
086ad053 +0x55:  nop
```

## 反编译 C

```c
// UserQuest::IsDoingQuest @ 0x86acffe

/* UserQuest::IsDoingQuest(int) const */

undefined4 __thiscall UserQuest::IsDoingQuest(UserQuest *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x13 < local_8) {
      return 0;
    }
    if ((*(int *)(this + (local_8 + 0x1d4c) * 4 + 8) == param_1) &&
       (*(int *)(this + (local_8 + 0x1d60) * 4 + 8) != 0)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
