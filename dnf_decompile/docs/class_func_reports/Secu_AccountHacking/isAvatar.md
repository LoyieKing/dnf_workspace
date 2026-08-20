# isAvatar

`_ZN19Secu_AccountHacking8isAvatarEj`

`Secu_AccountHacking::isAvatar(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278aec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278aec  _ZN19Secu_AccountHacking8isAvatarEj
#           Secu_AccountHacking::isAvatar(unsigned int)
# range [0x08278aec, 0x08278b47]
08278aec +0x00:  push   %ebp
08278aed +0x01:  mov    %esp,%ebp
08278aef +0x03:  push   %ebx
08278af0 +0x04:  sub    $0x24,%esp
08278af3 +0x07:  mov    0xc(%ebp),%ebx
08278af6 +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08278afb +0x0f:  mov    %ebx,0x4(%esp)
08278aff +0x13:  mov    %eax,(%esp)
08278b02 +0x16:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08278b07 +0x1b:  mov    %eax,-0xc(%ebp)
08278b0a +0x1e:  cmpl   $0x0,-0xc(%ebp)
08278b0e +0x22:  je     08278b2d <+0x41>
08278b10 +0x24:  mov    -0xc(%ebp),%eax
08278b13 +0x27:  mov    (%eax),%eax
08278b15 +0x29:  add    $0x10,%eax
08278b18 +0x2c:  mov    (%eax),%edx
08278b1a +0x2e:  mov    -0xc(%ebp),%eax
08278b1d +0x31:  mov    %eax,(%esp)
08278b20 +0x34:  call   *%edx
08278b22 +0x36:  test   %al,%al
08278b24 +0x38:  je     08278b2d <+0x41>
08278b26 +0x3a:  mov    $0x1,%eax
08278b2b +0x3f:  jmp    08278b32 <+0x46>
08278b2d +0x41:  mov    $0x0,%eax
08278b32 +0x46:  test   %al,%al
08278b34 +0x48:  je     08278b3d <+0x51>
08278b36 +0x4a:  mov    $0x1,%eax
08278b3b +0x4f:  jmp    08278b42 <+0x56>
08278b3d +0x51:  mov    $0x0,%eax
08278b42 +0x56:  add    $0x24,%esp
08278b45 +0x59:  pop    %ebx
08278b46 +0x5a:  pop    %ebp
08278b47 +0x5b:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::isAvatar @ 0x8278aec

/* Secu_AccountHacking::isAvatar(unsigned int) */

undefined1 __thiscall Secu_AccountHacking::isAvatar(Secu_AccountHacking *this,uint param_1)

{
  undefined1 uVar1;
  char cVar2;
  CDataManager *this_00;
  int *piVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  piVar3 = (int *)CDataManager::find_item(this_00,param_1);
  if ((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x10))(piVar3), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
