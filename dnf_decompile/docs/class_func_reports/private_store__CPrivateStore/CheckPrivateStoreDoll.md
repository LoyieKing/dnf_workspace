# CheckPrivateStoreDoll

`_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt`

`private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c532c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c532c  _ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt
#           private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short)
# range [0x085c532c, 0x085c53e9]
085c532c +0x00:  push   %ebp
085c532d +0x01:  mov    %esp,%ebp
085c532f +0x03:  push   %ebx
085c5330 +0x04:  sub    $0x74,%esp
085c5333 +0x07:  mov    0xc(%ebp),%eax
085c5336 +0x0a:  mov    %ax,-0x5c(%ebp)
085c533a +0x0e:  mov    0x8(%ebp),%eax
085c533d +0x11:  mov    0x2c(%eax),%eax
085c5340 +0x14:  test   %eax,%eax
085c5342 +0x16:  jne    085c534e <+0x22>
085c5344 +0x18:  mov    $0x3a,%eax
085c5349 +0x1d:  jmp    085c53e5 <+0xb9>
085c534e +0x22:  movzwl -0x5c(%ebp),%ebx
085c5352 +0x26:  mov    0x8(%ebp),%eax
085c5355 +0x29:  mov    0x2c(%eax),%eax
085c5358 +0x2c:  mov    %eax,(%esp)
085c535b +0x2f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c5360 +0x34:  lea    -0x49(%ebp),%edx
085c5363 +0x37:  mov    %ebx,0xc(%esp)
085c5367 +0x3b:  movl   $0x1,0x8(%esp)
085c536f +0x43:  mov    %eax,0x4(%esp)
085c5373 +0x47:  mov    %edx,(%esp)
085c5376 +0x4a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085c537b +0x4f:  sub    $0x4,%esp
085c537e +0x52:  mov    -0x47(%ebp),%eax
085c5381 +0x55:  mov    %eax,%ebx
085c5383 +0x57:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c5388 +0x5c:  mov    %ebx,0x4(%esp)
085c538c +0x60:  mov    %eax,(%esp)
085c538f +0x63:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c5394 +0x68:  mov    %eax,-0xc(%ebp)
085c5397 +0x6b:  cmpl   $0x0,-0xc(%ebp)
085c539b +0x6f:  jne    085c53a4 <+0x78>
085c539d +0x71:  mov    $0x16,%eax
085c53a2 +0x76:  jmp    085c53e5 <+0xb9>
085c53a4 +0x78:  mov    -0xc(%ebp),%eax
085c53a7 +0x7b:  mov    %eax,(%esp)
085c53aa +0x7e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c53af +0x83:  xor    $0x1,%eax
085c53b2 +0x86:  test   %al,%al
085c53b4 +0x88:  je     085c53bd <+0x91>
085c53b6 +0x8a:  mov    $0x16,%eax
085c53bb +0x8f:  jmp    085c53e5 <+0xb9>
085c53bd +0x91:  mov    -0xc(%ebp),%eax
085c53c0 +0x94:  mov    0x32c(%eax),%eax
085c53c6 +0x9a:  cmp    $0xffffffff,%eax
085c53c9 +0x9d:  jne    085c53d2 <+0xa6>
085c53cb +0x9f:  mov    $0x16,%eax
085c53d0 +0xa4:  jmp    085c53e5 <+0xb9>
085c53d2 +0xa6:  mov    -0x42(%ebp),%eax
085c53d5 +0xa9:  test   %eax,%eax
085c53d7 +0xab:  jg     085c53e0 <+0xb4>
085c53d9 +0xad:  mov    $0x16,%eax
085c53de +0xb2:  jmp    085c53e5 <+0xb9>
085c53e0 +0xb4:  mov    $0x0,%eax
085c53e5 +0xb9:  mov    -0x4(%ebp),%ebx
085c53e8 +0xbc:  leave
085c53e9 +0xbd:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::CheckPrivateStoreDoll @ 0x85c532c

/* private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short) */

undefined4 private_store::CPrivateStore::CheckPrivateStoreDoll(ushort param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this;
  undefined2 in_stack_00000006;
  undefined1 local_4d [2];
  int local_4b;
  int local_46;
  CItem *local_10;
  
  if (*(int *)(_param_1 + 0x2c) == 0) {
    uVar2 = 0x3a;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(_param_1 + 0x2c));
    CInventory::GetInvenSlot((int)local_4d,iVar3);
    this = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(this,local_4b);
    if (local_10 == (CItem *)0x0) {
      uVar2 = 0x16;
    }
    else {
      cVar1 = CItem::is_stackable(local_10);
      if (cVar1 == '\x01') {
        if (*(int *)(local_10 + 0x32c) == -1) {
          uVar2 = 0x16;
        }
        else if (local_46 < 1) {
          uVar2 = 0x16;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0x16;
      }
    }
  }
  return uVar2;
}
```
