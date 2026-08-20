# get_cargo_slot

`_ZNK6CCargo14get_cargo_slotEi`

`CCargo::get_cargo_slot(int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b2b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b2b4  _ZNK6CCargo14get_cargo_slotEi
#           CCargo::get_cargo_slot(int) const
# range [0x0850b2b4, 0x0850b38d]
0850b2b4 +0x00:  push   %ebp
0850b2b5 +0x01:  mov    %esp,%ebp
0850b2b7 +0x03:  push   %ebx
0850b2b8 +0x04:  sub    $0x54,%esp
0850b2bb +0x07:  mov    0x8(%ebp),%ebx
0850b2be +0x0a:  mov    0x10(%ebp),%eax
0850b2c1 +0x0d:  mov    %eax,0x4(%esp)
0850b2c5 +0x11:  mov    0xc(%ebp),%eax
0850b2c8 +0x14:  mov    %eax,(%esp)
0850b2cb +0x17:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b2d0 +0x1c:  xor    $0x1,%eax
0850b2d3 +0x1f:  test   %al,%al
0850b2d5 +0x21:  je     0850b363 <+0xaf>
0850b2db +0x27:  lea    -0x45(%ebp),%eax
0850b2de +0x2a:  mov    %eax,(%esp)
0850b2e1 +0x2d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0850b2e6 +0x32:  movl   $0x3d,0x8(%esp)
0850b2ee +0x3a:  movl   $0x0,0x4(%esp)
0850b2f6 +0x42:  lea    -0x45(%ebp),%eax
0850b2f9 +0x45:  mov    %eax,(%esp)
0850b2fc +0x48:  call   0807dcc0 <_init+0x5b8>
0850b301 +0x4d:  mov    -0x45(%ebp),%eax
0850b304 +0x50:  mov    %eax,(%ebx)
0850b306 +0x52:  mov    -0x41(%ebp),%eax
0850b309 +0x55:  mov    %eax,0x4(%ebx)
0850b30c +0x58:  mov    -0x3d(%ebp),%eax
0850b30f +0x5b:  mov    %eax,0x8(%ebx)
0850b312 +0x5e:  mov    -0x39(%ebp),%eax
0850b315 +0x61:  mov    %eax,0xc(%ebx)
0850b318 +0x64:  mov    -0x35(%ebp),%eax
0850b31b +0x67:  mov    %eax,0x10(%ebx)
0850b31e +0x6a:  mov    -0x31(%ebp),%eax
0850b321 +0x6d:  mov    %eax,0x14(%ebx)
0850b324 +0x70:  mov    -0x2d(%ebp),%eax
0850b327 +0x73:  mov    %eax,0x18(%ebx)
0850b32a +0x76:  mov    -0x29(%ebp),%eax
0850b32d +0x79:  mov    %eax,0x1c(%ebx)
0850b330 +0x7c:  mov    -0x25(%ebp),%eax
0850b333 +0x7f:  mov    %eax,0x20(%ebx)
0850b336 +0x82:  mov    -0x21(%ebp),%eax
0850b339 +0x85:  mov    %eax,0x24(%ebx)
0850b33c +0x88:  mov    -0x1d(%ebp),%eax
0850b33f +0x8b:  mov    %eax,0x28(%ebx)
0850b342 +0x8e:  mov    -0x19(%ebp),%eax
0850b345 +0x91:  mov    %eax,0x2c(%ebx)
0850b348 +0x94:  mov    -0x15(%ebp),%eax
0850b34b +0x97:  mov    %eax,0x30(%ebx)
0850b34e +0x9a:  mov    -0x11(%ebp),%eax
0850b351 +0x9d:  mov    %eax,0x34(%ebx)
0850b354 +0xa0:  mov    -0xd(%ebp),%eax
0850b357 +0xa3:  mov    %eax,0x38(%ebx)
0850b35a +0xa6:  movzbl -0x9(%ebp),%eax
0850b35e +0xaa:  mov    %al,0x3c(%ebx)
0850b361 +0xad:  jmp    0850b386 <+0xd2>
0850b363 +0xaf:  mov    0xc(%ebp),%eax
0850b366 +0xb2:  mov    0x4(%eax),%edx
0850b369 +0xb5:  mov    0x10(%ebp),%eax
0850b36c +0xb8:  imul   $0x3d,%eax,%eax
0850b36f +0xbb:  lea    (%edx,%eax,1),%eax
0850b372 +0xbe:  movl   $0x3d,0x8(%esp)
0850b37a +0xc6:  mov    %eax,0x4(%esp)
0850b37e +0xca:  mov    %ebx,(%esp)
0850b381 +0xcd:  call   0807d880 <_init+0x178>
0850b386 +0xd2:  mov    %ebx,%eax
0850b388 +0xd4:  add    $0x54,%esp
0850b38b +0xd7:  pop    %ebx
0850b38c +0xd8:  pop    %ebp
0850b38d +0xd9:  ret    $0x4
```

## 反编译 C

```c
// CCargo::get_cargo_slot @ 0x850b2b4

/* CCargo::get_cargo_slot(int) const */

int CCargo::get_cargo_slot(int param_1)

{
  char cVar1;
  CCargo *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  cVar1 = IsOperatorable(in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\x01') {
    memmove((void *)param_1,(void *)(*(int *)(in_stack_00000008 + 4) + in_stack_0000000c * 0x3d),
            0x3d);
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_49);
    memset(&local_49,0,0x3d);
    *(undefined4 *)param_1 = local_49;
    *(undefined4 *)(param_1 + 4) = local_45;
    *(undefined4 *)(param_1 + 8) = local_41;
    *(undefined4 *)(param_1 + 0xc) = local_3d;
    *(undefined4 *)(param_1 + 0x10) = local_39;
    *(undefined4 *)(param_1 + 0x14) = local_35;
    *(undefined4 *)(param_1 + 0x18) = local_31;
    *(undefined4 *)(param_1 + 0x1c) = local_2d;
    *(undefined4 *)(param_1 + 0x20) = local_29;
    *(undefined4 *)(param_1 + 0x24) = local_25;
    *(undefined4 *)(param_1 + 0x28) = local_21;
    *(undefined4 *)(param_1 + 0x2c) = local_1d;
    *(undefined4 *)(param_1 + 0x30) = local_19;
    *(undefined4 *)(param_1 + 0x34) = local_15;
    *(undefined4 *)(param_1 + 0x38) = local_11;
    *(undefined1 *)(param_1 + 0x3c) = local_d;
  }
  return param_1;
}
```
