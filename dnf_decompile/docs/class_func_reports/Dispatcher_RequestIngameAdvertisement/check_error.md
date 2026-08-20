# check_error

`_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RequestIngameAdvertisement::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestIngameAdvertisement` | `0x081e4662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4662  _ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RequestIngameAdvertisement::check_error(CUser*, MSG_BASE&)
# range [0x081e4662, 0x081e46c7]
081e4662 +0x00:  push   %ebp
081e4663 +0x01:  mov    %esp,%ebp
081e4665 +0x03:  sub    $0x28,%esp
081e4668 +0x06:  cmpl   $0x0,0xc(%ebp)
081e466c +0x0a:  jne    081e4675 <+0x13>
081e466e +0x0c:  mov    $0xffffffff,%eax
081e4673 +0x11:  jmp    081e46c5 <+0x63>
081e4675 +0x13:  mov    0xc(%ebp),%eax
081e4678 +0x16:  mov    %eax,(%esp)
081e467b +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e4680 +0x1e:  cmp    $0x1,%eax
081e4683 +0x21:  setle  %al
081e4686 +0x24:  test   %al,%al
081e4688 +0x26:  je     081e4691 <+0x2f>
081e468a +0x28:  mov    $0x7fffffff,%eax
081e468f +0x2d:  jmp    081e46c5 <+0x63>
081e4691 +0x2f:  mov    0x10(%ebp),%eax
081e4694 +0x32:  mov    %eax,-0xc(%ebp)
081e4697 +0x35:  mov    -0xc(%ebp),%eax
081e469a +0x38:  movzwl 0xd(%eax),%eax
081e469e +0x3c:  cmp    $0x6,%ax
081e46a2 +0x40:  jne    081e46c0 <+0x5e>
081e46a4 +0x42:  mov    0xc(%ebp),%eax
081e46a7 +0x45:  mov    %eax,(%esp)
081e46aa +0x48:  call   0822fcf2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x539c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x539c
081e46af +0x4d:  cmp    $0x2,%eax
081e46b2 +0x50:  setle  %al
081e46b5 +0x53:  test   %al,%al
081e46b7 +0x55:  je     081e46c0 <+0x5e>
081e46b9 +0x57:  mov    $0xfffffffe,%eax
081e46be +0x5c:  jmp    081e46c5 <+0x63>
081e46c0 +0x5e:  mov    $0x0,%eax
081e46c5 +0x63:  leave
081e46c6 +0x64:  ret
081e46c7 +0x65:  nop
```

## 反编译 C

```c
// Dispatcher_RequestIngameAdvertisement::check_error @ 0x81e4662

/* Dispatcher_RequestIngameAdvertisement::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::check_error
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 2) {
      uVar1 = 0x7fffffff;
    }
    else {
      if ((*(short *)(param_2 + 0xd) == 6) &&
         (iVar2 = CUser::get_multiboxLotteryItemFailCnt(param_1), iVar2 < 3)) {
        return 0xfffffffe;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
