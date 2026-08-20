# GetSlot

`_ZN13CAccountCargo7GetSlotEi`

`CAccountCargo::GetSlot(int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x082898f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082898f8  _ZN13CAccountCargo7GetSlotEi
#           CAccountCargo::GetSlot(int)
# range [0x082898f8, 0x08289a0b]
082898f8 +0x000:  push   %ebp
082898f9 +0x001:  mov    %esp,%ebp
082898fb +0x003:  push   %ebx
082898fc +0x004:  sub    $0x54,%esp
082898ff +0x007:  mov    0x8(%ebp),%ebx
08289902 +0x00a:  mov    0x10(%ebp),%eax
08289905 +0x00d:  mov    %eax,0x4(%esp)
08289909 +0x011:  mov    0xc(%ebp),%eax
0828990c +0x014:  mov    %eax,(%esp)
0828990f +0x017:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289914 +0x01c:  xor    $0x1,%eax
08289917 +0x01f:  test   %al,%al
08289919 +0x021:  je     08289988 <+0x90>
0828991b +0x023:  lea    -0x45(%ebp),%eax
0828991e +0x026:  mov    %eax,(%esp)
08289921 +0x029:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08289926 +0x02e:  mov    -0x45(%ebp),%eax
08289929 +0x031:  mov    %eax,(%ebx)
0828992b +0x033:  mov    -0x41(%ebp),%eax
0828992e +0x036:  mov    %eax,0x4(%ebx)
08289931 +0x039:  mov    -0x3d(%ebp),%eax
08289934 +0x03c:  mov    %eax,0x8(%ebx)
08289937 +0x03f:  mov    -0x39(%ebp),%eax
0828993a +0x042:  mov    %eax,0xc(%ebx)
0828993d +0x045:  mov    -0x35(%ebp),%eax
08289940 +0x048:  mov    %eax,0x10(%ebx)
08289943 +0x04b:  mov    -0x31(%ebp),%eax
08289946 +0x04e:  mov    %eax,0x14(%ebx)
08289949 +0x051:  mov    -0x2d(%ebp),%eax
0828994c +0x054:  mov    %eax,0x18(%ebx)
0828994f +0x057:  mov    -0x29(%ebp),%eax
08289952 +0x05a:  mov    %eax,0x1c(%ebx)
08289955 +0x05d:  mov    -0x25(%ebp),%eax
08289958 +0x060:  mov    %eax,0x20(%ebx)
0828995b +0x063:  mov    -0x21(%ebp),%eax
0828995e +0x066:  mov    %eax,0x24(%ebx)
08289961 +0x069:  mov    -0x1d(%ebp),%eax
08289964 +0x06c:  mov    %eax,0x28(%ebx)
08289967 +0x06f:  mov    -0x19(%ebp),%eax
0828996a +0x072:  mov    %eax,0x2c(%ebx)
0828996d +0x075:  mov    -0x15(%ebp),%eax
08289970 +0x078:  mov    %eax,0x30(%ebx)
08289973 +0x07b:  mov    -0x11(%ebp),%eax
08289976 +0x07e:  mov    %eax,0x34(%ebx)
08289979 +0x081:  mov    -0xd(%ebp),%eax
0828997c +0x084:  mov    %eax,0x38(%ebx)
0828997f +0x087:  movzbl -0x9(%ebp),%eax
08289983 +0x08b:  mov    %al,0x3c(%ebx)
08289986 +0x08e:  jmp    08289a01 <+0x109>
08289988 +0x090:  mov    0x10(%ebp),%edx
0828998b +0x093:  mov    0xc(%ebp),%eax
0828998e +0x096:  imul   $0x3d,%edx,%edx
08289991 +0x099:  mov    0x4(%edx,%eax,1),%ecx
08289995 +0x09d:  mov    %ecx,(%ebx)
08289997 +0x09f:  mov    0x8(%edx,%eax,1),%ecx
0828999b +0x0a3:  mov    %ecx,0x4(%ebx)
0828999e +0x0a6:  mov    0xc(%edx,%eax,1),%ecx
082899a2 +0x0aa:  mov    %ecx,0x8(%ebx)
082899a5 +0x0ad:  mov    0x10(%edx,%eax,1),%ecx
082899a9 +0x0b1:  mov    %ecx,0xc(%ebx)
082899ac +0x0b4:  mov    0x14(%edx,%eax,1),%ecx
082899b0 +0x0b8:  mov    %ecx,0x10(%ebx)
082899b3 +0x0bb:  mov    0x18(%edx,%eax,1),%ecx
082899b7 +0x0bf:  mov    %ecx,0x14(%ebx)
082899ba +0x0c2:  mov    0x1c(%edx,%eax,1),%ecx
082899be +0x0c6:  mov    %ecx,0x18(%ebx)
082899c1 +0x0c9:  mov    0x20(%edx,%eax,1),%ecx
082899c5 +0x0cd:  mov    %ecx,0x1c(%ebx)
082899c8 +0x0d0:  mov    0x24(%edx,%eax,1),%ecx
082899cc +0x0d4:  mov    %ecx,0x20(%ebx)
082899cf +0x0d7:  mov    0x28(%edx,%eax,1),%ecx
082899d3 +0x0db:  mov    %ecx,0x24(%ebx)
082899d6 +0x0de:  mov    0x2c(%edx,%eax,1),%ecx
082899da +0x0e2:  mov    %ecx,0x28(%ebx)
082899dd +0x0e5:  mov    0x30(%edx,%eax,1),%ecx
082899e1 +0x0e9:  mov    %ecx,0x2c(%ebx)
082899e4 +0x0ec:  mov    0x34(%edx,%eax,1),%ecx
082899e8 +0x0f0:  mov    %ecx,0x30(%ebx)
082899eb +0x0f3:  mov    0x38(%edx,%eax,1),%ecx
082899ef +0x0f7:  mov    %ecx,0x34(%ebx)
082899f2 +0x0fa:  mov    0x3c(%edx,%eax,1),%ecx
082899f6 +0x0fe:  mov    %ecx,0x38(%ebx)
082899f9 +0x101:  movzbl 0x40(%edx,%eax,1),%eax
082899fe +0x106:  mov    %al,0x3c(%ebx)
08289a01 +0x109:  mov    %ebx,%eax
08289a03 +0x10b:  add    $0x54,%esp
08289a06 +0x10e:  pop    %ebx
08289a07 +0x10f:  pop    %ebp
08289a08 +0x110:  ret    $0x4
08289a0b +0x113:  nop
```

## 反编译 C

```c
// CAccountCargo::GetSlot @ 0x82898f8

/* CAccountCargo::GetSlot(int) */

int CAccountCargo::GetSlot(int param_1)

{
  char cVar1;
  int iVar2;
  CAccountCargo *in_stack_00000008;
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
  
  cVar1 = CheckValidSlot(in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\x01') {
    iVar2 = in_stack_0000000c * 0x3d;
    *(undefined4 *)param_1 = *(undefined4 *)(in_stack_00000008 + iVar2 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_stack_00000008 + iVar2 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x3c);
    *(CAccountCargo *)(param_1 + 0x3c) = in_stack_00000008[iVar2 + 0x40];
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_49);
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
