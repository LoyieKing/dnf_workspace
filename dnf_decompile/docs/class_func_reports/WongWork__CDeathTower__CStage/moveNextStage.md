# moveNextStage

`_ZN8WongWork11CDeathTower6CStage13moveNextStageEj`

`WongWork::CDeathTower::CStage::moveNextStage(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x084617da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084617da  _ZN8WongWork11CDeathTower6CStage13moveNextStageEj
#           WongWork::CDeathTower::CStage::moveNextStage(unsigned int)
# range [0x084617da, 0x08461827]
084617da +0x00:  push   %ebp
084617db +0x01:  mov    %esp,%ebp
084617dd +0x03:  sub    $0x18,%esp
084617e0 +0x06:  mov    0x8(%ebp),%eax
084617e3 +0x09:  mov    %eax,(%esp)
084617e6 +0x0c:  call   08461b3e <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv>  ; WongWork::CDeathTower::CStage::checkClearStage()
084617eb +0x11:  xor    $0x1,%eax
084617ee +0x14:  test   %al,%al
084617f0 +0x16:  jne    084617fc <+0x22>
084617f2 +0x18:  mov    0x8(%ebp),%eax
084617f5 +0x1b:  mov    (%eax),%eax
084617f7 +0x1d:  cmp    0xc(%ebp),%eax
084617fa +0x20:  jb     08461803 <+0x29>
084617fc +0x22:  mov    $0x1,%eax
08461801 +0x27:  jmp    08461808 <+0x2e>
08461803 +0x29:  mov    $0x0,%eax
08461808 +0x2e:  test   %al,%al
0846180a +0x30:  je     08461813 <+0x39>
0846180c +0x32:  mov    $0x0,%eax
08461811 +0x37:  jmp    08461825 <+0x4b>
08461813 +0x39:  mov    0x8(%ebp),%eax
08461816 +0x3c:  mov    (%eax),%eax
08461818 +0x3e:  lea    0x1(%eax),%edx
0846181b +0x41:  mov    0x8(%ebp),%eax
0846181e +0x44:  mov    %edx,(%eax)
08461820 +0x46:  mov    $0x1,%eax
08461825 +0x4b:  leave
08461826 +0x4c:  ret
08461827 +0x4d:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::moveNextStage @ 0x84617da

/* WongWork::CDeathTower::CStage::moveNextStage(unsigned int) */

bool __thiscall WongWork::CDeathTower::CStage::moveNextStage(CStage *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = checkClearStage();
  if ((cVar2 == '\x01') && (*(uint *)this < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    *(int *)this = *(int *)this + 1;
  }
  return !bVar1;
}
```
