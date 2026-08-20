# _tryAddStackItem

`_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi`

`CCargo::_tryAddStackItem(Inven_Item const&, int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b4b0  _ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi
#           CCargo::_tryAddStackItem(Inven_Item const&, int) const
# range [0x0850b4b0, 0x0850b56f]
0850b4b0 +0x00:  push   %ebp
0850b4b1 +0x01:  mov    %esp,%ebp
0850b4b3 +0x03:  push   %ebx
0850b4b4 +0x04:  sub    $0x14,%esp
0850b4b7 +0x07:  mov    0x8(%ebp),%eax
0850b4ba +0x0a:  mov    0x4(%eax),%edx
0850b4bd +0x0d:  mov    0x10(%ebp),%eax
0850b4c0 +0x10:  imul   $0x3d,%eax,%eax
0850b4c3 +0x13:  lea    (%edx,%eax,1),%eax
0850b4c6 +0x16:  mov    0x2(%eax),%edx
0850b4c9 +0x19:  mov    0xc(%ebp),%eax
0850b4cc +0x1c:  mov    0x2(%eax),%eax
0850b4cf +0x1f:  cmp    %eax,%edx
0850b4d1 +0x21:  jne    0850b565 <+0xb5>
0850b4d7 +0x27:  mov    0xc(%ebp),%eax
0850b4da +0x2a:  mov    %eax,(%esp)
0850b4dd +0x2d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850b4e2 +0x32:  mov    $0x7fffffff,%edx
0850b4e7 +0x37:  mov    %edx,%ecx
0850b4e9 +0x39:  sub    %eax,%ecx
0850b4eb +0x3b:  mov    0x8(%ebp),%eax
0850b4ee +0x3e:  mov    0x4(%eax),%edx
0850b4f1 +0x41:  mov    0x10(%ebp),%eax
0850b4f4 +0x44:  imul   $0x3d,%eax,%eax
0850b4f7 +0x47:  lea    (%edx,%eax,1),%eax
0850b4fa +0x4a:  mov    0x7(%eax),%eax
0850b4fd +0x4d:  cmp    %eax,%ecx
0850b4ff +0x4f:  setl   %al
0850b502 +0x52:  test   %al,%al
0850b504 +0x54:  je     0850b50d <+0x5d>
0850b506 +0x56:  mov    $0xffffffff,%eax
0850b50b +0x5b:  jmp    0850b56a <+0xba>
0850b50d +0x5d:  mov    0x8(%ebp),%eax
0850b510 +0x60:  mov    0x4(%eax),%edx
0850b513 +0x63:  mov    0x10(%ebp),%eax
0850b516 +0x66:  imul   $0x3d,%eax,%eax
0850b519 +0x69:  lea    (%edx,%eax,1),%eax
0850b51c +0x6c:  mov    %eax,(%esp)
0850b51f +0x6f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850b524 +0x74:  mov    %eax,%ebx
0850b526 +0x76:  mov    0xc(%ebp),%eax
0850b529 +0x79:  mov    %eax,(%esp)
0850b52c +0x7c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850b531 +0x81:  lea    (%ebx,%eax,1),%edx
0850b534 +0x84:  mov    0x8(%ebp),%eax
0850b537 +0x87:  mov    0x4(%eax),%ecx
0850b53a +0x8a:  mov    0x10(%ebp),%eax
0850b53d +0x8d:  imul   $0x3d,%eax,%eax
0850b540 +0x90:  lea    (%ecx,%eax,1),%eax
0850b543 +0x93:  mov    0x2(%eax),%eax
0850b546 +0x96:  mov    %edx,0x4(%esp)
0850b54a +0x9a:  mov    %eax,(%esp)
0850b54d +0x9d:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
0850b552 +0xa2:  xor    $0x1,%eax
0850b555 +0xa5:  test   %al,%al
0850b557 +0xa7:  je     0850b560 <+0xb0>
0850b559 +0xa9:  mov    $0xfffffff6,%eax
0850b55e +0xae:  jmp    0850b56a <+0xba>
0850b560 +0xb0:  mov    0x10(%ebp),%eax
0850b563 +0xb3:  jmp    0850b56a <+0xba>
0850b565 +0xb5:  mov    $0xffffffff,%eax
0850b56a +0xba:  add    $0x14,%esp
0850b56d +0xbd:  pop    %ebx
0850b56e +0xbe:  pop    %ebp
0850b56f +0xbf:  ret
```

## 反编译 C

```c
// CCargo::_tryAddStackItem @ 0x850b4b0

/* CCargo::_tryAddStackItem(Inven_Item const&, int) const */

int __thiscall CCargo::_tryAddStackItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
    iVar2 = Inven_Item::get_add_info(param_1);
    if (0x7fffffff - iVar2 < *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7)) {
      param_2 = -1;
    }
    else {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
      iVar3 = Inven_Item::get_add_info(param_1);
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 4) + param_2 * 0x3d + 2),iVar2 + iVar3)
      ;
      if (cVar1 != '\x01') {
        param_2 = -10;
      }
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}
```
