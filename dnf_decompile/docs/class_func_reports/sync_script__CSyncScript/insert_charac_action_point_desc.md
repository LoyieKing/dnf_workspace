# insert_charac_action_point_desc

`_ZN11sync_script11CSyncScript31insert_charac_action_point_descEv`

`sync_script::CSyncScript::insert_charac_action_point_desc()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625db8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625db8  _ZN11sync_script11CSyncScript31insert_charac_action_point_descEv
#           sync_script::CSyncScript::insert_charac_action_point_desc()
# range [0x08625db8, 0x08625dd9]
08625db8 +0x00:  push   %ebp
08625db9 +0x01:  mov    %esp,%ebp
08625dbb +0x03:  sub    $0x8,%esp
08625dbe +0x06:  mov    0x8(%ebp),%eax
08625dc1 +0x09:  movzbl (%eax),%eax
08625dc4 +0x0c:  xor    $0x1,%eax
08625dc7 +0x0f:  test   %al,%al
08625dc9 +0x11:  je     08625dd2 <+0x1a>
08625dcb +0x13:  mov    $0x1,%eax
08625dd0 +0x18:  jmp    08625dd7 <+0x1f>
08625dd2 +0x1a:  call   0812268c <_ZN8APSystem11CSyncScript15InsertDescTableEv>  ; APSystem::CSyncScript::InsertDescTable()
08625dd7 +0x1f:  leave
08625dd8 +0x20:  ret
08625dd9 +0x21:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_charac_action_point_desc @ 0x8625db8

/* sync_script::CSyncScript::insert_charac_action_point_desc() */

undefined4 __thiscall sync_script::CSyncScript::insert_charac_action_point_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = APSystem::CSyncScript::InsertDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
