# GetInvenSlot

`_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi`

`CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499d1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499d1a  _ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi
#           CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const
# range [0x08499d1a, 0x08499e8d]
08499d1a +0x000:  push   %ebp
08499d1b +0x001:  mov    %esp,%ebp
08499d1d +0x003:  push   %ebx
08499d1e +0x004:  sub    $0x54,%esp
08499d21 +0x007:  mov    0x8(%ebp),%ebx
08499d24 +0x00a:  lea    -0x45(%ebp),%eax
08499d27 +0x00d:  mov    %eax,(%esp)
08499d2a +0x010:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08499d2f +0x015:  cmpl   $0x9,0x14(%ebp)
08499d33 +0x019:  jle    08499d3b <+0x21>
08499d35 +0x01b:  cmpl   $0x16,0x14(%ebp)
08499d39 +0x01f:  jle    08499da0 <+0x86>
08499d3b +0x021:  mov    -0x45(%ebp),%eax
08499d3e +0x024:  mov    %eax,(%ebx)
08499d40 +0x026:  mov    -0x41(%ebp),%eax
08499d43 +0x029:  mov    %eax,0x4(%ebx)
08499d46 +0x02c:  mov    -0x3d(%ebp),%eax
08499d49 +0x02f:  mov    %eax,0x8(%ebx)
08499d4c +0x032:  mov    -0x39(%ebp),%eax
08499d4f +0x035:  mov    %eax,0xc(%ebx)
08499d52 +0x038:  mov    -0x35(%ebp),%eax
08499d55 +0x03b:  mov    %eax,0x10(%ebx)
08499d58 +0x03e:  mov    -0x31(%ebp),%eax
08499d5b +0x041:  mov    %eax,0x14(%ebx)
08499d5e +0x044:  mov    -0x2d(%ebp),%eax
08499d61 +0x047:  mov    %eax,0x18(%ebx)
08499d64 +0x04a:  mov    -0x29(%ebp),%eax
08499d67 +0x04d:  mov    %eax,0x1c(%ebx)
08499d6a +0x050:  mov    -0x25(%ebp),%eax
08499d6d +0x053:  mov    %eax,0x20(%ebx)
08499d70 +0x056:  mov    -0x21(%ebp),%eax
08499d73 +0x059:  mov    %eax,0x24(%ebx)
08499d76 +0x05c:  mov    -0x1d(%ebp),%eax
08499d79 +0x05f:  mov    %eax,0x28(%ebx)
08499d7c +0x062:  mov    -0x19(%ebp),%eax
08499d7f +0x065:  mov    %eax,0x2c(%ebx)
08499d82 +0x068:  mov    -0x15(%ebp),%eax
08499d85 +0x06b:  mov    %eax,0x30(%ebx)
08499d88 +0x06e:  mov    -0x11(%ebp),%eax
08499d8b +0x071:  mov    %eax,0x34(%ebx)
08499d8e +0x074:  mov    -0xd(%ebp),%eax
08499d91 +0x077:  mov    %eax,0x38(%ebx)
08499d94 +0x07a:  movzbl -0x9(%ebp),%eax
08499d98 +0x07e:  mov    %al,0x3c(%ebx)
08499d9b +0x081:  jmp    08499e86 <+0x16c>
08499da0 +0x086:  mov    0x10(%ebp),%eax
08499da3 +0x089:  cmp    $0x5,%eax
08499da6 +0x08c:  jne    08499e26 <+0x10c>
08499da8 +0x08e:  mov    0x14(%ebp),%eax
08499dab +0x091:  lea    -0xa(%eax),%edx
08499dae +0x094:  mov    0xc(%ebp),%eax
08499db1 +0x097:  imul   $0x3d,%edx,%edx
08499db4 +0x09a:  mov    0x5(%edx,%eax,1),%ecx
08499db8 +0x09e:  mov    %ecx,(%ebx)
08499dba +0x0a0:  mov    0x9(%edx,%eax,1),%ecx
08499dbe +0x0a4:  mov    %ecx,0x4(%ebx)
08499dc1 +0x0a7:  mov    0xd(%edx,%eax,1),%ecx
08499dc5 +0x0ab:  mov    %ecx,0x8(%ebx)
08499dc8 +0x0ae:  mov    0x11(%edx,%eax,1),%ecx
08499dcc +0x0b2:  mov    %ecx,0xc(%ebx)
08499dcf +0x0b5:  mov    0x15(%edx,%eax,1),%ecx
08499dd3 +0x0b9:  mov    %ecx,0x10(%ebx)
08499dd6 +0x0bc:  mov    0x19(%edx,%eax,1),%ecx
08499dda +0x0c0:  mov    %ecx,0x14(%ebx)
08499ddd +0x0c3:  mov    0x1d(%edx,%eax,1),%ecx
08499de1 +0x0c7:  mov    %ecx,0x18(%ebx)
08499de4 +0x0ca:  mov    0x21(%edx,%eax,1),%ecx
08499de8 +0x0ce:  mov    %ecx,0x1c(%ebx)
08499deb +0x0d1:  mov    0x25(%edx,%eax,1),%ecx
08499def +0x0d5:  mov    %ecx,0x20(%ebx)
08499df2 +0x0d8:  mov    0x29(%edx,%eax,1),%ecx
08499df6 +0x0dc:  mov    %ecx,0x24(%ebx)
08499df9 +0x0df:  mov    0x2d(%edx,%eax,1),%ecx
08499dfd +0x0e3:  mov    %ecx,0x28(%ebx)
08499e00 +0x0e6:  mov    0x31(%edx,%eax,1),%ecx
08499e04 +0x0ea:  mov    %ecx,0x2c(%ebx)
08499e07 +0x0ed:  mov    0x35(%edx,%eax,1),%ecx
08499e0b +0x0f1:  mov    %ecx,0x30(%ebx)
08499e0e +0x0f4:  mov    0x39(%edx,%eax,1),%ecx
08499e12 +0x0f8:  mov    %ecx,0x34(%ebx)
08499e15 +0x0fb:  mov    0x3d(%edx,%eax,1),%ecx
08499e19 +0x0ff:  mov    %ecx,0x38(%ebx)
08499e1c +0x102:  movzbl 0x41(%edx,%eax,1),%eax
08499e21 +0x107:  mov    %al,0x3c(%ebx)
08499e24 +0x10a:  jmp    08499e86 <+0x16c>
08499e26 +0x10c:  mov    -0x45(%ebp),%eax
08499e29 +0x10f:  mov    %eax,(%ebx)
08499e2b +0x111:  mov    -0x41(%ebp),%eax
08499e2e +0x114:  mov    %eax,0x4(%ebx)
08499e31 +0x117:  mov    -0x3d(%ebp),%eax
08499e34 +0x11a:  mov    %eax,0x8(%ebx)
08499e37 +0x11d:  mov    -0x39(%ebp),%eax
08499e3a +0x120:  mov    %eax,0xc(%ebx)
08499e3d +0x123:  mov    -0x35(%ebp),%eax
08499e40 +0x126:  mov    %eax,0x10(%ebx)
08499e43 +0x129:  mov    -0x31(%ebp),%eax
08499e46 +0x12c:  mov    %eax,0x14(%ebx)
08499e49 +0x12f:  mov    -0x2d(%ebp),%eax
08499e4c +0x132:  mov    %eax,0x18(%ebx)
08499e4f +0x135:  mov    -0x29(%ebp),%eax
08499e52 +0x138:  mov    %eax,0x1c(%ebx)
08499e55 +0x13b:  mov    -0x25(%ebp),%eax
08499e58 +0x13e:  mov    %eax,0x20(%ebx)
08499e5b +0x141:  mov    -0x21(%ebp),%eax
08499e5e +0x144:  mov    %eax,0x24(%ebx)
08499e61 +0x147:  mov    -0x1d(%ebp),%eax
08499e64 +0x14a:  mov    %eax,0x28(%ebx)
08499e67 +0x14d:  mov    -0x19(%ebp),%eax
08499e6a +0x150:  mov    %eax,0x2c(%ebx)
08499e6d +0x153:  mov    -0x15(%ebp),%eax
08499e70 +0x156:  mov    %eax,0x30(%ebx)
08499e73 +0x159:  mov    -0x11(%ebp),%eax
08499e76 +0x15c:  mov    %eax,0x34(%ebx)
08499e79 +0x15f:  mov    -0xd(%ebp),%eax
08499e7c +0x162:  mov    %eax,0x38(%ebx)
08499e7f +0x165:  movzbl -0x9(%ebp),%eax
08499e83 +0x169:  mov    %al,0x3c(%ebx)
08499e86 +0x16c:  mov    %ebx,%eax
08499e88 +0x16e:  add    $0x54,%esp
08499e8b +0x171:  pop    %ebx
08499e8c +0x172:  pop    %ebp
08499e8d +0x173:  ret    $0x4
```

## 反编译 C

```c
// CExpandEquipslot::GetInvenSlot @ 0x8499d1a

/* CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const */

undefined4 * CExpandEquipslot::GetInvenSlot(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
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
  
  Inven_Item::Inven_Item((Inven_Item *)&local_49);
  if ((param_4 < 10) || (0x16 < param_4)) {
    *param_1 = local_49;
    param_1[1] = local_45;
    param_1[2] = local_41;
    param_1[3] = local_3d;
    param_1[4] = local_39;
    param_1[5] = local_35;
    param_1[6] = local_31;
    param_1[7] = local_2d;
    param_1[8] = local_29;
    param_1[9] = local_25;
    param_1[10] = local_21;
    param_1[0xb] = local_1d;
    param_1[0xc] = local_19;
    param_1[0xd] = local_15;
    param_1[0xe] = local_11;
    *(undefined1 *)(param_1 + 0xf) = local_d;
  }
  else if (param_3 == 5) {
    iVar1 = (param_4 + -10) * 0x3d;
    *param_1 = *(undefined4 *)(iVar1 + 5 + param_2);
    param_1[1] = *(undefined4 *)(iVar1 + 9 + param_2);
    param_1[2] = *(undefined4 *)(iVar1 + 0xd + param_2);
    param_1[3] = *(undefined4 *)(iVar1 + 0x11 + param_2);
    param_1[4] = *(undefined4 *)(iVar1 + 0x15 + param_2);
    param_1[5] = *(undefined4 *)(iVar1 + 0x19 + param_2);
    param_1[6] = *(undefined4 *)(iVar1 + 0x1d + param_2);
    param_1[7] = *(undefined4 *)(iVar1 + 0x21 + param_2);
    param_1[8] = *(undefined4 *)(iVar1 + 0x25 + param_2);
    param_1[9] = *(undefined4 *)(iVar1 + 0x29 + param_2);
    param_1[10] = *(undefined4 *)(iVar1 + 0x2d + param_2);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x31 + param_2);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0x35 + param_2);
    param_1[0xd] = *(undefined4 *)(iVar1 + 0x39 + param_2);
    param_1[0xe] = *(undefined4 *)(iVar1 + 0x3d + param_2);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar1 + 0x41 + param_2);
  }
  else {
    *param_1 = local_49;
    param_1[1] = local_45;
    param_1[2] = local_41;
    param_1[3] = local_3d;
    param_1[4] = local_39;
    param_1[5] = local_35;
    param_1[6] = local_31;
    param_1[7] = local_2d;
    param_1[8] = local_29;
    param_1[9] = local_25;
    param_1[10] = local_21;
    param_1[0xb] = local_1d;
    param_1[0xc] = local_19;
    param_1[0xd] = local_15;
    param_1[0xe] = local_11;
    *(undefined1 *)(param_1 + 0xf) = local_d;
  }
  return param_1;
}
```
