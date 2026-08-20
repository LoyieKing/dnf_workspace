# isExistItem

`_ZN15CUserCharacInfo11isExistItemEi`

`CUserCharacInfo::isExistItem(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08678084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08678084  _ZN15CUserCharacInfo11isExistItemEi
#           CUserCharacInfo::isExistItem(int)
# range [0x08678084, 0x086780f9]
08678084 +0x00:  push   %ebp
08678085 +0x01:  mov    %esp,%ebp
08678087 +0x03:  sub    $0x18,%esp
0867808a +0x06:  mov    0x8(%ebp),%eax
0867808d +0x09:  mov    0x10(%eax),%eax
08678090 +0x0c:  test   %eax,%eax
08678092 +0x0e:  jne    0867809b <+0x17>
08678094 +0x10:  mov    $0x0,%eax
08678099 +0x15:  jmp    086780f8 <+0x74>
0867809b +0x17:  mov    0x8(%ebp),%eax
0867809e +0x1a:  mov    0x10(%eax),%eax
086780a1 +0x1d:  lea    0xdaa(%eax),%edx
086780a7 +0x23:  mov    0xc(%ebp),%eax
086780aa +0x26:  mov    %eax,0x4(%esp)
086780ae +0x2a:  mov    %edx,(%esp)
086780b1 +0x2d:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
086780b6 +0x32:  cmp    $0xffffffff,%eax
086780b9 +0x35:  setne  %al
086780bc +0x38:  test   %al,%al
086780be +0x3a:  je     086780c7 <+0x43>
086780c0 +0x3c:  mov    $0x1,%eax
086780c5 +0x41:  jmp    086780f8 <+0x74>
086780c7 +0x43:  mov    0x8(%ebp),%eax
086780ca +0x46:  mov    0x10(%eax),%eax
086780cd +0x49:  lea    0xda(%eax),%edx
086780d3 +0x4f:  mov    0xc(%ebp),%eax
086780d6 +0x52:  mov    %eax,0x4(%esp)
086780da +0x56:  mov    %edx,(%esp)
086780dd +0x59:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
086780e2 +0x5e:  cmp    $0xffffffff,%eax
086780e5 +0x61:  setne  %al
086780e8 +0x64:  test   %al,%al
086780ea +0x66:  je     086780f3 <+0x6f>
086780ec +0x68:  mov    $0x1,%eax
086780f1 +0x6d:  jmp    086780f8 <+0x74>
086780f3 +0x6f:  mov    $0x0,%eax
086780f8 +0x74:  leave
086780f9 +0x75:  ret
```

## 反编译 C

```c
// CUserCharacInfo::isExistItem @ 0x8678084

/* CUserCharacInfo::isExistItem(int) */

undefined4 __thiscall CUserCharacInfo::isExistItem(CUserCharacInfo *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CCargo::check_item_exist((CCargo *)(*(int *)(this + 0x10) + 0xdaa),param_1);
    if (iVar2 == -1) {
      iVar2 = CInventory::check_item_exist((CInventory *)(*(int *)(this + 0x10) + 0xda),param_1);
      if (iVar2 == -1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
