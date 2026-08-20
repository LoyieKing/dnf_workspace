# truncate_charac_action_point_desc

`_ZN11sync_script11CSyncScript33truncate_charac_action_point_descEv`

`sync_script::CSyncScript::truncate_charac_action_point_desc()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625d96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625d96  _ZN11sync_script11CSyncScript33truncate_charac_action_point_descEv
#           sync_script::CSyncScript::truncate_charac_action_point_desc()
# range [0x08625d96, 0x08625db7]
08625d96 +0x00:  push   %ebp
08625d97 +0x01:  mov    %esp,%ebp
08625d99 +0x03:  sub    $0x8,%esp
08625d9c +0x06:  mov    0x8(%ebp),%eax
08625d9f +0x09:  movzbl (%eax),%eax
08625da2 +0x0c:  xor    $0x1,%eax
08625da5 +0x0f:  test   %al,%al
08625da7 +0x11:  je     08625db0 <+0x1a>
08625da9 +0x13:  mov    $0x1,%eax
08625dae +0x18:  jmp    08625db5 <+0x1f>
08625db0 +0x1a:  call   0812262a <_ZN8APSystem11CSyncScript17TruncateDescTableEv>  ; APSystem::CSyncScript::TruncateDescTable()
08625db5 +0x1f:  leave
08625db6 +0x20:  ret
08625db7 +0x21:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_charac_action_point_desc @ 0x8625d96

/* sync_script::CSyncScript::truncate_charac_action_point_desc() */

undefined4 __thiscall sync_script::CSyncScript::truncate_charac_action_point_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = APSystem::CSyncScript::TruncateDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
