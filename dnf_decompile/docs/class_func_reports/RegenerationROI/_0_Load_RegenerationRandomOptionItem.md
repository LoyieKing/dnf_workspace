# _0_Load_RegenerationRandomOptionItem

`_ZN15RegenerationROI36_0_Load_RegenerationRandomOptionItemEv`

`RegenerationROI::_0_Load_RegenerationRandomOptionItem()`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f963e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f963e  _ZN15RegenerationROI36_0_Load_RegenerationRandomOptionItemEv
#           RegenerationROI::_0_Load_RegenerationRandomOptionItem()
# range [0x085f963e, 0x085f968d]
085f963e +0x00:  push   %ebp
085f963f +0x01:  mov    %esp,%ebp
085f9641 +0x03:  sub    $0x28,%esp
085f9644 +0x06:  movl   $0x0,-0xc(%ebp)
085f964b +0x0d:  mov    0x8(%ebp),%eax
085f964e +0x10:  add    $0x4,%eax
085f9651 +0x13:  movl   $"Etc/RandomOption/RegenerationRandomOption.etc",0x4(%esp)
085f9659 +0x1b:  mov    %eax,(%esp)
085f965c +0x1e:  call   08a7e610 <_Z36importRegenerationRandomOptionScriptR28RandomOptionItem_RegeneratorPKc>  ; importRegenerationRandomOptionScript(RandomOptionItem_Regenerator&, char const*)
085f9661 +0x23:  mov    %eax,-0xc(%ebp)
085f9664 +0x26:  cmpl   $0x0,-0xc(%ebp)
085f9668 +0x2a:  setne  %al
085f966b +0x2d:  test   %al,%al
085f966d +0x2f:  je     085f9687 <+0x49>
085f966f +0x31:  mov    -0xc(%ebp),%eax
085f9672 +0x34:  mov    %eax,0x4(%esp)
085f9676 +0x38:  movl   $"Fail to Load Random Option Item Regenerator Line : %d\n",(%esp)
085f967d +0x3f:  call   0807db60 <_init+0x458>
085f9682 +0x44:  mov    -0xc(%ebp),%eax
085f9685 +0x47:  jmp    085f968c <+0x4e>
085f9687 +0x49:  mov    $0x0,%eax
085f968c +0x4e:  leave
085f968d +0x4f:  ret
```

## 反编译 C

```c
// RegenerationROI::_0_Load_RegenerationRandomOptionItem @ 0x85f963e

/* RegenerationROI::_0_Load_RegenerationRandomOptionItem() */

int __thiscall RegenerationROI::_0_Load_RegenerationRandomOptionItem(RegenerationROI *this)

{
  int iVar1;
  
  iVar1 = importRegenerationRandomOptionScript
                    ((RandomOptionItem_Regenerator *)(this + 4),
                     "Etc/RandomOption/RegenerationRandomOption.etc");
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    printf("Fail to Load Random Option Item Regenerator Line : %d\n",iVar1);
  }
  return iVar1;
}
```
