# setLevel

`_ZN11game_master8CLevelUp8setLevelEi`

`game_master::CLevelUp::setLevel(int)`

| 类 | 地址 |
|---|---|
| `game_master::CLevelUp` | `0x084b395c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b395c  _ZN11game_master8CLevelUp8setLevelEi
#           game_master::CLevelUp::setLevel(int)
# range [0x084b395c, 0x084b398d]
084b395c +0x00:  push   %ebp
084b395d +0x01:  mov    %esp,%ebp
084b395f +0x03:  cmpl   $0x46,0xc(%ebp)
084b3963 +0x07:  jle    084b3971 <+0x15>
084b3965 +0x09:  mov    0x8(%ebp),%eax
084b3968 +0x0c:  movl   $0x46,0x8(%eax)
084b396f +0x13:  jmp    084b398c <+0x30>
084b3971 +0x15:  cmpl   $0x0,0xc(%ebp)
084b3975 +0x19:  jg     084b3983 <+0x27>
084b3977 +0x1b:  mov    0x8(%ebp),%eax
084b397a +0x1e:  movl   $0x1,0x8(%eax)
084b3981 +0x25:  jmp    084b398c <+0x30>
084b3983 +0x27:  mov    0x8(%ebp),%eax
084b3986 +0x2a:  mov    0xc(%ebp),%edx
084b3989 +0x2d:  mov    %edx,0x8(%eax)
084b398c +0x30:  pop    %ebp
084b398d +0x31:  ret
```

## 反编译 C

```c
// game_master::CLevelUp::setLevel @ 0x84b395c

/* game_master::CLevelUp::setLevel(int) */

void __thiscall game_master::CLevelUp::setLevel(CLevelUp *this,int param_1)

{
  if (param_1 < 0x47) {
    if (param_1 < 1) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      *(int *)(this + 8) = param_1;
    }
  }
  else {
    *(undefined4 *)(this + 8) = 0x46;
  }
  return;
}
```
