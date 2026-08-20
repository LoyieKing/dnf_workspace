# Reset

`_ZN7WarRoom5ResetEv`

`WarRoom::Reset()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086baa14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086baa14  _ZN7WarRoom5ResetEv
#           WarRoom::Reset()
# range [0x086baa14, 0x086baa8d]
086baa14 +0x00:  push   %ebp
086baa15 +0x01:  mov    %esp,%ebp
086baa17 +0x03:  sub    $0x28,%esp
086baa1a +0x06:  mov    0x8(%ebp),%eax
086baa1d +0x09:  mov    %eax,(%esp)
086baa20 +0x0c:  call   086baa8e <_ZN7WarRoom11BattleResetEv>  ; WarRoom::BattleReset()
086baa25 +0x11:  mov    0x8(%ebp),%eax
086baa28 +0x14:  movb   $0x0,0x8(%eax)
086baa2c +0x18:  mov    0x8(%ebp),%eax
086baa2f +0x1b:  movb   $0x2,(%eax)
086baa32 +0x1e:  mov    0x8(%ebp),%eax
086baa35 +0x21:  movb   $0x0,0x1(%eax)
086baa39 +0x25:  mov    0x8(%ebp),%eax
086baa3c +0x28:  movb   $0x0,0x30(%eax)
086baa40 +0x2c:  movl   $0x0,-0xc(%ebp)
086baa47 +0x33:  jmp    086baa80 <+0x6c>
086baa49 +0x35:  mov    -0xc(%ebp),%edx
086baa4c +0x38:  mov    0x8(%ebp),%eax
086baa4f +0x3b:  add    $0x48,%edx
086baa52 +0x3e:  movl   $0x0,0xc(%eax,%edx,4)
086baa5a +0x46:  mov    -0xc(%ebp),%edx
086baa5d +0x49:  mov    0x8(%ebp),%eax
086baa60 +0x4c:  add    $0x50,%edx
086baa63 +0x4f:  movl   $0xff,0x8(%eax,%edx,4)
086baa6b +0x57:  mov    -0xc(%ebp),%edx
086baa6e +0x5a:  mov    0x8(%ebp),%eax
086baa71 +0x5d:  add    $0x60,%edx
086baa74 +0x60:  movl   $0x0,0xc(%eax,%edx,4)
086baa7c +0x68:  addl   $0x1,-0xc(%ebp)
086baa80 +0x6c:  cmpl   $0x5,-0xc(%ebp)
086baa84 +0x70:  setle  %al
086baa87 +0x73:  test   %al,%al
086baa89 +0x75:  jne    086baa49 <+0x35>
086baa8b +0x77:  leave
086baa8c +0x78:  ret
086baa8d +0x79:  nop
```

## 反编译 C

```c
// WarRoom::Reset @ 0x86baa14

/* WarRoom::Reset() */

void __thiscall WarRoom::Reset(WarRoom *this)

{
  int local_10;
  
  BattleReset(this);
  this[8] = (WarRoom)0x0;
  *this = (WarRoom)0x2;
  this[1] = (WarRoom)0x0;
  this[0x30] = (WarRoom)0x0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 0x50) * 4 + 8) = 0xff;
    *(undefined4 *)(this + (local_10 + 0x60) * 4 + 0xc) = 0;
  }
  return;
}
```
