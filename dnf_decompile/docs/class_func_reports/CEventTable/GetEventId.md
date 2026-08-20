# GetEventId

`_ZN11CEventTable10GetEventIdEi`

`CEventTable::GetEventId(int)`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a11e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a11e  _ZN11CEventTable10GetEventIdEi
#           CEventTable::GetEventId(int)
# range [0x0811a11e, 0x0811a15c]
0811a11e +0x00:  push   %ebp
0811a11f +0x01:  mov    %esp,%ebp
0811a121 +0x03:  cmpl   $0x0,0x8(%ebp)
0811a125 +0x07:  js     0811a131 <+0x13>
0811a127 +0x09:  call   0811a0d4 <_ZN11CEventTable18GetEventTableCountEv>  ; CEventTable::GetEventTableCount()
0811a12c +0x0e:  cmp    0x8(%ebp),%eax
0811a12f +0x11:  jg     0811a138 <+0x1a>
0811a131 +0x13:  mov    $0x1,%eax
0811a136 +0x18:  jmp    0811a13d <+0x1f>
0811a138 +0x1a:  mov    $0x0,%eax
0811a13d +0x1f:  test   %al,%al
0811a13f +0x21:  je     0811a148 <+0x2a>
0811a141 +0x23:  mov    $0x0,%eax
0811a146 +0x28:  jmp    0811a15b <+0x3d>
0811a148 +0x2a:  mov    0x8(%ebp),%edx
0811a14b +0x2d:  mov    %edx,%eax
0811a14d +0x2f:  shl    $0x2,%eax
0811a150 +0x32:  add    %edx,%eax
0811a152 +0x34:  shl    $0x2,%eax
0811a155 +0x37:  mov    &events(%eax),%eax
0811a15b +0x3d:  pop    %ebp
0811a15c +0x3e:  ret
```

## 反编译 C

```c
// CEventTable::GetEventId @ 0x811a11e

/* CEventTable::GetEventId(int) */

undefined4 CEventTable::GetEventId(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (-1 < param_1) {
    iVar2 = GetEventTableCount();
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0811a13d;
    }
  }
  bVar1 = true;
LAB_0811a13d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(events + param_1 * 0x14);
  }
  return uVar3;
}
```
