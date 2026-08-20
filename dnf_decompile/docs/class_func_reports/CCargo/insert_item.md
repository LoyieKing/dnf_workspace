# insert_item

`_ZN6CCargo11insert_itemERK10Inven_Item`

`CCargo::insert_item(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b400  _ZN6CCargo11insert_itemERK10Inven_Item
#           CCargo::insert_item(Inven_Item const&)
# range [0x0850b400, 0x0850b4af]
0850b400 +0x00:  push   %ebp
0850b401 +0x01:  mov    %esp,%ebp
0850b403 +0x03:  sub    $0x28,%esp
0850b406 +0x06:  movl   $0x0,-0xc(%ebp)
0850b40d +0x0d:  mov    0xc(%ebp),%eax
0850b410 +0x10:  mov    %eax,(%esp)
0850b413 +0x13:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850b418 +0x18:  xor    $0x1,%eax
0850b41b +0x1b:  test   %al,%al
0850b41d +0x1d:  je     0850b45a <+0x5a>
0850b41f +0x1f:  jmp    0850b44c <+0x4c>
0850b421 +0x21:  mov    -0xc(%ebp),%eax
0850b424 +0x24:  mov    %eax,0x8(%esp)
0850b428 +0x28:  mov    0xc(%ebp),%eax
0850b42b +0x2b:  mov    %eax,0x4(%esp)
0850b42f +0x2f:  mov    0x8(%ebp),%eax
0850b432 +0x32:  mov    %eax,(%esp)
0850b435 +0x35:  call   0850c546 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi>  ; CCargo::_AddStackItem(Inven_Item const&, int)
0850b43a +0x3a:  not    %eax
0850b43c +0x3c:  shr    $0x1f,%eax
0850b43f +0x3f:  test   %al,%al
0850b441 +0x41:  je     0850b448 <+0x48>
0850b443 +0x43:  mov    -0xc(%ebp),%eax
0850b446 +0x46:  jmp    0850b4ae <+0xae>
0850b448 +0x48:  addl   $0x1,-0xc(%ebp)
0850b44c +0x4c:  cmpl   $0x97,-0xc(%ebp)
0850b453 +0x53:  setle  %al
0850b456 +0x56:  test   %al,%al
0850b458 +0x58:  jne    0850b421 <+0x21>
0850b45a +0x5a:  movl   $0x0,-0xc(%ebp)
0850b461 +0x61:  jmp    0850b49b <+0x9b>
0850b463 +0x63:  mov    0x8(%ebp),%eax
0850b466 +0x66:  mov    0x4(%eax),%edx
0850b469 +0x69:  mov    -0xc(%ebp),%eax
0850b46c +0x6c:  imul   $0x3d,%eax,%eax
0850b46f +0x6f:  lea    (%edx,%eax,1),%eax
0850b472 +0x72:  mov    0x2(%eax),%eax
0850b475 +0x75:  test   %eax,%eax
0850b477 +0x77:  jne    0850b497 <+0x97>
0850b479 +0x79:  mov    -0xc(%ebp),%eax
0850b47c +0x7c:  mov    %eax,0x8(%esp)
0850b480 +0x80:  mov    0xc(%ebp),%eax
0850b483 +0x83:  mov    %eax,0x4(%esp)
0850b487 +0x87:  mov    0x8(%ebp),%eax
0850b48a +0x8a:  mov    %eax,(%esp)
0850b48d +0x8d:  call   0850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>  ; CCargo::_AddItem(Inven_Item const&, int)
0850b492 +0x92:  mov    -0xc(%ebp),%eax
0850b495 +0x95:  jmp    0850b4ae <+0xae>
0850b497 +0x97:  addl   $0x1,-0xc(%ebp)
0850b49b +0x9b:  cmpl   $0x97,-0xc(%ebp)
0850b4a2 +0xa2:  setle  %al
0850b4a5 +0xa5:  test   %al,%al
0850b4a7 +0xa7:  jne    0850b463 <+0x63>
0850b4a9 +0xa9:  mov    $0xffffffff,%eax
0850b4ae +0xae:  leave
0850b4af +0xaf:  ret
```

## 反编译 C

```c
// CCargo::insert_item @ 0x850b400

/* CCargo::insert_item(Inven_Item const&) */

int __thiscall CCargo::insert_item(CCargo *this,Inven_Item *param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 != '\x01') {
    for (; local_10 < 0x98; local_10 = local_10 + 1) {
      iVar2 = _AddStackItem(this,param_1,local_10);
      if (-1 < iVar2) {
        return local_10;
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (0x97 < local_10) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) == 0) break;
    local_10 = local_10 + 1;
  }
  _AddItem(this,param_1,local_10);
  return local_10;
}
```
