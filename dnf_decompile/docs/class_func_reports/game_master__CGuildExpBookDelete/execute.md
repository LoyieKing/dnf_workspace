# execute

`_ZN11game_master19CGuildExpBookDelete7executeEv`

`game_master::CGuildExpBookDelete::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CGuildExpBookDelete` | `0x084abf2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084abf2c  _ZN11game_master19CGuildExpBookDelete7executeEv
#           game_master::CGuildExpBookDelete::execute()
# range [0x084abf2c, 0x084abf4d]
084abf2c +0x00:  push   %ebp
084abf2d +0x01:  mov    %esp,%ebp
084abf2f +0x03:  sub    $0x28,%esp
084abf32 +0x06:  mov    0x8(%ebp),%eax
084abf35 +0x09:  mov    %eax,(%esp)
084abf38 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084abf3d +0x11:  mov    %eax,-0xc(%ebp)
084abf40 +0x14:  mov    -0xc(%ebp),%eax
084abf43 +0x17:  mov    %eax,(%esp)
084abf46 +0x1a:  call   0867e898 <_ZN5CUser18deleteGuildExpBookEv>  ; CUser::deleteGuildExpBook()
084abf4b +0x1f:  leave
084abf4c +0x20:  ret
084abf4d +0x21:  nop
```

## 反编译 C

```c
// game_master::CGuildExpBookDelete::execute @ 0x84abf2c

/* game_master::CGuildExpBookDelete::execute() */

void __thiscall game_master::CGuildExpBookDelete::execute(CGuildExpBookDelete *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::deleteGuildExpBook(this_00);
  return;
}
```
