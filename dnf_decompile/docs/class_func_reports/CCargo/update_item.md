# update_item

`_ZN6CCargo11update_itemEiRK10Inven_Item`

`CCargo::update_item(int, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bb00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bb00  _ZN6CCargo11update_itemEiRK10Inven_Item
#           CCargo::update_item(int, Inven_Item const&)
# range [0x0850bb00, 0x0850bbc9]
0850bb00 +0x00:  push   %ebp
0850bb01 +0x01:  mov    %esp,%ebp
0850bb03 +0x03:  sub    $0x18,%esp
0850bb06 +0x06:  mov    0xc(%ebp),%eax
0850bb09 +0x09:  mov    %eax,0x4(%esp)
0850bb0d +0x0d:  mov    0x8(%ebp),%eax
0850bb10 +0x10:  mov    %eax,(%esp)
0850bb13 +0x13:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850bb18 +0x18:  xor    $0x1,%eax
0850bb1b +0x1b:  test   %al,%al
0850bb1d +0x1d:  jne    0850bbc6 <+0xc6>
0850bb23 +0x23:  mov    0x8(%ebp),%eax
0850bb26 +0x26:  mov    0x4(%eax),%edx
0850bb29 +0x29:  mov    0xc(%ebp),%eax
0850bb2c +0x2c:  imul   $0x3d,%eax,%eax
0850bb2f +0x2f:  lea    (%edx,%eax,1),%eax
0850bb32 +0x32:  mov    0x2(%eax),%eax
0850bb35 +0x35:  test   %eax,%eax
0850bb37 +0x37:  jne    0850bb54 <+0x54>
0850bb39 +0x39:  mov    0xc(%ebp),%eax
0850bb3c +0x3c:  mov    %eax,0x8(%esp)
0850bb40 +0x40:  mov    0x10(%ebp),%eax
0850bb43 +0x43:  mov    %eax,0x4(%esp)
0850bb47 +0x47:  mov    0x8(%ebp),%eax
0850bb4a +0x4a:  mov    %eax,(%esp)
0850bb4d +0x4d:  call   0850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>  ; CCargo::_AddItem(Inven_Item const&, int)
0850bb52 +0x52:  jmp    0850bbc7 <+0xc7>
0850bb54 +0x54:  mov    0x8(%ebp),%eax
0850bb57 +0x57:  mov    0x4(%eax),%edx
0850bb5a +0x5a:  mov    0xc(%ebp),%eax
0850bb5d +0x5d:  imul   $0x3d,%eax,%eax
0850bb60 +0x60:  add    %eax,%edx
0850bb62 +0x62:  mov    0x10(%ebp),%eax
0850bb65 +0x65:  mov    (%eax),%ecx
0850bb67 +0x67:  mov    %ecx,(%edx)
0850bb69 +0x69:  mov    0x4(%eax),%ecx
0850bb6c +0x6c:  mov    %ecx,0x4(%edx)
0850bb6f +0x6f:  mov    0x8(%eax),%ecx
0850bb72 +0x72:  mov    %ecx,0x8(%edx)
0850bb75 +0x75:  mov    0xc(%eax),%ecx
0850bb78 +0x78:  mov    %ecx,0xc(%edx)
0850bb7b +0x7b:  mov    0x10(%eax),%ecx
0850bb7e +0x7e:  mov    %ecx,0x10(%edx)
0850bb81 +0x81:  mov    0x14(%eax),%ecx
0850bb84 +0x84:  mov    %ecx,0x14(%edx)
0850bb87 +0x87:  mov    0x18(%eax),%ecx
0850bb8a +0x8a:  mov    %ecx,0x18(%edx)
0850bb8d +0x8d:  mov    0x1c(%eax),%ecx
0850bb90 +0x90:  mov    %ecx,0x1c(%edx)
0850bb93 +0x93:  mov    0x20(%eax),%ecx
0850bb96 +0x96:  mov    %ecx,0x20(%edx)
0850bb99 +0x99:  mov    0x24(%eax),%ecx
0850bb9c +0x9c:  mov    %ecx,0x24(%edx)
0850bb9f +0x9f:  mov    0x28(%eax),%ecx
0850bba2 +0xa2:  mov    %ecx,0x28(%edx)
0850bba5 +0xa5:  mov    0x2c(%eax),%ecx
0850bba8 +0xa8:  mov    %ecx,0x2c(%edx)
0850bbab +0xab:  mov    0x30(%eax),%ecx
0850bbae +0xae:  mov    %ecx,0x30(%edx)
0850bbb1 +0xb1:  mov    0x34(%eax),%ecx
0850bbb4 +0xb4:  mov    %ecx,0x34(%edx)
0850bbb7 +0xb7:  mov    0x38(%eax),%ecx
0850bbba +0xba:  mov    %ecx,0x38(%edx)
0850bbbd +0xbd:  movzbl 0x3c(%eax),%eax
0850bbc1 +0xc1:  mov    %al,0x3c(%edx)
0850bbc4 +0xc4:  jmp    0850bbc7 <+0xc7>
0850bbc6 +0xc6:  nop
0850bbc7 +0xc7:  leave
0850bbc8 +0xc8:  ret
0850bbc9 +0xc9:  nop
```

## 反编译 C

```c
// CCargo::update_item @ 0x850bb00

/* CCargo::update_item(int, Inven_Item const&) */

void __thiscall CCargo::update_item(CCargo *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      _AddItem(this,param_2,param_1);
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = *(undefined4 *)(param_2 + 4);
      puVar2[2] = *(undefined4 *)(param_2 + 8);
      puVar2[3] = *(undefined4 *)(param_2 + 0xc);
      puVar2[4] = *(undefined4 *)(param_2 + 0x10);
      puVar2[5] = *(undefined4 *)(param_2 + 0x14);
      puVar2[6] = *(undefined4 *)(param_2 + 0x18);
      puVar2[7] = *(undefined4 *)(param_2 + 0x1c);
      puVar2[8] = *(undefined4 *)(param_2 + 0x20);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
      puVar2[10] = *(undefined4 *)(param_2 + 0x28);
      puVar2[0xb] = *(undefined4 *)(param_2 + 0x2c);
      puVar2[0xc] = *(undefined4 *)(param_2 + 0x30);
      puVar2[0xd] = *(undefined4 *)(param_2 + 0x34);
      puVar2[0xe] = *(undefined4 *)(param_2 + 0x38);
      *(Inven_Item *)(puVar2 + 0xf) = param_2[0x3c];
    }
  }
  return;
}
```
