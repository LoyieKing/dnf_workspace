# ReviveAll

`_ZN7WarRoom9ReviveAllEv`

`WarRoom::ReviveAll()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bc460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bc460  _ZN7WarRoom9ReviveAllEv
#           WarRoom::ReviveAll()
# range [0x086bc460, 0x086bc4eb]
086bc460 +0x00:  push   %ebp
086bc461 +0x01:  mov    %esp,%ebp
086bc463 +0x03:  sub    $0x38,%esp
086bc466 +0x06:  movl   $0x0,-0xc(%ebp)
086bc46d +0x0d:  jmp    086bc4df <+0x7f>
086bc46f +0x0f:  mov    -0xc(%ebp),%edx
086bc472 +0x12:  mov    0x8(%ebp),%eax
086bc475 +0x15:  add    $0x48,%edx
086bc478 +0x18:  mov    0xc(%eax,%edx,4),%eax
086bc47c +0x1c:  test   %eax,%eax
086bc47e +0x1e:  je     086bc4d7 <+0x77>
086bc480 +0x20:  mov    -0xc(%ebp),%eax
086bc483 +0x23:  mov    0x8(%ebp),%edx
086bc486 +0x26:  movzbl 0x184(%edx,%eax,1),%eax
086bc48e +0x2e:  test   %al,%al
086bc490 +0x30:  jne    086bc4da <+0x7a>
086bc492 +0x32:  mov    -0xc(%ebp),%edx
086bc495 +0x35:  mov    0x8(%ebp),%eax
086bc498 +0x38:  add    $0x48,%edx
086bc49b +0x3b:  mov    0xc(%eax,%edx,4),%eax
086bc49f +0x3f:  movl   $0xff,0x18(%esp)
086bc4a7 +0x47:  movl   $0x0,0x14(%esp)
086bc4af +0x4f:  movl   $0x0,0x10(%esp)
086bc4b7 +0x57:  movl   $0x1,0xc(%esp)
086bc4bf +0x5f:  mov    %eax,0x8(%esp)
086bc4c3 +0x63:  mov    -0xc(%ebp),%eax
086bc4c6 +0x66:  mov    %eax,0x4(%esp)
086bc4ca +0x6a:  mov    0x8(%ebp),%eax
086bc4cd +0x6d:  mov    %eax,(%esp)
086bc4d0 +0x70:  call   086be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>  ; WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int)
086bc4d5 +0x75:  jmp    086bc4db <+0x7b>
086bc4d7 +0x77:  nop
086bc4d8 +0x78:  jmp    086bc4db <+0x7b>
086bc4da +0x7a:  nop
086bc4db +0x7b:  addl   $0x1,-0xc(%ebp)
086bc4df +0x7f:  cmpl   $0x5,-0xc(%ebp)
086bc4e3 +0x83:  setle  %al
086bc4e6 +0x86:  test   %al,%al
086bc4e8 +0x88:  jne    086bc46f <+0xf>
086bc4ea +0x8a:  leave
086bc4eb +0x8b:  ret
```

## 反编译 C

```c
// WarRoom::ReviveAll @ 0x86bc460

/* WarRoom::ReviveAll() */

void __thiscall WarRoom::ReviveAll(WarRoom *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) &&
       (this[local_10 + 0x184] == (WarRoom)0x0)) {
      SetCharacterLive(this,local_10,*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc),true,false,0,
                       0xff);
    }
  }
  return;
}
```
