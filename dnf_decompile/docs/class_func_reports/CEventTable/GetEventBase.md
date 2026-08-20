# GetEventBase

`_ZN11CEventTable12GetEventBaseEi`

`CEventTable::GetEventBase(int)`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a0de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a0de  _ZN11CEventTable12GetEventBaseEi
#           CEventTable::GetEventBase(int)
# range [0x0811a0de, 0x0811a11d]
0811a0de +0x00:  push   %ebp
0811a0df +0x01:  mov    %esp,%ebp
0811a0e1 +0x03:  cmpl   $0x0,0x8(%ebp)
0811a0e5 +0x07:  js     0811a0f1 <+0x13>
0811a0e7 +0x09:  call   0811a0d4 <_ZN11CEventTable18GetEventTableCountEv>  ; CEventTable::GetEventTableCount()
0811a0ec +0x0e:  cmp    0x8(%ebp),%eax
0811a0ef +0x11:  jg     0811a0f8 <+0x1a>
0811a0f1 +0x13:  mov    $0x1,%eax
0811a0f6 +0x18:  jmp    0811a0fd <+0x1f>
0811a0f8 +0x1a:  mov    $0x0,%eax
0811a0fd +0x1f:  test   %al,%al
0811a0ff +0x21:  je     0811a108 <+0x2a>
0811a101 +0x23:  mov    $0x0,%eax
0811a106 +0x28:  jmp    0811a11b <+0x3d>
0811a108 +0x2a:  mov    0x8(%ebp),%edx
0811a10b +0x2d:  mov    %edx,%eax
0811a10d +0x2f:  shl    $0x2,%eax
0811a110 +0x32:  add    %edx,%eax
0811a112 +0x34:  shl    $0x2,%eax
0811a115 +0x37:  mov    &events+0x8(%eax),%eax
0811a11b +0x3d:  pop    %ebp
0811a11c +0x3e:  ret
0811a11d +0x3f:  nop
```

## 反编译 C

```c
// CEventTable::GetEventBase @ 0x811a0de

/* CEventTable::GetEventBase(int) */

undefined4 CEventTable::GetEventBase(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (-1 < param_1) {
    iVar2 = GetEventTableCount();
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0811a0fd;
    }
  }
  bVar1 = true;
LAB_0811a0fd:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(events + param_1 * 0x14 + 8);
  }
  return uVar3;
}
```
