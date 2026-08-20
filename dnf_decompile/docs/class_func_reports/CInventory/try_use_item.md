# try_use_item

`_ZNK10CInventory12try_use_itemEiii`

`CInventory::try_use_item(int, int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fffba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fffba  _ZNK10CInventory12try_use_itemEiii
#           CInventory::try_use_item(int, int, int) const
# range [0x084fffba, 0x085000ad]
084fffba +0x00:  push   %ebp
084fffbb +0x01:  mov    %esp,%ebp
084fffbd +0x03:  push   %ebx
084fffbe +0x04:  sub    $0x24,%esp
084fffc1 +0x07:  cmpl   $0x0,0x10(%ebp)
084fffc5 +0x0b:  jns    084fffd1 <+0x17>
084fffc7 +0x0d:  mov    $0x1,%eax
084fffcc +0x12:  jmp    085000a7 <+0xed>
084fffd1 +0x17:  cmpl   $0x7,0x14(%ebp)
084fffd5 +0x1b:  jne    084fffe1 <+0x27>
084fffd7 +0x1d:  mov    $0x1,%eax
084fffdc +0x22:  jmp    085000a7 <+0xed>
084fffe1 +0x27:  cmpl   $0x2,0xc(%ebp)
084fffe5 +0x2b:  jle    084fffed <+0x33>
084fffe7 +0x2d:  cmpl   $0x8,0xc(%ebp)
084fffeb +0x31:  jle    08500003 <+0x49>
084fffed +0x33:  cmpl   $0x38,0xc(%ebp)
084ffff1 +0x37:  jle    084ffff9 <+0x3f>
084ffff3 +0x39:  cmpl   $0x68,0xc(%ebp)
084ffff7 +0x3d:  jle    08500003 <+0x49>
084ffff9 +0x3f:  mov    $0x4,%eax
084ffffe +0x44:  jmp    085000a7 <+0xed>
08500003 +0x49:  mov    0x8(%ebp),%eax
08500006 +0x4c:  mov    0x650(%eax),%edx
0850000c +0x52:  mov    0xc(%ebp),%eax
0850000f +0x55:  imul   $0x3d,%eax,%eax
08500012 +0x58:  lea    (%edx,%eax,1),%eax
08500015 +0x5b:  mov    0x2(%eax),%eax
08500018 +0x5e:  test   %eax,%eax
0850001a +0x60:  jne    08500026 <+0x6c>
0850001c +0x62:  mov    $0x17,%eax
08500021 +0x67:  jmp    085000a7 <+0xed>
08500026 +0x6c:  mov    0x8(%ebp),%eax
08500029 +0x6f:  mov    0x650(%eax),%edx
0850002f +0x75:  mov    0xc(%ebp),%eax
08500032 +0x78:  imul   $0x3d,%eax,%eax
08500035 +0x7b:  lea    (%edx,%eax,1),%eax
08500038 +0x7e:  mov    0x2(%eax),%eax
0850003b +0x81:  mov    %eax,%ebx
0850003d +0x83:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08500042 +0x88:  mov    %ebx,0x4(%esp)
08500046 +0x8c:  mov    %eax,(%esp)
08500049 +0x8f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850004e +0x94:  mov    %eax,-0xc(%ebp)
08500051 +0x97:  cmpl   $0x0,-0xc(%ebp)
08500055 +0x9b:  jne    0850005e <+0xa4>
08500057 +0x9d:  mov    $0x1,%eax
0850005c +0xa2:  jmp    085000a7 <+0xed>
0850005e +0xa4:  mov    -0xc(%ebp),%eax
08500061 +0xa7:  mov    (%eax),%eax
08500063 +0xa9:  add    $0xc,%eax
08500066 +0xac:  mov    (%eax),%edx
08500068 +0xae:  mov    -0xc(%ebp),%eax
0850006b +0xb1:  mov    %eax,(%esp)
0850006e +0xb4:  call   *%edx
08500070 +0xb6:  cmp    $0x12,%eax
08500073 +0xb9:  sete   %al
08500076 +0xbc:  test   %al,%al
08500078 +0xbe:  je     08500081 <+0xc7>
0850007a +0xc0:  mov    $0x0,%eax
0850007f +0xc5:  jmp    085000a7 <+0xed>
08500081 +0xc7:  mov    0x8(%ebp),%eax
08500084 +0xca:  mov    0x650(%eax),%edx
0850008a +0xd0:  mov    0xc(%ebp),%eax
0850008d +0xd3:  imul   $0x3d,%eax,%eax
08500090 +0xd6:  lea    (%edx,%eax,1),%eax
08500093 +0xd9:  mov    0x7(%eax),%eax
08500096 +0xdc:  cmp    0x10(%ebp),%eax
08500099 +0xdf:  jge    085000a2 <+0xe8>
0850009b +0xe1:  mov    $0x1,%eax
085000a0 +0xe6:  jmp    085000a7 <+0xed>
085000a2 +0xe8:  mov    $0x0,%eax
085000a7 +0xed:  add    $0x24,%esp
085000aa +0xf0:  pop    %ebx
085000ab +0xf1:  pop    %ebp
085000ac +0xf2:  ret
085000ad +0xf3:  nop
```

## 反编译 C

```c
// CInventory::try_use_item @ 0x84fffba

/* CInventory::try_use_item(int, int, int) const */

undefined4 __thiscall CInventory::try_use_item(CInventory *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  CDataManager *this_00;
  int *piVar2;
  int iVar3;
  
  if (param_2 < 0) {
    uVar1 = 1;
  }
  else if (param_3 == 7) {
    uVar1 = 1;
  }
  else if (((param_1 < 3) || (8 < param_1)) && ((param_1 < 0x39 || (0x68 < param_1)))) {
    uVar1 = 4;
  }
  else if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 2) == 0) {
    uVar1 = 0x17;
  }
  else {
    iVar3 = *(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 2);
    this_00 = (CDataManager *)G_CDataManager();
    piVar2 = (int *)CDataManager::find_item(this_00,iVar3);
    if (piVar2 == (int *)0x0) {
      uVar1 = 1;
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2);
      if (iVar3 == 0x12) {
        uVar1 = 0;
      }
      else if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 7) < param_2) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
