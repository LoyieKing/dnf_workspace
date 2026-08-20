# _AddItem

`_ZN6CCargo8_AddItemERK10Inven_Itemi`

`CCargo::_AddItem(Inven_Item const&, int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c4ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c4ba  _ZN6CCargo8_AddItemERK10Inven_Itemi
#           CCargo::_AddItem(Inven_Item const&, int)
# range [0x0850c4ba, 0x0850c545]
0850c4ba +0x00:  push   %ebp
0850c4bb +0x01:  mov    %esp,%ebp
0850c4bd +0x03:  mov    0x8(%ebp),%eax
0850c4c0 +0x06:  mov    0x4(%eax),%edx
0850c4c3 +0x09:  mov    0x10(%ebp),%eax
0850c4c6 +0x0c:  imul   $0x3d,%eax,%eax
0850c4c9 +0x0f:  add    %eax,%edx
0850c4cb +0x11:  mov    0xc(%ebp),%eax
0850c4ce +0x14:  mov    (%eax),%ecx
0850c4d0 +0x16:  mov    %ecx,(%edx)
0850c4d2 +0x18:  mov    0x4(%eax),%ecx
0850c4d5 +0x1b:  mov    %ecx,0x4(%edx)
0850c4d8 +0x1e:  mov    0x8(%eax),%ecx
0850c4db +0x21:  mov    %ecx,0x8(%edx)
0850c4de +0x24:  mov    0xc(%eax),%ecx
0850c4e1 +0x27:  mov    %ecx,0xc(%edx)
0850c4e4 +0x2a:  mov    0x10(%eax),%ecx
0850c4e7 +0x2d:  mov    %ecx,0x10(%edx)
0850c4ea +0x30:  mov    0x14(%eax),%ecx
0850c4ed +0x33:  mov    %ecx,0x14(%edx)
0850c4f0 +0x36:  mov    0x18(%eax),%ecx
0850c4f3 +0x39:  mov    %ecx,0x18(%edx)
0850c4f6 +0x3c:  mov    0x1c(%eax),%ecx
0850c4f9 +0x3f:  mov    %ecx,0x1c(%edx)
0850c4fc +0x42:  mov    0x20(%eax),%ecx
0850c4ff +0x45:  mov    %ecx,0x20(%edx)
0850c502 +0x48:  mov    0x24(%eax),%ecx
0850c505 +0x4b:  mov    %ecx,0x24(%edx)
0850c508 +0x4e:  mov    0x28(%eax),%ecx
0850c50b +0x51:  mov    %ecx,0x28(%edx)
0850c50e +0x54:  mov    0x2c(%eax),%ecx
0850c511 +0x57:  mov    %ecx,0x2c(%edx)
0850c514 +0x5a:  mov    0x30(%eax),%ecx
0850c517 +0x5d:  mov    %ecx,0x30(%edx)
0850c51a +0x60:  mov    0x34(%eax),%ecx
0850c51d +0x63:  mov    %ecx,0x34(%edx)
0850c520 +0x66:  mov    0x38(%eax),%ecx
0850c523 +0x69:  mov    %ecx,0x38(%edx)
0850c526 +0x6c:  movzbl 0x3c(%eax),%eax
0850c52a +0x70:  mov    %al,0x3c(%edx)
0850c52d +0x73:  mov    0x8(%ebp),%eax
0850c530 +0x76:  mov    0x8(%eax),%eax
0850c533 +0x79:  lea    0x1(%eax),%edx
0850c536 +0x7c:  mov    0x8(%ebp),%eax
0850c539 +0x7f:  mov    %edx,0x8(%eax)
0850c53c +0x82:  mov    0x8(%ebp),%eax
0850c53f +0x85:  movb   $0x0,0x10(%eax)
0850c543 +0x89:  pop    %ebp
0850c544 +0x8a:  ret
0850c545 +0x8b:  nop
```

## 反编译 C

```c
// CCargo::_AddItem @ 0x850c4ba

/* CCargo::_AddItem(Inven_Item const&, int) */

void __thiscall CCargo::_AddItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = *(undefined4 *)(param_1 + 4);
  puVar1[2] = *(undefined4 *)(param_1 + 8);
  puVar1[3] = *(undefined4 *)(param_1 + 0xc);
  puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  puVar1[5] = *(undefined4 *)(param_1 + 0x14);
  puVar1[6] = *(undefined4 *)(param_1 + 0x18);
  puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
  puVar1[8] = *(undefined4 *)(param_1 + 0x20);
  puVar1[9] = *(undefined4 *)(param_1 + 0x24);
  puVar1[10] = *(undefined4 *)(param_1 + 0x28);
  puVar1[0xb] = *(undefined4 *)(param_1 + 0x2c);
  puVar1[0xc] = *(undefined4 *)(param_1 + 0x30);
  puVar1[0xd] = *(undefined4 *)(param_1 + 0x34);
  puVar1[0xe] = *(undefined4 *)(param_1 + 0x38);
  *(Inven_Item *)(puVar1 + 0xf) = param_1[0x3c];
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  this[0x10] = (CCargo)0x0;
  return;
}
```
