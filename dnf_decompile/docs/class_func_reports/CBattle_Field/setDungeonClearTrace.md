# setDungeonClearTrace

`_ZN13CBattle_Field20setDungeonClearTraceEiiii`

`CBattle_Field::setDungeonClearTrace(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830107e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830107e  _ZN13CBattle_Field20setDungeonClearTraceEiiii
#           CBattle_Field::setDungeonClearTrace(int, int, int, int)
# range [0x0830107e, 0x083010ed]
0830107e +0x00:  push   %ebp
0830107f +0x01:  mov    %esp,%ebp
08301081 +0x03:  sub    $0x18,%esp
08301084 +0x06:  mov    0x8(%ebp),%eax
08301087 +0x09:  lea    0x158(%eax),%edx
0830108d +0x0f:  mov    0xc(%ebp),%eax
08301090 +0x12:  mov    %eax,0x4(%esp)
08301094 +0x16:  mov    %edx,(%esp)
08301097 +0x19:  call   082fee04 <_ZN19CDungeonClearTracer8SetMapIdEi>  ; CDungeonClearTracer::SetMapId(int)
0830109c +0x1e:  mov    0x8(%ebp),%eax
0830109f +0x21:  lea    0x158(%eax),%edx
083010a5 +0x27:  mov    0x10(%ebp),%eax
083010a8 +0x2a:  mov    %eax,0x4(%esp)
083010ac +0x2e:  mov    %edx,(%esp)
083010af +0x31:  call   082fee12 <_ZN19CDungeonClearTracer15SetMaxBossCountEi>  ; CDungeonClearTracer::SetMaxBossCount(int)
083010b4 +0x36:  mov    0x8(%ebp),%eax
083010b7 +0x39:  lea    0x158(%eax),%edx
083010bd +0x3f:  mov    0x14(%ebp),%eax
083010c0 +0x42:  mov    %eax,0x4(%esp)
083010c4 +0x46:  mov    %edx,(%esp)
083010c7 +0x49:  call   082fee20 <_ZN19CDungeonClearTracer18SetKilledBossCountEi>  ; CDungeonClearTracer::SetKilledBossCount(int)
083010cc +0x4e:  mov    0x8(%ebp),%eax
083010cf +0x51:  lea    0x158(%eax),%edx
083010d5 +0x57:  mov    0x18(%ebp),%eax
083010d8 +0x5a:  mov    %eax,0x4(%esp)
083010dc +0x5e:  mov    %edx,(%esp)
083010df +0x61:  call   082fee3c <_ZN19CDungeonClearTracer21SetKilledMonsterCountEi>  ; CDungeonClearTracer::SetKilledMonsterCount(int)
083010e4 +0x66:  movl   $0x0,-0x4(%ebp)
083010eb +0x6d:  leave
083010ec +0x6e:  ret
083010ed +0x6f:  nop
```

## 反编译 C

```c
// CBattle_Field::setDungeonClearTrace @ 0x830107e

/* CBattle_Field::setDungeonClearTrace(int, int, int, int) */

void __thiscall
CBattle_Field::setDungeonClearTrace
          (CBattle_Field *this,int param_1,int param_2,int param_3,int param_4)

{
  CDungeonClearTracer::SetMapId((CDungeonClearTracer *)(this + 0x158),param_1);
  CDungeonClearTracer::SetMaxBossCount((CDungeonClearTracer *)(this + 0x158),param_2);
  CDungeonClearTracer::SetKilledBossCount((CDungeonClearTracer *)(this + 0x158),param_3);
  CDungeonClearTracer::SetKilledMonsterCount((CDungeonClearTracer *)(this + 0x158),param_4);
  return;
}
```
