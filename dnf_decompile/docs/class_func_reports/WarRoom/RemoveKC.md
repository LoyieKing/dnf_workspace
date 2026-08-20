# RemoveKC

`_ZN7WarRoom8RemoveKCEv`

`WarRoom::RemoveKC()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd094  _ZN7WarRoom8RemoveKCEv
#           WarRoom::RemoveKC()
# range [0x086bd094, 0x086bd0f7]
086bd094 +0x00:  push   %ebp
086bd095 +0x01:  mov    %esp,%ebp
086bd097 +0x03:  sub    $0x28,%esp
086bd09a +0x06:  movl   $0x0,-0xc(%ebp)
086bd0a1 +0x0d:  jmp    086bd0ea <+0x56>
086bd0a3 +0x0f:  mov    -0xc(%ebp),%edx
086bd0a6 +0x12:  mov    0x8(%ebp),%eax
086bd0a9 +0x15:  add    $0x48,%edx
086bd0ac +0x18:  mov    0xc(%eax,%edx,4),%eax
086bd0b0 +0x1c:  test   %eax,%eax
086bd0b2 +0x1e:  je     086bd0e6 <+0x52>
086bd0b4 +0x20:  mov    -0xc(%ebp),%edx
086bd0b7 +0x23:  mov    0x8(%ebp),%eax
086bd0ba +0x26:  add    $0x48,%edx
086bd0bd +0x29:  mov    0xc(%eax,%edx,4),%eax
086bd0c1 +0x2d:  mov    %eax,(%esp)
086bd0c4 +0x30:  call   0864592a <_ZN15CUserCharacInfo15InitFinishPointEv>  ; CUserCharacInfo::InitFinishPoint()
086bd0c9 +0x35:  mov    -0xc(%ebp),%edx
086bd0cc +0x38:  mov    0x8(%ebp),%eax
086bd0cf +0x3b:  add    $0x48,%edx
086bd0d2 +0x3e:  mov    0xc(%eax,%edx,4),%eax
086bd0d6 +0x42:  mov    %eax,(%esp)
086bd0d9 +0x45:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bd0de +0x4a:  mov    %eax,(%esp)
086bd0e1 +0x4d:  call   0850a298 <_ZN10CInventory12RemoveKCItemEv>  ; CInventory::RemoveKCItem()
086bd0e6 +0x52:  addl   $0x1,-0xc(%ebp)
086bd0ea +0x56:  cmpl   $0x5,-0xc(%ebp)
086bd0ee +0x5a:  setle  %al
086bd0f1 +0x5d:  test   %al,%al
086bd0f3 +0x5f:  jne    086bd0a3 <+0xf>
086bd0f5 +0x61:  leave
086bd0f6 +0x62:  ret
086bd0f7 +0x63:  nop
```

## 反编译 C

```c
// WarRoom::RemoveKC @ 0x86bd094

/* WarRoom::RemoveKC() */

void __thiscall WarRoom::RemoveKC(WarRoom *this)

{
  CInventory *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUserCharacInfo::InitFinishPoint(*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      this_00 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenW
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      CInventory::RemoveKCItem(this_00);
    }
  }
  return;
}
```
