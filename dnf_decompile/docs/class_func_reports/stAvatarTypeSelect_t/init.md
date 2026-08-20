# init

`_ZN20stAvatarTypeSelect_t4initEv`

`stAvatarTypeSelect_t::init()`

| 类 | 地址 |
|---|---|
| `stAvatarTypeSelect_t` | `0x0898d1fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d1fc  _ZN20stAvatarTypeSelect_t4initEv
#           stAvatarTypeSelect_t::init()
# range [0x0898d1fc, 0x0898d25d]
0898d1fc +0x00:  push   %ebp
0898d1fd +0x01:  mov    %esp,%ebp
0898d1ff +0x03:  sub    $0x10,%esp
0898d202 +0x06:  mov    0x8(%ebp),%eax
0898d205 +0x09:  movl   $0x0,(%eax)
0898d20b +0x0f:  mov    0x8(%ebp),%eax
0898d20e +0x12:  movl   $0x0,0x4(%eax)
0898d215 +0x19:  mov    0x8(%ebp),%eax
0898d218 +0x1c:  movl   $0x0,0x8(%eax)
0898d21f +0x23:  mov    0x8(%ebp),%eax
0898d222 +0x26:  movl   $0x0,0xc(%eax)
0898d229 +0x2d:  mov    0x8(%ebp),%eax
0898d22c +0x30:  movl   $0x0,0x10(%eax)
0898d233 +0x37:  movl   $0x0,-0x4(%ebp)
0898d23a +0x3e:  jmp    0898d250 <+0x54>
0898d23c +0x40:  mov    -0x4(%ebp),%edx
0898d23f +0x43:  mov    0x8(%ebp),%eax
0898d242 +0x46:  add    $0x8,%edx
0898d245 +0x49:  movw   $0x0,0x4(%eax,%edx,2)
0898d24c +0x50:  addl   $0x1,-0x4(%ebp)
0898d250 +0x54:  cmpl   $0x4,-0x4(%ebp)
0898d254 +0x58:  setle  %al
0898d257 +0x5b:  test   %al,%al
0898d259 +0x5d:  jne    0898d23c <+0x40>
0898d25b +0x5f:  leave
0898d25c +0x60:  ret
0898d25d +0x61:  nop
```

## 反编译 C

```c
// stAvatarTypeSelect_t::init @ 0x898d1fc

/* stAvatarTypeSelect_t::init() */

void __thiscall stAvatarTypeSelect_t::init(stAvatarTypeSelect_t *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(this + (local_8 + 8) * 2 + 4) = 0;
  }
  return;
}
```
