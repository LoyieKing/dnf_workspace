# execute

`_ZN11game_master12CBingoGmTest7executeEv`

`game_master::CBingoGmTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CBingoGmTest` | `0x084b35fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b35fc  _ZN11game_master12CBingoGmTest7executeEv
#           game_master::CBingoGmTest::execute()
# range [0x084b35fc, 0x084b363d]
084b35fc +0x00:  push   %ebp
084b35fd +0x01:  mov    %esp,%ebp
084b35ff +0x03:  sub    $0x28,%esp
084b3602 +0x06:  mov    0x8(%ebp),%eax
084b3605 +0x09:  mov    %eax,(%esp)
084b3608 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b360d +0x11:  mov    %eax,-0xc(%ebp)
084b3610 +0x14:  cmpl   $0x0,-0xc(%ebp)
084b3614 +0x18:  je     084b363a <+0x3e>
084b3616 +0x1a:  mov    0x8(%ebp),%eax
084b3619 +0x1d:  mov    0x8(%eax),%eax
084b361c +0x20:  test   %eax,%eax
084b361e +0x22:  jne    084b362d <+0x31>
084b3620 +0x24:  mov    0x8(%ebp),%eax
084b3623 +0x27:  mov    %eax,(%esp)
084b3626 +0x2a:  call   084b363e <_ZN11game_master12CBingoGmTest9resetDataEv>  ; game_master::CBingoGmTest::resetData()
084b362b +0x2f:  jmp    084b363b <+0x3f>
084b362d +0x31:  mov    0x8(%ebp),%eax
084b3630 +0x34:  mov    %eax,(%esp)
084b3633 +0x37:  call   084b368a <_ZN11game_master12CBingoGmTest8reqValueEv>  ; game_master::CBingoGmTest::reqValue()
084b3638 +0x3c:  jmp    084b363b <+0x3f>
084b363a +0x3e:  nop
084b363b +0x3f:  leave
084b363c +0x40:  ret
084b363d +0x41:  nop
```

## 反编译 C

```c
// game_master::CBingoGmTest::execute @ 0x84b35fc

/* game_master::CBingoGmTest::execute() */

void __thiscall game_master::CBingoGmTest::execute(CBingoGmTest *this)

{
  int iVar1;
  
  iVar1 = CCommand::GetUser((CCommand *)this);
  if (iVar1 != 0) {
    if (*(int *)(this + 8) == 0) {
      resetData(this);
    }
    else {
      reqValue(this);
    }
  }
  return;
}
```
