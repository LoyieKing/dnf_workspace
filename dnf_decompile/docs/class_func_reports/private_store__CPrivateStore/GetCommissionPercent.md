# GetCommissionPercent

`_ZN13private_store13CPrivateStore20GetCommissionPercentEv`

`private_store::CPrivateStore::GetCommissionPercent()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c9b8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c9b8c  _ZN13private_store13CPrivateStore20GetCommissionPercentEv
#           private_store::CPrivateStore::GetCommissionPercent()
# range [0x085c9b8c, 0x085c9bb7]
085c9b8c +0x00:  push   %ebp
085c9b8d +0x01:  mov    %esp,%ebp
085c9b8f +0x03:  sub    $0x18,%esp
085c9b92 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c9b97 +0x0b:  mov    %eax,(%esp)
085c9b9a +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085c9b9f +0x13:  cmp    $0x3,%eax
085c9ba2 +0x16:  sete   %al
085c9ba5 +0x19:  test   %al,%al
085c9ba7 +0x1b:  je     085c9bb0 <+0x24>
085c9ba9 +0x1d:  mov    $0x3,%eax
085c9bae +0x22:  jmp    085c9bb5 <+0x29>
085c9bb0 +0x24:  mov    $0x4,%eax
085c9bb5 +0x29:  leave
085c9bb6 +0x2a:  ret
085c9bb7 +0x2b:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::GetCommissionPercent @ 0x85c9b8c

/* private_store::CPrivateStore::GetCommissionPercent() */

undefined4 private_store::CPrivateStore::GetCommissionPercent(void)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 == 3) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}
```
