# process

`_ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetArea` | `0x081c951c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c951c  _ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c951c, 0x081c9655]
081c951c +0x000:  push   %ebp
081c951d +0x001:  mov    %esp,%ebp
081c951f +0x003:  push   %edi
081c9520 +0x004:  push   %esi
081c9521 +0x005:  push   %ebx
081c9522 +0x006:  sub    $0x5c,%esp
081c9525 +0x009:  mov    0x10(%ebp),%eax
081c9528 +0x00c:  mov    %eax,-0x20(%ebp)
081c952b +0x00f:  mov    0x14(%ebp),%eax
081c952e +0x012:  mov    %eax,-0x1c(%ebp)
081c9531 +0x015:  mov    0x14(%ebp),%eax
081c9534 +0x018:  mov    %eax,0xc(%esp)
081c9538 +0x01c:  mov    0x10(%ebp),%eax
081c953b +0x01f:  mov    %eax,0x8(%esp)
081c953f +0x023:  mov    0xc(%ebp),%eax
081c9542 +0x026:  mov    %eax,0x4(%esp)
081c9546 +0x02a:  mov    0x8(%ebp),%eax
081c9549 +0x02d:  mov    %eax,(%esp)
081c954c +0x030:  call   081c93e8 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_SetArea::check_error(CUser*, MSG_BASE&, ParamBase&)
081c9551 +0x035:  mov    %eax,%edx
081c9553 +0x037:  mov    -0x1c(%ebp),%eax
081c9556 +0x03a:  mov    %edx,0x4(%eax)
081c9559 +0x03d:  mov    -0x1c(%ebp),%eax
081c955c +0x040:  mov    0x4(%eax),%eax
081c955f +0x043:  test   %eax,%eax
081c9561 +0x045:  jle    081c956d <+0x51>
081c9563 +0x047:  mov    $0x0,%eax
081c9568 +0x04c:  jmp    081c964e <+0x132>
081c956d +0x051:  mov    -0x1c(%ebp),%eax
081c9570 +0x054:  mov    0x4(%eax),%eax
081c9573 +0x057:  test   %eax,%eax
081c9575 +0x059:  jns    081c95a9 <+0x8d>
081c9577 +0x05b:  mov    0xc(%ebp),%eax
081c957a +0x05e:  mov    %eax,(%esp)
081c957d +0x061:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c9582 +0x066:  mov    -0x1c(%ebp),%edx
081c9585 +0x069:  mov    0x4(%edx),%edx
081c9588 +0x06c:  mov    %eax,0xc(%esp)
081c958c +0x070:  mov    %edx,0x8(%esp)
081c9590 +0x074:  movl   $&_ZZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c9598 +0x07c:  movl   $0x1c6d,(%esp)
081c959f +0x083:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c95a4 +0x088:  jmp    081c964e <+0x132>
081c95a9 +0x08d:  mov    -0x20(%ebp),%eax
081c95ac +0x090:  movzwl 0x16(%eax),%eax
081c95b0 +0x094:  movzwl %ax,%esi
081c95b3 +0x097:  mov    -0x20(%ebp),%eax
081c95b6 +0x09a:  movzwl 0x14(%eax),%eax
081c95ba +0x09e:  movzwl %ax,%eax
081c95bd +0x0a1:  mov    %eax,-0x38(%ebp)
081c95c0 +0x0a4:  mov    -0x20(%ebp),%eax
081c95c3 +0x0a7:  movzbl 0x13(%eax),%eax
081c95c7 +0x0ab:  movsbl %al,%eax
081c95ca +0x0ae:  mov    %eax,-0x34(%ebp)
081c95cd +0x0b1:  mov    -0x20(%ebp),%eax
081c95d0 +0x0b4:  movzwl 0x11(%eax),%eax
081c95d4 +0x0b8:  movzwl %ax,%eax
081c95d7 +0x0bb:  mov    %eax,-0x30(%ebp)
081c95da +0x0be:  mov    -0x20(%ebp),%eax
081c95dd +0x0c1:  movzwl 0xf(%eax),%eax
081c95e1 +0x0c5:  movzwl %ax,%eax
081c95e4 +0x0c8:  mov    %eax,-0x2c(%ebp)
081c95e7 +0x0cb:  mov    -0x20(%ebp),%eax
081c95ea +0x0ce:  movzbl 0xe(%eax),%eax
081c95ee +0x0d2:  movsbl %al,%edi
081c95f1 +0x0d5:  mov    -0x20(%ebp),%eax
081c95f4 +0x0d8:  movzbl 0xd(%eax),%eax
081c95f8 +0x0dc:  movsbl %al,%ebx
081c95fb +0x0df:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9600 +0x0e4:  mov    %eax,%edx
081c9602 +0x0e6:  mov    %esi,0x28(%esp)
081c9606 +0x0ea:  mov    -0x38(%ebp),%eax
081c9609 +0x0ed:  mov    %eax,0x24(%esp)
081c960d +0x0f1:  movl   $0x0,0x20(%esp)
081c9615 +0x0f9:  movl   $0x1,0x1c(%esp)
081c961d +0x101:  mov    -0x34(%ebp),%eax
081c9620 +0x104:  mov    %eax,0x18(%esp)
081c9624 +0x108:  mov    -0x30(%ebp),%eax
081c9627 +0x10b:  mov    %eax,0x14(%esp)
081c962b +0x10f:  mov    -0x2c(%ebp),%eax
081c962e +0x112:  mov    %eax,0x10(%esp)
081c9632 +0x116:  mov    %edi,0xc(%esp)
081c9636 +0x11a:  mov    %ebx,0x8(%esp)
081c963a +0x11e:  mov    0xc(%ebp),%eax
081c963d +0x121:  mov    %eax,0x4(%esp)
081c9641 +0x125:  mov    %edx,(%esp)
081c9644 +0x128:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
081c9649 +0x12d:  mov    $0x0,%eax
081c964e +0x132:  add    $0x5c,%esp
081c9651 +0x135:  pop    %ebx
081c9652 +0x136:  pop    %esi
081c9653 +0x137:  pop    %edi
081c9654 +0x138:  pop    %ebp
081c9655 +0x139:  ret
```

## 反编译 C

```c
// DisPatcher_SetArea::process @ 0x81c951c

/* DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetArea::process
          (DisPatcher_SetArea *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  GameWorld *this_00;
  
  uVar8 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar8;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar9 = CUser::get_acc_id(param_1);
      uVar8 = LineFunc(0x1c6d,
                       "virtual int DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar9);
    }
    else {
      uVar4 = *(ushort *)(param_2 + 0x16);
      uVar5 = *(ushort *)(param_2 + 0x14);
      MVar1 = param_2[0x13];
      uVar6 = *(ushort *)(param_2 + 0x11);
      uVar7 = *(ushort *)(param_2 + 0xf);
      MVar2 = param_2[0xe];
      MVar3 = param_2[0xd];
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::move_area
                (this_00,param_1,(int)(char)MVar3,(int)(char)MVar2,(uint)uVar7,(uint)uVar6,
                 (int)(char)MVar1,true,0,(uint)uVar5,(uint)uVar4);
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
```
