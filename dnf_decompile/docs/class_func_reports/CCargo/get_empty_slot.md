# get_empty_slot

`_ZNK6CCargo14get_empty_slotEv`

`CCargo::get_empty_slot() const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c406` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c406  _ZNK6CCargo14get_empty_slotEv
#           CCargo::get_empty_slot() const
# range [0x0850c406, 0x0850c461]
0850c406 +0x00:  push   %ebp
0850c407 +0x01:  mov    %esp,%ebp
0850c409 +0x03:  sub    $0x28,%esp
0850c40c +0x06:  movl   $0x0,-0xc(%ebp)
0850c413 +0x0d:  jmp    0850c42f <+0x29>
0850c415 +0x0f:  mov    0x8(%ebp),%eax
0850c418 +0x12:  mov    0x4(%eax),%edx
0850c41b +0x15:  mov    -0xc(%ebp),%eax
0850c41e +0x18:  imul   $0x3d,%eax,%eax
0850c421 +0x1b:  lea    (%edx,%eax,1),%eax
0850c424 +0x1e:  mov    0x2(%eax),%eax
0850c427 +0x21:  test   %eax,%eax
0850c429 +0x23:  je     0850c43f <+0x39>
0850c42b +0x25:  addl   $0x1,-0xc(%ebp)
0850c42f +0x29:  cmpl   $0x97,-0xc(%ebp)
0850c436 +0x30:  setle  %al
0850c439 +0x33:  test   %al,%al
0850c43b +0x35:  jne    0850c415 <+0xf>
0850c43d +0x37:  jmp    0850c440 <+0x3a>
0850c43f +0x39:  nop
0850c440 +0x3a:  mov    -0xc(%ebp),%eax
0850c443 +0x3d:  mov    %eax,0x4(%esp)
0850c447 +0x41:  mov    0x8(%ebp),%eax
0850c44a +0x44:  mov    %eax,(%esp)
0850c44d +0x47:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850c452 +0x4c:  test   %al,%al
0850c454 +0x4e:  je     0850c45b <+0x55>
0850c456 +0x50:  mov    -0xc(%ebp),%eax
0850c459 +0x53:  jmp    0850c460 <+0x5a>
0850c45b +0x55:  mov    $0xffffffff,%eax
0850c460 +0x5a:  leave
0850c461 +0x5b:  ret
```

## 反编译 C

```c
// CCargo::get_empty_slot @ 0x850c406

/* CCargo::get_empty_slot() const */

int __thiscall CCargo::get_empty_slot(CCargo *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while ((local_10 < 0x98 && (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) != 0))) {
    local_10 = local_10 + 1;
  }
  cVar1 = IsOperatorable(this,local_10);
  if (cVar1 == '\0') {
    local_10 = -1;
  }
  return local_10;
}
```
