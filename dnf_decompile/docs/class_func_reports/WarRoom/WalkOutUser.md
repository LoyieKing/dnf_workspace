# WalkOutUser

`_ZN7WarRoom11WalkOutUserEP5CUser`

`WarRoom::WalkOutUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd460  _ZN7WarRoom11WalkOutUserEP5CUser
#           WarRoom::WalkOutUser(CUser*)
# range [0x086bd460, 0x086bd49b]
086bd460 +0x00:  push   %ebp
086bd461 +0x01:  mov    %esp,%ebp
086bd463 +0x03:  sub    $0x28,%esp
086bd466 +0x06:  mov    0xc(%ebp),%eax
086bd469 +0x09:  mov    %eax,0x4(%esp)
086bd46d +0x0d:  mov    0x8(%ebp),%eax
086bd470 +0x10:  mov    %eax,(%esp)
086bd473 +0x13:  call   086bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>  ; WarRoom::GetUserSlot(CUser*)
086bd478 +0x18:  mov    %eax,-0xc(%ebp)
086bd47b +0x1b:  cmpl   $0x0,-0xc(%ebp)
086bd47f +0x1f:  jns    086bd488 <+0x28>
086bd481 +0x21:  mov    $0x4,%eax
086bd486 +0x26:  jmp    086bd49a <+0x3a>
086bd488 +0x28:  mov    -0xc(%ebp),%eax
086bd48b +0x2b:  mov    %eax,0x4(%esp)
086bd48f +0x2f:  mov    0x8(%ebp),%eax
086bd492 +0x32:  mov    %eax,(%esp)
086bd495 +0x35:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086bd49a +0x3a:  leave
086bd49b +0x3b:  ret
```

## 反编译 C

```c
// WarRoom::WalkOutUser @ 0x86bd460

/* WarRoom::WalkOutUser(CUser*) */

undefined4 __thiscall WarRoom::WalkOutUser(WarRoom *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetUserSlot(this,param_1);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = WalkOutUserBySlot(this,iVar1);
  }
  return uVar2;
}
```
