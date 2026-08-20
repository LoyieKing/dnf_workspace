# CheckValidItem

`_ZN13private_store13CPrivateStore14CheckValidItemEii`

`private_store::CPrivateStore::CheckValidItem(int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c9cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c9cc2  _ZN13private_store13CPrivateStore14CheckValidItemEii
#           private_store::CPrivateStore::CheckValidItem(int, int)
# range [0x085c9cc2, 0x085c9d4d]
085c9cc2 +0x00:  push   %ebp
085c9cc3 +0x01:  mov    %esp,%ebp
085c9cc5 +0x03:  sub    $0x68,%esp
085c9cc8 +0x06:  mov    0x8(%ebp),%eax
085c9ccb +0x09:  mov    0x2c(%eax),%eax
085c9cce +0x0c:  mov    %eax,(%esp)
085c9cd1 +0x0f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
085c9cd6 +0x14:  mov    %eax,-0xc(%ebp)
085c9cd9 +0x17:  mov    0xc(%ebp),%eax
085c9cdc +0x1a:  mov    %eax,0x4(%esp)
085c9ce0 +0x1e:  mov    -0xc(%ebp),%eax
085c9ce3 +0x21:  mov    %eax,(%esp)
085c9ce6 +0x24:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
085c9ceb +0x29:  xor    $0x1,%eax
085c9cee +0x2c:  test   %al,%al
085c9cf0 +0x2e:  je     085c9cf9 <+0x37>
085c9cf2 +0x30:  mov    $0x0,%eax
085c9cf7 +0x35:  jmp    085c9d4b <+0x89>
085c9cf9 +0x37:  lea    -0x49(%ebp),%eax
085c9cfc +0x3a:  mov    0xc(%ebp),%edx
085c9cff +0x3d:  mov    %edx,0x8(%esp)
085c9d03 +0x41:  mov    -0xc(%ebp),%edx
085c9d06 +0x44:  mov    %edx,0x4(%esp)
085c9d0a +0x48:  mov    %eax,(%esp)
085c9d0d +0x4b:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
085c9d12 +0x50:  sub    $0x4,%esp
085c9d15 +0x53:  mov    -0x47(%ebp),%eax
085c9d18 +0x56:  test   %eax,%eax
085c9d1a +0x58:  jne    085c9d23 <+0x61>
085c9d1c +0x5a:  mov    $0x0,%eax
085c9d21 +0x5f:  jmp    085c9d4b <+0x89>
085c9d23 +0x61:  lea    -0x49(%ebp),%eax
085c9d26 +0x64:  mov    %eax,(%esp)
085c9d29 +0x67:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085c9d2e +0x6c:  xor    $0x1,%eax
085c9d31 +0x6f:  test   %al,%al
085c9d33 +0x71:  je     085c9d46 <+0x84>
085c9d35 +0x73:  mov    -0x42(%ebp),%eax
085c9d38 +0x76:  sub    0x10(%ebp),%eax
085c9d3b +0x79:  test   %eax,%eax
085c9d3d +0x7b:  jns    085c9d46 <+0x84>
085c9d3f +0x7d:  mov    $0x0,%eax
085c9d44 +0x82:  jmp    085c9d4b <+0x89>
085c9d46 +0x84:  mov    $0x1,%eax
085c9d4b +0x89:  leave
085c9d4c +0x8a:  ret
085c9d4d +0x8b:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9cc2

/* private_store::CPrivateStore::CheckValidItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem(CPrivateStore *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  Inven_Item local_4d [2];
  int local_4b;
  int local_46;
  CCargo *local_10;
  
  local_10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)(this + 0x2c));
  cVar1 = CCargo::IsOperatorable(local_10,param_1);
  if (cVar1 == '\x01') {
    CCargo::get_cargo_slot((int)local_4d);
    if (local_4b == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = Inven_Item::isEquipableItemType(local_4d);
      if ((cVar1 == '\x01') || (-1 < local_46 - param_2)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
