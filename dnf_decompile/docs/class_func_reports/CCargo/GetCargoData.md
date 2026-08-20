# GetCargoData

`_ZNK6CCargo12GetCargoDataEiR10Inven_Item`

`CCargo::GetCargoData(int, Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c6e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c6e0  _ZNK6CCargo12GetCargoDataEiR10Inven_Item
#           CCargo::GetCargoData(int, Inven_Item&) const
# range [0x0850c6e0, 0x0850c79d]
0850c6e0 +0x00:  push   %ebp
0850c6e1 +0x01:  mov    %esp,%ebp
0850c6e3 +0x03:  sub    $0x10,%esp
0850c6e6 +0x06:  movl   $0x0,-0x4(%ebp)
0850c6ed +0x0d:  jmp    0850c784 <+0xa4>
0850c6f2 +0x12:  mov    0x8(%ebp),%eax
0850c6f5 +0x15:  mov    0x4(%eax),%edx
0850c6f8 +0x18:  mov    -0x4(%ebp),%eax
0850c6fb +0x1b:  imul   $0x3d,%eax,%eax
0850c6fe +0x1e:  lea    (%edx,%eax,1),%eax
0850c701 +0x21:  mov    0x2(%eax),%edx
0850c704 +0x24:  mov    0xc(%ebp),%eax
0850c707 +0x27:  cmp    %eax,%edx
0850c709 +0x29:  jne    0850c780 <+0xa0>
0850c70b +0x2b:  mov    0x8(%ebp),%eax
0850c70e +0x2e:  mov    0x4(%eax),%edx
0850c711 +0x31:  mov    -0x4(%ebp),%eax
0850c714 +0x34:  imul   $0x3d,%eax,%eax
0850c717 +0x37:  add    %eax,%edx
0850c719 +0x39:  mov    0x10(%ebp),%eax
0850c71c +0x3c:  mov    (%edx),%ecx
0850c71e +0x3e:  mov    %ecx,(%eax)
0850c720 +0x40:  mov    0x4(%edx),%ecx
0850c723 +0x43:  mov    %ecx,0x4(%eax)
0850c726 +0x46:  mov    0x8(%edx),%ecx
0850c729 +0x49:  mov    %ecx,0x8(%eax)
0850c72c +0x4c:  mov    0xc(%edx),%ecx
0850c72f +0x4f:  mov    %ecx,0xc(%eax)
0850c732 +0x52:  mov    0x10(%edx),%ecx
0850c735 +0x55:  mov    %ecx,0x10(%eax)
0850c738 +0x58:  mov    0x14(%edx),%ecx
0850c73b +0x5b:  mov    %ecx,0x14(%eax)
0850c73e +0x5e:  mov    0x18(%edx),%ecx
0850c741 +0x61:  mov    %ecx,0x18(%eax)
0850c744 +0x64:  mov    0x1c(%edx),%ecx
0850c747 +0x67:  mov    %ecx,0x1c(%eax)
0850c74a +0x6a:  mov    0x20(%edx),%ecx
0850c74d +0x6d:  mov    %ecx,0x20(%eax)
0850c750 +0x70:  mov    0x24(%edx),%ecx
0850c753 +0x73:  mov    %ecx,0x24(%eax)
0850c756 +0x76:  mov    0x28(%edx),%ecx
0850c759 +0x79:  mov    %ecx,0x28(%eax)
0850c75c +0x7c:  mov    0x2c(%edx),%ecx
0850c75f +0x7f:  mov    %ecx,0x2c(%eax)
0850c762 +0x82:  mov    0x30(%edx),%ecx
0850c765 +0x85:  mov    %ecx,0x30(%eax)
0850c768 +0x88:  mov    0x34(%edx),%ecx
0850c76b +0x8b:  mov    %ecx,0x34(%eax)
0850c76e +0x8e:  mov    0x38(%edx),%ecx
0850c771 +0x91:  mov    %ecx,0x38(%eax)
0850c774 +0x94:  movzbl 0x3c(%edx),%edx
0850c778 +0x98:  mov    %dl,0x3c(%eax)
0850c77b +0x9b:  mov    -0x4(%ebp),%eax
0850c77e +0x9e:  jmp    0850c79b <+0xbb>
0850c780 +0xa0:  addl   $0x1,-0x4(%ebp)
0850c784 +0xa4:  cmpl   $0x97,-0x4(%ebp)
0850c78b +0xab:  setle  %al
0850c78e +0xae:  test   %al,%al
0850c790 +0xb0:  jne    0850c6f2 <+0x12>
0850c796 +0xb6:  mov    $0xffffffff,%eax
0850c79b +0xbb:  leave
0850c79c +0xbc:  ret
0850c79d +0xbd:  nop
```

## 反编译 C

```c
// CCargo::GetCargoData @ 0x850c6e0

/* CCargo::GetCargoData(int, Inven_Item&) const */

int __thiscall CCargo::GetCargoData(CCargo *this,int param_1,Inven_Item *param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x97 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 4) + local_8 * 0x3d);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  *(undefined4 *)(param_2 + 0xc) = puVar1[3];
  *(undefined4 *)(param_2 + 0x10) = puVar1[4];
  *(undefined4 *)(param_2 + 0x14) = puVar1[5];
  *(undefined4 *)(param_2 + 0x18) = puVar1[6];
  *(undefined4 *)(param_2 + 0x1c) = puVar1[7];
  *(undefined4 *)(param_2 + 0x20) = puVar1[8];
  *(undefined4 *)(param_2 + 0x24) = puVar1[9];
  *(undefined4 *)(param_2 + 0x28) = puVar1[10];
  *(undefined4 *)(param_2 + 0x2c) = puVar1[0xb];
  *(undefined4 *)(param_2 + 0x30) = puVar1[0xc];
  *(undefined4 *)(param_2 + 0x34) = puVar1[0xd];
  *(undefined4 *)(param_2 + 0x38) = puVar1[0xe];
  param_2[0x3c] = *(Inven_Item *)(puVar1 + 0xf);
  return local_8;
}
```
