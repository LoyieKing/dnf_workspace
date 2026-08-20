# loadData

`_ZN19CCharacBloodDungeon8loadDataEP5CUserPc`

`CCharacBloodDungeon::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CCharacBloodDungeon` | `0x0832a4c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a4c6  _ZN19CCharacBloodDungeon8loadDataEP5CUserPc
#           CCharacBloodDungeon::loadData(CUser*, char*)
# range [0x0832a4c6, 0x0832a539]
0832a4c6 +0x00:  push   %ebp
0832a4c7 +0x01:  mov    %esp,%ebp
0832a4c9 +0x03:  sub    $0x10,%esp
0832a4cc +0x06:  mov    0x10(%ebp),%eax
0832a4cf +0x09:  mov    %eax,-0x4(%ebp)
0832a4d2 +0x0c:  mov    -0x4(%ebp),%eax
0832a4d5 +0x0f:  mov    0x4(%eax),%edx
0832a4d8 +0x12:  mov    0x8(%ebp),%eax
0832a4db +0x15:  mov    %edx,0x8(%eax)
0832a4de +0x18:  mov    -0x4(%ebp),%eax
0832a4e1 +0x1b:  mov    0x8(%eax),%edx
0832a4e4 +0x1e:  mov    0x8(%ebp),%eax
0832a4e7 +0x21:  mov    %edx,0xc(%eax)
0832a4ea +0x24:  mov    -0x4(%ebp),%eax
0832a4ed +0x27:  mov    0xc(%eax),%edx
0832a4f0 +0x2a:  mov    0x8(%ebp),%eax
0832a4f3 +0x2d:  mov    %edx,0x10(%eax)
0832a4f6 +0x30:  mov    -0x4(%ebp),%eax
0832a4f9 +0x33:  mov    0x10(%eax),%edx
0832a4fc +0x36:  mov    0x8(%ebp),%eax
0832a4ff +0x39:  mov    %edx,0x14(%eax)
0832a502 +0x3c:  mov    -0x4(%ebp),%eax
0832a505 +0x3f:  mov    0x14(%eax),%edx
0832a508 +0x42:  mov    0x8(%ebp),%eax
0832a50b +0x45:  mov    %edx,0x18(%eax)
0832a50e +0x48:  mov    -0x4(%ebp),%eax
0832a511 +0x4b:  mov    0x18(%eax),%edx
0832a514 +0x4e:  mov    0x8(%ebp),%eax
0832a517 +0x51:  mov    %edx,0x1c(%eax)
0832a51a +0x54:  mov    -0x4(%ebp),%eax
0832a51d +0x57:  mov    0x20(%eax),%edx
0832a520 +0x5a:  mov    0x8(%ebp),%eax
0832a523 +0x5d:  mov    %edx,0x24(%eax)
0832a526 +0x60:  mov    -0x4(%ebp),%eax
0832a529 +0x63:  mov    0x24(%eax),%edx
0832a52c +0x66:  mov    0x8(%ebp),%eax
0832a52f +0x69:  mov    %edx,0x28(%eax)
0832a532 +0x6c:  mov    $0x1,%eax
0832a537 +0x71:  leave
0832a538 +0x72:  ret
0832a539 +0x73:  nop
```

## 反编译 C

```c
// CCharacBloodDungeon::loadData @ 0x832a4c6

/* CCharacBloodDungeon::loadData(CUser*, char*) */

undefined4 __thiscall
CCharacBloodDungeon::loadData(CCharacBloodDungeon *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 0x24);
  return 1;
}
```
