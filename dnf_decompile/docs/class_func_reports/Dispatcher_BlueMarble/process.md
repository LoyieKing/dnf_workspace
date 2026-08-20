# process

`_ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarble` | `0x081e5fdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5fdc  _ZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e5fdc, 0x081e612b]
081e5fdc +0x000:  push   %ebp
081e5fdd +0x001:  mov    %esp,%ebp
081e5fdf +0x003:  sub    $0x28,%esp
081e5fe2 +0x006:  mov    0x14(%ebp),%eax
081e5fe5 +0x009:  mov    %eax,-0x14(%ebp)
081e5fe8 +0x00c:  mov    0x10(%ebp),%eax
081e5feb +0x00f:  mov    %eax,0x8(%esp)
081e5fef +0x013:  mov    0xc(%ebp),%eax
081e5ff2 +0x016:  mov    %eax,0x4(%esp)
081e5ff6 +0x01a:  mov    0x8(%ebp),%eax
081e5ff9 +0x01d:  mov    %eax,(%esp)
081e5ffc +0x020:  call   081e612c <_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_BlueMarble::check_error(CUser*, MSG_BASE&)
081e6001 +0x025:  mov    -0x14(%ebp),%edx
081e6004 +0x028:  mov    %eax,0x4(%edx)
081e6007 +0x02b:  mov    -0x14(%ebp),%eax
081e600a +0x02e:  mov    0x4(%eax),%eax
081e600d +0x031:  test   %eax,%eax
081e600f +0x033:  jle    081e601b <+0x3f>
081e6011 +0x035:  mov    $0x0,%eax
081e6016 +0x03a:  jmp    081e6129 <+0x14d>
081e601b +0x03f:  mov    -0x14(%ebp),%eax
081e601e +0x042:  mov    0x4(%eax),%eax
081e6021 +0x045:  test   %eax,%eax
081e6023 +0x047:  jns    081e6050 <+0x74>
081e6025 +0x049:  mov    -0x14(%ebp),%eax
081e6028 +0x04c:  mov    0x4(%eax),%eax
081e602b +0x04f:  movl   $0x0,0xc(%esp)
081e6033 +0x057:  mov    %eax,0x8(%esp)
081e6037 +0x05b:  movl   $&_ZZN21Dispatcher_BlueMarble7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e603f +0x063:  movl   $0x60a9,(%esp)
081e6046 +0x06a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e604b +0x06f:  jmp    081e6129 <+0x14d>
081e6050 +0x074:  mov    0x10(%ebp),%eax
081e6053 +0x077:  mov    %eax,-0x10(%ebp)
081e6056 +0x07a:  mov    0xc(%ebp),%eax
081e6059 +0x07d:  mov    %eax,(%esp)
081e605c +0x080:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
081e6061 +0x085:  mov    %eax,-0xc(%ebp)
081e6064 +0x088:  cmpl   $0x0,-0xc(%ebp)
081e6068 +0x08c:  je     081e6124 <+0x148>
081e606e +0x092:  mov    -0x10(%ebp),%eax
081e6071 +0x095:  movzbl 0xd(%eax),%eax
081e6075 +0x099:  movsbl %al,%eax
081e6078 +0x09c:  cmp    $0x7,%eax
081e607b +0x09f:  ja     081e6124 <+0x148>
081e6081 +0x0a5:  mov    &data#549eb4f7(.rodata)(,%eax,4),%eax
081e6088 +0x0ac:  jmp    *%eax
081e608a +0x0ae:  mov    -0xc(%ebp),%eax
081e608d +0x0b1:  mov    %eax,(%esp)
081e6090 +0x0b4:  call   080d92be <_ZN10BlueMarble15startBlueMarbleEv>  ; BlueMarble::startBlueMarble()
081e6095 +0x0b9:  jmp    081e6124 <+0x148>
081e609a +0x0be:  mov    0xc(%ebp),%eax
081e609d +0x0c1:  mov    %eax,0x4(%esp)
081e60a1 +0x0c5:  mov    -0xc(%ebp),%eax
081e60a4 +0x0c8:  mov    %eax,(%esp)
081e60a7 +0x0cb:  call   080d93d8 <_ZN10BlueMarble13userThrowDiceEP5CUser>  ; BlueMarble::userThrowDice(CUser*)
081e60ac +0x0d0:  jmp    081e6124 <+0x148>
081e60ae +0x0d2:  mov    0xc(%ebp),%eax
081e60b1 +0x0d5:  mov    %eax,0x4(%esp)
081e60b5 +0x0d9:  mov    -0xc(%ebp),%eax
081e60b8 +0x0dc:  mov    %eax,(%esp)
081e60bb +0x0df:  call   080d94f6 <_ZN10BlueMarble12enterDungeonEP5CUser>  ; BlueMarble::enterDungeon(CUser*)
081e60c0 +0x0e4:  jmp    081e6124 <+0x148>
081e60c2 +0x0e6:  mov    0xc(%ebp),%eax
081e60c5 +0x0e9:  mov    %eax,0x4(%esp)
081e60c9 +0x0ed:  mov    -0xc(%ebp),%eax
081e60cc +0x0f0:  mov    %eax,(%esp)
081e60cf +0x0f3:  call   080d9572 <_ZN10BlueMarble13giveupDungeonEP5CUser>  ; BlueMarble::giveupDungeon(CUser*)
081e60d4 +0x0f8:  jmp    081e6124 <+0x148>
081e60d6 +0x0fa:  mov    0xc(%ebp),%eax
081e60d9 +0x0fd:  mov    %eax,0x4(%esp)
081e60dd +0x101:  mov    -0xc(%ebp),%eax
081e60e0 +0x104:  mov    %eax,(%esp)
081e60e3 +0x107:  call   080d96f4 <_ZN10BlueMarble12clearDungeonEP5CUser>  ; BlueMarble::clearDungeon(CUser*)
081e60e8 +0x10c:  jmp    081e6124 <+0x148>
081e60ea +0x10e:  mov    0xc(%ebp),%eax
081e60ed +0x111:  mov    %eax,0x4(%esp)
081e60f1 +0x115:  mov    -0xc(%ebp),%eax
081e60f4 +0x118:  mov    %eax,(%esp)
081e60f7 +0x11b:  call   080d978c <_ZN10BlueMarble11exitDungeonEP5CUser>  ; BlueMarble::exitDungeon(CUser*)
081e60fc +0x120:  jmp    081e6124 <+0x148>
081e60fe +0x122:  mov    0xc(%ebp),%eax
081e6101 +0x125:  mov    %eax,0x4(%esp)
081e6105 +0x129:  mov    -0xc(%ebp),%eax
081e6108 +0x12c:  mov    %eax,(%esp)
081e610b +0x12f:  call   080d9136 <_ZN10BlueMarble9leaveUserEP5CUser>  ; BlueMarble::leaveUser(CUser*)
081e6110 +0x134:  jmp    081e6124 <+0x148>
081e6112 +0x136:  mov    0xc(%ebp),%eax
081e6115 +0x139:  mov    %eax,0x4(%esp)
081e6119 +0x13d:  mov    -0xc(%ebp),%eax
081e611c +0x140:  mov    %eax,(%esp)
081e611f +0x143:  call   080d9808 <_ZN10BlueMarble13giveBonusItemEP5CUser>  ; BlueMarble::giveBonusItem(CUser*)
081e6124 +0x148:  mov    $0x0,%eax
081e6129 +0x14d:  leave
081e612a +0x14e:  ret
081e612b +0x14f:  nop
```

## 反编译 C

```c
// Dispatcher_BlueMarble::process @ 0x81e5fdc

/* Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BlueMarble::process
          (Dispatcher_BlueMarble *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  BlueMarble *this_00;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x60a9,
                       "virtual int Dispatcher_BlueMarble::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (BlueMarble *)CUser::getBlueMarble(param_1);
      if (this_00 != (BlueMarble *)0x0) {
        switch(param_2[0xd]) {
        case (MSG_BASE)0x0:
          BlueMarble::startBlueMarble(this_00);
          break;
        case (MSG_BASE)0x1:
          BlueMarble::userThrowDice(this_00,param_1);
          break;
        case (MSG_BASE)0x2:
          BlueMarble::enterDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x3:
          BlueMarble::giveupDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x4:
          BlueMarble::clearDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x5:
          BlueMarble::exitDungeon(this_00,param_1);
          break;
        case (MSG_BASE)0x6:
          BlueMarble::leaveUser(this_00,param_1);
          break;
        case (MSG_BASE)0x7:
          BlueMarble::giveBonusItem(this_00,param_1);
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
